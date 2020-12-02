#include <stdlib.h>
#include <stdio.h>
#include "code.h"
#include "instruction.h"
#include "tables.h"

// ----------------------------------------------------------------------------
// Tables ---------------------------------------------------------------------

extern StrTable *st;
extern VarTable *vt;

// ----------------------------------------------------------------------------
// Code memory ----------------------------------------------------------------

Instr code[INSTR_MEM_SIZE];
int next_instr;

// ----------------------------------------------------------------------------
// Emits ----------------------------------------------------------------------

void emit(OpCode op, int o1, int o2, int o3) {
    code[next_instr].op = op;
    code[next_instr].o1 = o1;
    code[next_instr].o2 = o2;
    code[next_instr].o3 = o3;
    next_instr++;
}

#define emit0(op) \
    emit(op, 0, 0, 0)

#define emit1(op, o1) \
    emit(op, o1, 0, 0)

#define emit2(op, o1, o2) \
    emit(op, o1, o2, 0)

#define emit3(op, o1, o2, o3) \
    emit(op, o1, o2, o3)

void backpatch_jump(int instr_addr, int jump_addr) {
    code[instr_addr].o1 = jump_addr;
}

void backpatch_branch(int instr_addr, int offset) {
    code[instr_addr].o2 = offset;
}

// ----------------------------------------------------------------------------
// Prints ---------------------------------------------------------------------

#define LINE_SIZE 80
#define MAX_STR_SIZE 128

void get_instruction_string(Instr instr, char *s) {
    OpCode op = instr.op;
    s += sprintf(s, "%s", OpStr[op]);
    int op_count = OpCount[op];
    if (op_count == 1) {
        sprintf(s, " $%d", instr.o1);
    } else if (op_count == 2) {
        sprintf(s, " $%d, $%d", instr.o1, instr.o2);
    } else if (op_count == 3) {
        sprintf(s, " $%d, $%d, $%d", instr.o1, instr.o2, instr.o3);
    }
}

void write_instruction(int addr) {
    Instr instr = code[addr];
    char instr_str[LINE_SIZE];
    get_instruction_string(instr, instr_str);
    printf("%s\n", instr_str);
}

void dump_program() {
    for (int addr = 0; addr < next_instr; addr++) {
        write_instruction(addr);
    }
}

void dump_str_table() {
    int table_size = get_str_table_size(st);
    for (int i = 0; i < table_size; i++) {
        printf("SSTR %s\n", get_string(st, i));
    }
}

// ----------------------------------------------------------------------------
// AST Traversal --------------------------------------------------------------

int int_regs_count;
int float_regs_count;

#define new_int_reg() \
    int_regs_count++

#define new_float_reg() \
    float_regs_count++

int rec_emit_code(AST *ast);

// ----------------------------------------------------------------------------

int emit_program(AST *ast) {
    rec_emit_code(get_child(ast, 0)); // block
    return -1;  // This is not an expression, hence no value to return.
}

int emit_block(AST *ast) {
    int size = get_child_count(ast);
    for (int i = 0; i < size; i++) {
        rec_emit_code(get_child(ast, i));
    }
    return -1; // This is not an expression, hence no value to return.
}

int emit_assign(AST *ast) {
    AST *r = get_child(ast, 1);
    int x = rec_emit_code(r);
    // int addr = get_data(get_child(ast, 0));
    // sw $1,CONST($2) = Memory[$2 + CONST] = $1
    emit2(addi, , x);
    // Type var_type = get_type(vt, addr);
    // if (var_type == REAL_TYPE) {
    //     emit2(STWf, addr, x);
    // } else { // All other types, include ints, bools and strs.
    //     emit2(STWi, addr, x);
    // }
    return -1; // This is not an expression, hence no value to return.
}

int emit_int_val(AST *ast) {
    int x = new_int_reg();
    int c = get_data(ast);
    emit2(LDIi, x, c);
    return x;
}

int emit_plus(AST *ast) {
    int x;
    int y = rec_emit_code(get_child(ast, 0));
    int z = rec_emit_code(get_child(ast, 1));
    if (get_node_type(ast) == REAL_TYPE) {
        x = new_float_reg();
        emit3(ADDf, x, y, z);
    } else if (get_node_type(ast) == INT_TYPE) {
        x = new_int_reg();
        emit3(ADDi, x, y, z);
    } else if (get_node_type(ast) == BOOL_TYPE) {
        x = new_int_reg();
        emit3(OROR, x, y, z);
    } else { // Must be STR_TYPE
        x = new_int_reg();
        emit3(CATs, x, y, z);
    }
    return x;
}

int emit_read(AST *ast) {
    AST *var = get_child(ast, 0);
    Type var_type = get_node_type(var);
    int addr = get_data(var);
    int x;
    if (var_type == INT_TYPE) {
        x = new_int_reg();
        emit2(CALL, 0, x);
        emit2(STWi, addr, x);
    } else if (var_type == REAL_TYPE) {
        x = new_float_reg();
        emit2(CALL, 1, x);
        emit2(STWf, addr, x);
    } else if (var_type == BOOL_TYPE) {
        x = new_int_reg();
        emit2(CALL, 2, x);
        emit2(STWi, addr, x);
    } else { // Must be STR_TYPE
        x = new_int_reg();
        emit2(CALL, 3, x);
        emit2(STWi, addr, x);
    }
    return -1;  // This is not an expression, hence no value to return.
}

int emit_var_use(AST *ast) {
    int addr = get_data(ast);
    int x;
    if (get_node_type(ast) == REAL_TYPE) {
        x = new_float_reg();
        emit2(LDWf, x, addr);
    } else {
        x = new_int_reg();
        emit2(LDWi, x, addr);
    }
    return x;
}


// ----------------------------------------------------------------------------

int rec_emit_code(AST *ast) {
    switch(get_kind(ast)) {
        case ASSIGN_NODE:   return emit_assign(ast);
        case INT_VAL_NODE:  return emit_int_val(ast);
        case PLUS_NODE:     return emit_plus(ast);
        case PROGRAM_NODE:  return emit_program(ast);
        case READ_NODE:     return emit_read(ast);
        case VAR_DECL_NODE: return emit_var_decl(ast);
        case VAR_LIST_NODE: return emit_var_list(ast);
        case VAR_USE_NODE:  return emit_var_use(ast);
        case WRITE_NODE:    return emit_write(ast);

        default:
            fprintf(stderr, "Invalid kind: %s!\n", kind2str(get_kind(ast)));
            exit(EXIT_FAILURE);
    }
}

// ----------------------------------------------------------------------------

void emit_code(AST *ast) {
    next_instr = 0;
    int_regs_count = 0;
    float_regs_count = 0;
    dump_str_table();
    rec_emit_code(ast);
    emit0(HALT);
    dump_program();
}

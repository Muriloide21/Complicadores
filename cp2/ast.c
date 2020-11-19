
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "tables.h"
#include "types.h"

#define CHILDREN_LIMIT 20 // Don't try this at home, kids... :P

struct node {
    NodeKind kind;
    // union {
    //     int   as_int;
    //     float as_float;
    //     char* as_string;
    // } data;
    char* data;
    Type type;
    int count;
    char* name;
    AST* child[CHILDREN_LIMIT];
};

void set_kind_node(AST* node, NodeKind kind){
    node->kind = kind;
}

void set_name_node(AST* node, char* name){
    node->name = malloc(strlen(name)+1);
    node->name = name;
}

char* get_name_node(AST* node){
    //Pode retornar string assim?
    return node->name;
}

NodeKind get_kind_node(AST* node){
    return node->kind;
}

int get_node_count(AST* node){
    return node->count;
}

AST* get_node_child(AST* node, int index){
    return node->child[index];
}

//Como?
//Parece que o nome não ta salvando msm
AST* new_node(NodeKind kind, int data, Type type) {
    AST* node = malloc(sizeof * node);
    node->kind = kind;
    //node->data.as_int = data;
    node->type = type;
    node->count = 0;
    for (int i = 0; i < CHILDREN_LIMIT; i++) {
        node->child[i] = NULL;
    }
    return node;
}

void add_child(AST *parent, AST *child) {
    if (parent->count == CHILDREN_LIMIT) {
        fprintf(stderr, "Cannot add another child!\n");
        exit(1);
    }
    parent->child[parent->count] = child;
    parent->count++;
}

AST* get_child(AST *parent, int idx) {
    return parent->child[idx];
}

AST* new_subtree(NodeKind kind, Type type, int child_count, ...) {
    if (child_count > CHILDREN_LIMIT) {
        fprintf(stderr, "Too many children as arguments!\n");
        exit(1);
    }

    AST* node = new_node(kind, 0, type);
    va_list ap;
    va_start(ap, child_count);
    for (int i = 0; i < child_count; i++) {
        add_child(node, va_arg(ap, AST*));
    }
    va_end(ap);
    return node;
}

NodeKind get_kind(AST *node) {
    return node->kind;
}

char* get_data(AST *node) {
    return node->data;
}

void set_node_string_data(AST *node, char* data) {
    if(data != NULL) {
        node->data = data;
    }else{
        node->data = NULL;
    }
}

void set_node_data(AST *node, char* data) {
    if(data != NULL) {
        node->data = malloc(strlen(data) + 1);
        strcpy(node->data,data);
    }else{
        node->data = NULL;
    }
}

// float get_float_data(AST *node) {
//     return node->data.as_float;
// }

Type get_node_type(AST *node) {
    return node->type;
}

int get_child_count(AST *node) {
    return node->count;
}

void free_tree(AST *tree) {
    if (tree == NULL) return;
    for (int i = 0; i < tree->count; i++) {
        free_tree(tree->child[i]);
    }
    free(tree);
}

// Dot output.

int nr;

extern VarTable *vt;

char* kind2str(NodeKind kind) {
    switch(kind) {
        case PROGRAM_NODE:   return "Program";
        case BLOCK_NODE:    return "block";
        case DEL_NODE:      return "del";
        case PASS_NODE:     return "pass";
        case BREAK_NODE:    return "break";
        case CONTINUE_NODE: return "continue";
        case RETURN_NODE:   return "return";
        case NOOP_NODE:     return "NOOP";
        case OR_NODE:       return "OR";
        case AND_NODE:      return "AND";
        case ASSIGN_NODE:   return "=";
        case LESS_NODE:     return "<";
        case GREATER_NODE:  return ">";
        case EQEQ_NODE:     return "==";
        case GREATEREQUAL_NODE: return ">=";
        case LESSEQUAL_NODE:    return "<=";
        case NOTEQUAL_NODE:     return "!=";
        case IN_NODE:       return "IN_NODE";
        case NOTIN_NODE:       return "NOTIN_NODE";
        case IS_NODE:       return "IS_NODE";
        case ISNOT_NODE:       return "ISNOT_NODE";
        case BIT_OR_NODE:       return "BIT_OR_NODE";
        case BIT_XOR_NODE:       return "BIT_XOR_NODE";
        case BIT_AND_NODE:       return "BIT_AND_NODE";
        case PLUS_NODE:       return "+";
        case MINUS_NODE:       return "-";
        case LEFTSHIFT_NODE:       return "<<";
        case RIGHTSHIFT_NODE:       return ">>";
        case MULTIPLY_NODE:       return "*";
        case MATRIXMULTIPLY_NODE:       return "@";
        case DIVISION_NODE:       return "/";
        case MOD_NODE:       return "%";
        case INTEGERDIVISION_NODE:       return "//";
        case TILDE_NODE:       return "~";
        case POWER_NODE:       return "**";
        case ATOM_EXPR_NODE:       return "ATOM_EXPR";
        case TRAILER_NODE:       return "TRAILER_NODE";
        case NAME_NODE:       return "NAME";
        case NUMBER_NODE:       return "NUMBER";
        case BOOL_VAL_NODE:       return "BOOL_VAL";
        case NONE_NODE:       return "NONE";
        case ELLIPSIS_NODE:       return "ELLIPSIS";
        case NOT_NODE:       return "NOT";
        case STRING_NODE:   return "STRING";
        case TUPLE_NODE: return "TUPLE";
        case LIST_NODE: return "LIST";
        case DICT_NODE: return "DICT";
        case ARGLIST_NODE: return "ARGLIST";
        case PARS_NODE: return "PARS";
        case TESTLIST_NODE: return "TESTLIST";   
        case IF_NODE: return "IF";
        case ELIF_NODE: return "ELIF";
        case ELSE_NODE: return "ELSE";
        case WHILE_NODE: return "WHILE"; 
        case FOR_NODE: return "FOR";
        case EXPRLIST_NODE: return "EXPRLIST";
        case FUNCDEF_NODE: return "FUNCDEF";
        case FUNCNAME_NODE: return "funcname";
        case FUNC_BUILTIN_NODE: return "funcBuiltIn";

        default:            return "ERROR!!";
    }
}

// int has_data(NodeKind kind) {
//     switch(kind) {
//         case BOOL_VAL_NODE:
//         case INT_VAL_NODE:
//         case REAL_VAL_NODE:
//         case STR_VAL_NODE:
//         case VAR_DECL_NODE:
//         case VAR_USE_NODE:
//             return 1;
//         default:
//             return 0;
//     }
// }

int print_node_dot(AST *node) {
    int my_nr = nr++;

    fprintf(stderr, "node%d[label=\"", my_nr);
    // if (node->type != NO_TYPE) {
    //     fprintf(stderr, "(%s) ", get_text(node->type));
    // }
    // if (node->kind == VAR_DECL_NODE || node->kind == VAR_USE_NODE) {
    //     printf("entrou no if");
    //     fprintf(stderr, "%s@", get_name(vt, node->data.as_int));
    // } else {
        // fprintf("Kind: %d\n", node->kind);
        fprintf(stderr, "%s", kind2str(node->kind));
        if (node->kind == NUMBER_NODE || node->kind == STRING_NODE){
            fprintf(stderr, ": %s", get_data(node));
        }
        if (node->kind == NAME_NODE || node->kind == FUNCDEF_NODE || node->kind == FUNC_BUILTIN_NODE){
            fprintf(stderr, ": %s", get_name_node(node));
        }
    // }
    // if (has_data(node->kind)) {
    //     if (node->kind == REAL_VAL_NODE) {
    //         fprintf(stderr, "%.2f", node->data.as_float);
    //     } else if (node->kind == STR_VAL_NODE) {
    //         fprintf(stderr, "@%d", node->data.as_int);
    //     } else {
    //         fprintf(stderr, "%d", node->data.as_int);
    //     }
    // }
    fprintf(stderr, "\"];\n");

    for (int i = 0; i < node->count; i++) {
        int child_nr = print_node_dot(node->child[i]);
        fprintf(stderr, "node%d -> node%d;\n", my_nr, child_nr);
    }
    return my_nr;
}

void print_dot(AST *tree) {
    nr = 0;
    fprintf(stderr, "digraph {\ngraph [ordering=\"out\"];\n");
    print_node_dot(tree);
    fprintf(stderr, "}\n");
}

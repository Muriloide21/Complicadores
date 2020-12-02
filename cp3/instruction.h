
#ifndef INSTRUCTION_H
#define INSTRUCTION_H

// Basic arch: 32 int registers and 32 float registers.
#define INT_REGS_COUNT   32     // i0 to i31: int registers.
#define FLOAT_REGS_COUNT 32     // f0 to f31: float registers.
// The machine also has a dedicated program counter (PC) register.

// Memory is split between data and instruction memory.
// This is called the Harvard architecture, in contrast to the von Neumann
// (stored program) architecture.
#define INSTR_MEM_SIZE  1024    // instr_mem[]
#define DATA_MEM_SIZE   1024    // data_mem[]
// The machine also has a string table str_tab[] for storing strings with
// the command SSTR. Maximum size for each string is 128 chars.

// Opcodes.
typedef enum {
    // Memory ops
    LW,            // LW    rt, offset      ; rt = *(int*)(offset+rs)
    SW,            // SW    rt, offset      ; *(int*)(offset+rs) = rt

    // Arith ops
    add,           // add   rd, rs, rt      ; rd = rs + rt
    addi,          // addi  rt, rs, imm     ; rt = rs + imm
    addu,          // addu  rd, rs, rt      ; rd = rs + rt
    addiu,         // addiu rt, rs, imm     ; rt = rs + imm


} OpCode;

// String representations of opcodes.
static char* OpStr[] = {
    "HALT", "NOOP",
    "add", "addi", "addu", "addiu"
};

// Number of arguments for each opcode.
static int OpCount[] = {
    0,  // HALT
    0,  // NOOP
    3,  // ADDi
    3,  // ADDf
    3,  // SUBi
    3,  // SUBf
    3,  // MULi
    3,  // MULf
    3,  // DIVi
    3,  // DIVf
    2,  // WIDf
    3,  // OROR
    3,  // EQUi
    3,  // EQUf
    3,  // EQUs
    3,  // LTHi
    3,  // LTHf
    3,  // LTHs
    1,  // JUMP
    2,  // BOTb
    2,  // BOFb
    2,  // LDWi
    2,  // LDWf
    2,  // LDIi
    2,  // LDIf
    2,  // STWi
    2,  // STWf
    1,  // SSTR
    3,  // CATs
    2,  // B2Ss
    2,  // I2Ss
    2,  // R2Ss
    2,  // CALL
};

// Instruction quadruple.
typedef struct {
    OpCode op;
    int o1;     // Operands, which can be int or float registers,
    int o2;     // int addresses or offsets, or
    int o3;     // integer or float constants (must be in an integer repr.)
} Instr;

#endif

#ifndef AST_H
#define AST_H

#include "types.h"

typedef enum {
    PROGRAM_NODE,
    BLOCK_NODE,
    DEL_NODE,
    PASS_NODE,
    BREAK_NODE,
    CONTINUE_NODE,
    RETURN_NODE,
    NOOP_NODE,
    OR_NODE,
    AND_NODE,
    ASSIGN_NODE,
    LESS_NODE,
    GREATER_NODE,
    EQEQ_NODE,
    GREATEREQUAL_NODE,
    LESSEQUAL_NODE,
    NOTEQUAL_NODE,
    IN_NODE,
    NOTIN_NODE,
    IS_NODE,
    ISNOT_NODE,
    BIT_OR_NODE,
    BIT_XOR_NODE,
    BIT_AND_NODE,
    PLUS_NODE,
    MINUS_NODE,
    LEFTSHIFT_NODE,
    RIGHTSHIFT_NODE,
    MULTIPLY_NODE,
    MATRIXMULTIPLY_NODE,
    DIVISION_NODE,
    MOD_NODE,
    INTEGERDIVISION_NODE,
    TILDE_NODE,
    POWER_NODE,
    ATOM_EXPR_NODE,
    TRAILER_NODE,
    NAME_NODE,
    NUMBER_NODE,
    BOOL_VAL_NODE,
    NONE_NODE,
    ELLIPSIS_NODE,
    NOT_NODE,
    STRING_NODE,
    TUPLE_NODE,
    LIST_NODE,
    DICT_NODE,
    ARGLIST_NODE,
    PARS_NODE,
    TEST_LIST_NODE



} NodeKind;

struct node; // Opaque structure to ensure encapsulation.

typedef struct node AST;

AST* new_node(NodeKind kind, int data, Type type);

void add_child(AST *parent, AST *child);
AST* get_child(AST *parent, int idx);

AST* new_subtree(NodeKind kind, Type type, int child_count, ...);

NodeKind get_kind(AST *node);
char* kind2str(NodeKind kind);

int get_data(AST *node);
void set_float_data(AST *node, float data);
float get_float_data(AST *node);

Type get_node_type(AST *node);
int get_child_count(AST *node);

void print_tree(AST *ast);
void print_dot(AST *ast);

void free_tree(AST *ast);

#endif

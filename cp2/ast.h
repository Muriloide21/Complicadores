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

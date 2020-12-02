
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "tables.h"


// Strings Table
// ----------------------------------------------------------------------------

#define STRING_MAX_SIZE 128
#define STRINGS_TABLE_MAX_SIZE 100

struct str_table {
    char t[STRINGS_TABLE_MAX_SIZE][STRING_MAX_SIZE];
    int size;
};

StrTable* create_str_table() {
    StrTable *st = malloc(sizeof * st);
    st->size = 0;
    return st;
}

int get_size_st(StrTable* st){
    if(st == NULL) return -1;
    return st->size;
}

int add_string(StrTable* st, char* s) {
    assert(st);
    assert(s);
    // printf("%d", st->size);
    for (int i = 0; i < get_size_st(st); i++) {
        if (strcmp(st->t[i], s) == 0) {
            return i;
        }
    }
    strcpy(st->t[st->size], s);
    int idx_added = st->size;
    st->size++;
    return idx_added;
}

char* get_string(StrTable* st, int i) {
    return st->t[i];
}

void print_str_table(StrTable* st) {
    printf("Strings table:\n");
    for (int i = 0; i < st->size; i++) {
        printf("Entry %d -- %s\n", i, get_string(st, i));
    }
}

void free_str_table(StrTable* st) {
    free(st);
}

// Variables Table
// ----------------------------------------------------------------------------

#define VARIABLE_MAX_SIZE 128
#define VARIABLES_TABLE_MAX_SIZE 100
#define FUNC_MAX_ARGS 10


typedef struct {
  char name[VARIABLE_MAX_SIZE];
  int line;
  Type type;
  //para funcoes:
  int func;
  int n_args;
  int args[FUNC_MAX_ARGS];
} Entry;

struct var_table {
    Entry t[VARIABLES_TABLE_MAX_SIZE];
    int size;
};

VarTable* create_var_table() {
    VarTable *vt = malloc(sizeof * vt);
    vt->size = 0;
    return vt;
}

int lookup_var(VarTable* vt, char* s) {
    for (int i = 0; i < vt->size; i++) {
        if (strcmp(vt->t[i].name, s) == 0)  {
            return i;
        }
    }
    return -1;
}

int add_var(VarTable* vt, char* s, int line, Type type, int func, int n_args) {
    strcpy(vt->t[vt->size].name, s);
    vt->t[vt->size].line = line;
    vt->t[vt->size].type = type;

    // para funcoes:
    vt->t[vt->size].func = func;
    vt->t[vt->size].n_args = n_args;

    int idx_added = vt->size;
    vt->size++;
    return idx_added;
}

int get_n_args(VarTable* vt, int i){
    return vt->t[i].n_args;
}

char* get_name(VarTable* vt, int i) {
    return vt->t[i].name;
}

int get_line(VarTable* vt, int i) {
    return vt->t[i].line;
}

Type get_type(VarTable* vt, int i) {
    return vt->t[i].type;
}

int get_func_bool(VarTable* vt, int i) {
    return vt->t[i].func;
}

void print_var_table(VarTable* vt) {
    printf("Variables table:\n");
    for (int i = 0; i < vt->size; i++) {
         printf("Entry %d -- name: %s, line: %d, type: %s, func: %d, n_args: %d\n", i,
                get_name(vt, i), get_line(vt, i), get_text(get_type(vt, i)), vt->t[i].func, vt->t[i].n_args);
    }
}

void free_var_table(VarTable* vt) {
    free(vt);
}
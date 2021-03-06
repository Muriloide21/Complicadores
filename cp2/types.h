
#ifndef TYPES_H
#define TYPES_H

typedef enum {
    INT_TYPE,
    REAL_TYPE,
    BOOL_TYPE,
    STR_TYPE,
    LIST_TYPE,
    NO_TYPE, // Used when we need to pass a non-existing type to a function.
} Type;

const char* get_text(Type type);

#endif // TYPES_H

/* A Bison parser, made by GNU Bison 3.7.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "tables.h"
#include "ast.h"
#include "parser.h"

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

void check_var(char*);
void new_var(void);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

extern char *yytext;
extern int yylineno;
extern mdl names_list;

int position = 0;

StrTable *st;
VarTable *vt;

AST *root;

#line 104 "parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ENDMARKER = 3,                  /* ENDMARKER  */
  YYSYMBOL_AND = 4,                        /* AND  */
  YYSYMBOL_AMPER = 5,                      /* AMPER  */
  YYSYMBOL_AMPEREQUAL = 6,                 /* AMPEREQUAL  */
  YYSYMBOL_ARROW = 7,                      /* ARROW  */
  YYSYMBOL_AS = 8,                         /* AS  */
  YYSYMBOL_ASSERT = 9,                     /* ASSERT  */
  YYSYMBOL_EQUAL = 10,                     /* EQUAL  */
  YYSYMBOL_ASYNC = 11,                     /* ASYNC  */
  YYSYMBOL_AT = 12,                        /* AT  */
  YYSYMBOL_ATEQUAL = 13,                   /* ATEQUAL  */
  YYSYMBOL_AWAIT = 14,                     /* AWAIT  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_CLASS = 16,                     /* CLASS  */
  YYSYMBOL_COLON = 17,                     /* COLON  */
  YYSYMBOL_COLONEQUAL = 18,                /* COLONEQUAL  */
  YYSYMBOL_COMMA = 19,                     /* COMMA  */
  YYSYMBOL_CONTINUE = 20,                  /* CONTINUE  */
  YYSYMBOL_DEDENT = 21,                    /* DEDENT  */
  YYSYMBOL_DEF = 22,                       /* DEF  */
  YYSYMBOL_DEL = 23,                       /* DEL  */
  YYSYMBOL_DOT = 24,                       /* DOT  */
  YYSYMBOL_DOUBLESLASH = 25,               /* DOUBLESLASH  */
  YYSYMBOL_DOUBLESLASHEQUAL = 26,          /* DOUBLESLASHEQUAL  */
  YYSYMBOL_DOUBLESTAR = 27,                /* DOUBLESTAR  */
  YYSYMBOL_DOUBLESTAREQUAL = 28,           /* DOUBLESTAREQUAL  */
  YYSYMBOL_EQEQUAL = 29,                   /* EQEQUAL  */
  YYSYMBOL_ELIF = 30,                      /* ELIF  */
  YYSYMBOL_ELLIPSIS = 31,                  /* ELLIPSIS  */
  YYSYMBOL_ELSE = 32,                      /* ELSE  */
  YYSYMBOL_EXCEPT = 33,                    /* EXCEPT  */
  YYSYMBOL_FALSE = 34,                     /* FALSE  */
  YYSYMBOL_FOR = 35,                       /* FOR  */
  YYSYMBOL_FINALLY = 36,                   /* FINALLY  */
  YYSYMBOL_FROM = 37,                      /* FROM  */
  YYSYMBOL_GREATEREQUAL = 38,              /* GREATEREQUAL  */
  YYSYMBOL_GLOBAL = 39,                    /* GLOBAL  */
  YYSYMBOL_GREATER = 40,                   /* GREATER  */
  YYSYMBOL_IF = 41,                        /* IF  */
  YYSYMBOL_IMPORT = 42,                    /* IMPORT  */
  YYSYMBOL_IN = 43,                        /* IN  */
  YYSYMBOL_INDENT = 44,                    /* INDENT  */
  YYSYMBOL_IS = 45,                        /* IS  */
  YYSYMBOL_LAMBDA = 46,                    /* LAMBDA  */
  YYSYMBOL_LSQB = 47,                      /* LSQB  */
  YYSYMBOL_LBRACE = 48,                    /* LBRACE  */
  YYSYMBOL_LESSEQUAL = 49,                 /* LESSEQUAL  */
  YYSYMBOL_LPAR = 50,                      /* LPAR  */
  YYSYMBOL_LEFTSHIFT = 51,                 /* LEFTSHIFT  */
  YYSYMBOL_LEFTSHIFTEQUAL = 52,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_LESS = 53,                      /* LESS  */
  YYSYMBOL_MINUS = 54,                     /* MINUS  */
  YYSYMBOL_MINUSEQUAL = 55,                /* MINUSEQUAL  */
  YYSYMBOL_NAME = 56,                      /* NAME  */
  YYSYMBOL_NOTEQUAL = 57,                  /* NOTEQUAL  */
  YYSYMBOL_NEWLINE = 58,                   /* NEWLINE  */
  YYSYMBOL_NONE = 59,                      /* NONE  */
  YYSYMBOL_NONLOCAL = 60,                  /* NONLOCAL  */
  YYSYMBOL_NOT = 61,                       /* NOT  */
  YYSYMBOL_NUMBER = 62,                    /* NUMBER  */
  YYSYMBOL_OR = 63,                        /* OR  */
  YYSYMBOL_VBAR = 64,                      /* VBAR  */
  YYSYMBOL_VBAREQUAL = 65,                 /* VBAREQUAL  */
  YYSYMBOL_PASS = 66,                      /* PASS  */
  YYSYMBOL_PERCENT = 67,                   /* PERCENT  */
  YYSYMBOL_PERCENTEQUAL = 68,              /* PERCENTEQUAL  */
  YYSYMBOL_PLUS = 69,                      /* PLUS  */
  YYSYMBOL_PLUSEQUAL = 70,                 /* PLUSEQUAL  */
  YYSYMBOL_RAISE = 71,                     /* RAISE  */
  YYSYMBOL_RSQB = 72,                      /* RSQB  */
  YYSYMBOL_RBRACE = 73,                    /* RBRACE  */
  YYSYMBOL_RETURN = 74,                    /* RETURN  */
  YYSYMBOL_RPAR = 75,                      /* RPAR  */
  YYSYMBOL_RIGHTSHIFT = 76,                /* RIGHTSHIFT  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 77,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_SEMICOLON = 78,                 /* SEMICOLON  */
  YYSYMBOL_SLASH = 79,                     /* SLASH  */
  YYSYMBOL_SLASHEQUAL = 80,                /* SLASHEQUAL  */
  YYSYMBOL_STAR = 81,                      /* STAR  */
  YYSYMBOL_STAREQUAL = 82,                 /* STAREQUAL  */
  YYSYMBOL_STRING = 83,                    /* STRING  */
  YYSYMBOL_TILDE = 84,                     /* TILDE  */
  YYSYMBOL_TRUE = 85,                      /* TRUE  */
  YYSYMBOL_TRY = 86,                       /* TRY  */
  YYSYMBOL_TYPE_COMMENT = 87,              /* TYPE_COMMENT  */
  YYSYMBOL_WITH = 88,                      /* WITH  */
  YYSYMBOL_WHILE = 89,                     /* WHILE  */
  YYSYMBOL_CIRCUMFLEX = 90,                /* CIRCUMFLEX  */
  YYSYMBOL_CIRCUMFLEXEQUAL = 91,           /* CIRCUMFLEXEQUAL  */
  YYSYMBOL_YIELD = 92,                     /* YIELD  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_newline_or_stmt_star = 94,      /* newline_or_stmt_star  */
  YYSYMBOL_opt_par_arglist = 95,           /* opt_par_arglist  */
  YYSYMBOL_decorator_plus = 96,            /* decorator_plus  */
  YYSYMBOL_opt_arrow_test = 97,            /* opt_arrow_test  */
  YYSYMBOL_opt_type_comment = 98,          /* opt_type_comment  */
  YYSYMBOL_opt_comma = 99,                 /* opt_comma  */
  YYSYMBOL_opt_colon_test = 100,           /* opt_colon_test  */
  YYSYMBOL_opt_semi = 101,                 /* opt_semi  */
  YYSYMBOL_assing_yield_or_test_plus = 102, /* assing_yield_or_test_plus  */
  YYSYMBOL_opt_assing_yield_or_test = 103, /* opt_assing_yield_or_test  */
  YYSYMBOL_opt_as_name = 104,              /* opt_as_name  */
  YYSYMBOL_comma_import_as_name_star = 105, /* comma_import_as_name_star  */
  YYSYMBOL_comma_dotted_as_name_star = 106, /* comma_dotted_as_name_star  */
  YYSYMBOL_dot_name_star = 107,            /* dot_name_star  */
  YYSYMBOL_comma_name_star = 108,          /* comma_name_star  */
  YYSYMBOL_opt_comma_test = 109,           /* opt_comma_test  */
  YYSYMBOL_elif_test_suite_plus = 110,     /* elif_test_suite_plus  */
  YYSYMBOL_opt_else_suite = 111,           /* opt_else_suite  */
  YYSYMBOL_comma_with_item_star = 112,     /* comma_with_item_star  */
  YYSYMBOL_opt_as_expr = 113,              /* opt_as_expr  */
  YYSYMBOL_opt_test_as_name = 114,         /* opt_test_as_name  */
  YYSYMBOL_stmt_plus = 115,                /* stmt_plus  */
  YYSYMBOL_opt_await = 116,                /* opt_await  */
  YYSYMBOL_trailer_plus = 117,             /* trailer_plus  */
  YYSYMBOL_string_plus = 118,              /* string_plus  */
  YYSYMBOL_opt_test = 119,                 /* opt_test  */
  YYSYMBOL_opt_sliceop = 120,              /* opt_sliceop  */
  YYSYMBOL_comma_dict1_star = 121,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 122,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 123,        /* opt_finally_suite  */
  YYSYMBOL_program = 124,                  /* program  */
  YYSYMBOL_file_input = 125,               /* file_input  */
  YYSYMBOL_decorator = 126,                /* decorator  */
  YYSYMBOL_decorators = 127,               /* decorators  */
  YYSYMBOL_decorated = 128,                /* decorated  */
  YYSYMBOL_async_funcdef = 129,            /* async_funcdef  */
  YYSYMBOL_funcdef = 130,                  /* funcdef  */
  YYSYMBOL_parameters = 131,               /* parameters  */
  YYSYMBOL_arguments = 132,                /* arguments  */
  YYSYMBOL_argument = 133,                 /* argument  */
  YYSYMBOL_tfpdef = 134,                   /* tfpdef  */
  YYSYMBOL_stmt = 135,                     /* stmt  */
  YYSYMBOL_simple_stmt = 136,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 137,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 138,                /* expr_stmt  */
  YYSYMBOL_annassign = 139,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 140,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 141,                /* augassign  */
  YYSYMBOL_del_stmt = 142,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 143,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 144,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 145,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 146,            /* continue_stmt  */
  YYSYMBOL_return_stmt = 147,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 148,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 149,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 150,              /* import_stmt  */
  YYSYMBOL_import_name = 151,              /* import_name  */
  YYSYMBOL_import_from = 152,              /* import_from  */
  YYSYMBOL_from_part = 153,                /* from_part  */
  YYSYMBOL_import_part = 154,              /* import_part  */
  YYSYMBOL_import_as_name = 155,           /* import_as_name  */
  YYSYMBOL_156_1 = 156,                    /* $@1  */
  YYSYMBOL_dotted_as_name = 157,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 158,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 159,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 160,              /* dotted_name  */
  YYSYMBOL_161_2 = 161,                    /* $@2  */
  YYSYMBOL_global_stmt = 162,              /* global_stmt  */
  YYSYMBOL_163_3 = 163,                    /* $@3  */
  YYSYMBOL_nonlocal_stmt = 164,            /* nonlocal_stmt  */
  YYSYMBOL_165_4 = 165,                    /* $@4  */
  YYSYMBOL_assert_stmt = 166,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 167,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 168,               /* async_stmt  */
  YYSYMBOL_if_stmt = 169,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 170,               /* while_stmt  */
  YYSYMBOL_for_stmt = 171,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 172,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 173,                /* with_stmt  */
  YYSYMBOL_with_item = 174,                /* with_item  */
  YYSYMBOL_except_clause = 175,            /* except_clause  */
  YYSYMBOL_suite = 176,                    /* suite  */
  YYSYMBOL_namedexpr_test = 177,           /* namedexpr_test  */
  YYSYMBOL_test = 178,                     /* test  */
  YYSYMBOL_test_nocond = 179,              /* test_nocond  */
  YYSYMBOL_or_test = 180,                  /* or_test  */
  YYSYMBOL_and_test = 181,                 /* and_test  */
  YYSYMBOL_not_test = 182,                 /* not_test  */
  YYSYMBOL_comparison = 183,               /* comparison  */
  YYSYMBOL_expr = 184,                     /* expr  */
  YYSYMBOL_xor_expr = 185,                 /* xor_expr  */
  YYSYMBOL_and_expr = 186,                 /* and_expr  */
  YYSYMBOL_shift_expr = 187,               /* shift_expr  */
  YYSYMBOL_arith_expr = 188,               /* arith_expr  */
  YYSYMBOL_term = 189,                     /* term  */
  YYSYMBOL_factor = 190,                   /* factor  */
  YYSYMBOL_power = 191,                    /* power  */
  YYSYMBOL_atom_expr = 192,                /* atom_expr  */
  YYSYMBOL_atom = 193,                     /* atom  */
  YYSYMBOL_testlist_comp = 194,            /* testlist_comp  */
  YYSYMBOL_trailer = 195,                  /* trailer  */
  YYSYMBOL_subscriptlist = 196,            /* subscriptlist  */
  YYSYMBOL_subscript = 197,                /* subscript  */
  YYSYMBOL_sliceop = 198,                  /* sliceop  */
  YYSYMBOL_exprlist = 199,                 /* exprlist  */
  YYSYMBOL_testlist = 200,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 201,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 202,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 203,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 204,                 /* classdef  */
  YYSYMBOL_205_5 = 205,                    /* $@5  */
  YYSYMBOL_arglist = 206,                  /* arglist  */
  YYSYMBOL_argument1 = 207,                /* argument1  */
  YYSYMBOL_comp_iter = 208,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 209,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 210,                 /* comp_for  */
  YYSYMBOL_comp_if = 211,                  /* comp_if  */
  YYSYMBOL_yield_expr = 212,               /* yield_expr  */
  YYSYMBOL_yield_arg = 213,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 214           /* func_body_suite  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
# define YYCOPY_NEEDED 1
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  80
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   851

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  122
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  465

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    52,    53,    56,    57,    58,    61,    62,
      65,    66,    69,    70,    81,    82,    85,    86,    94,    95,
      98,    99,   100,   101,   104,   105,   106,   119,   120,   123,
     124,   127,   128,   131,   132,   135,   136,   139,   140,   143,
     144,   151,   152,   155,   156,   159,   160,   163,   164,   167,
     168,   217,   218,   221,   222,   229,   230,   242,   243,   246,
     247,   259,   260,   261,   264,   265,   268,   269,   274,   279,
     282,   285,   288,   289,   290,   293,   296,   299,   300,   306,
     307,   310,   311,   317,   322,   323,   326,   329,   330,   331,
     332,   333,   334,   335,   336,   339,   340,   341,   342,   343,
     346,   349,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   369,   372,   375,   376,   377,
     378,   379,   382,   385,   388,   389,   392,   395,   396,   397,
     400,   401,   404,   407,   418,   419,   420,   423,   424,   425,
     428,   428,   431,   434,   437,   440,   440,   443,   443,   446,
     446,   449,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   463,   464,   465,   468,   469,   472,   473,   476,   477,
     480,   481,   484,   487,   490,   493,   494,   500,   503,   504,
     508,   521,   522,   530,   531,   535,   536,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   574,   575,
     578,   579,   582,   583,   586,   587,   588,   591,   592,   593,
     596,   597,   598,   599,   600,   601,   604,   605,   606,   607,
     610,   611,   614,   615,   621,   622,   623,   624,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   646,   647,
     651,   652,   653,   654,   659,   660,   663,   664,   667,   673,
     674,   680,   681,   684,   685,   688,   689,   690,   691,   694,
     695,   701,   701,   707,   708,   711,   712,   713,   714,   715,
     716,   719,   720,   723,   724,   727,   728,   731,   732,   735,
     736,   739,   740,   743,   744,   745
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ENDMARKER", "AND",
  "AMPER", "AMPEREQUAL", "ARROW", "AS", "ASSERT", "EQUAL", "ASYNC", "AT",
  "ATEQUAL", "AWAIT", "BREAK", "CLASS", "COLON", "COLONEQUAL", "COMMA",
  "CONTINUE", "DEDENT", "DEF", "DEL", "DOT", "DOUBLESLASH",
  "DOUBLESLASHEQUAL", "DOUBLESTAR", "DOUBLESTAREQUAL", "EQEQUAL", "ELIF",
  "ELLIPSIS", "ELSE", "EXCEPT", "FALSE", "FOR", "FINALLY", "FROM",
  "GREATEREQUAL", "GLOBAL", "GREATER", "IF", "IMPORT", "IN", "INDENT",
  "IS", "LAMBDA", "LSQB", "LBRACE", "LESSEQUAL", "LPAR", "LEFTSHIFT",
  "LEFTSHIFTEQUAL", "LESS", "MINUS", "MINUSEQUAL", "NAME", "NOTEQUAL",
  "NEWLINE", "NONE", "NONLOCAL", "NOT", "NUMBER", "OR", "VBAR",
  "VBAREQUAL", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL",
  "RAISE", "RSQB", "RBRACE", "RETURN", "RPAR", "RIGHTSHIFT",
  "RIGHTSHIFTEQUAL", "SEMICOLON", "SLASH", "SLASHEQUAL", "STAR",
  "STAREQUAL", "STRING", "TILDE", "TRUE", "TRY", "TYPE_COMMENT", "WITH",
  "WHILE", "CIRCUMFLEX", "CIRCUMFLEXEQUAL", "YIELD", "$accept",
  "newline_or_stmt_star", "opt_par_arglist", "decorator_plus",
  "opt_arrow_test", "opt_type_comment", "opt_comma", "opt_colon_test",
  "opt_semi", "assing_yield_or_test_plus", "opt_assing_yield_or_test",
  "opt_as_name", "comma_import_as_name_star", "comma_dotted_as_name_star",
  "dot_name_star", "comma_name_star", "opt_comma_test",
  "elif_test_suite_plus", "opt_else_suite", "comma_with_item_star",
  "opt_as_expr", "opt_test_as_name", "stmt_plus", "opt_await",
  "trailer_plus", "string_plus", "opt_test", "opt_sliceop",
  "comma_dict1_star", "except_suite_plus", "opt_finally_suite", "program",
  "file_input", "decorator", "decorators", "decorated", "async_funcdef",
  "funcdef", "parameters", "arguments", "argument", "tfpdef", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "$@1", "dotted_as_name", "import_as_names",
  "dotted_as_names", "dotted_name", "$@2", "global_stmt", "$@3",
  "nonlocal_stmt", "$@4", "assert_stmt", "compound_stmt", "async_stmt",
  "if_stmt", "while_stmt", "for_stmt", "try_stmt", "with_stmt",
  "with_item", "except_clause", "suite", "namedexpr_test", "test",
  "test_nocond", "or_test", "and_test", "not_test", "comparison", "expr",
  "xor_expr", "and_expr", "shift_expr", "arith_expr", "term", "factor",
  "power", "atom_expr", "atom", "testlist_comp", "trailer",
  "subscriptlist", "subscript", "sliceop", "exprlist", "testlist",
  "dictorsetmaker", "dictorsetmaker1", "dictorsetmaker2", "classdef",
  "$@5", "arglist", "argument1", "comp_iter", "sync_comp_for", "comp_for",
  "comp_if", "yield_expr", "yield_arg", "func_body_suite", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
#endif

#define YYPACT_NINF (-401)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-280)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -401,   395,    80,  -401,  -401,   178,   148,    39,  -401,  -401,
      53,  -401,    74,   160,   160,    12,    95,   178,    39,   160,
    -401,   135,   178,  -401,   160,     9,   309,   160,   187,   178,
     178,   196,   213,   555,  -401,   156,  -401,  -401,  -401,  -401,
     149,  -401,    73,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,   209,   197,   182,   237,  -401,   578,
     185,   152,   241,   -17,     3,   290,  -401,   226,  -401,  -401,
    -401,   242,  -401,  -401,  -401,  -401,   210,  -401,   225,   257,
    -401,   244,  -401,  -401,   246,  -401,  -401,   286,  -401,  -401,
    -401,   299,  -401,  -401,  -401,  -401,   276,  -401,  -401,   198,
    -401,   314,   300,   178,  -401,  -401,  -401,  -401,  -401,    28,
     132,    23,  -401,  -401,  -401,  -401,  -401,   235,   231,   302,
    -401,  -401,  -401,  -401,   267,  -401,    27,  -401,   178,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
      15,  -401,    27,  -401,  -401,   178,   178,   178,   160,   160,
     160,   160,   336,   160,   160,   160,   284,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     178,  -401,  -401,   272,   273,   210,   -10,   325,   330,  -401,
     178,    84,  -401,   198,   315,   281,  -401,  -401,   178,   294,
    -401,    25,   180,   160,  -401,   198,  -401,  -401,   323,   326,
     277,   329,   160,  -401,   191,   279,  -401,  -401,  -401,   126,
      10,   285,  -401,   293,  -401,   303,    91,   421,   231,  -401,
    -401,  -401,  -401,  -401,   355,    27,  -401,  -401,   357,  -401,
    -401,   342,  -401,  -401,  -401,  -401,  -401,  -401,   160,  -401,
    -401,  -401,  -401,   160,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   356,   178,
    -401,   178,   310,   304,   363,  -401,   366,   368,  -401,   311,
     370,   381,   178,   375,  -401,   378,   340,  -401,  -401,  -401,
    -401,  -401,   383,   168,    39,  -401,   383,  -401,   723,   411,
     386,    43,   402,   313,   178,  -401,   380,    52,  -401,   456,
    -401,   126,   387,   178,   160,  -401,  -401,  -401,  -401,   297,
    -401,  -401,  -401,  -401,   349,  -401,   348,  -401,    27,  -401,
    -401,  -401,   178,  -401,  -401,   373,  -401,  -401,   178,   178,
    -401,  -401,   440,  -401,   198,   178,  -401,  -401,   377,   178,
    -401,   313,   313,   351,   299,   405,   382,   178,   414,   179,
    -401,  -401,   477,  -401,  -401,   299,   198,   404,   424,   198,
     198,  -401,   425,   426,  -401,  -401,   427,  -401,  -401,   126,
     407,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,   759,   198,  -401,  -401,   340,
    -401,  -401,   428,   198,   178,  -401,  -401,  -401,  -401,  -401,
     430,  -401,   198,  -401,  -401,   198,   112,  -401,  -401,   216,
    -401,   427,  -401,   178,    70,  -401,  -401,   436,  -401,   198,
    -401,   441,   198,  -401,  -401,  -401,   160,   443,  -401,   121,
     723,   399,   454,  -401,   198,  -401,  -401,   178,   178,  -401,
    -401,  -401,   559,   432,   198,  -401,  -401,   121,  -401,  -401,
     723,  -401,  -401,   641,  -401
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    51,     0,    68,    69,    51,     0,     0,    52,   122,
       0,   123,     0,    51,    51,     0,     0,    51,     0,    51,
       3,     0,    51,   116,    51,    51,    51,    51,     0,    51,
      51,    51,    71,     0,     8,     0,   159,   157,     4,    84,
      18,    87,    98,    88,    89,    90,   117,   118,   119,   121,
     120,    91,   130,   131,    92,    93,    94,    85,   160,   152,
     153,   154,   155,   156,    14,   178,   182,   184,   186,   197,
     199,   201,   203,   206,   209,   215,   219,   220,   158,   126,
       1,    37,   161,   163,   162,   145,     5,   261,     0,    14,
     115,     0,   134,   135,     0,   136,   147,     0,   177,    31,
     132,    27,   217,   149,   185,   216,   128,   124,   218,    51,
      43,    45,     0,    51,   282,   280,     9,   234,   237,    51,
      51,    51,   231,   235,   232,    55,   236,   233,   223,     0,
      74,    73,    72,    19,     0,   108,    51,   105,    51,   114,
     113,   111,   103,   109,   107,   102,   112,   106,   104,   110,
      12,    95,    51,    15,   101,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,     0,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,   151,    33,    51,     0,     5,     0,    10,    51,   250,
      51,     0,    35,    51,   144,     0,   142,    35,    51,     0,
     175,     0,     0,    51,   173,    51,   281,   227,     0,   246,
       0,    14,    51,   229,   260,     0,   253,   254,   224,     0,
     177,     0,   239,     0,    56,     0,    51,    51,   222,    53,
      75,    86,    21,    20,    24,    51,    13,    99,    14,    97,
      96,     0,   181,   183,   189,   190,   188,   193,    51,   195,
     191,   187,   192,    51,   198,   200,   202,   204,   205,   208,
     207,   211,   214,   213,   212,   210,   221,    38,   146,    51,
       6,    51,   265,     0,    14,    70,     0,    16,    77,     0,
      80,    82,    51,     0,   249,     0,     0,   140,   137,   133,
      29,   139,   148,    41,     0,    28,   150,   129,    51,    51,
       0,    41,     0,    12,    51,    46,   167,    51,   228,    51,
     245,    61,     0,    51,    51,   275,   259,   230,   238,    51,
     252,   226,   225,   243,     0,   240,     0,    54,    51,   100,
      23,    22,    51,   196,   194,     0,   269,   270,    51,    51,
     266,     7,    51,   264,    51,    51,    83,    78,     0,    51,
      11,    12,    12,     0,    27,    14,     0,    51,     0,    41,
     165,    32,    51,    49,   174,    27,    51,    66,     0,    51,
      51,    44,     0,    59,    58,   244,    14,   257,   276,    61,
       0,   251,   242,   241,    26,    25,   179,    34,   268,   267,
     263,   262,    17,    79,    81,    51,    51,   138,   141,    15,
     143,    36,     0,    51,    51,   164,   176,    50,    48,   171,
       0,   170,    51,    64,   172,    51,    51,   247,    60,    51,
     258,    14,   255,    51,     0,   283,    76,   169,    30,    51,
      42,     0,    51,    65,   166,   248,    51,     0,   256,   273,
      51,     0,     0,    39,    51,    67,    63,    51,    51,   274,
     271,   272,    51,     0,    51,    40,    62,   277,   180,   284,
      51,   168,   278,    51,   285
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -401,  -401,   289,  -401,  -401,  -229,   -57,  -401,  -401,  -401,
    -401,  -292,  -401,  -401,  -401,   280,  -401,  -401,  -268,  -401,
    -401,  -401,  -400,  -401,  -401,  -401,  -287,  -401,    99,  -401,
    -401,  -401,  -401,   453,  -401,  -401,  -401,    13,  -401,   155,
    -401,  -401,     0,    -1,  -401,  -401,  -401,   -16,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,
    -401,  -401,   105,  -401,   212,   221,  -401,    24,  -401,  -401,
    -401,  -401,  -401,  -401,  -401,  -401,  -401,  -401,   502,  -401,
     505,   218,   219,  -181,   -27,    -3,  -401,  -139,   369,   491,
    -109,    -9,   359,   354,   -23,    -4,   117,    11,  -401,  -401,
    -401,  -401,   301,  -205,  -401,  -401,    -6,  -143,  -401,  -401,
    -401,   495,  -401,  -209,  -401,    75,   222,  -208,  -401,  -108,
    -401,  -401
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   184,    32,   283,   237,   320,   346,   134,   150,
     329,   196,   355,   194,   268,   292,   181,   359,   360,   202,
     204,   364,   362,    33,   228,   127,   208,   417,   376,   301,
     411,     2,     3,    34,    35,    36,   130,    37,   187,   279,
     280,   281,   363,   200,    40,    41,   151,    42,   152,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      94,   289,   290,   354,    99,   291,   100,   101,   182,    54,
     192,    55,   197,    56,    57,    58,    59,    60,    61,    62,
      63,   110,   302,   201,    97,    64,   457,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
     128,   221,   229,   210,   211,   418,    90,   222,   215,   216,
     217,    78,   185,   273,   274,   449,   315,   450,   451,    79,
     115,   426
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    38,    81,   112,    89,    89,   316,   154,    91,   239,
     107,   318,   293,   223,    98,   114,   241,   242,   326,    82,
     373,   324,   106,     8,   306,   235,   111,    98,   233,   319,
     102,    86,   189,   367,   170,   105,    92,     8,   108,    95,
     452,     8,     8,    93,   240,   -57,   277,   285,   131,   244,
     245,   246,   247,   249,   250,   251,   252,   172,   299,   171,
     463,   300,   398,    19,   340,   278,     8,  -127,    85,   -57,
      22,   -57,   173,   408,   370,   358,   299,    19,    24,   135,
      80,    19,    19,   136,    22,   -14,   137,  -127,    22,    22,
     138,   405,    24,    27,   219,    85,    24,    24,   218,   139,
     207,   140,   236,   377,   375,     8,    19,    27,   -57,    87,
     206,    27,    27,    22,   440,    31,   209,   214,   220,    31,
     232,    24,   395,   396,   -57,   141,     8,   331,   142,   435,
      88,   -57,   312,   390,   286,   234,    27,   312,   143,   333,
     287,   144,   230,   145,   334,    19,     8,   257,   258,   238,
     146,    96,    22,   147,   310,   148,   314,   441,   254,   212,
      24,   314,   448,   391,   149,   288,    19,   129,   259,   260,
      12,   422,    10,    22,     8,    27,   381,   267,    12,    89,
     272,    24,   284,    14,   -57,   409,    19,   238,   413,   414,
     266,   103,     8,    22,   305,   297,    27,   303,   357,   304,
     358,    24,   312,   311,   109,   213,  -279,     5,   313,   404,
       8,   358,     8,     9,    19,   427,    27,   343,    11,   330,
     385,    13,   430,   209,   272,     7,   314,   133,   153,    24,
       8,   433,    19,   113,   434,    15,    29,    16,   155,    22,
      18,   157,   168,   436,    27,   156,   169,    24,   443,   167,
      19,   445,    19,   179,  -279,   225,   199,    22,    21,    22,
     183,   180,    27,   455,    23,    24,   336,    24,   337,    25,
      19,  -279,    26,   461,  -279,   186,   188,    22,   226,   350,
      27,   227,    27,  -279,   439,    24,     8,   190,   191,   -15,
      31,   261,   262,   263,   264,   265,   365,    39,   400,   269,
      27,   111,   174,   193,   374,    89,   209,   195,   380,   458,
     379,     8,   384,   198,   -15,   175,   238,   205,   224,   420,
     338,   312,   203,     8,    12,   231,    19,   253,   339,   386,
     402,   275,   282,    22,   294,   388,   389,   295,   298,   272,
     307,    24,   392,   -58,     8,   314,   394,   270,   309,   308,
       8,    19,   317,   271,    98,   -15,    27,   176,    22,   323,
     321,    39,   407,    19,   438,   328,    24,  -125,   322,   177,
      22,   178,   -15,   -15,   332,   -15,   319,   431,    24,   341,
     335,    27,   342,   344,    19,   345,   347,  -125,   -15,   348,
      19,   349,   351,    27,   425,   352,   287,   248,     4,    24,
     236,    98,   356,   366,     5,    24,     6,     7,   -15,     8,
       9,    10,   372,   374,    27,    11,   437,    12,    13,   369,
      27,   382,   314,   383,   399,     8,   397,   446,   -47,   387,
      14,   403,    15,   277,    16,     8,    17,    18,   401,    39,
     410,   412,   415,   416,   456,   429,   419,   432,   269,    19,
     423,    39,   407,    20,     8,    21,    22,   453,   444,    39,
     447,    23,    39,   407,    24,    19,    25,   269,   442,    26,
       8,   454,    22,   -57,   276,    19,   460,   296,   421,    27,
      24,    28,    22,    29,    30,   116,     5,    31,     6,     7,
      24,     8,     9,    10,    19,    27,   325,    11,   406,    12,
      13,    22,   271,   393,   428,    27,   361,   353,    83,    24,
      19,    84,    14,   104,    15,   -15,    16,    22,    17,    18,
     368,   271,   371,   256,    27,    24,   243,   255,   -15,   327,
     132,    19,   462,     0,   378,     0,     0,    21,    22,     0,
      27,     0,     0,    23,     0,     0,    24,     0,    25,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,    28,     0,    29,    30,     0,     5,    31,
       6,     7,     0,     8,     9,    10,     0,     0,     0,    11,
     459,    12,    13,     0,     0,     0,   117,     0,     0,   118,
       0,     0,     0,     0,    14,     0,    15,     0,    16,     0,
      17,    18,   119,   120,     0,   121,     0,   158,     0,     0,
       0,   122,     0,    19,   123,     0,   159,   124,   160,    21,
      22,   161,     0,   162,     0,    23,     0,   163,    24,     0,
      25,   164,     0,    26,     0,   165,     0,     0,   125,   166,
     126,     0,     0,    27,     0,    28,     0,    29,    30,     0,
       5,    31,     6,     7,     0,     8,     9,    10,     0,     0,
       0,    11,   464,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,     0,
      16,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,    23,     0,     0,
      24,     0,    25,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,    28,     0,    29,
      30,     0,     5,    31,     6,     7,     0,     8,     9,    10,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,     0,    16,     0,    17,    18,     0,     0,     5,     0,
       0,     0,     0,     8,     9,     0,     0,    19,     0,    11,
       0,     0,    13,    21,    22,     0,     0,     0,     0,    23,
       0,     0,    24,     0,    25,     0,    15,    26,    16,     0,
       0,    18,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    19,     0,    31,     0,   424,     0,    21,
      22,     0,     0,     0,     0,    23,     0,     0,    24,     0,
      25,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    31
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    30,    13,    14,   214,    64,    14,   152,
      26,   219,   193,   121,    17,    31,   155,   156,   227,     6,
     307,   226,    25,    14,   205,    10,    29,    30,   136,    19,
      19,     7,    89,   301,    51,    24,    24,    14,    27,    15,
     440,    14,    14,    31,   152,    17,    56,   190,    35,   158,
     159,   160,   161,   162,   163,   164,   165,    54,    33,    76,
     460,    36,   354,    54,   272,    75,    14,    58,    56,    17,
      61,    19,    69,   365,   303,    32,    33,    54,    69,     6,
       0,    54,    54,    10,    61,    75,    13,    78,    61,    61,
      17,   359,    69,    84,   121,    56,    69,    69,    75,    26,
      72,    28,    87,   311,   309,    14,    54,    84,    17,    56,
     113,    84,    84,    61,    44,    92,   119,   120,   121,    92,
     136,    69,   351,   352,    72,    52,    14,   235,    55,   416,
      56,    19,    11,   342,    50,   138,    84,    11,    65,   248,
      56,    68,   129,    70,   253,    54,    14,   170,   171,   152,
      77,    56,    61,    80,   211,    82,    35,    87,   167,    27,
      69,    35,    41,   344,    91,    81,    54,    11,   172,   173,
      22,   379,    16,    61,    14,    84,   319,   180,    22,   188,
     183,    69,   188,    35,    72,   366,    54,   190,   369,   370,
     179,    56,    14,    61,   203,   198,    84,    17,    30,    19,
      32,    69,    11,   212,    17,    73,    10,     9,    17,    30,
      14,    32,    14,    15,    54,   396,    84,   274,    20,   235,
     328,    23,   403,   226,   227,    12,    35,    78,    19,    69,
      14,   412,    54,    37,   415,    37,    88,    39,    41,    61,
      42,     4,    90,    27,    84,    63,     5,    69,   429,    64,
      54,   432,    54,    27,    58,    24,    58,    61,    60,    61,
      50,    19,    84,   444,    66,    69,   269,    69,   271,    71,
      54,    75,    74,   454,    78,    50,    19,    61,    47,   282,
      84,    50,    84,    87,   423,    69,    14,    43,    42,    73,
      92,   174,   175,   176,   177,   178,   299,   298,   355,    27,
      84,   304,    12,    17,   307,   314,   309,     8,   314,   448,
     313,    14,   328,    37,    17,    25,   319,    17,    83,   376,
      10,    11,     8,    14,    22,    58,    54,    43,    18,   332,
     357,    58,     7,    61,    19,   338,   339,    56,    44,   342,
      17,    69,   345,    17,    14,    35,   349,    75,    19,    72,
      14,    54,    73,    81,   357,    58,    84,    67,    61,    56,
      75,   362,   362,    54,   421,    10,    69,    58,    75,    79,
      61,    81,    75,    43,    32,    78,    19,   404,    69,    75,
      24,    84,    19,    17,    54,    17,    75,    78,    58,    19,
      54,    10,    17,    84,   395,    17,    56,    61,     3,    69,
      87,   404,    19,    17,     9,    69,    11,    12,    78,    14,
      15,    16,    32,   416,    84,    20,   419,    22,    23,    17,
      84,    72,    35,    75,    19,    14,    75,   436,    17,    56,
      35,    17,    37,    56,    39,    14,    41,    42,    56,   440,
      36,    17,    17,    17,   447,    17,    19,    17,    27,    54,
      43,   452,   452,    58,    14,    60,    61,    58,    17,   460,
      17,    66,   463,   463,    69,    54,    71,    27,    32,    74,
      14,    17,    61,    17,   185,    54,    44,   197,   379,    84,
      69,    86,    61,    88,    89,    32,     9,    92,    11,    12,
      69,    14,    15,    16,    54,    84,    75,    20,    21,    22,
      23,    61,    81,   348,   399,    84,   294,   286,     6,    69,
      54,     6,    35,    22,    37,    75,    39,    61,    41,    42,
     301,    81,   304,   169,    84,    69,   157,   168,    72,   228,
      35,    54,   457,    -1,   312,    -1,    -1,    60,    61,    -1,
      84,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    -1,     9,    92,
      11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    42,    47,    48,    -1,    50,    -1,    29,    -1,    -1,
      -1,    56,    -1,    54,    59,    -1,    38,    62,    40,    60,
      61,    43,    -1,    45,    -1,    66,    -1,    49,    69,    -1,
      71,    53,    -1,    74,    -1,    57,    -1,    -1,    83,    61,
      85,    -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,
       9,    92,    11,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,
      89,    -1,     9,    92,    11,    12,    -1,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    14,    15,    -1,    -1,    54,    -1,    20,
      -1,    -1,    23,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    71,    -1,    37,    74,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    88,    89,    54,    -1,    92,    -1,    58,    -1,    60,
      61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   124,   125,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    54,
      58,    60,    61,    66,    69,    71,    74,    84,    86,    88,
      89,    92,    96,   116,   126,   127,   128,   130,   135,   136,
     137,   138,   140,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   162,   164,   166,   167,   168,   169,
     170,   171,   172,   173,   178,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   204,   212,
       0,   178,   130,   171,   173,    56,   160,    56,    56,   184,
     199,   199,    24,    31,   153,   160,    56,   177,   178,   157,
     159,   160,   190,    56,   182,   190,   178,   140,   190,    17,
     174,   178,   177,    37,   140,   213,   126,    31,    34,    47,
      48,    50,    56,    59,    62,    83,    85,   118,   193,    11,
     129,   130,   204,    78,   101,     6,    10,    13,    17,    26,
      28,    52,    55,    65,    68,    70,    77,    80,    82,    91,
     102,   139,   141,    19,    99,    41,    63,     4,    29,    38,
      40,    43,    45,    49,    53,    57,    61,    64,    90,     5,
      51,    76,    54,    69,    12,    25,    67,    79,    81,    27,
      19,   109,   161,    50,    95,   205,    50,   131,    19,    99,
      43,    42,   163,    17,   106,     8,   104,   165,    37,    58,
     136,   176,   112,     8,   113,    17,   178,    72,   119,   178,
     196,   197,    27,    73,   178,   201,   202,   203,    75,   177,
     178,   194,   200,   212,    83,    24,    47,    50,   117,   195,
     130,    58,   140,   212,   178,    10,    87,    98,   178,   200,
     212,   180,   180,   181,   183,   183,   183,   183,    61,   183,
     183,   183,   183,    43,   184,   185,   186,   187,   187,   188,
     188,   189,   189,   189,   189,   189,   190,   178,   107,    27,
      75,    81,   178,   206,   207,    58,    95,    56,    75,   132,
     133,   134,     7,    97,   199,   200,    50,    56,    81,   154,
     155,   158,   108,   176,    19,    56,   108,   178,    44,    33,
      36,   122,   175,    17,    19,   184,   176,    17,    72,    19,
      99,   184,    11,    17,    35,   209,   210,    73,   210,    19,
      99,    75,    75,    56,   196,    75,   206,   195,    10,   103,
     140,   212,    32,   183,   183,    24,   178,   178,    10,    18,
     210,    75,    19,    99,    17,    17,   100,    75,    19,    10,
     178,    17,    17,   158,   156,   105,    19,    30,    32,   110,
     111,   157,   115,   135,   114,   178,    17,   111,   175,    17,
      98,   174,    32,   119,   178,   196,   121,   210,   209,   178,
     199,   200,    72,    75,   140,   212,   178,    56,   178,   178,
     206,   176,   178,   132,   178,    98,    98,    75,   104,    19,
      99,    56,   177,    17,    30,   111,    21,   135,   104,   176,
      36,   123,    17,   176,   176,    17,    17,   120,   198,    19,
      99,   121,   210,    43,    58,   136,   214,   176,   155,    17,
     176,   177,    17,   176,   176,   119,    27,   178,    99,   180,
      44,    87,    32,   176,    17,   176,   184,    17,    41,   208,
     210,   211,   115,    58,    17,   176,   178,   179,   180,    21,
      44,   176,   208,   115,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   121,   122,   122,   123,   123,   124,   125,
     126,   127,   128,   128,   128,   129,   130,   131,   131,   132,
     132,   133,   133,   134,   135,   135,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   138,   138,
     139,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   143,   144,   144,   144,
     144,   144,   145,   146,   147,   147,   148,   149,   149,   149,
     150,   150,   151,   152,   153,   153,   153,   154,   154,   154,
     156,   155,   157,   158,   159,   161,   160,   163,   162,   165,
     164,   166,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   173,   174,   175,   176,   176,   177,   178,   178,
     179,   180,   180,   181,   181,   182,   182,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   187,   188,   188,   188,
     189,   189,   189,   189,   189,   189,   190,   190,   190,   190,
     191,   191,   192,   192,   193,   193,   193,   193,   193,   193,
     193,   193,   193,   193,   193,   193,   193,   193,   194,   194,
     195,   195,   195,   195,   196,   196,   197,   197,   198,   199,
     199,   200,   200,   201,   201,   202,   202,   202,   202,   203,
     203,   205,   204,   206,   206,   207,   207,   207,   207,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   212,
     212,   213,   213,   214,   214,   214
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     1,     0,     2,     0,     1,
       2,     2,     3,     3,     0,     2,     2,     0,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     2,     4,
       5,     0,     3,     0,     3,     0,     2,     0,     2,     1,
       2,     0,     1,     1,     2,     1,     2,     0,     1,     0,
       1,     0,     5,     4,     3,     4,     0,     3,     1,     2,
       4,     1,     2,     2,     2,     2,     7,     2,     3,     3,
       1,     3,     1,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     1,     3,
       3,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     2,     4,
       1,     1,     2,     4,     1,     1,     1,     1,     3,     1,
       0,     3,     2,     3,     2,     0,     3,     0,     4,     0,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     6,     5,     7,     4,    10,     7,
       6,     6,     6,     2,     2,     1,     4,     1,     1,     5,
       1,     3,     1,     3,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     4,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     1,
       1,     3,     3,     2,     2,     3,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     3,     3,     2,     3,     2,     1,     4,     2,     3,
       2,     3,     2,     1,     1,     4,     5,     3,     4,     2,
       1,     0,     6,     3,     2,     1,     2,     3,     3,     2,
       2,     1,     1,     4,     5,     1,     2,     2,     3,     1,
       2,     2,     1,     1,     4,     6
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return YYENOMEM if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return YYENOMEM;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          goto yyexhaustedlab;                                          \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2: /* newline_or_stmt_star: %empty  */
#line 51 "parser.y"
                             { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 0); printf("newline_or_stmt_star_1\n"); }
#line 2267 "parser.c"
    break;

  case 3: /* newline_or_stmt_star: newline_or_stmt_star NEWLINE  */
#line 52 "parser.y"
                                                   { yyval = yyvsp[-1]; printf("newline_or_stmt_star_2\n"); }
#line 2273 "parser.c"
    break;

  case 4: /* newline_or_stmt_star: newline_or_stmt_star stmt  */
#line 53 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; printf("newline_or_stmt_star_3\n"); }
#line 2279 "parser.c"
    break;

  case 20: /* assing_yield_or_test_plus: EQUAL yield_expr  */
#line 98 "parser.y"
                                            { yyval = yyvsp[0]; }
#line 2285 "parser.c"
    break;

  case 21: /* assing_yield_or_test_plus: EQUAL testlist_star_expr  */
#line 99 "parser.y"
                                                    { yyval = yyvsp[0]; }
#line 2291 "parser.c"
    break;

  case 22: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL yield_expr  */
#line 100 "parser.y"
                                                                      { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2297 "parser.c"
    break;

  case 23: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL testlist_star_expr  */
#line 101 "parser.y"
                                                                              { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2303 "parser.c"
    break;

  case 28: /* opt_as_name: AS NAME  */
#line 120 "parser.y"
                     { new_var(); }
#line 2309 "parser.c"
    break;

  case 34: /* dot_name_star: dot_name_star DOT NAME  */
#line 132 "parser.y"
                                      { new_var(); }
#line 2315 "parser.c"
    break;

  case 36: /* comma_name_star: comma_name_star COMMA NAME  */
#line 136 "parser.y"
                                            { new_var(); }
#line 2321 "parser.c"
    break;

  case 39: /* elif_test_suite_plus: ELIF namedexpr_test COLON suite  */
#line 143 "parser.y"
                                                      { yyval = new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2327 "parser.c"
    break;

  case 40: /* elif_test_suite_plus: elif_test_suite_plus ELIF namedexpr_test COLON suite  */
#line 144 "parser.y"
                                                                           { add_child(yyvsp[-4], new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0])); yyval = yyvsp[-4]; }
#line 2333 "parser.c"
    break;

  case 41: /* opt_else_suite: %empty  */
#line 151 "parser.y"
                       { yyval = new_node(NOOP_NODE, 0, NO_TYPE); }
#line 2339 "parser.c"
    break;

  case 42: /* opt_else_suite: ELSE COLON suite  */
#line 152 "parser.y"
                                 { yyval = new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2345 "parser.c"
    break;

  case 49: /* stmt_plus: stmt  */
#line 167 "parser.y"
                { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2351 "parser.c"
    break;

  case 50: /* stmt_plus: stmt_plus stmt  */
#line 168 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); }
#line 2357 "parser.c"
    break;

  case 53: /* trailer_plus: trailer  */
#line 221 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2363 "parser.c"
    break;

  case 54: /* trailer_plus: trailer_plus trailer  */
#line 222 "parser.y"
                                               { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2369 "parser.c"
    break;

  case 55: /* string_plus: STRING  */
#line 229 "parser.y"
                    { yyval = new_subtree(STRING_NODE, STR_TYPE, 0); }
#line 2375 "parser.c"
    break;

  case 56: /* string_plus: string_plus STRING  */
#line 230 "parser.y"
                                { add_child(yyvsp[-1],yyvsp[0]); yyval = yyvsp[-1]; }
#line 2381 "parser.c"
    break;

  case 68: /* program: file_input  */
#line 274 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); printf("program\n"); }
#line 2387 "parser.c"
    break;

  case 69: /* file_input: newline_or_stmt_star ENDMARKER  */
#line 279 "parser.y"
                                           { yyval = yyvsp[-1]; printf("file input\n"); }
#line 2393 "parser.c"
    break;

  case 75: /* async_funcdef: ASYNC funcdef  */
#line 293 "parser.y"
                             { yyval = yyvsp[0]; }
#line 2399 "parser.c"
    break;

  case 76: /* funcdef: DEF NAME parameters opt_arrow_test COLON opt_type_comment func_body_suite  */
#line 296 "parser.y"
                                                                                   { yyval = new_subtree(FUNCDEF_NODE, NO_TYPE, 3, new_node(FUNCNAME_NODE, 0, NO_TYPE), yyvsp[-4], yyvsp[0]); }
#line 2405 "parser.c"
    break;

  case 77: /* parameters: LPAR RPAR  */
#line 299 "parser.y"
                      { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2411 "parser.c"
    break;

  case 78: /* parameters: LPAR arguments RPAR  */
#line 300 "parser.y"
                                { yyval = yyvsp[-1]; }
#line 2417 "parser.c"
    break;

  case 79: /* arguments: argument COMMA arguments  */
#line 306 "parser.y"
                                    { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2423 "parser.c"
    break;

  case 80: /* arguments: argument  */
#line 307 "parser.y"
                    { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2429 "parser.c"
    break;

  case 81: /* argument: tfpdef EQUAL test  */
#line 310 "parser.y"
                            { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2435 "parser.c"
    break;

  case 82: /* argument: tfpdef  */
#line 311 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2441 "parser.c"
    break;

  case 83: /* tfpdef: NAME opt_colon_test  */
#line 317 "parser.y"
                            { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2447 "parser.c"
    break;

  case 84: /* stmt: simple_stmt  */
#line 322 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2453 "parser.c"
    break;

  case 85: /* stmt: compound_stmt  */
#line 323 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2459 "parser.c"
    break;

  case 86: /* simple_stmt: small_stmt opt_semi NEWLINE  */
#line 326 "parser.y"
                                         { yyval = yyvsp[-2]; }
#line 2465 "parser.c"
    break;

  case 87: /* small_stmt: expr_stmt  */
#line 329 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2471 "parser.c"
    break;

  case 88: /* small_stmt: del_stmt  */
#line 330 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2477 "parser.c"
    break;

  case 89: /* small_stmt: pass_stmt  */
#line 331 "parser.y"
                               { yyval = yyvsp[0]; }
#line 2483 "parser.c"
    break;

  case 90: /* small_stmt: flow_stmt  */
#line 332 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2489 "parser.c"
    break;

  case 91: /* small_stmt: import_stmt  */
#line 333 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2495 "parser.c"
    break;

  case 92: /* small_stmt: global_stmt  */
#line 334 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2501 "parser.c"
    break;

  case 93: /* small_stmt: nonlocal_stmt  */
#line 335 "parser.y"
                                  { yyval = yyvsp[0]; }
#line 2507 "parser.c"
    break;

  case 94: /* small_stmt: assert_stmt  */
#line 336 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2513 "parser.c"
    break;

  case 99: /* expr_stmt: testlist_star_expr assing_yield_or_test_plus opt_type_comment  */
#line 343 "parser.y"
                                                                                 { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2519 "parser.c"
    break;

  case 101: /* testlist_star_expr: test opt_comma  */
#line 349 "parser.y"
                                   { yyval = yyvsp[-1]; }
#line 2525 "parser.c"
    break;

  case 115: /* del_stmt: DEL exprlist  */
#line 369 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2531 "parser.c"
    break;

  case 116: /* pass_stmt: PASS  */
#line 372 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2537 "parser.c"
    break;

  case 117: /* flow_stmt: break_stmt  */
#line 375 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2543 "parser.c"
    break;

  case 118: /* flow_stmt: continue_stmt  */
#line 376 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2549 "parser.c"
    break;

  case 119: /* flow_stmt: return_stmt  */
#line 377 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2555 "parser.c"
    break;

  case 120: /* flow_stmt: raise_stmt  */
#line 378 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2561 "parser.c"
    break;

  case 121: /* flow_stmt: yield_stmt  */
#line 379 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2567 "parser.c"
    break;

  case 122: /* break_stmt: BREAK  */
#line 382 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2573 "parser.c"
    break;

  case 123: /* continue_stmt: CONTINUE  */
#line 385 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2579 "parser.c"
    break;

  case 124: /* return_stmt: RETURN testlist_star_expr  */
#line 388 "parser.y"
                                       { yyval = new_subtree(RETURN_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2585 "parser.c"
    break;

  case 125: /* return_stmt: RETURN  */
#line 389 "parser.y"
                    { yyval = new_node(RETURN_NODE, 0, NO_TYPE); }
#line 2591 "parser.c"
    break;

  case 132: /* import_name: IMPORT dotted_as_names  */
#line 404 "parser.y"
                                    {}
#line 2597 "parser.c"
    break;

  case 140: /* $@1: %empty  */
#line 428 "parser.y"
                     { new_var(); }
#line 2603 "parser.c"
    break;

  case 145: /* $@2: %empty  */
#line 440 "parser.y"
                   { new_var(); }
#line 2609 "parser.c"
    break;

  case 147: /* $@3: %empty  */
#line 443 "parser.y"
                         { new_var(); }
#line 2615 "parser.c"
    break;

  case 149: /* $@4: %empty  */
#line 446 "parser.y"
                             { new_var(); }
#line 2621 "parser.c"
    break;

  case 152: /* compound_stmt: if_stmt  */
#line 452 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2627 "parser.c"
    break;

  case 153: /* compound_stmt: while_stmt  */
#line 453 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2633 "parser.c"
    break;

  case 154: /* compound_stmt: for_stmt  */
#line 454 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2639 "parser.c"
    break;

  case 155: /* compound_stmt: try_stmt  */
#line 455 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2645 "parser.c"
    break;

  case 156: /* compound_stmt: with_stmt  */
#line 456 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2651 "parser.c"
    break;

  case 157: /* compound_stmt: funcdef  */
#line 457 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2657 "parser.c"
    break;

  case 158: /* compound_stmt: classdef  */
#line 458 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2663 "parser.c"
    break;

  case 159: /* compound_stmt: decorated  */
#line 459 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2669 "parser.c"
    break;

  case 160: /* compound_stmt: async_stmt  */
#line 460 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2675 "parser.c"
    break;

  case 164: /* if_stmt: IF namedexpr_test COLON suite elif_test_suite_plus opt_else_suite  */
#line 468 "parser.y"
                                                                           { yyval = new_subtree(IF_NODE, NO_TYPE, 4, yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2681 "parser.c"
    break;

  case 165: /* if_stmt: IF namedexpr_test COLON suite opt_else_suite  */
#line 469 "parser.y"
                                                      { yyval = new_subtree(IF_NODE, NO_TYPE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 2687 "parser.c"
    break;

  case 166: /* while_stmt: WHILE namedexpr_test COLON suite ELSE COLON suite  */
#line 472 "parser.y"
                                                              { yyval = new_subtree(WHILE_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2693 "parser.c"
    break;

  case 167: /* while_stmt: WHILE namedexpr_test COLON suite  */
#line 473 "parser.y"
                                             { yyval = new_subtree(WHILE_NODE, NO_TYPE, 2, yyvsp[-3], yyvsp[0]); }
#line 2699 "parser.c"
    break;

  case 168: /* for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite ELSE COLON suite  */
#line 476 "parser.y"
                                                                                 { yyval = new_subtree(FOR_NODE, NO_TYPE, 4, yyvsp[-8], yyvsp[-6], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2705 "parser.c"
    break;

  case 169: /* for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite  */
#line 477 "parser.y"
                                                                { yyval = new_subtree(FOR_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], yyvsp[0]); }
#line 2711 "parser.c"
    break;

  case 175: /* suite: simple_stmt  */
#line 493 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2717 "parser.c"
    break;

  case 176: /* suite: NEWLINE INDENT stmt_plus DEDENT  */
#line 494 "parser.y"
                                       { yyval = yyvsp[-1]; }
#line 2723 "parser.c"
    break;

  case 177: /* namedexpr_test: test  */
#line 500 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2729 "parser.c"
    break;

  case 181: /* or_test: and_test OR or_test  */
#line 521 "parser.y"
                             { yyval = new_subtree(OR_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); printf("or_test_1\n"); }
#line 2735 "parser.c"
    break;

  case 182: /* or_test: and_test  */
#line 522 "parser.y"
                  { yyval = yyvsp[0]; printf("or_test_2\n"); }
#line 2741 "parser.c"
    break;

  case 183: /* and_test: not_test AND and_test  */
#line 530 "parser.y"
                                { yyval = new_subtree(AND_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2747 "parser.c"
    break;

  case 184: /* and_test: not_test  */
#line 531 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2753 "parser.c"
    break;

  case 185: /* not_test: NOT not_test  */
#line 535 "parser.y"
                       { yyval = new_subtree(NOT_NODE, BOOL_TYPE, 1, yyvsp[0]); }
#line 2759 "parser.c"
    break;

  case 186: /* not_test: comparison  */
#line 536 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2765 "parser.c"
    break;

  case 187: /* comparison: expr LESS comparison  */
#line 539 "parser.y"
                                 { yyval = new_subtree(LESS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2771 "parser.c"
    break;

  case 188: /* comparison: expr GREATER comparison  */
#line 540 "parser.y"
                                    { yyval = new_subtree(GREATER_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2777 "parser.c"
    break;

  case 189: /* comparison: expr EQEQUAL comparison  */
#line 541 "parser.y"
                                    { yyval = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2783 "parser.c"
    break;

  case 190: /* comparison: expr GREATEREQUAL comparison  */
#line 542 "parser.y"
                                         { yyval = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2789 "parser.c"
    break;

  case 191: /* comparison: expr LESSEQUAL comparison  */
#line 543 "parser.y"
                                      { yyval = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2795 "parser.c"
    break;

  case 192: /* comparison: expr NOTEQUAL comparison  */
#line 544 "parser.y"
                                     { yyval = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2801 "parser.c"
    break;

  case 193: /* comparison: expr IN comparison  */
#line 545 "parser.y"
                               { yyval = new_subtree(IN_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2807 "parser.c"
    break;

  case 194: /* comparison: expr NOT IN comparison  */
#line 546 "parser.y"
                                   { yyval = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2813 "parser.c"
    break;

  case 195: /* comparison: expr IS comparison  */
#line 547 "parser.y"
                               { yyval = new_subtree(IS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2819 "parser.c"
    break;

  case 196: /* comparison: expr IS NOT comparison  */
#line 548 "parser.y"
                                   { yyval = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2825 "parser.c"
    break;

  case 197: /* comparison: expr  */
#line 549 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2831 "parser.c"
    break;

  case 198: /* expr: xor_expr VBAR expr  */
#line 574 "parser.y"
                         { yyval = new_subtree(BIT_OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2837 "parser.c"
    break;

  case 199: /* expr: xor_expr  */
#line 575 "parser.y"
               { yyval = yyvsp[0]; }
#line 2843 "parser.c"
    break;

  case 200: /* xor_expr: and_expr CIRCUMFLEX xor_expr  */
#line 578 "parser.y"
                                       { yyval = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2849 "parser.c"
    break;

  case 201: /* xor_expr: and_expr  */
#line 579 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2855 "parser.c"
    break;

  case 202: /* and_expr: shift_expr AMPER and_expr  */
#line 582 "parser.y"
                                    { yyval = new_subtree(BIT_AND_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2861 "parser.c"
    break;

  case 203: /* and_expr: shift_expr  */
#line 583 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2867 "parser.c"
    break;

  case 204: /* shift_expr: arith_expr LEFTSHIFT shift_expr  */
#line 586 "parser.y"
                                            { yyval = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2873 "parser.c"
    break;

  case 205: /* shift_expr: arith_expr RIGHTSHIFT shift_expr  */
#line 587 "parser.y"
                                             { yyval = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2879 "parser.c"
    break;

  case 206: /* shift_expr: arith_expr  */
#line 588 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2885 "parser.c"
    break;

  case 207: /* arith_expr: term PLUS arith_expr  */
#line 591 "parser.y"
                                 { yyval = new_subtree(PLUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2891 "parser.c"
    break;

  case 208: /* arith_expr: term MINUS arith_expr  */
#line 592 "parser.y"
                                  { yyval = new_subtree(MINUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2897 "parser.c"
    break;

  case 209: /* arith_expr: term  */
#line 593 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2903 "parser.c"
    break;

  case 210: /* term: factor STAR term  */
#line 596 "parser.y"
                       { yyval = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2909 "parser.c"
    break;

  case 211: /* term: factor AT term  */
#line 597 "parser.y"
                     { yyval = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2915 "parser.c"
    break;

  case 212: /* term: factor SLASH term  */
#line 598 "parser.y"
                        { yyval = new_subtree(DIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2921 "parser.c"
    break;

  case 213: /* term: factor PERCENT term  */
#line 599 "parser.y"
                          { yyval = new_subtree(MOD_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2927 "parser.c"
    break;

  case 214: /* term: factor DOUBLESLASH term  */
#line 600 "parser.y"
                              { yyval = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2933 "parser.c"
    break;

  case 215: /* term: factor  */
#line 601 "parser.y"
             { yyval = yyvsp[0]; }
#line 2939 "parser.c"
    break;

  case 216: /* factor: PLUS factor  */
#line 604 "parser.y"
                    { yyval = new_subtree(PLUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2945 "parser.c"
    break;

  case 217: /* factor: MINUS factor  */
#line 605 "parser.y"
                     { yyval = new_subtree(MINUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2951 "parser.c"
    break;

  case 218: /* factor: TILDE factor  */
#line 606 "parser.y"
                     { yyval = new_subtree(TILDE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2957 "parser.c"
    break;

  case 219: /* factor: power  */
#line 607 "parser.y"
              { yyval = yyvsp[0]; }
#line 2963 "parser.c"
    break;

  case 220: /* power: atom_expr  */
#line 610 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2969 "parser.c"
    break;

  case 221: /* power: atom_expr DOUBLESTAR factor  */
#line 611 "parser.y"
                                   { yyval = new_subtree(POWER_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2975 "parser.c"
    break;

  case 222: /* atom_expr: opt_await atom trailer_plus  */
#line 614 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2981 "parser.c"
    break;

  case 223: /* atom_expr: opt_await atom  */
#line 615 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2987 "parser.c"
    break;

  case 224: /* atom: LPAR RPAR  */
#line 621 "parser.y"
                { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2993 "parser.c"
    break;

  case 225: /* atom: LPAR yield_expr RPAR  */
#line 622 "parser.y"
                           { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2999 "parser.c"
    break;

  case 226: /* atom: LPAR testlist_comp RPAR  */
#line 623 "parser.y"
                              { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3005 "parser.c"
    break;

  case 227: /* atom: LSQB RSQB  */
#line 624 "parser.y"
                { yyval = new_node(LIST_NODE, 0, NO_TYPE); }
#line 3011 "parser.c"
    break;

  case 228: /* atom: LSQB subscriptlist RSQB  */
#line 626 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 3017 "parser.c"
    break;

  case 229: /* atom: LBRACE RBRACE  */
#line 627 "parser.y"
                    { yyval = new_node(DICT_NODE, 0, NO_TYPE); }
#line 3023 "parser.c"
    break;

  case 230: /* atom: LBRACE dictorsetmaker RBRACE  */
#line 628 "parser.y"
                                   { yyval = new_subtree(DICT_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3029 "parser.c"
    break;

  case 231: /* atom: NAME  */
#line 629 "parser.y"
           { printf("name: %s\n", names_list.last_text[position++]); yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 3035 "parser.c"
    break;

  case 232: /* atom: NUMBER  */
#line 630 "parser.y"
             { yyval = new_node(NUMBER_NODE, 0, NO_TYPE); }
#line 3041 "parser.c"
    break;

  case 233: /* atom: string_plus  */
#line 631 "parser.y"
                  { yyval = yyvsp[0]; }
#line 3047 "parser.c"
    break;

  case 234: /* atom: ELLIPSIS  */
#line 632 "parser.y"
               { yyval = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
#line 3053 "parser.c"
    break;

  case 235: /* atom: NONE  */
#line 633 "parser.y"
           { yyval = new_node(NONE_NODE, 0, NO_TYPE); }
#line 3059 "parser.c"
    break;

  case 236: /* atom: TRUE  */
#line 634 "parser.y"
           { yyval = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
#line 3065 "parser.c"
    break;

  case 237: /* atom: FALSE  */
#line 635 "parser.y"
            { yyval = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
#line 3071 "parser.c"
    break;

  case 239: /* testlist_comp: testlist  */
#line 647 "parser.y"
                        { yyval = yyvsp[0]; }
#line 3077 "parser.c"
    break;

  case 240: /* trailer: LPAR RPAR  */
#line 651 "parser.y"
                   { yyval = new_node(ARGLIST_NODE, 0, NO_TYPE); }
#line 3083 "parser.c"
    break;

  case 241: /* trailer: LPAR arglist RPAR  */
#line 652 "parser.y"
                           { yyval = yyvsp[-1]; }
#line 3089 "parser.c"
    break;

  case 242: /* trailer: LSQB subscriptlist RSQB  */
#line 653 "parser.y"
                                 { yyval = yyvsp[-1]; }
#line 3095 "parser.c"
    break;

  case 243: /* trailer: DOT NAME  */
#line 654 "parser.y"
                  { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 3101 "parser.c"
    break;

  case 244: /* subscriptlist: subscript COMMA subscriptlist  */
#line 659 "parser.y"
                                             { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; printf("Adiciona comma subscript\n");}
#line 3107 "parser.c"
    break;

  case 245: /* subscriptlist: subscript opt_comma  */
#line 660 "parser.y"
                                   { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); printf("Fecha recursão subscript"); }
#line 3113 "parser.c"
    break;

  case 249: /* exprlist: expr COMMA exprlist  */
#line 673 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3119 "parser.c"
    break;

  case 250: /* exprlist: expr opt_comma  */
#line 674 "parser.y"
                         { yyval = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3125 "parser.c"
    break;

  case 251: /* testlist: test COMMA testlist  */
#line 680 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3131 "parser.c"
    break;

  case 252: /* testlist: test opt_comma  */
#line 681 "parser.y"
                         { yyval = new_subtree(TESTLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3137 "parser.c"
    break;

  case 261: /* $@5: %empty  */
#line 701 "parser.y"
                     { new_var(); }
#line 3143 "parser.c"
    break;

  case 263: /* arglist: argument1 COMMA arglist  */
#line 707 "parser.y"
                                 { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3149 "parser.c"
    break;

  case 264: /* arglist: argument1 opt_comma  */
#line 708 "parser.y"
                             { yyval = new_subtree(ARGLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3155 "parser.c"
    break;

  case 283: /* func_body_suite: simple_stmt  */
#line 743 "parser.y"
                             { yyval = yyvsp[0]; }
#line 3161 "parser.c"
    break;

  case 284: /* func_body_suite: NEWLINE INDENT stmt_plus DEDENT  */
#line 744 "parser.y"
                                                 { yyval = yyvsp[-1]; }
#line 3167 "parser.c"
    break;

  case 285: /* func_body_suite: NEWLINE TYPE_COMMENT NEWLINE INDENT stmt_plus DEDENT  */
#line 745 "parser.y"
                                                                      { yyval = yyvsp[-1]; }
#line 3173 "parser.c"
    break;


#line 3177 "parser.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
  }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 748 "parser.y"


void check_var(char* rule_name) {
    // printf("Regra: %s\n", rule_name);
    // printf("variable '%s'\n", yytext);
    // int idx = lookup_var(vt, yytext);
    // if (idx == -1) {
    //     print_str_table(st);
    //     print_var_table(vt);
    //     printf("SEMANTIC ERROR (%d): variable '%s' was not declared.\n",
    //             yylineno, yytext);
    //     exit(EXIT_FAILURE);
    // }
}

void new_var() {
    int idx = lookup_var(vt, yytext);
    printf("Chegueeei %s\n",yytext);
    if (idx != -1) {
        printf("SEMANTIC ERROR (%d): variable '%s' already declared at line %d.\n",
                yylineno, yytext, get_line(vt, idx));
        exit(EXIT_FAILURE);
    }
    add_var(vt, yytext, yylineno, NO_TYPE);
}

// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

int main() {
    st = create_str_table();
    vt = create_var_table();
    
    yydebug = 0;
    lex_init();
    yyparse();
    printf("PARSE SUCCESSFUL!\n");

    print_dot(root);

    print_str_table(st);
    print_var_table(vt);

    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}

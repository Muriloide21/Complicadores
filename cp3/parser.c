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
#line 11 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "tables.h"
#include "ast.h"
#include "parser.h"
#include "string.h"

#define CHILDREN_LIMIT 20

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

extern char *yytext;
extern int yylineno;
extern mdl names_list;
extern mdl numbers_list;
extern mdl bool_list;

int position = 0;
int position_f = 0;
int position_numbers = 0;
int position_boolean = 0;

StrTable *st;
VarTable *vt;
AST *root;

int builtin_funcs_n = 16;
char **builtin_funcs = (char *[]){"print","input","abs","float","len","int","max","min","pow","range","round","slice","str","tuple","type"};


#line 112 "parser.c"

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
  YYSYMBOL_opt_test = 118,                 /* opt_test  */
  YYSYMBOL_opt_sliceop = 119,              /* opt_sliceop  */
  YYSYMBOL_comma_dict1_star = 120,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 121,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 122,        /* opt_finally_suite  */
  YYSYMBOL_program = 123,                  /* program  */
  YYSYMBOL_file_input = 124,               /* file_input  */
  YYSYMBOL_decorator = 125,                /* decorator  */
  YYSYMBOL_decorators = 126,               /* decorators  */
  YYSYMBOL_decorated = 127,                /* decorated  */
  YYSYMBOL_async_funcdef = 128,            /* async_funcdef  */
  YYSYMBOL_funcdef = 129,                  /* funcdef  */
  YYSYMBOL_parameters = 130,               /* parameters  */
  YYSYMBOL_arguments = 131,                /* arguments  */
  YYSYMBOL_argument = 132,                 /* argument  */
  YYSYMBOL_tfpdef = 133,                   /* tfpdef  */
  YYSYMBOL_stmt = 134,                     /* stmt  */
  YYSYMBOL_simple_stmt = 135,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 136,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 137,                /* expr_stmt  */
  YYSYMBOL_annassign = 138,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 139,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 140,                /* augassign  */
  YYSYMBOL_del_stmt = 141,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 142,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 143,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 144,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 145,            /* continue_stmt  */
  YYSYMBOL_return_stmt = 146,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 147,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 148,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 149,              /* import_stmt  */
  YYSYMBOL_import_name = 150,              /* import_name  */
  YYSYMBOL_import_from = 151,              /* import_from  */
  YYSYMBOL_from_part = 152,                /* from_part  */
  YYSYMBOL_import_part = 153,              /* import_part  */
  YYSYMBOL_import_as_name = 154,           /* import_as_name  */
  YYSYMBOL_dotted_as_name = 155,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 156,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 157,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 158,              /* dotted_name  */
  YYSYMBOL_global_stmt = 159,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 160,            /* nonlocal_stmt  */
  YYSYMBOL_assert_stmt = 161,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 162,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 163,               /* async_stmt  */
  YYSYMBOL_if_stmt = 164,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 165,               /* while_stmt  */
  YYSYMBOL_for_stmt = 166,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 167,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 168,                /* with_stmt  */
  YYSYMBOL_with_item = 169,                /* with_item  */
  YYSYMBOL_except_clause = 170,            /* except_clause  */
  YYSYMBOL_suite = 171,                    /* suite  */
  YYSYMBOL_namedexpr_test = 172,           /* namedexpr_test  */
  YYSYMBOL_test = 173,                     /* test  */
  YYSYMBOL_test_nocond = 174,              /* test_nocond  */
  YYSYMBOL_or_test = 175,                  /* or_test  */
  YYSYMBOL_and_test = 176,                 /* and_test  */
  YYSYMBOL_not_test = 177,                 /* not_test  */
  YYSYMBOL_comparison = 178,               /* comparison  */
  YYSYMBOL_expr = 179,                     /* expr  */
  YYSYMBOL_xor_expr = 180,                 /* xor_expr  */
  YYSYMBOL_and_expr = 181,                 /* and_expr  */
  YYSYMBOL_shift_expr = 182,               /* shift_expr  */
  YYSYMBOL_arith_expr = 183,               /* arith_expr  */
  YYSYMBOL_term = 184,                     /* term  */
  YYSYMBOL_factor = 185,                   /* factor  */
  YYSYMBOL_power = 186,                    /* power  */
  YYSYMBOL_atom_expr = 187,                /* atom_expr  */
  YYSYMBOL_atom = 188,                     /* atom  */
  YYSYMBOL_testlist_comp = 189,            /* testlist_comp  */
  YYSYMBOL_trailer = 190,                  /* trailer  */
  YYSYMBOL_subscriptlist = 191,            /* subscriptlist  */
  YYSYMBOL_subscript = 192,                /* subscript  */
  YYSYMBOL_sliceop = 193,                  /* sliceop  */
  YYSYMBOL_exprlist = 194,                 /* exprlist  */
  YYSYMBOL_testlist = 195,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 196,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 197,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 198,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 199,                 /* classdef  */
  YYSYMBOL_arglist = 200,                  /* arglist  */
  YYSYMBOL_argument1 = 201,                /* argument1  */
  YYSYMBOL_comp_iter = 202,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 203,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 204,                 /* comp_for  */
  YYSYMBOL_comp_if = 205,                  /* comp_if  */
  YYSYMBOL_yield_expr = 206,               /* yield_expr  */
  YYSYMBOL_yield_arg = 207,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 208           /* func_body_suite  */
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
#define YYLAST   859

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  458

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
       0,    63,    63,    64,    65,    68,    69,    70,    73,    74,
      77,    78,    81,    82,    93,    94,    97,    98,   106,   107,
     110,   111,   112,   113,   116,   117,   118,   131,   132,   135,
     136,   139,   140,   143,   144,   147,   148,   151,   152,   155,
     156,   163,   164,   167,   168,   171,   172,   175,   176,   179,
     180,   229,   230,   233,   234,   254,   255,   258,   259,   271,
     272,   273,   276,   277,   280,   281,   286,   291,   294,   297,
     300,   301,   302,   305,   308,   311,   312,   318,   319,   322,
     323,   329,   334,   335,   338,   341,   342,   343,   344,   345,
     346,   347,   348,   351,   352,   353,   354,   355,   358,   361,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   381,   384,   387,   388,   389,   390,   391,
     394,   397,   400,   401,   404,   407,   408,   409,   412,   413,
     416,   419,   430,   431,   432,   435,   436,   437,   440,   443,
     446,   449,   452,   455,   458,   461,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   475,   476,   477,   480,   481,
     484,   485,   488,   489,   492,   493,   496,   499,   502,   505,
     506,   512,   515,   516,   520,   533,   534,   542,   543,   547,
     548,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   586,   587,   590,   591,   594,   595,   598,   599,
     600,   603,   604,   605,   608,   609,   610,   611,   612,   613,
     616,   617,   618,   619,   622,   623,   626,   627,   633,   634,
     635,   636,   638,   639,   640,   641,   642,   644,   645,   646,
     647,   648,   657,   658,   662,   663,   664,   665,   670,   671,
     674,   675,   678,   684,   685,   691,   692,   695,   696,   699,
     700,   701,   702,   705,   706,   712,   718,   719,   722,   723,
     724,   725,   726,   727,   730,   731,   734,   735,   738,   739,
     742,   743,   746,   747,   750,   751,   754,   755,   756
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
  "trailer_plus", "opt_test", "opt_sliceop", "comma_dict1_star",
  "except_suite_plus", "opt_finally_suite", "program", "file_input",
  "decorator", "decorators", "decorated", "async_funcdef", "funcdef",
  "parameters", "arguments", "argument", "tfpdef", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "annassign", "testlist_star_expr",
  "augassign", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "dotted_as_name", "import_as_names", "dotted_as_names",
  "dotted_name", "global_stmt", "nonlocal_stmt", "assert_stmt",
  "compound_stmt", "async_stmt", "if_stmt", "while_stmt", "for_stmt",
  "try_stmt", "with_stmt", "with_item", "except_clause", "suite",
  "namedexpr_test", "test", "test_nocond", "or_test", "and_test",
  "not_test", "comparison", "expr", "xor_expr", "and_expr", "shift_expr",
  "arith_expr", "term", "factor", "power", "atom_expr", "atom",
  "testlist_comp", "trailer", "subscriptlist", "subscript", "sliceop",
  "exprlist", "testlist", "dictorsetmaker", "dictorsetmaker1",
  "dictorsetmaker2", "classdef", "arglist", "argument1", "comp_iter",
  "sync_comp_for", "comp_for", "comp_if", "yield_expr", "yield_arg",
  "func_body_suite", YY_NULLPTR
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

#define YYPACT_NINF (-390)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-273)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -390,   326,    31,  -390,  -390,   411,    33,    77,  -390,  -390,
      84,  -390,    87,    23,    23,    11,    90,   411,    77,    23,
    -390,   115,   411,  -390,    23,   187,   421,    23,    59,   411,
     411,   175,    70,   588,  -390,   192,  -390,  -390,  -390,  -390,
      88,  -390,    74,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,   158,   133,   117,   188,  -390,   762,
     132,   128,   195,    48,    95,    44,  -390,   183,  -390,  -390,
    -390,   206,  -390,  -390,  -390,  -390,   176,   176,   184,   216,
    -390,   208,  -390,  -390,   201,  -390,  -390,   232,  -390,  -390,
    -390,   247,  -390,  -390,  -390,  -390,   223,  -390,  -390,   709,
    -390,   255,   250,   411,  -390,  -390,  -390,  -390,  -390,   155,
     261,    20,  -390,  -390,  -390,  -390,  -390,   111,   246,  -390,
    -390,  -390,  -390,   212,  -390,    91,  -390,   411,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,    10,
    -390,    91,  -390,  -390,   411,   411,   411,    23,    23,    23,
      23,   562,    23,    23,    23,   229,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,   411,
    -390,   249,   136,   218,   263,    72,   271,   350,  -390,   411,
       7,   262,   709,   272,   234,  -390,   262,   411,   248,  -390,
      26,    53,    23,  -390,   709,  -390,  -390,   279,   287,   236,
     290,    23,  -390,   120,   237,  -390,  -390,  -390,   127,    39,
     239,  -390,   242,   264,   443,   177,   111,  -390,  -390,  -390,
    -390,  -390,   301,    91,  -390,  -390,   299,  -390,  -390,   289,
    -390,  -390,  -390,  -390,  -390,  -390,    23,  -390,  -390,  -390,
    -390,    23,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,   267,   411,  -390,   411,
      55,   244,   305,  -390,   709,   308,  -390,   253,   312,   334,
     411,   330,  -390,   333,   296,   247,  -390,  -390,  -390,  -390,
     297,   138,    77,  -390,  -390,   673,   520,   337,    28,   338,
     273,   411,  -390,   339,    24,  -390,   493,  -390,   127,   327,
     411,    23,  -390,  -390,  -390,  -390,   416,  -390,  -390,  -390,
    -390,   294,  -390,   298,  -390,    91,  -390,  -390,  -390,   411,
    -390,  -390,  -390,  -390,  -390,   411,   411,  -390,  -390,   342,
    -390,  -390,   411,  -390,  -390,   316,   411,  -390,   273,   273,
     300,  -390,   355,  -390,   411,   359,   200,  -390,  -390,   427,
    -390,  -390,   247,   709,   341,   361,   709,   709,  -390,   362,
     364,  -390,  -390,   363,  -390,  -390,   127,   340,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
     767,   709,  -390,   296,  -390,   368,   709,   411,  -390,  -390,
    -390,  -390,  -390,   371,  -390,   709,  -390,  -390,   709,   228,
    -390,  -390,   495,  -390,   363,  -390,   411,    -4,  -390,  -390,
     358,  -390,   709,  -390,   374,   709,  -390,  -390,  -390,    23,
     381,  -390,    68,   673,   343,   382,  -390,   709,  -390,  -390,
     411,   411,  -390,  -390,  -390,   509,   369,   709,  -390,  -390,
      68,  -390,  -390,   673,  -390,  -390,   591,  -390
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    51,     0,    66,    67,    51,     0,     0,    52,   120,
       0,   121,     0,    51,    51,     0,     0,    51,     0,    51,
       3,     0,    51,   114,    51,    51,    51,    51,     0,    51,
      51,    51,    69,     0,     8,     0,   153,   151,     4,    82,
      18,    85,    96,    86,    87,    88,   115,   116,   117,   119,
     118,    89,   128,   129,    90,    91,    92,    83,   154,   146,
     147,   148,   149,   150,    14,   172,   176,   178,   180,   191,
     193,   195,   197,   200,   203,   209,   213,   214,   152,   124,
       1,    37,   155,   157,   156,    33,     5,     5,     0,    14,
     113,     0,   132,   133,     0,   134,    35,     0,   171,    31,
     130,    27,   211,    35,   179,   210,   126,   122,   212,    51,
      43,    45,     0,    51,   275,   273,     9,   228,   231,    51,
      51,    51,   225,   229,   226,   227,   230,   217,     0,    72,
      71,    70,    19,     0,   106,    51,   103,    51,   112,   111,
     109,   101,   107,   105,   100,   110,   104,   102,   108,    12,
      93,    51,    15,    99,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,     0,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
     145,   142,    51,     0,     0,     0,    10,    51,   244,    51,
       0,   143,    51,   141,     0,   139,   144,    51,     0,   169,
       0,     0,    51,   167,    51,   274,   221,     0,   240,     0,
      14,    51,   223,   254,     0,   247,   248,   218,     0,   171,
       0,   233,     0,     0,    51,    51,   216,    53,    73,    84,
      21,    20,    24,    51,    13,    97,    14,    95,    94,     0,
     175,   177,   183,   184,   182,   187,    51,   189,   185,   181,
     186,    51,   192,   194,   196,   198,   199,   202,   201,   205,
     208,   207,   206,   204,   215,    38,     0,    51,     6,    51,
     258,     0,    14,    68,    51,    16,    75,     0,    78,    80,
      51,     0,   243,     0,     0,    27,   135,   131,    29,   137,
       0,    41,     0,    28,   127,    51,    51,     0,    41,     0,
      12,    51,    46,   161,    51,   222,    51,   239,    59,     0,
      51,    51,   268,   253,   224,   232,    51,   246,   220,   219,
     237,     0,   234,     0,    54,    51,    98,    23,    22,    51,
     190,   188,    34,   262,   263,    51,    51,   259,     7,    51,
     257,   255,    51,    81,    76,     0,    51,    11,    12,    12,
       0,   138,    14,    36,    51,     0,    41,   159,    32,    51,
      49,   168,    27,    51,    64,     0,    51,    51,    44,     0,
      57,    56,   238,    14,   251,   269,    59,     0,   245,   236,
     235,    26,    25,   173,   261,   260,   256,    17,    77,    79,
      51,    51,   136,    15,   140,     0,    51,    51,   158,   170,
      50,    48,   165,     0,   164,    51,    62,   166,    51,    51,
     241,    58,    51,   252,    14,   249,    51,     0,   276,    74,
     163,    30,    51,    42,     0,    51,    63,   160,   242,    51,
       0,   250,   266,    51,     0,     0,    39,    51,    65,    61,
      51,    51,   267,   264,   265,    51,     0,    51,    40,    60,
     270,   174,   277,    51,   162,   271,    51,   278
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -390,  -390,   315,  -390,  -390,  -229,   -57,  -390,  -390,  -390,
    -390,  -264,  -390,  -390,  -390,   302,  -390,  -390,  -270,  -390,
    -390,  -390,  -389,  -390,  -390,  -287,  -390,    40,  -390,  -390,
    -390,  -390,   375,  -390,  -390,  -390,     4,  -390,    76,  -390,
    -390,     0,    -1,  -390,  -390,  -390,   -20,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,    29,   135,   140,  -390,   152,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,   423,  -390,   425,   139,   148,  -168,   -27,
      -3,  -390,  -142,   295,   431,  -110,    -9,   291,   286,    18,
      35,   110,     6,  -390,  -390,  -390,  -390,   233,  -205,  -390,
    -390,    -5,  -143,  -390,  -390,  -390,   426,  -209,  -390,    13,
     162,  -195,  -390,  -106,  -390,  -390
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   183,    32,   281,   235,   317,   343,   133,   149,
     326,   195,   352,   193,   181,   191,   180,   356,   357,   201,
     203,   361,   359,    33,   226,   207,   410,   373,   298,   404,
       2,     3,    34,    35,    36,   129,    37,   186,   277,   278,
     279,   360,   199,    40,    41,   150,    42,   151,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    94,
     287,   288,    99,   289,   100,   101,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   110,   299,   200,    97,
      64,   450,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   127,   220,   227,   209,   210,
     411,    90,   221,   214,   215,   216,    78,   271,   272,   442,
     312,   443,   444,    79,   115,   419
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    38,    81,   112,    89,    89,   107,   153,   237,    91,
      82,   114,   239,   240,    98,   222,   323,   370,   313,   321,
     233,   351,   106,   315,   291,   102,   111,    98,   364,   231,
     105,    80,   188,   108,     8,    92,   303,     8,     8,   130,
     433,   -55,    93,   -55,   445,   238,   283,   242,   243,   244,
     245,   247,   248,   249,   250,    12,   173,   284,   316,   296,
     355,   296,   297,   285,   456,   335,   309,    85,    14,   174,
     300,   367,   301,   336,    19,   337,   109,    19,    19,   309,
     134,    22,     7,   434,   135,    22,   398,   136,   286,    24,
     311,   137,    24,    24,   218,   217,   -55,   234,   401,   169,
     138,   372,   139,   311,    27,     8,   341,    27,    27,   441,
     205,   175,    31,   374,   -14,   230,   208,   213,   219,   390,
     391,    29,   428,   176,   170,   177,   140,   328,   275,   141,
     386,   309,   228,    85,   232,   223,   330,   310,   309,   142,
      87,   331,   143,    88,   144,    19,    96,   276,   236,   171,
       8,   145,    22,   307,   146,   311,   147,   252,   224,    86,
      24,   225,   311,   267,   172,   148,   132,    95,   354,     8,
     355,   103,   -55,   378,   154,    27,   265,   152,    89,   270,
     155,   415,   282,    31,   264,  -272,   236,   255,   256,     8,
      19,     8,   156,   302,   294,   402,   166,    22,   406,   407,
     168,     8,   308,   128,   267,    24,   257,   258,    10,    19,
     178,   268,   113,   327,    12,   340,    22,   269,   167,   382,
      27,   208,   270,   420,    24,   179,   182,   206,   423,    19,
     397,    19,   355,  -272,   185,   187,    22,   426,    22,    27,
     427,    19,     8,   190,    24,  -125,    24,   -55,    22,   192,
    -272,   189,   322,  -272,   436,   194,    24,   438,   269,    27,
     197,    27,  -272,   202,   333,  -125,   334,   204,    12,   448,
     229,    27,   251,   266,   432,     8,   273,   347,   280,   454,
     274,   290,    19,   259,   260,   261,   262,   263,   211,    22,
     293,   292,   295,   362,    39,   394,   304,    24,   111,   451,
     -55,   371,    89,   208,   -56,   381,   377,   376,   305,   306,
     314,   325,    27,   236,   318,    19,   413,   319,   316,   338,
     320,   329,    22,   332,   339,   342,   383,   395,   344,     4,
      24,   345,   384,   385,   212,     5,   270,     6,     7,   387,
       8,     9,    10,   389,   346,    27,    11,   348,    12,    13,
     349,    98,   285,   353,   363,   366,     8,   431,    39,   400,
     234,    14,   311,    15,     8,    16,   379,    17,    18,   267,
     424,   369,   275,   380,   393,   392,   396,   403,   405,   408,
      19,   409,   412,   416,    20,   422,    21,    22,   425,   418,
     435,   437,    23,   -15,    98,    24,    19,    25,   440,   447,
      26,   446,   184,    22,    19,   196,   371,   116,   -15,   430,
      27,    24,    28,   453,    29,    30,   414,   -15,    31,    24,
     439,   388,   421,   269,   350,     8,    27,   358,   -15,    83,
       8,    84,    39,   -15,    27,     8,     5,   449,     6,     7,
     368,     8,     9,    10,    39,   400,   365,    11,   399,    12,
      13,   241,    39,   104,   254,    39,   400,     8,   253,   324,
     -55,   131,    14,   455,    15,    19,    16,     0,    17,    18,
      19,   375,    22,     0,   -15,    19,     0,    22,     0,  -123,
      24,    19,    22,     0,     0,    24,     0,    21,    22,     0,
      24,   -15,     0,    23,   -15,    27,    24,    19,    25,  -123,
      27,    26,     0,     0,    22,    27,     0,     8,     0,     8,
     -55,    27,    24,    28,     0,    29,    30,     0,     5,    31,
       6,     7,   429,     8,     9,    10,     0,    27,     0,    11,
     452,    12,    13,     0,     8,     0,     0,   -47,     0,     0,
       0,     0,     0,     0,    14,     0,    15,    19,    16,    19,
      17,    18,     0,     0,    22,     0,    22,     0,     0,     0,
       0,     0,    24,    19,    24,   -15,     0,     0,   -15,    21,
      22,     0,     0,     0,    19,    23,     8,    27,    24,    27,
      25,    22,     0,    26,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    27,     0,    28,     0,    29,    30,     0,
       5,    31,     6,     7,    27,     8,     9,    10,     0,     0,
       0,    11,   457,    12,    13,     0,    19,     0,     0,   117,
       0,     0,   118,   246,     0,     0,    14,     0,    15,     0,
      16,    24,    17,    18,     0,   119,   120,     0,   121,     0,
       0,     0,     0,     0,   122,    19,    27,   123,     0,     0,
     124,    21,    22,     0,     0,     0,     0,    23,     0,     0,
      24,     0,    25,     0,     0,    26,     0,     0,     0,     0,
       0,   125,     0,   126,     0,    27,     0,    28,     0,    29,
      30,     0,     5,    31,     6,     7,     0,     8,     9,    10,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,     0,    16,     0,    17,    18,     0,     0,     5,     0,
       0,     0,     0,     8,     9,     0,     0,    19,     0,    11,
       0,     0,    13,    21,    22,     0,     0,     0,     0,    23,
       0,     0,    24,     0,    25,     0,    15,    26,    16,     0,
       0,    18,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    19,     0,    31,     0,   198,     0,    21,
      22,     0,     0,     0,     0,    23,     5,     0,    24,     0,
      25,     8,     9,    26,     0,     0,     0,    11,     0,     0,
      13,   157,     0,    27,     0,     0,     0,     0,     0,     0,
     158,    31,   159,     0,    15,   160,    16,   161,     0,    18,
       0,   162,     0,     0,     0,   163,     0,     0,     0,   164,
       0,    19,     0,   165,     0,   417,     0,    21,    22,     0,
       0,     0,     0,    23,     0,     0,    24,     0,    25,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    30,    13,    14,    26,    64,   151,    14,
       6,    31,   154,   155,    17,   121,   225,   304,   213,   224,
      10,   285,    25,   218,   192,    19,    29,    30,   298,   135,
      24,     0,    89,    27,    14,    24,   204,    14,    14,    35,
      44,    17,    31,    19,   433,   151,   189,   157,   158,   159,
     160,   161,   162,   163,   164,    22,    12,    50,    19,    33,
      32,    33,    36,    56,   453,    10,    11,    56,    35,    25,
      17,   300,    19,    18,    54,   270,    17,    54,    54,    11,
       6,    61,    12,    87,    10,    61,   356,    13,    81,    69,
      35,    17,    69,    69,   121,    75,    72,    87,   362,    51,
      26,   306,    28,    35,    84,    14,   274,    84,    84,    41,
     113,    67,    92,   308,    75,   135,   119,   120,   121,   348,
     349,    88,   409,    79,    76,    81,    52,   233,    56,    55,
     339,    11,   128,    56,   137,    24,   246,    17,    11,    65,
      56,   251,    68,    56,    70,    54,    56,    75,   151,    54,
      14,    77,    61,   210,    80,    35,    82,   166,    47,     7,
      69,    50,    35,    27,    69,    91,    78,    15,    30,    14,
      32,    56,    17,   316,    41,    84,   179,    19,   187,   182,
      63,   376,   187,    92,   178,    10,   189,   169,   170,    14,
      54,    14,     4,   202,   197,   363,    64,    61,   366,   367,
       5,    14,   211,    11,    27,    69,   171,   172,    16,    54,
      27,    75,    37,   233,    22,   272,    61,    81,    90,   325,
      84,   224,   225,   391,    69,    19,    50,    72,   396,    54,
      30,    54,    32,    58,    50,    19,    61,   405,    61,    84,
     408,    54,    14,    42,    69,    58,    69,    19,    61,    17,
      75,    43,    75,    78,   422,     8,    69,   425,    81,    84,
      37,    84,    87,     8,   267,    78,   269,    17,    22,   437,
      58,    84,    43,    24,   416,    14,    58,   280,     7,   447,
      17,    19,    54,   173,   174,   175,   176,   177,    27,    61,
      56,    19,    44,   296,   295,   352,    17,    69,   301,   441,
      72,   304,   311,   306,    17,   325,   311,   310,    72,    19,
      73,    10,    84,   316,    75,    54,   373,    75,    19,    75,
      56,    32,    61,    56,    19,    17,   329,   354,    75,     3,
      69,    19,   335,   336,    73,     9,   339,    11,    12,   342,
      14,    15,    16,   346,    10,    84,    20,    17,    22,    23,
      17,   354,    56,    56,    17,    17,    14,   414,   359,   359,
      87,    35,    35,    37,    14,    39,    72,    41,    42,    27,
     397,    32,    56,    75,    19,    75,    17,    36,    17,    17,
      54,    17,    19,    43,    58,    17,    60,    61,    17,   390,
      32,    17,    66,    43,   397,    69,    54,    71,    17,    17,
      74,    58,    87,    61,    54,   103,   409,    32,    58,   412,
      84,    69,    86,    44,    88,    89,   376,    75,    92,    69,
     429,   345,   393,    81,   284,    14,    84,   292,    78,     6,
      14,     6,   433,    17,    84,    14,     9,   440,    11,    12,
     301,    14,    15,    16,   445,   445,   298,    20,    21,    22,
      23,   156,   453,    22,   168,   456,   456,    14,   167,   226,
      17,    35,    35,   450,    37,    54,    39,    -1,    41,    42,
      54,   309,    61,    -1,    58,    54,    -1,    61,    -1,    58,
      69,    54,    61,    -1,    -1,    69,    -1,    60,    61,    -1,
      69,    75,    -1,    66,    78,    84,    69,    54,    71,    78,
      84,    74,    -1,    -1,    61,    84,    -1,    14,    -1,    14,
      17,    84,    69,    86,    -1,    88,    89,    -1,     9,    92,
      11,    12,    27,    14,    15,    16,    -1,    84,    -1,    20,
      21,    22,    23,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    54,    39,    54,
      41,    42,    -1,    -1,    61,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    69,    54,    69,    72,    -1,    -1,    73,    60,
      61,    -1,    -1,    -1,    54,    66,    14,    84,    69,    84,
      71,    61,    -1,    74,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,
       9,    92,    11,    12,    84,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    54,    -1,    -1,    31,
      -1,    -1,    34,    61,    -1,    -1,    35,    -1,    37,    -1,
      39,    69,    41,    42,    -1,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    54,    84,    59,    -1,    -1,
      62,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    84,    -1,    86,    -1,    88,
      89,    -1,     9,    92,    11,    12,    -1,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    14,    15,    -1,    -1,    54,    -1,    20,
      -1,    -1,    23,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    71,    -1,    37,    74,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    88,    89,    54,    -1,    92,    -1,    58,    -1,    60,
      61,    -1,    -1,    -1,    -1,    66,     9,    -1,    69,    -1,
      71,    14,    15,    74,    -1,    -1,    -1,    20,    -1,    -1,
      23,    29,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    92,    40,    -1,    37,    43,    39,    45,    -1,    42,
      -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,
      -1,    54,    -1,    61,    -1,    58,    -1,    60,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   123,   124,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    54,
      58,    60,    61,    66,    69,    71,    74,    84,    86,    88,
      89,    92,    96,   116,   125,   126,   127,   129,   134,   135,
     136,   137,   139,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   173,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   199,   206,
       0,   173,   129,   166,   168,    56,   158,    56,    56,   179,
     194,   194,    24,    31,   152,   158,    56,   172,   173,   155,
     157,   158,   185,    56,   177,   185,   173,   139,   185,    17,
     169,   173,   172,    37,   139,   207,   125,    31,    34,    47,
      48,    50,    56,    59,    62,    83,    85,   188,    11,   128,
     129,   199,    78,   101,     6,    10,    13,    17,    26,    28,
      52,    55,    65,    68,    70,    77,    80,    82,    91,   102,
     138,   140,    19,    99,    41,    63,     4,    29,    38,    40,
      43,    45,    49,    53,    57,    61,    64,    90,     5,    51,
      76,    54,    69,    12,    25,    67,    79,    81,    27,    19,
     109,   107,    50,    95,    95,    50,   130,    19,    99,    43,
      42,   108,    17,   106,     8,   104,   108,    37,    58,   135,
     171,   112,     8,   113,    17,   173,    72,   118,   173,   191,
     192,    27,    73,   173,   196,   197,   198,    75,   172,   173,
     189,   195,   206,    24,    47,    50,   117,   190,   129,    58,
     139,   206,   173,    10,    87,    98,   173,   195,   206,   175,
     175,   176,   178,   178,   178,   178,    61,   178,   178,   178,
     178,    43,   179,   180,   181,   182,   182,   183,   183,   184,
     184,   184,   184,   184,   185,   173,    24,    27,    75,    81,
     173,   200,   201,    58,    17,    56,    75,   131,   132,   133,
       7,    97,   194,   195,    50,    56,    81,   153,   154,   156,
      19,   171,    19,    56,   173,    44,    33,    36,   121,   170,
      17,    19,   179,   171,    17,    72,    19,    99,   179,    11,
      17,    35,   203,   204,    73,   204,    19,    99,    75,    75,
      56,   191,    75,   200,   190,    10,   103,   139,   206,    32,
     178,   178,    56,   173,   173,    10,    18,   204,    75,    19,
      99,   171,    17,   100,    75,    19,    10,   173,    17,    17,
     156,   104,   105,    56,    30,    32,   110,   111,   155,   115,
     134,   114,   173,    17,   111,   170,    17,    98,   169,    32,
     118,   173,   191,   120,   204,   203,   173,   194,   195,    72,
      75,   139,   206,   173,   173,   173,   200,   173,   131,   173,
      98,    98,    75,    19,    99,   172,    17,    30,   111,    21,
     134,   104,   171,    36,   122,    17,   171,   171,    17,    17,
     119,   193,    19,    99,   120,   204,    43,    58,   135,   208,
     171,   154,    17,   171,   172,    17,   171,   171,   118,    27,
     173,    99,   175,    44,    87,    32,   171,    17,   171,   179,
      17,    41,   202,   204,   205,   115,    58,    17,   171,   173,
     174,   175,    21,    44,   171,   202,   115,    21
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
     120,   120,   121,   121,   122,   122,   123,   124,   125,   126,
     127,   127,   127,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   135,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   137,   137,   137,   138,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   142,   143,   143,   143,   143,   143,
     144,   145,   146,   146,   147,   148,   148,   148,   149,   149,
     150,   151,   152,   152,   152,   153,   153,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   169,   170,   171,
     171,   172,   173,   173,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     182,   183,   183,   183,   184,   184,   184,   184,   184,   184,
     185,   185,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   189,   189,   190,   190,   190,   190,   191,   191,
     192,   192,   193,   194,   194,   195,   195,   196,   196,   197,
     197,   197,   197,   198,   198,   199,   200,   200,   201,   201,
     201,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   208
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     1,     0,     2,     0,     1,
       2,     2,     3,     3,     0,     2,     2,     0,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     2,     4,
       5,     0,     3,     0,     3,     0,     2,     0,     2,     1,
       2,     0,     1,     1,     2,     0,     1,     0,     1,     0,
       5,     4,     3,     4,     0,     3,     1,     2,     4,     1,
       2,     2,     2,     2,     7,     2,     3,     3,     1,     3,
       1,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     4,     1,     1,
       2,     4,     1,     1,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     6,     5,
       7,     4,    10,     7,     6,     6,     6,     2,     2,     1,
       4,     1,     1,     5,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     1,     1,     3,     3,     2,     2,     3,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     3,     3,     2,     3,     2,
       1,     4,     2,     3,     2,     3,     2,     1,     1,     4,
       5,     3,     4,     2,     1,     5,     3,     2,     1,     2,
       3,     3,     2,     2,     1,     1,     4,     5,     1,     2,
       2,     3,     1,     2,     2,     1,     1,     4,     6
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
#line 63 "parser.y"
                             { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 0); }
#line 2261 "parser.c"
    break;

  case 3: /* newline_or_stmt_star: newline_or_stmt_star NEWLINE  */
#line 64 "parser.y"
                                                   { yyval = yyvsp[-1]; }
#line 2267 "parser.c"
    break;

  case 4: /* newline_or_stmt_star: newline_or_stmt_star stmt  */
#line 65 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2273 "parser.c"
    break;

  case 20: /* assing_yield_or_test_plus: EQUAL yield_expr  */
#line 110 "parser.y"
                                            { yyval = yyvsp[0]; }
#line 2279 "parser.c"
    break;

  case 21: /* assing_yield_or_test_plus: EQUAL testlist_star_expr  */
#line 111 "parser.y"
                                                    { yyval = yyvsp[0]; }
#line 2285 "parser.c"
    break;

  case 22: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL yield_expr  */
#line 112 "parser.y"
                                                                      { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2291 "parser.c"
    break;

  case 23: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL testlist_star_expr  */
#line 113 "parser.y"
                                                                              { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2297 "parser.c"
    break;

  case 39: /* elif_test_suite_plus: ELIF namedexpr_test COLON suite  */
#line 155 "parser.y"
                                                      { yyval = new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2303 "parser.c"
    break;

  case 40: /* elif_test_suite_plus: elif_test_suite_plus ELIF namedexpr_test COLON suite  */
#line 156 "parser.y"
                                                                           { add_child(yyvsp[-4], new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0])); yyval = yyvsp[-4]; }
#line 2309 "parser.c"
    break;

  case 41: /* opt_else_suite: %empty  */
#line 163 "parser.y"
                       { yyval = new_node(NOOP_NODE, 0, NO_TYPE); }
#line 2315 "parser.c"
    break;

  case 42: /* opt_else_suite: ELSE COLON suite  */
#line 164 "parser.y"
                                 { yyval = new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2321 "parser.c"
    break;

  case 49: /* stmt_plus: stmt  */
#line 179 "parser.y"
                { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2327 "parser.c"
    break;

  case 50: /* stmt_plus: stmt_plus stmt  */
#line 180 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); }
#line 2333 "parser.c"
    break;

  case 53: /* trailer_plus: trailer  */
#line 233 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2339 "parser.c"
    break;

  case 54: /* trailer_plus: trailer_plus trailer  */
#line 234 "parser.y"
                                               { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2345 "parser.c"
    break;

  case 66: /* program: file_input  */
#line 286 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2351 "parser.c"
    break;

  case 67: /* file_input: newline_or_stmt_star ENDMARKER  */
#line 291 "parser.y"
                                           { yyval = yyvsp[-1]; }
#line 2357 "parser.c"
    break;

  case 73: /* async_funcdef: ASYNC funcdef  */
#line 305 "parser.y"
                             { yyval = yyvsp[0]; }
#line 2363 "parser.c"
    break;

  case 74: /* funcdef: DEF NAME parameters opt_arrow_test COLON opt_type_comment func_body_suite  */
#line 308 "parser.y"
                                                                                   { yyval = new_subtree(FUNCDEF_NODE, NO_TYPE, 3, new_node(FUNCNAME_NODE, 0, NO_TYPE), yyvsp[-4], yyvsp[0]); }
#line 2369 "parser.c"
    break;

  case 75: /* parameters: LPAR RPAR  */
#line 311 "parser.y"
                      { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2375 "parser.c"
    break;

  case 76: /* parameters: LPAR arguments RPAR  */
#line 312 "parser.y"
                                { yyval = yyvsp[-1]; }
#line 2381 "parser.c"
    break;

  case 77: /* arguments: argument COMMA arguments  */
#line 318 "parser.y"
                                    { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2387 "parser.c"
    break;

  case 78: /* arguments: argument  */
#line 319 "parser.y"
                    { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2393 "parser.c"
    break;

  case 79: /* argument: tfpdef EQUAL test  */
#line 322 "parser.y"
                            { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2399 "parser.c"
    break;

  case 80: /* argument: tfpdef  */
#line 323 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2405 "parser.c"
    break;

  case 81: /* tfpdef: NAME opt_colon_test  */
#line 329 "parser.y"
                            { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2411 "parser.c"
    break;

  case 82: /* stmt: simple_stmt  */
#line 334 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2417 "parser.c"
    break;

  case 83: /* stmt: compound_stmt  */
#line 335 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2423 "parser.c"
    break;

  case 84: /* simple_stmt: small_stmt opt_semi NEWLINE  */
#line 338 "parser.y"
                                         { yyval = yyvsp[-2]; }
#line 2429 "parser.c"
    break;

  case 85: /* small_stmt: expr_stmt  */
#line 341 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2435 "parser.c"
    break;

  case 86: /* small_stmt: del_stmt  */
#line 342 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2441 "parser.c"
    break;

  case 87: /* small_stmt: pass_stmt  */
#line 343 "parser.y"
                               { yyval = yyvsp[0]; }
#line 2447 "parser.c"
    break;

  case 88: /* small_stmt: flow_stmt  */
#line 344 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2453 "parser.c"
    break;

  case 89: /* small_stmt: import_stmt  */
#line 345 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2459 "parser.c"
    break;

  case 90: /* small_stmt: global_stmt  */
#line 346 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2465 "parser.c"
    break;

  case 91: /* small_stmt: nonlocal_stmt  */
#line 347 "parser.y"
                                  { yyval = yyvsp[0]; }
#line 2471 "parser.c"
    break;

  case 92: /* small_stmt: assert_stmt  */
#line 348 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2477 "parser.c"
    break;

  case 97: /* expr_stmt: testlist_star_expr assing_yield_or_test_plus opt_type_comment  */
#line 355 "parser.y"
                                                                                 { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2483 "parser.c"
    break;

  case 99: /* testlist_star_expr: test opt_comma  */
#line 361 "parser.y"
                                   { yyval = yyvsp[-1]; }
#line 2489 "parser.c"
    break;

  case 113: /* del_stmt: DEL exprlist  */
#line 381 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2495 "parser.c"
    break;

  case 114: /* pass_stmt: PASS  */
#line 384 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2501 "parser.c"
    break;

  case 115: /* flow_stmt: break_stmt  */
#line 387 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2507 "parser.c"
    break;

  case 116: /* flow_stmt: continue_stmt  */
#line 388 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2513 "parser.c"
    break;

  case 117: /* flow_stmt: return_stmt  */
#line 389 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2519 "parser.c"
    break;

  case 118: /* flow_stmt: raise_stmt  */
#line 390 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2525 "parser.c"
    break;

  case 119: /* flow_stmt: yield_stmt  */
#line 391 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2531 "parser.c"
    break;

  case 120: /* break_stmt: BREAK  */
#line 394 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2537 "parser.c"
    break;

  case 121: /* continue_stmt: CONTINUE  */
#line 397 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2543 "parser.c"
    break;

  case 122: /* return_stmt: RETURN testlist_star_expr  */
#line 400 "parser.y"
                                       { yyval = new_subtree(RETURN_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2549 "parser.c"
    break;

  case 123: /* return_stmt: RETURN  */
#line 401 "parser.y"
                    { yyval = new_node(RETURN_NODE, 0, NO_TYPE); }
#line 2555 "parser.c"
    break;

  case 130: /* import_name: IMPORT dotted_as_names  */
#line 416 "parser.y"
                                    {}
#line 2561 "parser.c"
    break;

  case 146: /* compound_stmt: if_stmt  */
#line 464 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2567 "parser.c"
    break;

  case 147: /* compound_stmt: while_stmt  */
#line 465 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2573 "parser.c"
    break;

  case 148: /* compound_stmt: for_stmt  */
#line 466 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2579 "parser.c"
    break;

  case 149: /* compound_stmt: try_stmt  */
#line 467 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2585 "parser.c"
    break;

  case 150: /* compound_stmt: with_stmt  */
#line 468 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2591 "parser.c"
    break;

  case 151: /* compound_stmt: funcdef  */
#line 469 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2597 "parser.c"
    break;

  case 152: /* compound_stmt: classdef  */
#line 470 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2603 "parser.c"
    break;

  case 153: /* compound_stmt: decorated  */
#line 471 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2609 "parser.c"
    break;

  case 154: /* compound_stmt: async_stmt  */
#line 472 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2615 "parser.c"
    break;

  case 158: /* if_stmt: IF namedexpr_test COLON suite elif_test_suite_plus opt_else_suite  */
#line 480 "parser.y"
                                                                           { yyval = new_subtree(IF_NODE, NO_TYPE, 4, yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2621 "parser.c"
    break;

  case 159: /* if_stmt: IF namedexpr_test COLON suite opt_else_suite  */
#line 481 "parser.y"
                                                      { yyval = new_subtree(IF_NODE, NO_TYPE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 2627 "parser.c"
    break;

  case 160: /* while_stmt: WHILE namedexpr_test COLON suite ELSE COLON suite  */
#line 484 "parser.y"
                                                              { yyval = new_subtree(WHILE_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2633 "parser.c"
    break;

  case 161: /* while_stmt: WHILE namedexpr_test COLON suite  */
#line 485 "parser.y"
                                             { yyval = new_subtree(WHILE_NODE, NO_TYPE, 2, yyvsp[-3], yyvsp[0]); }
#line 2639 "parser.c"
    break;

  case 162: /* for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite ELSE COLON suite  */
#line 488 "parser.y"
                                                                                 { yyval = new_subtree(FOR_NODE, NO_TYPE, 4, yyvsp[-8], yyvsp[-6], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2645 "parser.c"
    break;

  case 163: /* for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite  */
#line 489 "parser.y"
                                                                { yyval = new_subtree(FOR_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], yyvsp[0]); }
#line 2651 "parser.c"
    break;

  case 169: /* suite: simple_stmt  */
#line 505 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2657 "parser.c"
    break;

  case 170: /* suite: NEWLINE INDENT stmt_plus DEDENT  */
#line 506 "parser.y"
                                       { yyval = yyvsp[-1]; }
#line 2663 "parser.c"
    break;

  case 171: /* namedexpr_test: test  */
#line 512 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2669 "parser.c"
    break;

  case 175: /* or_test: and_test OR or_test  */
#line 533 "parser.y"
                             { yyval = new_subtree(OR_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); printf("or_test_1\n"); }
#line 2675 "parser.c"
    break;

  case 176: /* or_test: and_test  */
#line 534 "parser.y"
                  { yyval = yyvsp[0];}
#line 2681 "parser.c"
    break;

  case 177: /* and_test: not_test AND and_test  */
#line 542 "parser.y"
                                { yyval = new_subtree(AND_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2687 "parser.c"
    break;

  case 178: /* and_test: not_test  */
#line 543 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2693 "parser.c"
    break;

  case 179: /* not_test: NOT not_test  */
#line 547 "parser.y"
                       { yyval = new_subtree(NOT_NODE, BOOL_TYPE, 1, yyvsp[0]); }
#line 2699 "parser.c"
    break;

  case 180: /* not_test: comparison  */
#line 548 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2705 "parser.c"
    break;

  case 181: /* comparison: expr LESS comparison  */
#line 551 "parser.y"
                                 { yyval = new_subtree(LESS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2711 "parser.c"
    break;

  case 182: /* comparison: expr GREATER comparison  */
#line 552 "parser.y"
                                    { yyval = new_subtree(GREATER_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2717 "parser.c"
    break;

  case 183: /* comparison: expr EQEQUAL comparison  */
#line 553 "parser.y"
                                    { yyval = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2723 "parser.c"
    break;

  case 184: /* comparison: expr GREATEREQUAL comparison  */
#line 554 "parser.y"
                                         { yyval = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2729 "parser.c"
    break;

  case 185: /* comparison: expr LESSEQUAL comparison  */
#line 555 "parser.y"
                                      { yyval = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2735 "parser.c"
    break;

  case 186: /* comparison: expr NOTEQUAL comparison  */
#line 556 "parser.y"
                                     { yyval = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2741 "parser.c"
    break;

  case 187: /* comparison: expr IN comparison  */
#line 557 "parser.y"
                               { yyval = new_subtree(IN_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2747 "parser.c"
    break;

  case 188: /* comparison: expr NOT IN comparison  */
#line 558 "parser.y"
                                   { yyval = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2753 "parser.c"
    break;

  case 189: /* comparison: expr IS comparison  */
#line 559 "parser.y"
                               { yyval = new_subtree(IS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2759 "parser.c"
    break;

  case 190: /* comparison: expr IS NOT comparison  */
#line 560 "parser.y"
                                   { yyval = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2765 "parser.c"
    break;

  case 191: /* comparison: expr  */
#line 561 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2771 "parser.c"
    break;

  case 192: /* expr: xor_expr VBAR expr  */
#line 586 "parser.y"
                         { yyval = new_subtree(BIT_OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2777 "parser.c"
    break;

  case 193: /* expr: xor_expr  */
#line 587 "parser.y"
               { yyval = yyvsp[0]; }
#line 2783 "parser.c"
    break;

  case 194: /* xor_expr: and_expr CIRCUMFLEX xor_expr  */
#line 590 "parser.y"
                                       { yyval = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2789 "parser.c"
    break;

  case 195: /* xor_expr: and_expr  */
#line 591 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2795 "parser.c"
    break;

  case 196: /* and_expr: shift_expr AMPER and_expr  */
#line 594 "parser.y"
                                    { yyval = new_subtree(BIT_AND_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2801 "parser.c"
    break;

  case 197: /* and_expr: shift_expr  */
#line 595 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2807 "parser.c"
    break;

  case 198: /* shift_expr: arith_expr LEFTSHIFT shift_expr  */
#line 598 "parser.y"
                                            { yyval = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2813 "parser.c"
    break;

  case 199: /* shift_expr: arith_expr RIGHTSHIFT shift_expr  */
#line 599 "parser.y"
                                             { yyval = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2819 "parser.c"
    break;

  case 200: /* shift_expr: arith_expr  */
#line 600 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2825 "parser.c"
    break;

  case 201: /* arith_expr: term PLUS arith_expr  */
#line 603 "parser.y"
                                 { yyval = new_subtree(PLUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2831 "parser.c"
    break;

  case 202: /* arith_expr: term MINUS arith_expr  */
#line 604 "parser.y"
                                  { yyval = new_subtree(MINUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2837 "parser.c"
    break;

  case 203: /* arith_expr: term  */
#line 605 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2843 "parser.c"
    break;

  case 204: /* term: factor STAR term  */
#line 608 "parser.y"
                       { yyval = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2849 "parser.c"
    break;

  case 205: /* term: factor AT term  */
#line 609 "parser.y"
                     { yyval = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2855 "parser.c"
    break;

  case 206: /* term: factor SLASH term  */
#line 610 "parser.y"
                        { yyval = new_subtree(DIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2861 "parser.c"
    break;

  case 207: /* term: factor PERCENT term  */
#line 611 "parser.y"
                          { yyval = new_subtree(MOD_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2867 "parser.c"
    break;

  case 208: /* term: factor DOUBLESLASH term  */
#line 612 "parser.y"
                              { yyval = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2873 "parser.c"
    break;

  case 209: /* term: factor  */
#line 613 "parser.y"
             { yyval = yyvsp[0]; }
#line 2879 "parser.c"
    break;

  case 210: /* factor: PLUS factor  */
#line 616 "parser.y"
                    { yyval = new_subtree(PLUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2885 "parser.c"
    break;

  case 211: /* factor: MINUS factor  */
#line 617 "parser.y"
                     { yyval = new_subtree(MINUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2891 "parser.c"
    break;

  case 212: /* factor: TILDE factor  */
#line 618 "parser.y"
                     { yyval = new_subtree(TILDE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2897 "parser.c"
    break;

  case 213: /* factor: power  */
#line 619 "parser.y"
              { yyval = yyvsp[0]; }
#line 2903 "parser.c"
    break;

  case 214: /* power: atom_expr  */
#line 622 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2909 "parser.c"
    break;

  case 215: /* power: atom_expr DOUBLESTAR factor  */
#line 623 "parser.y"
                                   { yyval = new_subtree(POWER_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2915 "parser.c"
    break;

  case 216: /* atom_expr: opt_await atom trailer_plus  */
#line 626 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2921 "parser.c"
    break;

  case 217: /* atom_expr: opt_await atom  */
#line 627 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2927 "parser.c"
    break;

  case 218: /* atom: LPAR RPAR  */
#line 633 "parser.y"
                { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2933 "parser.c"
    break;

  case 219: /* atom: LPAR yield_expr RPAR  */
#line 634 "parser.y"
                           { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2939 "parser.c"
    break;

  case 220: /* atom: LPAR testlist_comp RPAR  */
#line 635 "parser.y"
                              { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2945 "parser.c"
    break;

  case 221: /* atom: LSQB RSQB  */
#line 636 "parser.y"
                { yyval = new_node(LIST_NODE, 0, NO_TYPE); }
#line 2951 "parser.c"
    break;

  case 222: /* atom: LSQB subscriptlist RSQB  */
#line 638 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 2957 "parser.c"
    break;

  case 223: /* atom: LBRACE RBRACE  */
#line 639 "parser.y"
                    { yyval = new_node(DICT_NODE, 0, NO_TYPE); }
#line 2963 "parser.c"
    break;

  case 224: /* atom: LBRACE dictorsetmaker RBRACE  */
#line 640 "parser.y"
                                   { yyval = new_subtree(DICT_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2969 "parser.c"
    break;

  case 225: /* atom: NAME  */
#line 641 "parser.y"
           { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2975 "parser.c"
    break;

  case 226: /* atom: NUMBER  */
#line 642 "parser.y"
             { yyval = new_node(NUMBER_NODE, 0, NO_TYPE); set_node_string_data(yyval, yytext);}
#line 2981 "parser.c"
    break;

  case 227: /* atom: STRING  */
#line 644 "parser.y"
             { yyval = new_node(STRING_NODE, 0, STR_TYPE); }
#line 2987 "parser.c"
    break;

  case 228: /* atom: ELLIPSIS  */
#line 645 "parser.y"
               { yyval = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
#line 2993 "parser.c"
    break;

  case 229: /* atom: NONE  */
#line 646 "parser.y"
           { yyval = new_node(NONE_NODE, 0, NO_TYPE); }
#line 2999 "parser.c"
    break;

  case 230: /* atom: TRUE  */
#line 647 "parser.y"
           { yyval = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
#line 3005 "parser.c"
    break;

  case 231: /* atom: FALSE  */
#line 648 "parser.y"
            { yyval = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
#line 3011 "parser.c"
    break;

  case 233: /* testlist_comp: testlist  */
#line 658 "parser.y"
                        { yyval = yyvsp[0]; }
#line 3017 "parser.c"
    break;

  case 234: /* trailer: LPAR RPAR  */
#line 662 "parser.y"
                   { yyval = new_node(ARGLIST_NODE, 0, NO_TYPE); }
#line 3023 "parser.c"
    break;

  case 235: /* trailer: LPAR arglist RPAR  */
#line 663 "parser.y"
                           { yyval = yyvsp[-1]; }
#line 3029 "parser.c"
    break;

  case 236: /* trailer: LSQB subscriptlist RSQB  */
#line 664 "parser.y"
                                 { yyval = yyvsp[-1]; }
#line 3035 "parser.c"
    break;

  case 237: /* trailer: DOT NAME  */
#line 665 "parser.y"
                  { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 3041 "parser.c"
    break;

  case 238: /* subscriptlist: subscript COMMA subscriptlist  */
#line 670 "parser.y"
                                             { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; printf("Adiciona comma subscript\n");}
#line 3047 "parser.c"
    break;

  case 239: /* subscriptlist: subscript opt_comma  */
#line 671 "parser.y"
                                   { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); printf("Fecha recursão subscript"); }
#line 3053 "parser.c"
    break;

  case 243: /* exprlist: expr COMMA exprlist  */
#line 684 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3059 "parser.c"
    break;

  case 244: /* exprlist: expr opt_comma  */
#line 685 "parser.y"
                         { yyval = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3065 "parser.c"
    break;

  case 245: /* testlist: test COMMA testlist  */
#line 691 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3071 "parser.c"
    break;

  case 246: /* testlist: test opt_comma  */
#line 692 "parser.y"
                         { yyval = new_subtree(TESTLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3077 "parser.c"
    break;

  case 256: /* arglist: argument1 COMMA arglist  */
#line 718 "parser.y"
                                 { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3083 "parser.c"
    break;

  case 257: /* arglist: argument1 opt_comma  */
#line 719 "parser.y"
                             { yyval = new_subtree(ARGLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3089 "parser.c"
    break;

  case 276: /* func_body_suite: simple_stmt  */
#line 754 "parser.y"
                             { yyval = yyvsp[0]; }
#line 3095 "parser.c"
    break;

  case 277: /* func_body_suite: NEWLINE INDENT stmt_plus DEDENT  */
#line 755 "parser.y"
                                                 { yyval = yyvsp[-1]; }
#line 3101 "parser.c"
    break;

  case 278: /* func_body_suite: NEWLINE TYPE_COMMENT NEWLINE INDENT stmt_plus DEDENT  */
#line 756 "parser.y"
                                                                      { yyval = yyvsp[-1]; }
#line 3107 "parser.c"
    break;


#line 3111 "parser.c"

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

#line 759 "parser.y"


// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

void segunda_passada(AST* root) {
    if(get_kind_node(root) == NAME_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
    }
    
	if(get_kind_node(root) == FUNCDEF_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
        add_var(vt, get_name_node(root), 0, NO_TYPE, 1, get_node_count(get_node_child(root, 1)));
	}

    if(get_kind_node(root) == STRING_NODE){
        set_node_string_data(root, get_string(st,position++));
    }

    if(get_kind_node(root) == NUMBER_NODE){
        set_node_string_data(root, numbers_list.last_text[position_numbers++]);
    }

    if(get_kind_node(root) == BOOL_VAL_NODE){
        set_node_string_data(root, bool_list.last_text[position_boolean++]);
    }

    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		segunda_passada(get_node_child(root, i));
	}
}

char* verify_builtin_func(char* name){
    int i = 0;
    for(i = 0; i < builtin_funcs_n ; i++){
        if(strcmp(builtin_funcs[i],name) == 0)
            return name;
    }
    return NULL;
}
//terceira passada
void verify_func_calls(AST* root) {
    
    // Se é uma função
	if( (get_kind_node(root) == NAME_NODE) && (get_node_count(root) > 0) ){
        if( get_kind_node(get_node_child(root, 0)) == ARGLIST_NODE ){
            if (verify_builtin_func(get_name_node(root)) != NULL){
                set_kind_node(root, FUNC_BUILTIN_NODE);
            }else{
                // Verifica se está na tabela de símbolos (VarTable)
                int pos = lookup_var(vt, get_name_node(root));
                if (pos == -1){
                    printf("ERROR: Function \"%s\" is not defined.\n",get_name_node(root));
                    exit(EXIT_FAILURE);
                }else{
                    if(get_child_count(get_node_child(root,0)) != get_n_args(vt, pos)){
                        printf("ERROR: Wrong number of pars on function \"%s\". Expected %d, but received %d.\n",get_name_node(root),get_n_args(vt, pos),get_child_count(get_node_child(root,0)));
                        exit(EXIT_FAILURE);
                    }
                }
            } 
        }
	}
    
    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		verify_func_calls(get_node_child(root, i));
    }  
}

// para operadores do tipo PLUS e MINUS
Type verifica_precedencia_tipo_1(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), t2);
        exit(EXIT_FAILURE);
    }
    if(t1 == INT_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == REAL_TYPE){
        switch(t2){
            case INT_TYPE:
                return REAL_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return REAL_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == BOOL_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == STR_TYPE){
        if(t2 == STR_TYPE){
            return STR_TYPE;
        }else{
            printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
            exit(EXIT_FAILURE);
        }
    }
    printf("TYPE ERROR: compilation error(1).");
    exit(EXIT_FAILURE);
}

// para operadores do tipo MULTIPLY
Type verifica_precedencia_tipo_2(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), t2);
        exit(EXIT_FAILURE);
    }
    if(t1 == INT_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            case STR_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == REAL_TYPE){
        switch(t2){
            case INT_TYPE:
                return REAL_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return REAL_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == BOOL_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            case STR_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == STR_TYPE){
        switch(t2){
            case INT_TYPE:
                return STR_TYPE;
            case BOOL_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
                exit(EXIT_FAILURE);
        }
    }
    printf("TYPE ERROR: compilation error(2).");
    exit(EXIT_FAILURE);
}

// para operadores do tipo DIVISION
Type verifica_precedencia_tipo_3(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), t2);
        exit(EXIT_FAILURE);
    }
    if(t1 == STR_TYPE || t2 == STR_TYPE){
        printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), t2);
        exit(EXIT_FAILURE);
    }
    return REAL_TYPE;
}

// para operadores do tipo INTEGERDIVISION
Type verifica_precedencia_tipo_4(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), t2);
        exit(EXIT_FAILURE);
    }
    if(t1 == STR_TYPE || t2 == STR_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), t2);
        exit(EXIT_FAILURE);
    }
    if(t1 == REAL_TYPE || t2 == REAL_TYPE){
        return REAL_TYPE;
    }
    return INT_TYPE;
}


// Verifica variáveis agora retornará o tipo
Type verifica_variaveis(AST* root) {
    
    Type type_of_root = get_kind_node(root);

    if(type_of_root == ASSIGN_NODE){
        // Infere Tipo do que estiver a direita
        Type t = verifica_variaveis(get_node_child(root,1));

        //Atualiza o name a esquerda
        int aux = lookup_var(vt, get_name_node(get_node_child(root,0)));
        if(aux == -1){
            //Adiciona na tabela
            add_var(vt, get_name_node(get_node_child(root,0)), 0, t, 0, 0);
        }
        else{
            //Verifica se o tipo é igual a t
            if(get_type(vt,aux) != t){
                printf("TYPE ERROR: variable expects type %s but received type %s.\n", get_type(vt,aux), t);
                exit(EXIT_FAILURE);
            }
        }

        return t;
    }   

    if(type_of_root == PLUS_NODE || type_of_root == MINUS_NODE || type_of_root == MULTIPLY_NODE || type_of_root == DIVISION_NODE){
        int count = get_child_count(root);
        if (count == 1){
            Type t1 = verifica_variaveis(get_node_child(root,0));
            return t1;
        }
        else{
            Type t1 = verifica_variaveis(get_node_child(root,0));
            Type t2 = verifica_variaveis(get_node_child(root,1));
            if(type_of_root == PLUS_NODE || type_of_root == MINUS_NODE)
                return verifica_precedencia_tipo_1(t1,t2);
            if(type_of_root == MULTIPLY_NODE)
                return verifica_precedencia_tipo_2(t1,t2);
            if(type_of_root == DIVISION_NODE)
                return verifica_precedencia_tipo_3(t1,t2);
        } 
    }

    if(type_of_root == NUMBER_NODE){
        if(strchr(get_data(root), '.') != NULL){
            return REAL_TYPE;
        }
        return INT_TYPE;
    }

    //Se for um NAME (como já tratamos o caso em que está a esquerda de um ASSIGN, agora é só dar lookup sempre que aparecer um NAME)
    if(type_of_root == NAME_NODE){
        int aux = lookup_var(vt, get_name_node(root));
        if(aux == -1){
            printf("ERROR: variable %s not declared\n", get_name_node(root));
            exit(EXIT_FAILURE);
        }
        return get_type(vt,aux);
    }

    if(type_of_root == FOR_NODE){
        AST* exprlist = get_node_child(root,0); 
        int exprlist_count = get_node_count(exprlist);
        for(int i = 0; i < exprlist_count; i++){
            add_var(vt, get_name_node(get_node_child(exprlist, i)), 0, NO_TYPE, 0, 0);
        }
    }

    if(type_of_root == FUNCDEF_NODE){
        AST* arglist = get_node_child(root,1);
        //Adiciona cada um dos filhos na tabela
        int arglist_count = get_node_count(arglist);
        for(int i = 0; i < arglist_count; i++){
            add_var(vt, get_name_node(get_node_child(arglist, i)), 0, NO_TYPE, 0, 0);
        }
    }

    int children_count = get_node_count(root);
    for(int i = 0; i < children_count; i++){
        verifica_variaveis(get_node_child(root, i));
    } 
}

int main() {
    vt = create_var_table();
    st = create_str_table();

    lex_init();
    yyparse();

    printf("PARSE SUCCESSFUL!\n");

    // Tá bom
    
    printf("Size da st: %d", get_size_st(st));

    for(int i = 0; i < names_list.count; i++){
        printf("Index:%d, %s\n",i,names_list.last_text[i]);
    }

	segunda_passada(root);
    verify_func_calls(root);
    //verifica_variaveis(root);

    print_dot(root);

    print_str_table(st);
    print_var_table(vt);
    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}

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

extern char *yytext;
extern int yylineno;

StrTable *st;
VarTable *vt;

AST *root;

#line 96 "parser.c"

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
  YYSYMBOL_opt_assign_test = 99,           /* opt_assign_test  */
  YYSYMBOL_opt_comma = 100,                /* opt_comma  */
  YYSYMBOL_opt_colon_test = 101,           /* opt_colon_test  */
  YYSYMBOL_opt_semi = 102,                 /* opt_semi  */
  YYSYMBOL_assing_yield_or_test_plus = 103, /* assing_yield_or_test_plus  */
  YYSYMBOL_opt_assing_yield_or_test = 104, /* opt_assing_yield_or_test  */
  YYSYMBOL_opt_as_name = 105,              /* opt_as_name  */
  YYSYMBOL_comma_import_as_name_star = 106, /* comma_import_as_name_star  */
  YYSYMBOL_comma_dotted_as_name_star = 107, /* comma_dotted_as_name_star  */
  YYSYMBOL_dot_name_star = 108,            /* dot_name_star  */
  YYSYMBOL_comma_name_star = 109,          /* comma_name_star  */
  YYSYMBOL_opt_comma_test = 110,           /* opt_comma_test  */
  YYSYMBOL_elif_test_suite_star = 111,     /* elif_test_suite_star  */
  YYSYMBOL_opt_else_suite = 112,           /* opt_else_suite  */
  YYSYMBOL_comma_with_item_star = 113,     /* comma_with_item_star  */
  YYSYMBOL_opt_as_expr = 114,              /* opt_as_expr  */
  YYSYMBOL_opt_test_as_name = 115,         /* opt_test_as_name  */
  YYSYMBOL_stmt_plus = 116,                /* stmt_plus  */
  YYSYMBOL_opt_await = 117,                /* opt_await  */
  YYSYMBOL_trailer_plus = 118,             /* trailer_plus  */
  YYSYMBOL_string_plus = 119,              /* string_plus  */
  YYSYMBOL_opt_test = 120,                 /* opt_test  */
  YYSYMBOL_opt_sliceop = 121,              /* opt_sliceop  */
  YYSYMBOL_comma_expr_star_expr_star = 122, /* comma_expr_star_expr_star  */
  YYSYMBOL_comma_dict1_star = 123,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 124,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 125,        /* opt_finally_suite  */
  YYSYMBOL_program = 126,                  /* program  */
  YYSYMBOL_file_input = 127,               /* file_input  */
  YYSYMBOL_decorator = 128,                /* decorator  */
  YYSYMBOL_decorators = 129,               /* decorators  */
  YYSYMBOL_decorated = 130,                /* decorated  */
  YYSYMBOL_async_funcdef = 131,            /* async_funcdef  */
  YYSYMBOL_funcdef = 132,                  /* funcdef  */
  YYSYMBOL_133_1 = 133,                    /* $@1  */
  YYSYMBOL_parameters = 134,               /* parameters  */
  YYSYMBOL_arguments = 135,                /* arguments  */
  YYSYMBOL_argument = 136,                 /* argument  */
  YYSYMBOL_typedargslist = 137,            /* typedargslist  */
  YYSYMBOL_tfpdef = 138,                   /* tfpdef  */
  YYSYMBOL_139_2 = 139,                    /* $@2  */
  YYSYMBOL_stmt = 140,                     /* stmt  */
  YYSYMBOL_simple_stmt = 141,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 142,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 143,                /* expr_stmt  */
  YYSYMBOL_annassign = 144,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 145,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 146,                /* augassign  */
  YYSYMBOL_del_stmt = 147,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 148,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 149,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 150,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 151,            /* continue_stmt  */
  YYSYMBOL_yield_stmt = 152,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 153,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 154,              /* import_stmt  */
  YYSYMBOL_import_name = 155,              /* import_name  */
  YYSYMBOL_import_from = 156,              /* import_from  */
  YYSYMBOL_from_part = 157,                /* from_part  */
  YYSYMBOL_import_part = 158,              /* import_part  */
  YYSYMBOL_import_as_name = 159,           /* import_as_name  */
  YYSYMBOL_160_3 = 160,                    /* $@3  */
  YYSYMBOL_dotted_as_name = 161,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 162,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 163,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 164,              /* dotted_name  */
  YYSYMBOL_165_4 = 165,                    /* $@4  */
  YYSYMBOL_global_stmt = 166,              /* global_stmt  */
  YYSYMBOL_167_5 = 167,                    /* $@5  */
  YYSYMBOL_nonlocal_stmt = 168,            /* nonlocal_stmt  */
  YYSYMBOL_169_6 = 169,                    /* $@6  */
  YYSYMBOL_assert_stmt = 170,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 171,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 172,               /* async_stmt  */
  YYSYMBOL_if_stmt = 173,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 174,               /* while_stmt  */
  YYSYMBOL_for_stmt = 175,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 176,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 177,                /* with_stmt  */
  YYSYMBOL_with_item = 178,                /* with_item  */
  YYSYMBOL_except_clause = 179,            /* except_clause  */
  YYSYMBOL_suite = 180,                    /* suite  */
  YYSYMBOL_namedexpr_test = 181,           /* namedexpr_test  */
  YYSYMBOL_test = 182,                     /* test  */
  YYSYMBOL_test_nocond = 183,              /* test_nocond  */
  YYSYMBOL_or_test = 184,                  /* or_test  */
  YYSYMBOL_and_test = 185,                 /* and_test  */
  YYSYMBOL_not_test = 186,                 /* not_test  */
  YYSYMBOL_comparison = 187,               /* comparison  */
  YYSYMBOL_expr = 188,                     /* expr  */
  YYSYMBOL_xor_expr = 189,                 /* xor_expr  */
  YYSYMBOL_and_expr = 190,                 /* and_expr  */
  YYSYMBOL_shift_expr = 191,               /* shift_expr  */
  YYSYMBOL_arith_expr = 192,               /* arith_expr  */
  YYSYMBOL_term = 193,                     /* term  */
  YYSYMBOL_factor = 194,                   /* factor  */
  YYSYMBOL_power = 195,                    /* power  */
  YYSYMBOL_atom_expr = 196,                /* atom_expr  */
  YYSYMBOL_atom = 197,                     /* atom  */
  YYSYMBOL_testlist_comp = 198,            /* testlist_comp  */
  YYSYMBOL_trailer = 199,                  /* trailer  */
  YYSYMBOL_subscriptlist = 200,            /* subscriptlist  */
  YYSYMBOL_subscript = 201,                /* subscript  */
  YYSYMBOL_sliceop = 202,                  /* sliceop  */
  YYSYMBOL_exprlist = 203,                 /* exprlist  */
  YYSYMBOL_testlist = 204,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 205,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 206,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 207,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 208,                 /* classdef  */
  YYSYMBOL_209_7 = 209,                    /* $@7  */
  YYSYMBOL_arglist = 210,                  /* arglist  */
  YYSYMBOL_argument1 = 211,                /* argument1  */
  YYSYMBOL_comp_iter = 212,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 213,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 214,                 /* comp_for  */
  YYSYMBOL_comp_if = 215,                  /* comp_if  */
  YYSYMBOL_yield_expr = 216,               /* yield_expr  */
  YYSYMBOL_yield_arg = 217,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 218           /* func_body_suite  */
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
#define YYFINAL  78
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   843

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  126
/* YYNRULES -- Number of rules.  */
#define YYNRULES  284
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
       0,    43,    43,    44,    45,    48,    49,    50,    53,    54,
      57,    58,    61,    62,    69,    70,    73,    74,    77,    78,
      86,    87,    90,    91,    92,    93,    96,    97,    98,   111,
     112,   115,   116,   119,   120,   123,   124,   127,   128,   131,
     132,   135,   136,   139,   140,   143,   144,   147,   148,   151,
     152,   155,   156,   205,   206,   209,   210,   217,   218,   230,
     231,   234,   235,   238,   239,   247,   248,   249,   252,   253,
     256,   257,   262,   267,   270,   273,   276,   277,   278,   281,
     284,   284,   287,   288,   294,   295,   298,   301,   304,   304,
     309,   310,   313,   316,   317,   318,   319,   320,   321,   322,
     323,   326,   327,   328,   329,   330,   333,   336,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   356,   359,   362,   363,   365,   366,   369,   372,   378,
     381,   382,   383,   386,   387,   390,   393,   404,   405,   406,
     409,   410,   411,   414,   414,   417,   420,   423,   426,   426,
     429,   429,   432,   432,   435,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   449,   450,   451,   454,   457,   460,
     463,   464,   467,   470,   473,   476,   477,   483,   486,   487,
     491,   504,   505,   513,   514,   518,   519,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   557,   558,
     561,   562,   565,   566,   569,   570,   571,   574,   575,   576,
     579,   580,   581,   582,   583,   584,   587,   588,   589,   590,
     593,   594,   597,   598,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   628,   629,
     633,   634,   635,   636,   641,   642,   645,   646,   649,   652,
     658,   659,   662,   663,   666,   667,   668,   669,   672,   673,
     679,   679,   685,   686,   689,   690,   691,   692,   693,   694,
     697,   698,   701,   702,   705,   706,   709,   710,   713,   714,
     717,   718,   721,   722,   723
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
  "opt_arrow_test", "opt_type_comment", "opt_assign_test", "opt_comma",
  "opt_colon_test", "opt_semi", "assing_yield_or_test_plus",
  "opt_assing_yield_or_test", "opt_as_name", "comma_import_as_name_star",
  "comma_dotted_as_name_star", "dot_name_star", "comma_name_star",
  "opt_comma_test", "elif_test_suite_star", "opt_else_suite",
  "comma_with_item_star", "opt_as_expr", "opt_test_as_name", "stmt_plus",
  "opt_await", "trailer_plus", "string_plus", "opt_test", "opt_sliceop",
  "comma_expr_star_expr_star", "comma_dict1_star", "except_suite_plus",
  "opt_finally_suite", "program", "file_input", "decorator", "decorators",
  "decorated", "async_funcdef", "funcdef", "$@1", "parameters",
  "arguments", "argument", "typedargslist", "tfpdef", "$@2", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "yield_stmt", "raise_stmt", "import_stmt",
  "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "$@3", "dotted_as_name", "import_as_names",
  "dotted_as_names", "dotted_name", "$@4", "global_stmt", "$@5",
  "nonlocal_stmt", "$@6", "assert_stmt", "compound_stmt", "async_stmt",
  "if_stmt", "while_stmt", "for_stmt", "try_stmt", "with_stmt",
  "with_item", "except_clause", "suite", "namedexpr_test", "test",
  "test_nocond", "or_test", "and_test", "not_test", "comparison", "expr",
  "xor_expr", "and_expr", "shift_expr", "arith_expr", "term", "factor",
  "power", "atom_expr", "atom", "testlist_comp", "trailer",
  "subscriptlist", "subscript", "sliceop", "exprlist", "testlist",
  "dictorsetmaker", "dictorsetmaker1", "dictorsetmaker2", "classdef",
  "$@7", "arglist", "argument1", "comp_iter", "sync_comp_for", "comp_for",
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

#define YYPACT_NINF (-405)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-279)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -405,   423,    74,  -405,  -405,   417,    23,    28,  -405,  -405,
      37,  -405,    41,   165,   165,    29,    47,   417,    28,   165,
    -405,    56,   417,  -405,   165,   172,   165,   100,   417,   417,
     301,   110,   583,  -405,   180,  -405,  -405,  -405,  -405,    48,
    -405,    82,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,   112,   125,   104,   200,  -405,    14,   130,   127,
     226,   -11,     8,   254,  -405,   215,  -405,  -405,  -405,   224,
    -405,  -405,  -405,  -405,   194,  -405,  -405,  -405,  -405,   204,
    -405,  -405,   211,  -405,  -405,   237,  -405,  -405,  -405,   247,
    -405,  -405,  -405,  -405,   227,  -405,   209,  -405,   257,   251,
     417,  -405,  -405,  -405,  -405,  -405,   328,   468,   114,  -405,
    -405,  -405,  -405,  -405,   188,    26,   250,  -405,  -405,  -405,
    -405,   216,  -405,    35,  -405,   417,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,    19,  -405,    35,
    -405,  -405,   417,   417,   417,   165,   165,   165,   165,   439,
     165,   165,   165,   230,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   417,  -405,  -405,
     124,   218,   194,   231,   278,   417,     5,  -405,   209,   279,
     243,  -405,  -405,   417,   258,  -405,   159,   190,   165,  -405,
     209,  -405,  -405,    59,    45,   232,  -405,   165,  -405,   152,
     214,  -405,  -405,  -405,   228,   233,  -405,   256,   521,   317,
      26,  -405,  -405,  -405,  -405,  -405,   296,    35,  -405,  -405,
     294,  -405,  -405,   284,  -405,  -405,  -405,  -405,  -405,  -405,
     165,  -405,  -405,  -405,  -405,   165,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
     306,   417,  -405,   417,   217,   245,   299,  -405,   308,    12,
     325,    87,  -405,   323,   285,  -405,  -405,  -405,  -405,  -405,
     324,  -405,    28,  -405,   324,  -405,   751,   566,   329,   111,
     334,   269,   417,  -405,   313,   322,   165,  -405,  -405,   333,
    -405,  -405,    59,   417,  -405,  -405,  -405,  -405,  -405,   341,
     346,   293,   348,  -405,   298,  -405,    35,  -405,  -405,  -405,
     417,  -405,  -405,   312,  -405,  -405,   417,   417,  -405,  -405,
     449,  -405,   209,  -405,  -405,  -405,   355,   302,   365,   417,
     366,  -405,   269,   318,   247,   376,   340,   182,  -405,   505,
    -405,  -405,   247,   209,   382,   368,   389,   209,   209,  -405,
    -405,  -405,   364,  -405,   390,  -405,    59,    64,  -405,    88,
    -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
     396,   358,  -405,   417,  -405,  -405,   269,   209,  -405,  -405,
     285,  -405,  -405,   417,  -405,  -405,  -405,  -405,  -405,   209,
     401,  -405,   209,  -405,  -405,   417,   531,  -405,   390,  -405,
     402,  -405,  -405,   417,  -405,  -405,  -405,   268,   313,  -405,
     403,  -405,   209,  -405,    31,   165,   404,  -405,   300,  -405,
    -405,  -405,     4,  -405,  -405,  -405,   209,  -405,   417,  -405,
    -405,  -405,  -405,   417,  -405,   751,   369,  -405,    31,  -405,
    -405,   587,   378,  -405,  -405,   751,   669,  -405
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    53,     0,    72,    73,    53,     0,     0,    54,   127,
       0,   128,     0,    53,    53,     0,     0,    53,     0,    53,
       3,     0,    53,   122,    53,    53,    53,     0,    53,    53,
      53,    75,     0,     8,     0,   162,   160,     4,    90,    20,
      93,   104,    94,    95,    96,   123,   124,   126,   125,    97,
     133,   134,    98,    99,   100,    91,   163,   155,   156,   157,
     158,   159,    16,   178,   182,   184,   186,   197,   199,   201,
     203,   206,   209,   215,   219,   220,   161,   129,     1,    39,
     164,   166,   165,   148,     5,   260,    80,    63,   121,     0,
     137,   138,     0,   139,   150,     0,   177,    33,   135,    29,
     217,   152,   185,   216,   131,   218,    53,    45,    47,     0,
      53,   281,   279,     9,   234,   237,    53,    53,    53,   231,
     235,   232,    57,   236,   233,   223,     0,    78,    77,    76,
      21,     0,   114,    53,   111,    53,   120,   119,   117,   109,
     115,   113,   108,   118,   112,   110,   116,    12,   101,    53,
      17,   107,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,     0,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,   154,    35,
      53,     0,     5,     0,    16,    53,     0,    37,    53,   147,
       0,   145,    37,    53,     0,   175,     0,     0,    53,   173,
      53,   280,   227,     0,    16,     0,   239,    53,   229,   259,
       0,   252,   253,   224,     0,     0,    58,     0,    53,    53,
     222,    55,    79,    92,    23,    22,    26,    53,    13,   105,
      16,   103,   102,     0,   181,   183,   189,   190,   188,   193,
      53,   195,   191,   187,   192,    53,   198,   200,   202,   204,
     205,   208,   207,   211,   214,   213,   212,   210,   221,    40,
     149,    53,     6,    53,   264,     0,    16,    74,     0,     0,
      10,    53,   249,     0,     0,   143,   140,   136,    31,   142,
     151,    41,     0,    30,   153,   132,    53,    53,     0,    43,
       0,    12,    53,    48,    43,     0,    53,   274,   238,    53,
     251,   228,    65,    53,   258,   230,   226,   225,   243,     0,
     246,     0,    16,   240,     0,    56,    53,   106,    25,    24,
      53,   196,   194,     0,   268,   269,    53,    53,   265,     7,
      53,   263,    53,    88,    82,    87,    85,     0,    14,    53,
       0,    64,    12,     0,    29,    16,     0,    43,    34,    53,
      51,   174,    29,    53,     0,    70,     0,    53,    53,    46,
     168,   275,     0,   250,    16,   256,    65,    53,   242,    53,
     245,   241,    28,    27,   179,    36,   267,   266,   262,   261,
      18,     0,    83,    53,    86,    11,    12,    53,   141,   144,
      17,   146,    38,    53,   167,   176,    52,    50,   171,    53,
       0,   170,    53,    68,   172,    53,    53,   257,    16,   254,
      61,    60,   244,    53,    89,    84,    15,    53,    43,    32,
       0,    44,    53,    69,   272,    53,     0,   255,    53,   247,
      62,    19,     0,   282,    81,   169,    53,    71,    53,   273,
     270,   271,    67,    53,   248,    53,     0,    42,   276,   180,
      66,    53,     0,   277,   283,    53,    53,   284
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -405,  -405,   241,  -405,  -405,  -263,  -405,   -55,  -405,  -405,
    -405,  -405,  -254,  -405,  -405,  -405,   236,  -405,  -405,  -278,
    -405,  -405,  -405,  -404,  -405,  -405,  -405,  -328,  -405,  -405,
      58,  -405,  -405,  -405,  -405,   398,  -405,  -405,  -405,    13,
    -405,  -405,    49,  -405,  -405,  -405,  -405,     0,    -1,  -405,
    -405,  -405,   -24,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,  -405,  -405,  -405,  -405,    43,  -405,   154,   167,
    -405,   146,  -405,  -405,  -405,  -405,  -405,  -405,  -405,  -405,
    -405,  -405,   436,  -405,   441,   156,   160,  -177,   -12,    -3,
    -405,  -143,   303,   430,  -124,   -10,   304,   295,    33,    51,
      65,    -6,  -405,  -405,  -405,   349,   239,    97,  -405,  -405,
      -2,  -141,  -405,  -405,  -405,   434,  -405,  -195,  -405,    22,
     177,  -182,  -405,  -103,  -405,  -405
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   181,    31,   340,   229,   384,   300,   414,   131,
     147,   317,   191,   345,   189,   260,   280,   178,   347,   355,
     197,   199,   351,   349,    32,   220,   124,   309,   429,   184,
     364,   289,   401,     2,     3,    33,    34,    35,   127,    36,
     183,   270,   335,   336,   337,   338,   380,   350,   195,    39,
      40,   148,    41,   149,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    92,   277,   278,   344,    97,   279,
      98,    99,   179,    52,   187,    53,   192,    54,    55,    56,
      57,    58,    59,    60,    61,   107,   290,   196,   203,    62,
     448,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   125,   205,   221,   311,   312,   430,
      88,   206,   210,   211,   212,    76,   182,   265,   266,   439,
     297,   440,   441,    77,   112,   434
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    37,    79,    87,    87,    95,   111,   151,   231,   233,
     234,   281,    89,   100,    96,   215,   360,   109,   103,    80,
     105,   298,   104,   294,   314,   108,    96,   304,   358,   227,
     225,   236,   237,   238,   239,   241,   242,   243,   244,   410,
     167,   451,   295,   155,   273,    12,   232,   128,   445,     8,
     217,   456,   156,    90,   157,   274,  -177,   158,    14,   159,
      91,   275,   169,   160,   299,   168,   296,   161,   333,   394,
     295,   162,   438,   218,    78,   163,   219,   170,     8,   387,
    -177,   -59,   328,   -59,    83,    83,   276,   334,   132,    19,
     389,   446,   133,    85,   296,   134,    22,    86,   397,   135,
     444,     8,     8,    94,    24,   -59,   228,   201,   136,   224,
     137,    28,   101,   204,   209,   204,   321,   106,    19,    26,
     365,   322,     7,   417,   319,    22,   130,    30,     8,   272,
     -17,   150,   226,    24,   138,   378,   -59,   139,     8,   222,
     435,    19,    19,   354,   287,   -17,   230,   140,    26,    22,
     141,   261,   142,    84,   246,   379,    24,    24,   363,   143,
     -17,    93,   144,   295,   145,   -17,   152,   153,    19,   303,
     258,    26,    26,   146,   259,    22,   398,   264,    19,     8,
     403,   404,   230,    24,   409,    22,     8,   296,   293,   213,
     285,   126,   287,    24,   164,   288,    10,   302,    26,   262,
     249,   250,    12,   318,   154,   263,    30,   291,    26,   292,
     418,   331,   393,   373,   354,   310,   264,   165,     5,    19,
     251,   252,   421,     8,     9,   423,    19,   326,   295,    11,
    -130,   166,    13,    22,    24,   327,   253,   254,   255,   256,
     257,    24,   176,   177,   180,   437,    15,   185,    16,    26,
    -130,    18,   296,   186,   188,   190,    26,   370,   324,   447,
     325,   341,   424,    19,   193,   198,   171,   194,   200,    21,
      22,   216,    12,   245,   223,    23,   267,     5,    24,   172,
      25,   269,     8,     9,   352,    38,    87,   305,    11,   108,
     391,    13,   372,    26,   362,   449,   230,   271,   282,   283,
     366,    30,   286,   306,   301,    15,   316,    16,   307,   407,
      18,  -278,   308,   299,     8,     8,   320,   374,   330,   -59,
     329,   173,    19,   376,   377,   332,   432,   264,    21,    22,
     323,     8,   339,   174,    23,   175,   385,    24,   110,    25,
     342,   275,     8,   346,   261,   354,   353,     8,    38,   396,
     -17,   357,    26,   427,    19,    19,   228,   296,   367,  -278,
      30,    22,    22,   -60,   411,   368,   310,   369,   375,    24,
      24,    19,   -59,   371,   381,   383,  -278,   382,    22,  -278,
     416,   420,    19,   386,    26,    26,    24,    19,  -278,    22,
      96,   -17,   313,   388,    22,   390,   392,    24,   263,   399,
     202,    26,    24,   426,   400,   -17,   402,   405,   -17,   406,
     431,   -17,    26,   413,   333,   442,   433,    26,   422,   428,
     436,   443,   455,   268,   408,   411,     4,   452,   284,   113,
     415,     8,     5,   419,     6,     7,   348,     8,     9,    10,
     450,   343,    81,    11,    38,    12,    13,    82,   359,   356,
      38,   396,   102,     8,    38,    38,   396,   235,    14,   315,
      15,   248,    16,     8,    17,    18,   412,   214,   129,   247,
     453,    19,   361,     0,     0,     0,   261,    19,    22,     0,
       0,    20,     8,    21,    22,     0,    24,     0,     0,    23,
       0,     0,    24,    19,    25,   207,     0,     0,     0,     0,
     240,    26,     0,    19,     0,     0,     0,    26,    24,    27,
      22,    28,    29,     0,     5,    30,     6,     7,    24,     8,
       9,    10,    19,    26,   -17,    11,   395,    12,    13,    22,
     263,     0,     0,    26,     0,     8,     0,    24,   -59,     0,
      14,   208,    15,     0,    16,     8,    17,    18,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,   425,    19,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
       0,    23,     0,     0,    24,    19,    25,     0,     0,     0,
       8,     0,    22,   -49,     0,    19,     0,     0,     0,    26,
      24,    27,    22,    28,    29,     0,     5,    30,     6,     7,
      24,     8,     9,    10,   -17,    26,     0,    11,   454,    12,
      13,     0,     0,     0,   114,    26,     0,   115,     0,     0,
      19,     0,    14,     0,    15,     0,    16,    22,    17,    18,
     116,   117,     0,   118,     0,    24,     0,     0,     0,   119,
       0,    19,   120,     0,     0,   121,     0,    21,    22,     0,
      26,     0,     0,    23,     0,     0,    24,     0,    25,     0,
       0,     0,     0,     0,     0,     0,   122,     0,   123,     0,
       0,    26,     0,    27,     0,    28,    29,     0,     5,    30,
       6,     7,     0,     8,     9,    10,     0,     0,     0,    11,
     457,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,    15,     0,    16,     0,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     0,    23,     0,     0,    24,     0,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,    27,     0,    28,    29,     0,
       5,    30,     6,     7,     0,     8,     9,    10,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,     0,
      16,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,    23,     0,     0,
      24,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    27,     0,    28,
      29,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    13,    14,    17,    30,    62,   149,   152,
     153,   188,    14,    19,    17,   118,   294,    29,    24,     6,
      26,   203,    25,   200,   219,    28,    29,   209,   291,    10,
     133,   155,   156,   157,   158,   159,   160,   161,   162,   367,
      51,   445,    11,    29,   185,    22,   149,    34,    44,    14,
      24,   455,    38,    24,    40,    50,    11,    43,    35,    45,
      31,    56,    54,    49,    19,    76,    35,    53,    56,   347,
      11,    57,    41,    47,     0,    61,    50,    69,    14,   342,
      35,    17,   264,    19,    56,    56,    81,    75,     6,    54,
     344,    87,    10,    56,    35,    13,    61,    56,   352,    17,
     428,    14,    14,    56,    69,    17,    87,   110,    26,   133,
      28,    88,    56,   116,   117,   118,   240,    17,    54,    84,
     302,   245,    12,   386,   227,    61,    78,    92,    14,   184,
      43,    19,   135,    69,    52,   330,    72,    55,    14,   126,
     418,    54,    54,    32,    33,    58,   149,    65,    84,    61,
      68,    27,    70,     7,   164,   332,    69,    69,   299,    77,
      72,    15,    80,    11,    82,    78,    41,    63,    54,    17,
     176,    84,    84,    91,   177,    61,   353,   180,    54,    14,
     357,   358,   185,    69,   366,    61,    14,    35,   198,    75,
     193,    11,    33,    69,    64,    36,    16,   207,    84,    75,
     167,   168,    22,   227,     4,    81,    92,    17,    84,    19,
     387,   266,    30,   316,    32,   218,   219,    90,     9,    54,
     169,   170,   399,    14,    15,   402,    54,    10,    11,    20,
      58,     5,    23,    61,    69,    18,   171,   172,   173,   174,
     175,    69,    27,    19,    50,   422,    37,    43,    39,    84,
      78,    42,    35,    42,    17,     8,    84,   312,   261,   436,
     263,   271,   405,    54,    37,     8,    12,    58,    17,    60,
      61,    83,    22,    43,    58,    66,    58,     9,    69,    25,
      71,    50,    14,    15,   287,   286,   296,    73,    20,   292,
     345,    23,   316,    84,   296,   438,   299,    19,    19,    56,
     303,    92,    44,    75,    72,    37,    10,    39,    75,   364,
      42,    10,    56,    19,    14,    14,    32,   320,    19,    19,
      75,    67,    54,   326,   327,    17,    58,   330,    60,    61,
      24,    14,     7,    79,    66,    81,   339,    69,    37,    71,
      17,    56,    14,    19,    27,    32,    17,    14,   349,   349,
      17,    17,    84,   408,    54,    54,    87,    35,    17,    58,
      92,    61,    61,    17,   367,    72,   369,    19,    56,    69,
      69,    54,    72,    75,    19,    10,    75,    75,    61,    78,
     383,   393,    54,    17,    84,    84,    69,    54,    87,    61,
     393,    58,    75,    75,    61,    19,    56,    69,    81,    17,
      72,    84,    69,   406,    36,    72,    17,    43,    75,    19,
     413,    78,    84,    17,    56,   425,   417,    84,    17,    17,
      17,    17,    44,   182,   366,   428,     3,    58,   192,    31,
     381,    14,     9,   390,    11,    12,   282,    14,    15,    16,
     443,   274,     6,    20,   445,    22,    23,     6,   292,   289,
     451,   451,    22,    14,   455,   456,   456,   154,    35,   220,
      37,   166,    39,    14,    41,    42,   369,   118,    34,   165,
     448,    54,   295,    -1,    -1,    -1,    27,    54,    61,    -1,
      -1,    58,    14,    60,    61,    -1,    69,    -1,    -1,    66,
      -1,    -1,    69,    54,    71,    27,    -1,    -1,    -1,    -1,
      61,    84,    -1,    54,    -1,    -1,    -1,    84,    69,    86,
      61,    88,    89,    -1,     9,    92,    11,    12,    69,    14,
      15,    16,    54,    84,    75,    20,    21,    22,    23,    61,
      81,    -1,    -1,    84,    -1,    14,    -1,    69,    17,    -1,
      35,    73,    37,    -1,    39,    14,    41,    42,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    27,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    69,    54,    71,    -1,    -1,    -1,
      14,    -1,    61,    17,    -1,    54,    -1,    -1,    -1,    84,
      69,    86,    61,    88,    89,    -1,     9,    92,    11,    12,
      69,    14,    15,    16,    73,    84,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    31,    84,    -1,    34,    -1,    -1,
      54,    -1,    35,    -1,    37,    -1,    39,    61,    41,    42,
      47,    48,    -1,    50,    -1,    69,    -1,    -1,    -1,    56,
      -1,    54,    59,    -1,    -1,    62,    -1,    60,    61,    -1,
      84,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    -1,     9,    92,
      11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,
      71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,
       9,    92,    11,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,
      89,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   126,   127,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    54,
      58,    60,    61,    66,    69,    71,    84,    86,    88,    89,
      92,    96,   117,   128,   129,   130,   132,   140,   141,   142,
     143,   145,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   166,   168,   170,   171,   172,   173,   174,   175,
     176,   177,   182,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   208,   216,     0,   182,
     132,   175,   177,    56,   164,    56,    56,   188,   203,   203,
      24,    31,   157,   164,    56,   181,   182,   161,   163,   164,
     194,    56,   186,   194,   182,   194,    17,   178,   182,   181,
      37,   145,   217,   128,    31,    34,    47,    48,    50,    56,
      59,    62,    83,    85,   119,   197,    11,   131,   132,   208,
      78,   102,     6,    10,    13,    17,    26,    28,    52,    55,
      65,    68,    70,    77,    80,    82,    91,   103,   144,   146,
      19,   100,    41,    63,     4,    29,    38,    40,    43,    45,
      49,    53,    57,    61,    64,    90,     5,    51,    76,    54,
      69,    12,    25,    67,    79,    81,    27,    19,   110,   165,
      50,    95,   209,   133,   122,    43,    42,   167,    17,   107,
       8,   105,   169,    37,    58,   141,   180,   113,     8,   114,
      17,   182,    72,   181,   182,   198,   204,    27,    73,   182,
     205,   206,   207,    75,   198,   216,    83,    24,    47,    50,
     118,   199,   132,    58,   145,   216,   182,    10,    87,    98,
     182,   204,   216,   184,   184,   185,   187,   187,   187,   187,
      61,   187,   187,   187,   187,    43,   188,   189,   190,   191,
     191,   192,   192,   193,   193,   193,   193,   193,   194,   182,
     108,    27,    75,    81,   182,   210,   211,    58,    95,    50,
     134,    19,   100,   204,    50,    56,    81,   158,   159,   162,
     109,   180,    19,    56,   109,   182,    44,    33,    36,   124,
     179,    17,    19,   188,   180,    11,    35,   213,   214,    19,
     100,    72,   188,    17,   214,    73,    75,    75,    56,   120,
     182,   200,   201,    75,   210,   199,    10,   104,   145,   216,
      32,   187,   187,    24,   182,   182,    10,    18,   214,    75,
      19,   100,    17,    56,    75,   135,   136,   137,   138,     7,
      97,   188,    17,   162,   160,   106,    19,   111,   161,   116,
     140,   115,   182,    17,    32,   112,   179,    17,    98,   178,
     112,   213,   203,   204,   123,   214,   182,    17,    72,    19,
     100,    75,   145,   216,   182,    56,   182,   182,   210,   180,
     139,    19,    75,    10,    99,   182,    17,    98,    75,   105,
      19,   100,    56,    30,   112,    21,   140,   105,   180,    17,
      36,   125,    17,   180,   180,    43,    19,   100,   123,   214,
     120,   182,   200,    17,   101,   135,   182,    98,   180,   159,
     181,   180,    17,   180,   184,    27,   182,   100,    17,   121,
     202,   182,    58,   141,   218,   112,    17,   180,    41,   212,
     214,   215,   188,    17,   120,    44,    87,   180,   183,   184,
     182,   116,    58,   212,    21,    44,   116,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   121,   122,   122,   123,   123,   123,   124,   124,
     125,   125,   126,   127,   128,   129,   130,   130,   130,   131,
     133,   132,   134,   134,   135,   135,   136,   137,   139,   138,
     140,   140,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   143,   143,   143,   144,   145,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   147,   148,   149,   149,   149,   149,   150,   151,   152,
     153,   153,   153,   154,   154,   155,   156,   157,   157,   157,
     158,   158,   158,   160,   159,   161,   162,   163,   165,   164,
     167,   166,   169,   168,   170,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   172,   173,   174,   175,
     176,   176,   177,   178,   179,   180,   180,   181,   182,   182,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   188,   188,
     189,   189,   190,   190,   191,   191,   191,   192,   192,   192,
     193,   193,   193,   193,   193,   193,   194,   194,   194,   194,
     195,   195,   196,   196,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   198,   198,
     199,   199,   199,   199,   200,   200,   201,   201,   202,   203,
     204,   204,   205,   205,   206,   206,   206,   206,   207,   207,
     209,   208,   210,   210,   211,   211,   211,   211,   211,   211,
     212,   212,   213,   213,   214,   214,   215,   215,   216,   216,
     217,   217,   218,   218,   218
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     2,     0,     1,     0,     2,
       0,     1,     2,     2,     3,     3,     0,     2,     2,     0,
       2,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       2,     0,     5,     0,     3,     0,     3,     0,     2,     0,
       2,     1,     2,     0,     1,     1,     2,     1,     2,     0,
       1,     0,     1,     0,     3,     0,     5,     4,     3,     4,
       0,     3,     1,     2,     4,     1,     2,     2,     2,     2,
       0,     8,     2,     3,     3,     1,     2,     1,     0,     3,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     3,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     1,     1,     2,     4,     1,     1,     1,
       1,     3,     1,     0,     3,     2,     3,     2,     0,     3,
       0,     4,     0,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     6,     5,     8,
       6,     6,     6,     2,     2,     1,     4,     1,     1,     5,
       1,     3,     1,     3,     1,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     4,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     1,
       1,     3,     3,     2,     2,     3,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     3,     3,     2,     3,     2,     1,     4,     2,     3,
       3,     2,     1,     1,     4,     5,     3,     4,     2,     1,
       0,     6,     3,     2,     1,     2,     3,     3,     2,     2,
       1,     1,     4,     5,     1,     2,     2,     3,     1,     2,
       2,     1,     1,     4,     6
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
#line 43 "parser.y"
                             { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 0); printf("newline_or_stmt_star_1\n"); }
#line 2259 "parser.c"
    break;

  case 3: /* newline_or_stmt_star: newline_or_stmt_star NEWLINE  */
#line 44 "parser.y"
                                                   { yyval = yyvsp[-1]; printf("newline_or_stmt_star_2\n"); }
#line 2265 "parser.c"
    break;

  case 4: /* newline_or_stmt_star: newline_or_stmt_star stmt  */
#line 45 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; printf("newline_or_stmt_star_3\n"); }
#line 2271 "parser.c"
    break;

  case 22: /* assing_yield_or_test_plus: EQUAL yield_expr  */
#line 90 "parser.y"
                                            { yyval = yyvsp[0]; }
#line 2277 "parser.c"
    break;

  case 23: /* assing_yield_or_test_plus: EQUAL testlist_star_expr  */
#line 91 "parser.y"
                                                    { yyval = yyvsp[0]; }
#line 2283 "parser.c"
    break;

  case 24: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL yield_expr  */
#line 92 "parser.y"
                                                                      { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2289 "parser.c"
    break;

  case 25: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL testlist_star_expr  */
#line 93 "parser.y"
                                                                              { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2295 "parser.c"
    break;

  case 30: /* opt_as_name: AS NAME  */
#line 112 "parser.y"
                     { new_var(); }
#line 2301 "parser.c"
    break;

  case 36: /* dot_name_star: dot_name_star DOT NAME  */
#line 124 "parser.y"
                                      { new_var(); }
#line 2307 "parser.c"
    break;

  case 38: /* comma_name_star: comma_name_star COMMA NAME  */
#line 128 "parser.y"
                                            { new_var(); }
#line 2313 "parser.c"
    break;

  case 55: /* trailer_plus: trailer  */
#line 209 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2319 "parser.c"
    break;

  case 56: /* trailer_plus: trailer_plus trailer  */
#line 210 "parser.y"
                                               { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2325 "parser.c"
    break;

  case 57: /* string_plus: STRING  */
#line 217 "parser.y"
                    { yyval = new_subtree(STRING_NODE, STR_TYPE, 0); }
#line 2331 "parser.c"
    break;

  case 58: /* string_plus: string_plus STRING  */
#line 218 "parser.y"
                                { add_child(yyvsp[-1],yyvsp[0]); yyval = yyvsp[-1]; }
#line 2337 "parser.c"
    break;

  case 72: /* program: file_input  */
#line 262 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); printf("program\n"); }
#line 2343 "parser.c"
    break;

  case 73: /* file_input: newline_or_stmt_star ENDMARKER  */
#line 267 "parser.y"
                                           { yyval = yyvsp[-1]; printf("file input\n"); }
#line 2349 "parser.c"
    break;

  case 80: /* $@1: %empty  */
#line 284 "parser.y"
                  { new_var(); }
#line 2355 "parser.c"
    break;

  case 88: /* $@2: %empty  */
#line 304 "parser.y"
             { check_var("tfpdef"); }
#line 2361 "parser.c"
    break;

  case 90: /* stmt: simple_stmt  */
#line 309 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2367 "parser.c"
    break;

  case 91: /* stmt: compound_stmt  */
#line 310 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2373 "parser.c"
    break;

  case 92: /* simple_stmt: small_stmt opt_semi NEWLINE  */
#line 313 "parser.y"
                                         { yyval = yyvsp[-2]; }
#line 2379 "parser.c"
    break;

  case 93: /* small_stmt: expr_stmt  */
#line 316 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2385 "parser.c"
    break;

  case 94: /* small_stmt: del_stmt  */
#line 317 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2391 "parser.c"
    break;

  case 95: /* small_stmt: pass_stmt  */
#line 318 "parser.y"
                               { yyval = yyvsp[0]; }
#line 2397 "parser.c"
    break;

  case 96: /* small_stmt: flow_stmt  */
#line 319 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2403 "parser.c"
    break;

  case 97: /* small_stmt: import_stmt  */
#line 320 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2409 "parser.c"
    break;

  case 98: /* small_stmt: global_stmt  */
#line 321 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2415 "parser.c"
    break;

  case 99: /* small_stmt: nonlocal_stmt  */
#line 322 "parser.y"
                                  { yyval = yyvsp[0]; }
#line 2421 "parser.c"
    break;

  case 100: /* small_stmt: assert_stmt  */
#line 323 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2427 "parser.c"
    break;

  case 105: /* expr_stmt: testlist_star_expr assing_yield_or_test_plus opt_type_comment  */
#line 330 "parser.y"
                                                                                 { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2433 "parser.c"
    break;

  case 107: /* testlist_star_expr: test opt_comma  */
#line 336 "parser.y"
                                   { yyval = yyvsp[-1]; }
#line 2439 "parser.c"
    break;

  case 121: /* del_stmt: DEL exprlist  */
#line 356 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2445 "parser.c"
    break;

  case 122: /* pass_stmt: PASS  */
#line 359 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2451 "parser.c"
    break;

  case 127: /* break_stmt: BREAK  */
#line 369 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2457 "parser.c"
    break;

  case 128: /* continue_stmt: CONTINUE  */
#line 372 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2463 "parser.c"
    break;

  case 135: /* import_name: IMPORT dotted_as_names  */
#line 390 "parser.y"
                                    {}
#line 2469 "parser.c"
    break;

  case 143: /* $@3: %empty  */
#line 414 "parser.y"
                     { new_var(); }
#line 2475 "parser.c"
    break;

  case 148: /* $@4: %empty  */
#line 426 "parser.y"
                   { new_var(); }
#line 2481 "parser.c"
    break;

  case 150: /* $@5: %empty  */
#line 429 "parser.y"
                         { new_var(); }
#line 2487 "parser.c"
    break;

  case 152: /* $@6: %empty  */
#line 432 "parser.y"
                             { new_var(); }
#line 2493 "parser.c"
    break;

  case 177: /* namedexpr_test: test  */
#line 483 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2499 "parser.c"
    break;

  case 181: /* or_test: and_test OR or_test  */
#line 504 "parser.y"
                             { yyval = new_subtree(OR_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); printf("or_test_1\n"); }
#line 2505 "parser.c"
    break;

  case 182: /* or_test: and_test  */
#line 505 "parser.y"
                  { yyval = yyvsp[0]; printf("or_test_2\n"); }
#line 2511 "parser.c"
    break;

  case 183: /* and_test: not_test AND and_test  */
#line 513 "parser.y"
                                { yyval = new_subtree(AND_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2517 "parser.c"
    break;

  case 184: /* and_test: not_test  */
#line 514 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2523 "parser.c"
    break;

  case 185: /* not_test: NOT not_test  */
#line 518 "parser.y"
                       { yyval = new_subtree(NOT_NODE, BOOL_TYPE, 1, yyvsp[0]); }
#line 2529 "parser.c"
    break;

  case 186: /* not_test: comparison  */
#line 519 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2535 "parser.c"
    break;

  case 187: /* comparison: expr LESS comparison  */
#line 522 "parser.y"
                                 { yyval = new_subtree(LESS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2541 "parser.c"
    break;

  case 188: /* comparison: expr GREATER comparison  */
#line 523 "parser.y"
                                    { yyval = new_subtree(GREATER_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2547 "parser.c"
    break;

  case 189: /* comparison: expr EQEQUAL comparison  */
#line 524 "parser.y"
                                    { yyval = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2553 "parser.c"
    break;

  case 190: /* comparison: expr GREATEREQUAL comparison  */
#line 525 "parser.y"
                                         { yyval = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2559 "parser.c"
    break;

  case 191: /* comparison: expr LESSEQUAL comparison  */
#line 526 "parser.y"
                                      { yyval = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2565 "parser.c"
    break;

  case 192: /* comparison: expr NOTEQUAL comparison  */
#line 527 "parser.y"
                                     { yyval = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2571 "parser.c"
    break;

  case 193: /* comparison: expr IN comparison  */
#line 528 "parser.y"
                               { yyval = new_subtree(IN_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2577 "parser.c"
    break;

  case 194: /* comparison: expr NOT IN comparison  */
#line 529 "parser.y"
                                   { yyval = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2583 "parser.c"
    break;

  case 195: /* comparison: expr IS comparison  */
#line 530 "parser.y"
                               { yyval = new_subtree(IS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2589 "parser.c"
    break;

  case 196: /* comparison: expr IS NOT comparison  */
#line 531 "parser.y"
                                   { yyval = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2595 "parser.c"
    break;

  case 197: /* comparison: expr  */
#line 532 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2601 "parser.c"
    break;

  case 198: /* expr: xor_expr VBAR expr  */
#line 557 "parser.y"
                         { yyval = new_subtree(BIT_OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2607 "parser.c"
    break;

  case 199: /* expr: xor_expr  */
#line 558 "parser.y"
               { yyval = yyvsp[0]; }
#line 2613 "parser.c"
    break;

  case 200: /* xor_expr: and_expr CIRCUMFLEX xor_expr  */
#line 561 "parser.y"
                                       { yyval = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2619 "parser.c"
    break;

  case 201: /* xor_expr: and_expr  */
#line 562 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2625 "parser.c"
    break;

  case 202: /* and_expr: shift_expr AMPER and_expr  */
#line 565 "parser.y"
                                    { yyval = new_subtree(BIT_AND_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2631 "parser.c"
    break;

  case 203: /* and_expr: shift_expr  */
#line 566 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2637 "parser.c"
    break;

  case 204: /* shift_expr: arith_expr LEFTSHIFT shift_expr  */
#line 569 "parser.y"
                                            { yyval = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2643 "parser.c"
    break;

  case 205: /* shift_expr: arith_expr RIGHTSHIFT shift_expr  */
#line 570 "parser.y"
                                             { yyval = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2649 "parser.c"
    break;

  case 206: /* shift_expr: arith_expr  */
#line 571 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2655 "parser.c"
    break;

  case 207: /* arith_expr: term PLUS arith_expr  */
#line 574 "parser.y"
                                 { yyval = new_subtree(PLUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2661 "parser.c"
    break;

  case 208: /* arith_expr: term MINUS arith_expr  */
#line 575 "parser.y"
                                  { yyval = new_subtree(MINUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2667 "parser.c"
    break;

  case 209: /* arith_expr: term  */
#line 576 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2673 "parser.c"
    break;

  case 210: /* term: factor STAR term  */
#line 579 "parser.y"
                       { yyval = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2679 "parser.c"
    break;

  case 211: /* term: factor AT term  */
#line 580 "parser.y"
                     { yyval = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2685 "parser.c"
    break;

  case 212: /* term: factor SLASH term  */
#line 581 "parser.y"
                        { yyval = new_subtree(DIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2691 "parser.c"
    break;

  case 213: /* term: factor PERCENT term  */
#line 582 "parser.y"
                          { yyval = new_subtree(MOD_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2697 "parser.c"
    break;

  case 214: /* term: factor DOUBLESLASH term  */
#line 583 "parser.y"
                              { yyval = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2703 "parser.c"
    break;

  case 215: /* term: factor  */
#line 584 "parser.y"
             { yyval = yyvsp[0]; }
#line 2709 "parser.c"
    break;

  case 216: /* factor: PLUS factor  */
#line 587 "parser.y"
                    { yyval = new_subtree(PLUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2715 "parser.c"
    break;

  case 217: /* factor: MINUS factor  */
#line 588 "parser.y"
                     { yyval = new_subtree(MINUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2721 "parser.c"
    break;

  case 218: /* factor: TILDE factor  */
#line 589 "parser.y"
                     { yyval = new_subtree(TILDE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2727 "parser.c"
    break;

  case 219: /* factor: power  */
#line 590 "parser.y"
              { yyval = yyvsp[0]; }
#line 2733 "parser.c"
    break;

  case 220: /* power: atom_expr  */
#line 593 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2739 "parser.c"
    break;

  case 221: /* power: atom_expr DOUBLESTAR factor  */
#line 594 "parser.y"
                                   { yyval = new_subtree(POWER_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2745 "parser.c"
    break;

  case 222: /* atom_expr: opt_await atom trailer_plus  */
#line 597 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2751 "parser.c"
    break;

  case 223: /* atom_expr: opt_await atom  */
#line 598 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2757 "parser.c"
    break;

  case 224: /* atom: LPAR RPAR  */
#line 604 "parser.y"
                { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2763 "parser.c"
    break;

  case 225: /* atom: LPAR yield_expr RPAR  */
#line 605 "parser.y"
                           { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2769 "parser.c"
    break;

  case 226: /* atom: LPAR testlist_comp RPAR  */
#line 606 "parser.y"
                              { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2775 "parser.c"
    break;

  case 227: /* atom: LSQB RSQB  */
#line 607 "parser.y"
                { yyval = new_node(LIST_NODE, 0, NO_TYPE); }
#line 2781 "parser.c"
    break;

  case 228: /* atom: LSQB testlist_comp RSQB  */
#line 608 "parser.y"
                              { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2787 "parser.c"
    break;

  case 229: /* atom: LBRACE RBRACE  */
#line 609 "parser.y"
                    { yyval = new_node(DICT_NODE, 0, NO_TYPE); }
#line 2793 "parser.c"
    break;

  case 230: /* atom: LBRACE dictorsetmaker RBRACE  */
#line 610 "parser.y"
                                   { yyval = new_subtree(DICT_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2799 "parser.c"
    break;

  case 231: /* atom: NAME  */
#line 611 "parser.y"
           { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2805 "parser.c"
    break;

  case 232: /* atom: NUMBER  */
#line 612 "parser.y"
             { yyval = new_node(NUMBER_NODE, 0, NO_TYPE); }
#line 2811 "parser.c"
    break;

  case 233: /* atom: string_plus  */
#line 613 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2817 "parser.c"
    break;

  case 234: /* atom: ELLIPSIS  */
#line 614 "parser.y"
               { yyval = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
#line 2823 "parser.c"
    break;

  case 235: /* atom: NONE  */
#line 615 "parser.y"
           { yyval = new_node(NONE_NODE, 0, NO_TYPE); }
#line 2829 "parser.c"
    break;

  case 236: /* atom: TRUE  */
#line 616 "parser.y"
           { yyval = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
#line 2835 "parser.c"
    break;

  case 237: /* atom: FALSE  */
#line 617 "parser.y"
            { yyval = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
#line 2841 "parser.c"
    break;

  case 239: /* testlist_comp: testlist  */
#line 629 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2847 "parser.c"
    break;

  case 240: /* trailer: LPAR RPAR  */
#line 633 "parser.y"
                   { yyval = new_node(ARGLIST_NODE, 0, NO_TYPE); }
#line 2853 "parser.c"
    break;

  case 241: /* trailer: LPAR arglist RPAR  */
#line 634 "parser.y"
                           { yyval = yyvsp[-1]; }
#line 2859 "parser.c"
    break;

  case 242: /* trailer: LSQB subscriptlist RSQB  */
#line 635 "parser.y"
                                 { yyval = yyvsp[-1]; }
#line 2865 "parser.c"
    break;

  case 243: /* trailer: DOT NAME  */
#line 636 "parser.y"
                  { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2871 "parser.c"
    break;

  case 244: /* subscriptlist: subscript COMMA subscriptlist  */
#line 641 "parser.y"
                                             { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; printf("Adiciona comma subscript\n");}
#line 2877 "parser.c"
    break;

  case 245: /* subscriptlist: subscript opt_comma  */
#line 642 "parser.y"
                                   { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); printf("Fecha recursão subscript"); }
#line 2883 "parser.c"
    break;

  case 250: /* testlist: test COMMA testlist  */
#line 658 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2889 "parser.c"
    break;

  case 251: /* testlist: test opt_comma  */
#line 659 "parser.y"
                         { yyval = new_subtree(TEST_LIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2895 "parser.c"
    break;

  case 260: /* $@7: %empty  */
#line 679 "parser.y"
                     { new_var(); }
#line 2901 "parser.c"
    break;

  case 262: /* arglist: argument1 COMMA arglist  */
#line 685 "parser.y"
                                 { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2907 "parser.c"
    break;

  case 263: /* arglist: argument1 opt_comma  */
#line 686 "parser.y"
                             { yyval = new_subtree(ARGLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2913 "parser.c"
    break;


#line 2917 "parser.c"

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

#line 726 "parser.y"


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
    // int idx = lookup_var(vt, yytext);
    // printf("Chegueeei %s\n",yytext);
    // if (idx != -1) {
    //     printf("SEMANTIC ERROR (%d): variable '%s' already declared at line %d.\n",
    //             yylineno, yytext, get_line(vt, idx));
    //     exit(EXIT_FAILURE);
    // }
    // add_var(vt, yytext, yylineno, NO_TYPE);
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

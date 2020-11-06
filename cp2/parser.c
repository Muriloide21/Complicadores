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
  YYSYMBOL_comma_argument_star = 99,       /* comma_argument_star  */
  YYSYMBOL_opt_assign_test = 100,          /* opt_assign_test  */
  YYSYMBOL_opt_comma = 101,                /* opt_comma  */
  YYSYMBOL_opt_colon_test = 102,           /* opt_colon_test  */
  YYSYMBOL_opt_semi = 103,                 /* opt_semi  */
  YYSYMBOL_assing_yield_or_test_plus = 104, /* assing_yield_or_test_plus  */
  YYSYMBOL_opt_assing_yield_or_test = 105, /* opt_assing_yield_or_test  */
  YYSYMBOL_comma_test_star_expr_star = 106, /* comma_test_star_expr_star  */
  YYSYMBOL_opt_as_name = 107,              /* opt_as_name  */
  YYSYMBOL_comma_import_as_name_star = 108, /* comma_import_as_name_star  */
  YYSYMBOL_comma_dotted_as_name_star = 109, /* comma_dotted_as_name_star  */
  YYSYMBOL_dot_name_star = 110,            /* dot_name_star  */
  YYSYMBOL_comma_name_star = 111,          /* comma_name_star  */
  YYSYMBOL_opt_comma_test = 112,           /* opt_comma_test  */
  YYSYMBOL_elif_test_suite_star = 113,     /* elif_test_suite_star  */
  YYSYMBOL_opt_else_suite = 114,           /* opt_else_suite  */
  YYSYMBOL_comma_with_item_star = 115,     /* comma_with_item_star  */
  YYSYMBOL_opt_as_expr = 116,              /* opt_as_expr  */
  YYSYMBOL_opt_test_as_name = 117,         /* opt_test_as_name  */
  YYSYMBOL_stmt_plus = 118,                /* stmt_plus  */
  YYSYMBOL_opt_colonass_test = 119,        /* opt_colonass_test  */
  YYSYMBOL_and_not_test_star = 120,        /* and_not_test_star  */
  YYSYMBOL_comp_op_expr_star = 121,        /* comp_op_expr_star  */
  YYSYMBOL_or_xor_expr_star = 122,         /* or_xor_expr_star  */
  YYSYMBOL_xor_and_expr_star = 123,        /* xor_and_expr_star  */
  YYSYMBOL_and_shift_expr_star = 124,      /* and_shift_expr_star  */
  YYSYMBOL_shift_arith_expr_star = 125,    /* shift_arith_expr_star  */
  YYSYMBOL_op_term_star = 126,             /* op_term_star  */
  YYSYMBOL_op_factor_star = 127,           /* op_factor_star  */
  YYSYMBOL_opt_await = 128,                /* opt_await  */
  YYSYMBOL_trailer_star = 129,             /* trailer_star  */
  YYSYMBOL_string_plus = 130,              /* string_plus  */
  YYSYMBOL_comma_namedexpr_test_star_expr_star = 131, /* comma_namedexpr_test_star_expr_star  */
  YYSYMBOL_comma_subscript_star = 132,     /* comma_subscript_star  */
  YYSYMBOL_opt_test = 133,                 /* opt_test  */
  YYSYMBOL_opt_sliceop = 134,              /* opt_sliceop  */
  YYSYMBOL_comma_expr_star_expr_star = 135, /* comma_expr_star_expr_star  */
  YYSYMBOL_comma_test_star = 136,          /* comma_test_star  */
  YYSYMBOL_comma_dict1_star = 137,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 138,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 139,        /* opt_finally_suite  */
  YYSYMBOL_program = 140,                  /* program  */
  YYSYMBOL_file_input = 141,               /* file_input  */
  YYSYMBOL_decorator = 142,                /* decorator  */
  YYSYMBOL_decorators = 143,               /* decorators  */
  YYSYMBOL_decorated = 144,                /* decorated  */
  YYSYMBOL_async_funcdef = 145,            /* async_funcdef  */
  YYSYMBOL_funcdef = 146,                  /* funcdef  */
  YYSYMBOL_147_1 = 147,                    /* $@1  */
  YYSYMBOL_parameters = 148,               /* parameters  */
  YYSYMBOL_arguments = 149,                /* arguments  */
  YYSYMBOL_argument = 150,                 /* argument  */
  YYSYMBOL_typedargslist = 151,            /* typedargslist  */
  YYSYMBOL_tfpdef = 152,                   /* tfpdef  */
  YYSYMBOL_153_2 = 153,                    /* $@2  */
  YYSYMBOL_stmt = 154,                     /* stmt  */
  YYSYMBOL_simple_stmt = 155,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 156,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 157,                /* expr_stmt  */
  YYSYMBOL_annassign = 158,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 159,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 160,                /* augassign  */
  YYSYMBOL_del_stmt = 161,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 162,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 163,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 164,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 165,            /* continue_stmt  */
  YYSYMBOL_yield_stmt = 166,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 167,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 168,              /* import_stmt  */
  YYSYMBOL_import_name = 169,              /* import_name  */
  YYSYMBOL_import_from = 170,              /* import_from  */
  YYSYMBOL_from_part = 171,                /* from_part  */
  YYSYMBOL_import_part = 172,              /* import_part  */
  YYSYMBOL_import_as_name = 173,           /* import_as_name  */
  YYSYMBOL_174_3 = 174,                    /* $@3  */
  YYSYMBOL_dotted_as_name = 175,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 176,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 177,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 178,              /* dotted_name  */
  YYSYMBOL_179_4 = 179,                    /* $@4  */
  YYSYMBOL_global_stmt = 180,              /* global_stmt  */
  YYSYMBOL_181_5 = 181,                    /* $@5  */
  YYSYMBOL_nonlocal_stmt = 182,            /* nonlocal_stmt  */
  YYSYMBOL_183_6 = 183,                    /* $@6  */
  YYSYMBOL_assert_stmt = 184,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 185,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 186,               /* async_stmt  */
  YYSYMBOL_if_stmt = 187,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 188,               /* while_stmt  */
  YYSYMBOL_for_stmt = 189,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 190,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 191,                /* with_stmt  */
  YYSYMBOL_with_item = 192,                /* with_item  */
  YYSYMBOL_except_clause = 193,            /* except_clause  */
  YYSYMBOL_suite = 194,                    /* suite  */
  YYSYMBOL_namedexpr_test = 195,           /* namedexpr_test  */
  YYSYMBOL_test = 196,                     /* test  */
  YYSYMBOL_test_nocond = 197,              /* test_nocond  */
  YYSYMBOL_or_test = 198,                  /* or_test  */
  YYSYMBOL_and_test = 199,                 /* and_test  */
  YYSYMBOL_not_test = 200,                 /* not_test  */
  YYSYMBOL_comparison = 201,               /* comparison  */
  YYSYMBOL_comp_op = 202,                  /* comp_op  */
  YYSYMBOL_expr = 203,                     /* expr  */
  YYSYMBOL_xor_expr = 204,                 /* xor_expr  */
  YYSYMBOL_and_expr = 205,                 /* and_expr  */
  YYSYMBOL_shift_expr = 206,               /* shift_expr  */
  YYSYMBOL_arith_expr = 207,               /* arith_expr  */
  YYSYMBOL_term = 208,                     /* term  */
  YYSYMBOL_factor = 209,                   /* factor  */
  YYSYMBOL_power = 210,                    /* power  */
  YYSYMBOL_atom_expr = 211,                /* atom_expr  */
  YYSYMBOL_atom = 212,                     /* atom  */
  YYSYMBOL_testlist_comp = 213,            /* testlist_comp  */
  YYSYMBOL_trailer = 214,                  /* trailer  */
  YYSYMBOL_subscriptlist = 215,            /* subscriptlist  */
  YYSYMBOL_subscript = 216,                /* subscript  */
  YYSYMBOL_sliceop = 217,                  /* sliceop  */
  YYSYMBOL_exprlist = 218,                 /* exprlist  */
  YYSYMBOL_testlist = 219,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 220,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 221,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 222,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 223,                 /* classdef  */
  YYSYMBOL_224_7 = 224,                    /* $@7  */
  YYSYMBOL_arglist = 225,                  /* arglist  */
  YYSYMBOL_argument1 = 226,                /* argument1  */
  YYSYMBOL_comp_iter = 227,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 228,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 229,                 /* comp_for  */
  YYSYMBOL_comp_if = 230,                  /* comp_if  */
  YYSYMBOL_yield_expr = 231,               /* yield_expr  */
  YYSYMBOL_yield_arg = 232,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 233           /* func_body_suite  */
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
#define YYLAST   998

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  307
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  483

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
       0,    41,    41,    42,    43,    46,    47,    48,    51,    52,
      55,    56,    59,    60,    63,    64,    67,    68,    71,    72,
      75,    76,    84,    85,    88,    89,    90,    91,    94,    95,
      96,    99,   100,   101,   108,   109,   112,   113,   116,   117,
     120,   121,   124,   125,   128,   129,   132,   133,   136,   137,
     140,   141,   144,   145,   148,   149,   152,   153,   156,   157,
     164,   165,   168,   169,   172,   173,   176,   177,   180,   181,
     184,   185,   186,   189,   190,   191,   194,   195,   196,   197,
     198,   199,   202,   203,   206,   207,   210,   211,   214,   215,
     216,   219,   220,   223,   224,   227,   228,   231,   232,   236,
     237,   240,   241,   242,   245,   246,   249,   250,   255,   260,
     263,   266,   269,   270,   271,   274,   277,   277,   280,   281,
     284,   287,   290,   293,   293,   298,   299,   302,   305,   306,
     307,   308,   309,   310,   311,   312,   315,   316,   317,   318,
     319,   322,   325,   326,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   344,   347,   350,
     351,   353,   354,   357,   360,   366,   369,   370,   371,   374,
     375,   378,   381,   392,   393,   394,   397,   398,   399,   402,
     402,   405,   408,   411,   414,   414,   417,   417,   420,   420,
     423,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     437,   438,   439,   442,   445,   448,   451,   452,   455,   458,
     461,   464,   465,   468,   471,   472,   476,   489,   490,   498,
     501,   502,   505,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   526,   529,   532,   535,   538,   541,   544,
     545,   546,   547,   550,   551,   554,   557,   558,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     573,   574,   575,   576,   579,   580,   581,   582,   585,   588,
     589,   592,   595,   598,   601,   602,   605,   606,   607,   608,
     611,   612,   613,   614,   617,   617,   620,   623,   624,   625,
     626,   627,   628,   631,   632,   635,   636,   639,   640,   643,
     644,   647,   648,   651,   652,   655,   656,   657
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
  "opt_arrow_test", "opt_type_comment", "comma_argument_star",
  "opt_assign_test", "opt_comma", "opt_colon_test", "opt_semi",
  "assing_yield_or_test_plus", "opt_assing_yield_or_test",
  "comma_test_star_expr_star", "opt_as_name", "comma_import_as_name_star",
  "comma_dotted_as_name_star", "dot_name_star", "comma_name_star",
  "opt_comma_test", "elif_test_suite_star", "opt_else_suite",
  "comma_with_item_star", "opt_as_expr", "opt_test_as_name", "stmt_plus",
  "opt_colonass_test", "and_not_test_star", "comp_op_expr_star",
  "or_xor_expr_star", "xor_and_expr_star", "and_shift_expr_star",
  "shift_arith_expr_star", "op_term_star", "op_factor_star", "opt_await",
  "trailer_star", "string_plus", "comma_namedexpr_test_star_expr_star",
  "comma_subscript_star", "opt_test", "opt_sliceop",
  "comma_expr_star_expr_star", "comma_test_star", "comma_dict1_star",
  "except_suite_plus", "opt_finally_suite", "program", "file_input",
  "decorator", "decorators", "decorated", "async_funcdef", "funcdef",
  "$@1", "parameters", "arguments", "argument", "typedargslist", "tfpdef",
  "$@2", "stmt", "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "yield_stmt", "raise_stmt", "import_stmt",
  "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "$@3", "dotted_as_name", "import_as_names",
  "dotted_as_names", "dotted_name", "$@4", "global_stmt", "$@5",
  "nonlocal_stmt", "$@6", "assert_stmt", "compound_stmt", "async_stmt",
  "if_stmt", "while_stmt", "for_stmt", "try_stmt", "with_stmt",
  "with_item", "except_clause", "suite", "namedexpr_test", "test",
  "test_nocond", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr", "arith_expr",
  "term", "factor", "power", "atom_expr", "atom", "testlist_comp",
  "trailer", "subscriptlist", "subscript", "sliceop", "exprlist",
  "testlist", "dictorsetmaker", "dictorsetmaker1", "dictorsetmaker2",
  "classdef", "$@7", "arglist", "argument1", "comp_iter", "sync_comp_for",
  "comp_for", "comp_if", "yield_expr", "yield_arg", "func_body_suite", YY_NULLPTR
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

#define YYPACT_NINF (-403)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-302)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -403,   484,    32,  -403,  -403,   478,    22,    14,  -403,  -403,
      17,  -403,    79,    24,    24,    27,    95,   478,    14,    24,
    -403,   127,   478,  -403,    24,   388,    24,    47,   478,   478,
     305,   179,   562,  -403,   130,  -403,  -403,  -403,  -403,   120,
    -403,    20,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,   159,   140,  -403,  -403,   893,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,   180,  -403,  -403,  -403,   195,
    -403,  -403,  -403,  -403,  -403,   176,  -403,  -403,  -403,  -403,
     186,  -403,  -403,   188,  -403,  -403,   216,   218,  -403,  -403,
     236,  -403,  -403,  -403,  -403,   208,  -403,   848,  -403,   240,
     232,   478,  -403,  -403,  -403,  -403,  -403,   459,    53,     7,
    -403,  -403,  -403,  -403,  -403,   168,  -403,   231,  -403,  -403,
    -403,  -403,   196,  -403,    35,  -403,   478,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,     8,  -403,
      35,   237,   478,   478,   253,   237,   585,   202,   172,   255,
      64,     5,   309,    24,   478,  -403,  -403,   198,   210,   176,
     219,   258,   478,     0,  -403,   848,   478,  -403,   261,   214,
    -403,  -403,   478,   241,  -403,    -8,    52,    24,  -403,   848,
    -403,  -403,   149,   149,   209,    24,  -403,   207,    94,   217,
    -403,  -403,  -403,   212,   220,  -403,    74,  -403,  -403,  -403,
    -403,   279,    35,  -403,  -403,  -403,  -403,  -403,   370,  -403,
     260,  -403,   478,  -403,  -403,  -403,  -403,  -403,   233,  -403,
    -403,  -403,   250,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,    24,    24,    24,  -403,  -403,   273,   478,
    -403,   478,    42,   223,  -403,  -403,   282,   -20,   295,   407,
    -403,   286,   254,  -403,  -403,  -403,  -403,  -403,   287,  -403,
    -403,    14,  -403,   287,  -403,   812,   247,   290,    54,   292,
     227,   478,  -403,   285,   288,    24,   303,  -403,  -403,   303,
    -403,  -403,   149,   478,   237,  -403,   237,  -403,  -403,  -403,
    -403,   269,   480,   251,  -403,    35,  -403,  -403,  -403,   314,
    -403,   893,   478,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,   272,
    -403,  -403,   478,   478,  -403,  -403,   318,   848,  -403,  -403,
    -403,  -403,   266,   334,   478,   328,  -403,   227,   271,   236,
     329,   291,    71,  -403,   566,  -403,  -403,   236,   848,   333,
     315,   335,   848,   848,  -403,  -403,  -403,   311,    78,  -403,
    -403,   341,  -403,   149,  -403,  -403,  -403,   348,   351,   300,
    -403,  -403,   298,  -403,  -403,   111,  -403,  -403,  -403,  -403,
    -403,    55,  -403,  -403,   358,   367,  -403,   478,  -403,  -403,
     227,   848,  -403,  -403,   254,  -403,  -403,   478,  -403,  -403,
    -403,  -403,  -403,   848,   360,  -403,   848,  -403,  -403,   478,
    -403,  -403,   109,  -403,   341,  -403,   310,  -403,   368,  -403,
    -403,   339,   478,  -403,   227,  -403,   906,   285,  -403,   374,
    -403,   848,  -403,   164,    24,   381,  -403,   382,  -403,   162,
    -403,  -403,  -403,    -3,  -403,  -403,  -403,   848,  -403,   478,
    -403,  -403,  -403,  -403,   478,   324,  -403,  -403,  -403,   812,
     345,  -403,   164,  -403,  -403,  -403,   648,   362,  -403,  -403,
     812,   730,  -403
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    82,     0,   108,   109,    82,     0,     0,    83,   163,
       0,   164,     0,    82,    82,     0,     0,    82,     0,    82,
       3,     0,    82,   158,    82,    82,    82,     0,    82,    82,
      82,   111,     0,     8,     0,   198,   196,     4,   125,    22,
     128,   139,   129,   130,   131,   159,   160,   162,   161,   132,
     169,   170,   133,   134,   135,   126,   199,   191,   192,   193,
     194,   195,    31,   214,   218,    60,   221,    31,    64,    66,
      68,    70,    73,    76,   242,   243,   197,   165,     1,    44,
      62,   200,   202,   201,   184,     5,   284,   116,    97,   157,
       0,   173,   174,     0,   175,   186,     0,    58,    38,   171,
      34,   240,   188,   220,   239,   167,   241,    82,    50,    52,
       0,    82,   304,   302,     9,   256,   259,    82,    82,    82,
     253,   257,   254,    86,   258,   255,    84,     0,   114,   113,
     112,    23,     0,   150,    82,   147,    82,   156,   155,   153,
     145,   151,   149,   144,   154,   148,   146,   152,    12,   136,
      82,    18,    82,    82,   219,    18,   222,   233,   234,   235,
     236,   237,   238,    82,    82,   190,    40,    82,     0,     5,
       0,    18,    82,     0,    42,    82,    82,   213,   183,     0,
     181,    42,    82,     0,   211,     0,     0,    82,   209,    82,
     303,   249,    88,    62,     0,    82,   251,    31,    62,     0,
     274,   275,   246,     0,     0,    87,   245,   115,   127,    25,
      24,    28,    82,    13,   140,    99,   138,   137,    19,   142,
       0,   217,    82,   143,   225,   226,   224,   229,   231,   227,
     223,   228,     0,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,   244,    45,   185,    82,
       6,    82,   287,     0,    14,   110,     0,     0,    10,    82,
     272,     0,     0,   179,   176,   172,    36,   178,   187,    46,
      59,     0,    35,   189,   168,    82,    82,     0,    48,     0,
      12,    82,    53,    48,     0,    82,    18,   297,   260,    18,
     262,   250,   101,    82,    18,   280,    18,   282,   252,   248,
     247,     0,    82,    82,    85,    82,   141,    27,    26,    18,
      32,    33,    82,    61,   232,   230,    63,    65,    67,    69,
      71,    72,    75,    74,    78,    81,    80,    79,    77,     0,
     291,   292,    82,    82,   288,     7,    18,    82,   123,   118,
     122,    14,     0,    16,    82,     0,    98,    12,     0,    34,
      18,     0,    48,    39,    82,    56,   210,    34,    82,     0,
     106,     0,    82,    82,    51,   204,   298,     0,    82,   261,
     263,    18,   278,   101,   281,   283,   267,     0,   269,     0,
      91,   264,     0,    30,    29,    82,   273,   215,    41,   290,
     289,    12,   286,   285,    20,   120,   119,    82,   121,    11,
      12,    82,   177,   180,    19,   182,    43,    82,   203,   212,
      57,    55,   207,    82,     0,   206,    82,   104,   208,    82,
      89,    62,    82,   279,    18,   276,    82,   266,    18,   265,
     100,     0,    82,   124,    12,    17,    82,    48,    37,     0,
      49,    82,   105,   295,    82,     0,   277,    95,    94,    82,
     268,    15,    21,     0,   305,   117,   205,    82,   107,    82,
     296,   293,   294,   103,    82,    82,   270,    96,    92,    82,
       0,    47,   299,   216,   102,   271,    82,     0,   300,   306,
      82,    82,   307
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -403,  -403,   238,  -403,  -403,  -137,    68,  -403,  -128,  -403,
    -403,  -403,  -403,   -53,  -200,  -403,  -403,  -403,   229,  -403,
    -403,  -273,  -403,  -403,  -403,  -349,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,   221,  -403,
    -402,  -403,  -403,  -403,    38,  -403,  -403,  -403,  -403,   385,
    -403,  -403,  -403,    11,  -403,  -403,  -403,   -18,  -403,  -403,
    -403,     2,     1,  -403,  -403,  -403,   -22,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
      15,  -403,   152,   163,  -403,   170,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,   421,  -403,   422,   155,
     160,  -166,   -10,    37,  -403,  -148,  -403,   -16,  -403,  -403,
      -1,   199,   206,   194,   -17,   -12,    -4,  -403,  -403,  -403,
     326,  -403,  -403,    -2,  -403,   -13,   276,  -403,  -403,  -403,
     417,  -403,   157,  -403,   -14,   178,  -158,  -403,  -103,  -403,
    -403
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   168,    31,   345,   431,   336,   398,   219,   433,
     132,   148,   306,   151,   180,   350,   178,   248,   268,   165,
     352,   360,   186,   188,   356,   354,   177,   154,   156,   157,
     158,   159,   160,   161,   162,    32,   206,   125,   286,   428,
     377,   466,   171,   309,   371,   278,   415,     2,     3,    33,
      34,    35,   128,    36,   170,   258,   340,   341,   342,   343,
     394,   355,   184,    39,    40,   149,    41,   150,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    93,   265,
     266,   349,    98,   267,    99,   100,   166,    52,   174,    53,
     181,    54,    55,    56,    57,    58,    59,    60,    61,   108,
     279,   185,   192,    62,   472,    63,    64,    65,    66,   233,
      80,    68,    69,    70,    71,    72,    73,    74,    75,   126,
     194,   304,   379,   380,   467,    89,   216,   199,   200,   201,
      76,   169,   253,   254,   460,   287,   461,   462,    77,   113,
     455
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,    90,    38,    37,   220,   221,   103,    96,   112,   269,
     365,   214,    88,    88,   155,   101,   204,    81,   212,   110,
     104,     8,   106,   283,   447,   276,   133,   223,   277,    67,
     134,   210,    78,   135,   288,   290,   338,   136,     8,   295,
     297,   469,    79,   260,    12,   129,   137,   217,   138,     8,
     262,    91,   332,   284,    97,   339,   263,    14,    92,   239,
     333,    19,   105,   475,   107,   109,    97,     8,    22,   280,
      84,   281,   139,    86,   240,   140,    24,   285,    19,   408,
     195,   264,   202,    84,   470,   141,   359,   276,   142,    19,
     143,    26,     8,    24,   334,   213,    22,   144,   301,    30,
     145,   407,   146,   359,    24,   284,    67,    19,    26,   308,
      28,   147,   209,   -31,    22,   237,   193,   198,   193,    26,
     476,   302,    24,     8,   303,     8,   196,    30,   -19,   285,
     -19,   481,    19,    67,   372,    87,   444,    26,   207,    22,
     238,   127,   213,   363,   294,   296,    10,    24,   190,   403,
     -19,    95,    12,   -19,    97,   197,    97,   411,   369,   246,
     284,   370,    26,    19,   456,    19,   374,   -31,   375,   -19,
      22,   393,    22,   211,    67,   284,     8,    85,    24,   -93,
      24,   386,   -19,   102,   285,    94,   282,   215,    67,   -19,
     307,     7,   412,    26,   292,    26,   417,   418,   131,   285,
     152,   247,   384,   153,   252,   459,   313,   163,   392,   215,
     401,    67,     8,   270,   164,   425,    19,   311,   284,   274,
     320,   321,   405,    22,   293,   249,   167,   322,   323,   172,
     173,    24,   316,   175,   -19,   437,   176,   324,   325,   326,
     327,   328,   285,   423,   179,   182,    26,   440,   187,   189,
     442,   205,    19,    12,   208,   310,   218,   222,   346,    22,
     236,     8,   235,   436,   -54,     8,   234,    24,   255,   257,
     272,   443,   367,   250,    67,   458,    38,   259,   249,   251,
     271,   291,    26,   383,    88,   275,   330,   299,   331,   305,
     298,   471,   312,   315,   314,   300,   446,   329,   335,   337,
     450,    19,   344,   347,    67,    19,   351,   358,    22,   362,
     263,   473,    22,   357,   213,  -301,    24,   359,   109,     8,
      24,   241,   368,   285,     8,   376,   381,   -93,   388,   -93,
     373,    26,   251,   385,   242,    26,    67,   391,     8,   378,
     252,   396,   111,   -93,   397,   400,   402,   406,   404,   387,
     413,   414,   416,    67,   419,    38,   410,    67,   420,    19,
     422,    67,    67,  -301,    19,   426,    22,   421,   -94,   389,
     390,    22,   427,   429,    24,   432,   243,   441,    19,    24,
    -301,   399,   -93,  -301,     8,    22,   434,   449,   244,    26,
     245,   457,  -301,    24,    26,   338,   -93,   439,   464,   465,
      67,   -82,     8,   477,   -82,    97,   480,   256,    26,   395,
     273,   424,    67,   451,   289,    67,   114,   -82,   -82,   438,
     -82,     8,   430,   353,    19,   348,   -82,    82,    83,   -82,
     319,    22,   -82,   317,   435,    67,   364,   454,   361,    24,
      67,   318,    19,   463,    97,   203,  -166,   468,   261,    22,
     -19,   130,     0,   -82,    26,   -82,    67,    24,   478,   445,
     382,    19,   366,   448,     0,   -19,  -166,     0,    67,   452,
      38,     0,    26,     8,     0,    67,    24,    38,   410,    67,
      67,    38,    38,   410,     0,   -19,   378,     4,     0,     0,
       0,    26,     8,     5,     8,     6,     7,   -93,     8,     9,
      10,   474,   448,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     0,    14,
      22,    15,     0,    16,     0,    17,    18,     0,    24,     0,
       0,   191,    19,     0,    19,     0,     0,     0,    19,    22,
       0,    22,    20,    26,    21,    22,     0,    24,     0,    24,
      23,     0,     0,    24,     0,    25,     0,     0,     0,     0,
       0,     0,    26,     0,    26,     0,     0,     0,    26,     0,
      27,     0,    28,    29,     0,     5,    30,     6,     7,     0,
       8,     9,    10,     0,     0,     0,    11,   409,    12,    13,
       0,     0,     0,   115,     0,     0,   116,     0,     0,     0,
       0,    14,     0,    15,     0,    16,     0,    17,    18,   117,
     118,     0,   119,     0,   224,     0,     0,     0,   120,     0,
      19,   121,     0,   225,   122,   226,    21,    22,   227,     0,
     228,     0,    23,     0,   229,    24,     0,    25,   230,     0,
       0,     0,   231,     0,     0,   123,   232,   124,     0,     0,
      26,     0,    27,     0,    28,    29,     0,     5,    30,     6,
       7,     0,     8,     9,    10,     0,     0,     0,    11,   479,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,    15,     0,    16,     0,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,    21,    22,
       0,     0,     0,     0,    23,     0,     0,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,    27,     0,    28,    29,     0,     5,
      30,     6,     7,     0,     8,     9,    10,     0,     0,     0,
      11,   482,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,    15,     0,    16,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,    23,     0,     0,    24,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,     0,    28,    29,
       0,     5,    30,     6,     7,     0,     8,     9,    10,     0,
       0,     0,    11,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,     0,    15,
       0,    16,     0,    17,    18,     0,     0,     5,     0,     0,
       0,     0,     8,     9,     0,     0,    19,     0,    11,     0,
       0,    13,    21,    22,     0,     0,     0,     0,    23,     0,
       0,    24,     0,    25,     0,    15,     0,    16,     0,     0,
      18,     0,     0,     0,     0,     0,    26,   -62,    27,     0,
      28,    29,    19,     0,    30,     0,   183,     0,    21,    22,
       0,     0,     0,     0,    23,     5,     0,    24,     0,    25,
       8,     9,   -62,     0,     0,     0,    11,     0,     0,    13,
       0,   -62,    26,   -62,   -62,     0,   -62,     0,   -62,     0,
      30,     0,   -62,    15,     0,    16,   -62,     0,    18,     0,
     -62,     0,     0,     0,   -62,     0,   -62,     0,     0,     0,
      19,     0,     0,     0,   453,     0,    21,    22,     0,     0,
       0,     0,    23,     0,     0,    24,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
       1,    14,     1,     1,   152,   153,    22,    17,    30,   175,
     283,   148,    13,    14,    67,    19,   119,     6,    10,    29,
      24,    14,    26,   189,   426,    33,     6,   155,    36,    30,
      10,   134,     0,    13,   192,   193,    56,    17,    14,   197,
     198,    44,     5,   171,    22,    34,    26,   150,    28,    14,
      50,    24,    10,    11,    17,    75,    56,    35,    31,    54,
      18,    54,    25,   465,    17,    28,    29,    14,    61,    17,
      56,    19,    52,    56,    69,    55,    69,    35,    54,   352,
      27,    81,    75,    56,    87,    65,    32,    33,    68,    54,
      70,    84,    14,    69,   252,    87,    61,    77,    24,    92,
      80,    30,    82,    32,    69,    11,   107,    54,    84,   212,
      88,    91,   134,    19,    61,    51,   117,   118,   119,    84,
     469,    47,    69,    14,    50,    14,    73,    92,    17,    35,
      75,   480,    54,   134,   292,    56,    27,    84,   127,    61,
      76,    11,    87,   280,   197,   198,    16,    69,   111,   349,
      72,    56,    22,    75,   117,   118,   119,   357,   286,   163,
      11,   289,    84,    54,   437,    54,   294,    73,   296,    58,
      61,   337,    61,   136,   175,    11,    14,     7,    69,    17,
      69,   309,    73,    56,    35,    15,   187,   150,   189,    78,
     212,    12,   358,    84,   195,    84,   362,   363,    78,    35,
      41,   164,   305,    63,   167,    41,   222,    27,   336,   172,
     347,   212,    14,   176,    19,   373,    54,   218,    11,   182,
     237,   238,   350,    61,    17,    27,    50,   239,   240,    43,
      42,    69,   233,    17,    72,   401,    18,   241,   242,   243,
     244,   245,    35,   371,     8,    37,    84,   413,     8,    17,
     416,    83,    54,    22,    58,   218,    19,     4,   259,    61,
       5,    14,    90,   400,    17,    14,    64,    69,    58,    50,
      56,   419,   285,    75,   275,   441,   275,    19,    27,    81,
      19,    72,    84,   305,   285,    44,   249,    75,   251,    10,
      73,   457,    32,    43,    61,    75,   424,    24,    75,    17,
     428,    54,     7,    17,   305,    54,    19,    17,    61,    17,
      56,   459,    61,   276,    87,    10,    69,    32,   281,    14,
      69,    12,    19,    35,    14,    56,    75,    17,    56,    19,
     293,    84,    81,    19,    25,    84,   337,    19,    14,   302,
     303,    75,    37,    19,    10,    17,    75,    56,    19,   312,
      17,    36,    17,   354,    43,   354,   354,   358,   368,    54,
      19,   362,   363,    58,    54,    17,    61,   368,    17,   332,
     333,    61,    72,    75,    69,    17,    67,    17,    54,    69,
      75,   344,    72,    78,    14,    61,    19,    19,    79,    84,
      81,    17,    87,    69,    84,    56,    72,   407,    17,    17,
     401,    31,    14,    58,    34,   368,    44,   169,    84,   341,
     181,   373,   413,   431,   193,   416,    31,    47,    48,   404,
      50,    14,   385,   271,    54,   262,    56,     6,     6,    59,
     236,    61,    62,   234,   397,   436,   281,   436,   278,    69,
     441,   235,    54,   444,   407,   119,    58,   449,   172,    61,
      43,    34,    -1,    83,    84,    85,   457,    69,   472,   422,
     303,    54,   284,   426,    -1,    58,    78,    -1,   469,   432,
     469,    -1,    84,    14,    -1,   476,    69,   476,   476,   480,
     481,   480,   481,   481,    -1,    78,   449,     3,    -1,    -1,
      -1,    84,    14,     9,    14,    11,    12,    17,    14,    15,
      16,   464,   465,    -1,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    35,
      61,    37,    -1,    39,    -1,    41,    42,    -1,    69,    -1,
      -1,    72,    54,    -1,    54,    -1,    -1,    -1,    54,    61,
      -1,    61,    58,    84,    60,    61,    -1,    69,    -1,    69,
      66,    -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    84,    -1,    -1,    -1,    84,    -1,
      86,    -1,    88,    89,    -1,     9,    92,    11,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    22,    23,
      -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    35,    -1,    37,    -1,    39,    -1,    41,    42,    47,
      48,    -1,    50,    -1,    29,    -1,    -1,    -1,    56,    -1,
      54,    59,    -1,    38,    62,    40,    60,    61,    43,    -1,
      45,    -1,    66,    -1,    49,    69,    -1,    71,    53,    -1,
      -1,    -1,    57,    -1,    -1,    83,    61,    85,    -1,    -1,
      84,    -1,    86,    -1,    88,    89,    -1,     9,    92,    11,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,     9,
      92,    11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,    69,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    88,    89,
      -1,     9,    92,    11,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    14,    15,    -1,    -1,    54,    -1,    20,    -1,
      -1,    23,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    71,    -1,    37,    -1,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    84,     4,    86,    -1,
      88,    89,    54,    -1,    92,    -1,    58,    -1,    60,    61,
      -1,    -1,    -1,    -1,    66,     9,    -1,    69,    -1,    71,
      14,    15,    29,    -1,    -1,    -1,    20,    -1,    -1,    23,
      -1,    38,    84,    40,    41,    -1,    43,    -1,    45,    -1,
      92,    -1,    49,    37,    -1,    39,    53,    -1,    42,    -1,
      57,    -1,    -1,    -1,    61,    -1,    63,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    58,    -1,    60,    61,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   140,   141,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    54,
      58,    60,    61,    66,    69,    71,    84,    86,    88,    89,
      92,    96,   128,   142,   143,   144,   146,   154,   155,   156,
     157,   159,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   180,   182,   184,   185,   186,   187,   188,   189,
     190,   191,   196,   198,   199,   200,   201,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   223,   231,     0,   196,
     203,   146,   189,   191,    56,   178,    56,    56,   203,   218,
     218,    24,    31,   171,   178,    56,   195,   196,   175,   177,
     178,   209,    56,   200,   209,   196,   209,    17,   192,   196,
     195,    37,   159,   232,   142,    31,    34,    47,    48,    50,
      56,    59,    62,    83,    85,   130,   212,    11,   145,   146,
     223,    78,   103,     6,    10,    13,    17,    26,    28,    52,
      55,    65,    68,    70,    77,    80,    82,    91,   104,   158,
     160,   106,    41,    63,   120,   106,   121,   122,   123,   124,
     125,   126,   127,    27,    19,   112,   179,    50,    95,   224,
     147,   135,    43,    42,   181,    17,    18,   119,   109,     8,
     107,   183,    37,    58,   155,   194,   115,     8,   116,    17,
     196,    72,   195,   203,   213,    27,    73,   196,   203,   220,
     221,   222,    75,   213,   231,    83,   129,   146,    58,   159,
     231,   196,    10,    87,    98,   196,   219,   231,    19,   101,
     198,   198,     4,   101,    29,    38,    40,    43,    45,    49,
      53,    57,    61,   202,    64,    90,     5,    51,    76,    54,
      69,    12,    25,    67,    79,    81,   209,   196,   110,    27,
      75,    81,   196,   225,   226,    58,    95,    50,   148,    19,
     101,   219,    50,    56,    81,   172,   173,   176,   111,   194,
     196,    19,    56,   111,   196,    44,    33,    36,   138,   193,
      17,    19,   203,   194,    11,    35,   131,   228,   229,   131,
     229,    72,   203,    17,   106,   229,   106,   229,    73,    75,
      75,    24,    47,    50,   214,    10,   105,   159,   231,   136,
     196,   203,    32,   200,    61,    43,   203,   204,   205,   206,
     207,   207,   208,   208,   209,   209,   209,   209,   209,    24,
     196,   196,    10,    18,   229,    75,    99,    17,    56,    75,
     149,   150,   151,   152,     7,    97,   203,    17,   176,   174,
     108,    19,   113,   175,   118,   154,   117,   196,    17,    32,
     114,   193,    17,    98,   192,   114,   228,   218,    19,   101,
     101,   137,   229,   196,   101,   101,    56,   133,   196,   215,
     216,    75,   225,   159,   231,    19,   101,   196,    56,   196,
     196,    19,   101,   194,   153,    99,    75,    10,   100,   196,
      17,    98,    75,   107,    19,   101,    56,    30,   114,    21,
     154,   107,   194,    17,    36,   139,    17,   194,   194,    43,
     195,   203,    19,   101,   137,   229,    17,    72,   132,    75,
     196,    98,    17,   102,    19,   196,    98,   194,   173,   195,
     194,    17,   194,   198,    27,   196,   101,   133,   196,    19,
     101,   150,   196,    58,   155,   233,   114,    17,   194,    41,
     227,   229,   230,   203,    17,    17,   134,   217,   216,    44,
      87,   194,   197,   198,   196,   133,   118,    58,   227,    21,
      44,   118,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   104,   104,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   126,   127,   127,   127,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   137,   138,   138,   139,   139,   140,   141,
     142,   143,   144,   144,   144,   145,   147,   146,   148,   148,
     149,   150,   151,   153,   152,   154,   154,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   157,   157,   157,   157,
     157,   158,   159,   159,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   161,   162,   163,
     163,   163,   163,   164,   165,   166,   167,   167,   167,   168,
     168,   169,   170,   171,   171,   171,   172,   172,   172,   174,
     173,   175,   176,   177,   179,   178,   181,   180,   183,   182,
     184,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     186,   186,   186,   187,   188,   189,   190,   190,   191,   192,
     193,   194,   194,   195,   196,   196,   197,   198,   198,   199,
     200,   200,   201,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   203,   204,   205,   206,   207,   208,   209,
     209,   209,   209,   210,   210,   211,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     213,   213,   213,   213,   214,   214,   214,   214,   215,   216,
     216,   217,   218,   219,   220,   220,   221,   221,   221,   221,
     222,   222,   222,   222,   224,   223,   225,   226,   226,   226,
     226,   226,   226,   227,   227,   228,   228,   229,   229,   230,
     230,   231,   231,   232,   232,   233,   233,   233
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     4,     0,     2,     0,     1,
       0,     2,     0,     1,     2,     2,     3,     3,     0,     2,
       2,     0,     3,     3,     0,     2,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     2,     0,     5,     0,     3,
       0,     3,     0,     2,     0,     2,     1,     2,     0,     2,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     3,
       0,     3,     3,     0,     3,     3,     0,     3,     3,     3,
       3,     3,     0,     1,     0,     2,     1,     2,     0,     3,
       3,     0,     3,     0,     1,     0,     1,     0,     3,     0,
       3,     0,     5,     4,     3,     4,     0,     3,     1,     2,
       4,     1,     2,     2,     2,     2,     0,     8,     2,     3,
       2,     2,     1,     0,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     1,
       1,     2,     4,     1,     1,     1,     1,     3,     1,     0,
       3,     2,     3,     2,     0,     3,     0,     4,     0,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     6,     5,     8,     6,     6,     6,     2,
       2,     1,     4,     2,     1,     5,     1,     3,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     3,     3,     2,     3,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     2,     3,     2,     3,     3,     2,     3,     1,
       4,     2,     3,     3,     1,     1,     4,     5,     3,     4,
       2,     3,     2,     3,     0,     6,     3,     1,     2,     3,
       3,     2,     2,     1,     1,     4,     5,     1,     2,     2,
       3,     1,     2,     2,     1,     1,     4,     6
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
#line 41 "parser.y"
                             { new_subtree(BLOCK_NODE, NO_TYPE, 0); }
#line 2328 "parser.c"
    break;

  case 3: /* newline_or_stmt_star: newline_or_stmt_star NEWLINE  */
#line 42 "parser.y"
                                                   { yyval = yyvsp[-1]; }
#line 2334 "parser.c"
    break;

  case 4: /* newline_or_stmt_star: newline_or_stmt_star stmt  */
#line 43 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2340 "parser.c"
    break;

  case 35: /* opt_as_name: AS NAME  */
#line 109 "parser.y"
                     { new_var(); }
#line 2346 "parser.c"
    break;

  case 41: /* dot_name_star: dot_name_star DOT NAME  */
#line 121 "parser.y"
                                      { new_var(); }
#line 2352 "parser.c"
    break;

  case 43: /* comma_name_star: comma_name_star COMMA NAME  */
#line 125 "parser.y"
                                            { new_var(); }
#line 2358 "parser.c"
    break;

  case 108: /* program: file_input  */
#line 255 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2364 "parser.c"
    break;

  case 109: /* file_input: newline_or_stmt_star ENDMARKER  */
#line 260 "parser.y"
                                           { yyval = yyvsp[-1]; }
#line 2370 "parser.c"
    break;

  case 116: /* $@1: %empty  */
#line 277 "parser.y"
                  { new_var(); }
#line 2376 "parser.c"
    break;

  case 123: /* $@2: %empty  */
#line 293 "parser.y"
             { check_var("tfpdef"); }
#line 2382 "parser.c"
    break;

  case 157: /* del_stmt: DEL exprlist  */
#line 344 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2388 "parser.c"
    break;

  case 158: /* pass_stmt: PASS  */
#line 347 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2394 "parser.c"
    break;

  case 163: /* break_stmt: BREAK  */
#line 357 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2400 "parser.c"
    break;

  case 164: /* continue_stmt: CONTINUE  */
#line 360 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2406 "parser.c"
    break;

  case 171: /* import_name: IMPORT dotted_as_names  */
#line 378 "parser.y"
                                    {}
#line 2412 "parser.c"
    break;

  case 179: /* $@3: %empty  */
#line 402 "parser.y"
                     { new_var(); }
#line 2418 "parser.c"
    break;

  case 184: /* $@4: %empty  */
#line 414 "parser.y"
                   { new_var(); }
#line 2424 "parser.c"
    break;

  case 186: /* $@5: %empty  */
#line 417 "parser.y"
                         { new_var(); }
#line 2430 "parser.c"
    break;

  case 188: /* $@6: %empty  */
#line 420 "parser.y"
                             { new_var(); }
#line 2436 "parser.c"
    break;

  case 217: /* or_test: and_test OR or_test  */
#line 489 "parser.y"
                             { new_subtree(OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2442 "parser.c"
    break;

  case 218: /* or_test: and_test  */
#line 490 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2448 "parser.c"
    break;

  case 253: /* atom: NAME  */
#line 564 "parser.y"
           { new_var(); }
#line 2454 "parser.c"
    break;

  case 267: /* trailer: DOT NAME  */
#line 582 "parser.y"
                  { check_var("trailer"); }
#line 2460 "parser.c"
    break;

  case 284: /* $@7: %empty  */
#line 617 "parser.y"
                     { new_var(); }
#line 2466 "parser.c"
    break;


#line 2470 "parser.c"

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

#line 660 "parser.y"


void check_var(char* rule_name) {
    printf("Regra: %s\n", rule_name);
    printf("variable '%s'\n", yytext);
    int idx = lookup_var(vt, yytext);
    if (idx == -1) {
        print_str_table(st);
        print_var_table(vt);
        printf("SEMANTIC ERROR (%d): variable '%s' was not declared.\n",
                yylineno, yytext);
        exit(EXIT_FAILURE);
    }
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

    print_str_table(st);
    print_var_table(vt);

    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}

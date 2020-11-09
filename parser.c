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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

extern char *yytext;
extern int yylineno;

#line 84 "parser.c"

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
  YYSYMBOL_YYEOF = 0,                      /* ENDMARKER  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_AND = 3,                        /* AND  */
  YYSYMBOL_AMPER = 4,                      /* AMPER  */
  YYSYMBOL_AMPEREQUAL = 5,                 /* AMPEREQUAL  */
  YYSYMBOL_ARROW = 6,                      /* ARROW  */
  YYSYMBOL_AS = 7,                         /* AS  */
  YYSYMBOL_ASSERT = 8,                     /* ASSERT  */
  YYSYMBOL_EQUAL = 9,                      /* EQUAL  */
  YYSYMBOL_ASYNC = 10,                     /* ASYNC  */
  YYSYMBOL_AT = 11,                        /* AT  */
  YYSYMBOL_ATEQUAL = 12,                   /* ATEQUAL  */
  YYSYMBOL_AWAIT = 13,                     /* AWAIT  */
  YYSYMBOL_BREAK = 14,                     /* BREAK  */
  YYSYMBOL_CLASS = 15,                     /* CLASS  */
  YYSYMBOL_COLON = 16,                     /* COLON  */
  YYSYMBOL_COLONEQUAL = 17,                /* COLONEQUAL  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_DEDENT = 20,                    /* DEDENT  */
  YYSYMBOL_DEF = 21,                       /* DEF  */
  YYSYMBOL_DEL = 22,                       /* DEL  */
  YYSYMBOL_DOT = 23,                       /* DOT  */
  YYSYMBOL_DOUBLESLASH = 24,               /* DOUBLESLASH  */
  YYSYMBOL_DOUBLESLASHEQUAL = 25,          /* DOUBLESLASHEQUAL  */
  YYSYMBOL_DOUBLESTAR = 26,                /* DOUBLESTAR  */
  YYSYMBOL_DOUBLESTAREQUAL = 27,           /* DOUBLESTAREQUAL  */
  YYSYMBOL_EQEQUAL = 28,                   /* EQEQUAL  */
  YYSYMBOL_ELIF = 29,                      /* ELIF  */
  YYSYMBOL_ELLIPSIS = 30,                  /* ELLIPSIS  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_EXCEPT = 32,                    /* EXCEPT  */
  YYSYMBOL_FALSE = 33,                     /* FALSE  */
  YYSYMBOL_FOR = 34,                       /* FOR  */
  YYSYMBOL_FINALLY = 35,                   /* FINALLY  */
  YYSYMBOL_FROM = 36,                      /* FROM  */
  YYSYMBOL_GREATEREQUAL = 37,              /* GREATEREQUAL  */
  YYSYMBOL_GLOBAL = 38,                    /* GLOBAL  */
  YYSYMBOL_GREATER = 39,                   /* GREATER  */
  YYSYMBOL_IF = 40,                        /* IF  */
  YYSYMBOL_IMPORT = 41,                    /* IMPORT  */
  YYSYMBOL_IN = 42,                        /* IN  */
  YYSYMBOL_INDENT = 43,                    /* INDENT  */
  YYSYMBOL_IS = 44,                        /* IS  */
  YYSYMBOL_LAMBDA = 45,                    /* LAMBDA  */
  YYSYMBOL_LSQB = 46,                      /* LSQB  */
  YYSYMBOL_LBRACE = 47,                    /* LBRACE  */
  YYSYMBOL_LESSEQUAL = 48,                 /* LESSEQUAL  */
  YYSYMBOL_LPAR = 49,                      /* LPAR  */
  YYSYMBOL_LEFTSHIFT = 50,                 /* LEFTSHIFT  */
  YYSYMBOL_LEFTSHIFTEQUAL = 51,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_LESS = 52,                      /* LESS  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_MINUSEQUAL = 54,                /* MINUSEQUAL  */
  YYSYMBOL_NAME = 55,                      /* NAME  */
  YYSYMBOL_NOTEQUAL = 56,                  /* NOTEQUAL  */
  YYSYMBOL_NEWLINE = 57,                   /* NEWLINE  */
  YYSYMBOL_NONE = 58,                      /* NONE  */
  YYSYMBOL_NONLOCAL = 59,                  /* NONLOCAL  */
  YYSYMBOL_NOT = 60,                       /* NOT  */
  YYSYMBOL_NUMBER = 61,                    /* NUMBER  */
  YYSYMBOL_OR = 62,                        /* OR  */
  YYSYMBOL_VBAR = 63,                      /* VBAR  */
  YYSYMBOL_VBAREQUAL = 64,                 /* VBAREQUAL  */
  YYSYMBOL_PASS = 65,                      /* PASS  */
  YYSYMBOL_PERCENT = 66,                   /* PERCENT  */
  YYSYMBOL_PERCENTEQUAL = 67,              /* PERCENTEQUAL  */
  YYSYMBOL_PLUS = 68,                      /* PLUS  */
  YYSYMBOL_PLUSEQUAL = 69,                 /* PLUSEQUAL  */
  YYSYMBOL_RAISE = 70,                     /* RAISE  */
  YYSYMBOL_RSQB = 71,                      /* RSQB  */
  YYSYMBOL_RBRACE = 72,                    /* RBRACE  */
  YYSYMBOL_RETURN = 73,                    /* RETURN  */
  YYSYMBOL_RPAR = 74,                      /* RPAR  */
  YYSYMBOL_RIGHTSHIFT = 75,                /* RIGHTSHIFT  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 76,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_SEMICOLON = 77,                 /* SEMICOLON  */
  YYSYMBOL_SLASH = 78,                     /* SLASH  */
  YYSYMBOL_SLASHEQUAL = 79,                /* SLASHEQUAL  */
  YYSYMBOL_STAR = 80,                      /* STAR  */
  YYSYMBOL_STAREQUAL = 81,                 /* STAREQUAL  */
  YYSYMBOL_STRING = 82,                    /* STRING  */
  YYSYMBOL_TILDE = 83,                     /* TILDE  */
  YYSYMBOL_TRUE = 84,                      /* TRUE  */
  YYSYMBOL_TRY = 85,                       /* TRY  */
  YYSYMBOL_TYPE_COMMENT = 86,              /* TYPE_COMMENT  */
  YYSYMBOL_WITH = 87,                      /* WITH  */
  YYSYMBOL_WHILE = 88,                     /* WHILE  */
  YYSYMBOL_CIRCUMFLEX = 89,                /* CIRCUMFLEX  */
  YYSYMBOL_CIRCUMFLEXEQUAL = 90,           /* CIRCUMFLEXEQUAL  */
  YYSYMBOL_YIELD = 91,                     /* YIELD  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_newline_or_stmt_star = 93,      /* newline_or_stmt_star  */
  YYSYMBOL_opt_par_arglist = 94,           /* opt_par_arglist  */
  YYSYMBOL_decorator_plus = 95,            /* decorator_plus  */
  YYSYMBOL_opt_arrow_test = 96,            /* opt_arrow_test  */
  YYSYMBOL_opt_type_comment = 97,          /* opt_type_comment  */
  YYSYMBOL_comma_argument_star = 98,       /* comma_argument_star  */
  YYSYMBOL_opt_assign_test = 99,           /* opt_assign_test  */
  YYSYMBOL_opt_comma = 100,                /* opt_comma  */
  YYSYMBOL_opt_colon_test = 101,           /* opt_colon_test  */
  YYSYMBOL_semi_small_stmt_star = 102,     /* semi_small_stmt_star  */
  YYSYMBOL_opt_semi = 103,                 /* opt_semi  */
  YYSYMBOL_assing_yield_or_test_plus = 104, /* assing_yield_or_test_plus  */
  YYSYMBOL_opt_assing_yield_or_test = 105, /* opt_assing_yield_or_test  */
  YYSYMBOL_comma_test_star_expr_star = 106, /* comma_test_star_expr_star  */
  YYSYMBOL_opt_testlist_star_expr = 107,   /* opt_testlist_star_expr  */
  YYSYMBOL_opt_as_name = 108,              /* opt_as_name  */
  YYSYMBOL_comma_import_as_name_star = 109, /* comma_import_as_name_star  */
  YYSYMBOL_comma_dotted_as_name_star = 110, /* comma_dotted_as_name_star  */
  YYSYMBOL_dot_name_star = 111,            /* dot_name_star  */
  YYSYMBOL_comma_name_star = 112,          /* comma_name_star  */
  YYSYMBOL_opt_comma_test = 113,           /* opt_comma_test  */
  YYSYMBOL_elif_test_suite_star = 114,     /* elif_test_suite_star  */
  YYSYMBOL_opt_else_suite = 115,           /* opt_else_suite  */
  YYSYMBOL_comma_with_item_star = 116,     /* comma_with_item_star  */
  YYSYMBOL_opt_as_expr = 117,              /* opt_as_expr  */
  YYSYMBOL_opt_test_as_name = 118,         /* opt_test_as_name  */
  YYSYMBOL_stmt_plus = 119,                /* stmt_plus  */
  YYSYMBOL_opt_colonass_test = 120,        /* opt_colonass_test  */
  YYSYMBOL_or_and_test_star = 121,         /* or_and_test_star  */
  YYSYMBOL_and_not_test_star = 122,        /* and_not_test_star  */
  YYSYMBOL_comp_op_expr_star = 123,        /* comp_op_expr_star  */
  YYSYMBOL_or_xor_expr_star = 124,         /* or_xor_expr_star  */
  YYSYMBOL_xor_and_expr_star = 125,        /* xor_and_expr_star  */
  YYSYMBOL_and_shift_expr_star = 126,      /* and_shift_expr_star  */
  YYSYMBOL_shift_arith_expr_star = 127,    /* shift_arith_expr_star  */
  YYSYMBOL_op_term_star = 128,             /* op_term_star  */
  YYSYMBOL_op_factor_star = 129,           /* op_factor_star  */
  YYSYMBOL_opt_await = 130,                /* opt_await  */
  YYSYMBOL_trailer_star = 131,             /* trailer_star  */
  YYSYMBOL_string_plus = 132,              /* string_plus  */
  YYSYMBOL_comma_namedexpr_test_star_expr_star = 133, /* comma_namedexpr_test_star_expr_star  */
  YYSYMBOL_comma_subscript_star = 134,     /* comma_subscript_star  */
  YYSYMBOL_opt_test = 135,                 /* opt_test  */
  YYSYMBOL_opt_sliceop = 136,              /* opt_sliceop  */
  YYSYMBOL_comma_expr_star_expr_star = 137, /* comma_expr_star_expr_star  */
  YYSYMBOL_comma_test_star = 138,          /* comma_test_star  */
  YYSYMBOL_comma_dict1_star = 139,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 140,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 141,        /* opt_finally_suite  */
  YYSYMBOL_program = 142,                  /* program  */
  YYSYMBOL_file_input = 143,               /* file_input  */
  YYSYMBOL_decorator = 144,                /* decorator  */
  YYSYMBOL_decorators = 145,               /* decorators  */
  YYSYMBOL_decorated = 146,                /* decorated  */
  YYSYMBOL_async_funcdef = 147,            /* async_funcdef  */
  YYSYMBOL_funcdef = 148,                  /* funcdef  */
  YYSYMBOL_parameters = 149,               /* parameters  */
  YYSYMBOL_arguments = 150,                /* arguments  */
  YYSYMBOL_argument = 151,                 /* argument  */
  YYSYMBOL_typedargslist = 152,            /* typedargslist  */
  YYSYMBOL_tfpdef = 153,                   /* tfpdef  */
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
  YYSYMBOL_return_stmt = 166,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 167,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 168,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 169,              /* import_stmt  */
  YYSYMBOL_import_name = 170,              /* import_name  */
  YYSYMBOL_import_from = 171,              /* import_from  */
  YYSYMBOL_from_part = 172,                /* from_part  */
  YYSYMBOL_import_part = 173,              /* import_part  */
  YYSYMBOL_import_as_name = 174,           /* import_as_name  */
  YYSYMBOL_dotted_as_name = 175,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 176,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 177,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 178,              /* dotted_name  */
  YYSYMBOL_global_stmt = 179,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 180,            /* nonlocal_stmt  */
  YYSYMBOL_assert_stmt = 181,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 182,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 183,               /* async_stmt  */
  YYSYMBOL_if_stmt = 184,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 185,               /* while_stmt  */
  YYSYMBOL_for_stmt = 186,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 187,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 188,                /* with_stmt  */
  YYSYMBOL_with_item = 189,                /* with_item  */
  YYSYMBOL_except_clause = 190,            /* except_clause  */
  YYSYMBOL_suite = 191,                    /* suite  */
  YYSYMBOL_namedexpr_test = 192,           /* namedexpr_test  */
  YYSYMBOL_test = 193,                     /* test  */
  YYSYMBOL_test_nocond = 194,              /* test_nocond  */
  YYSYMBOL_lambdef = 195,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 196,           /* lambdef_nocond  */
  YYSYMBOL_or_test = 197,                  /* or_test  */
  YYSYMBOL_and_test = 198,                 /* and_test  */
  YYSYMBOL_not_test = 199,                 /* not_test  */
  YYSYMBOL_comparison = 200,               /* comparison  */
  YYSYMBOL_comp_op = 201,                  /* comp_op  */
  YYSYMBOL_star_expr = 202,                /* star_expr  */
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
  YYSYMBOL_arglist = 224,                  /* arglist  */
  YYSYMBOL_argument1 = 225,                /* argument1  */
  YYSYMBOL_comp_iter = 226,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 227,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 228,                 /* comp_for  */
  YYSYMBOL_comp_if = 229,                  /* comp_if  */
  YYSYMBOL_yield_expr = 230,               /* yield_expr  */
  YYSYMBOL_yield_arg = 231,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 232           /* func_body_suite  */
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

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1034

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  494

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    23,    23,    24,    25,    28,    29,    30,    33,    34,
      37,    38,    41,    42,    45,    46,    49,    50,    53,    54,
      57,    58,    61,    62,    65,    66,    69,    70,    71,    72,
      75,    76,    77,    80,    81,    82,    85,    86,    89,    90,
      93,    94,    97,    98,   101,   102,   105,   106,   109,   110,
     113,   114,   117,   118,   121,   122,   125,   126,   129,   130,
     133,   134,   137,   138,   141,   142,   145,   146,   149,   150,
     153,   154,   157,   158,   161,   162,   165,   166,   167,   170,
     171,   172,   175,   176,   177,   178,   179,   180,   183,   184,
     187,   188,   191,   192,   195,   196,   197,   200,   201,   204,
     205,   208,   209,   212,   213,   214,   217,   218,   221,   222,
     223,   226,   227,   230,   231,   236,   241,   244,   247,   250,
     251,   252,   255,   258,   261,   262,   265,   268,   271,   274,
     279,   280,   283,   286,   287,   288,   289,   290,   291,   292,
     293,   296,   297,   298,   299,   300,   303,   306,   307,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   325,   328,   331,   332,   333,   334,   335,   338,
     341,   344,   347,   350,   351,   352,   355,   356,   359,   362,
     373,   374,   375,   378,   379,   380,   383,   386,   389,   392,
     395,   398,   401,   404,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   418,   419,   420,   423,   426,   429,   432,
     433,   436,   439,   442,   445,   446,   449,   452,   453,   454,
     457,   458,   461,   465,   469,   472,   475,   476,   479,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   494,
     497,   500,   503,   506,   509,   512,   515,   516,   517,   518,
     521,   522,   525,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   544,   545,   546,
     547,   550,   551,   552,   553,   556,   559,   560,   563,   566,
     569,   572,   573,   576,   577,   578,   579,   582,   583,   584,
     585,   588,   591,   594,   595,   596,   597,   598,   599,   602,
     603,   606,   607,   610,   611,   614,   615,   618,   619,   622,
     623,   626,   627,   628
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "ENDMARKER", "error", "\"invalid token\"", "AND", "AMPER", "AMPEREQUAL",
  "ARROW", "AS", "ASSERT", "EQUAL", "ASYNC", "AT", "ATEQUAL", "AWAIT",
  "BREAK", "CLASS", "COLON", "COLONEQUAL", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "EQEQUAL", "ELIF", "ELLIPSIS", "ELSE", "EXCEPT",
  "FALSE", "FOR", "FINALLY", "FROM", "GREATEREQUAL", "GLOBAL", "GREATER",
  "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA", "LSQB", "LBRACE",
  "LESSEQUAL", "LPAR", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "MINUS",
  "MINUSEQUAL", "NAME", "NOTEQUAL", "NEWLINE", "NONE", "NONLOCAL", "NOT",
  "NUMBER", "OR", "VBAR", "VBAREQUAL", "PASS", "PERCENT", "PERCENTEQUAL",
  "PLUS", "PLUSEQUAL", "RAISE", "RSQB", "RBRACE", "RETURN", "RPAR",
  "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "SEMICOLON", "SLASH", "SLASHEQUAL",
  "STAR", "STAREQUAL", "STRING", "TILDE", "TRUE", "TRY", "TYPE_COMMENT",
  "WITH", "WHILE", "CIRCUMFLEX", "CIRCUMFLEXEQUAL", "YIELD", "$accept",
  "newline_or_stmt_star", "opt_par_arglist", "decorator_plus",
  "opt_arrow_test", "opt_type_comment", "comma_argument_star",
  "opt_assign_test", "opt_comma", "opt_colon_test", "semi_small_stmt_star",
  "opt_semi", "assing_yield_or_test_plus", "opt_assing_yield_or_test",
  "comma_test_star_expr_star", "opt_testlist_star_expr", "opt_as_name",
  "comma_import_as_name_star", "comma_dotted_as_name_star",
  "dot_name_star", "comma_name_star", "opt_comma_test",
  "elif_test_suite_star", "opt_else_suite", "comma_with_item_star",
  "opt_as_expr", "opt_test_as_name", "stmt_plus", "opt_colonass_test",
  "or_and_test_star", "and_not_test_star", "comp_op_expr_star",
  "or_xor_expr_star", "xor_and_expr_star", "and_shift_expr_star",
  "shift_arith_expr_star", "op_term_star", "op_factor_star", "opt_await",
  "trailer_star", "string_plus", "comma_namedexpr_test_star_expr_star",
  "comma_subscript_star", "opt_test", "opt_sliceop",
  "comma_expr_star_expr_star", "comma_test_star", "comma_dict1_star",
  "except_suite_plus", "opt_finally_suite", "program", "file_input",
  "decorator", "decorators", "decorated", "async_funcdef", "funcdef",
  "parameters", "arguments", "argument", "typedargslist", "tfpdef", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "dotted_as_name", "import_as_names", "dotted_as_names",
  "dotted_name", "global_stmt", "nonlocal_stmt", "assert_stmt",
  "compound_stmt", "async_stmt", "if_stmt", "while_stmt", "for_stmt",
  "try_stmt", "with_stmt", "with_item", "except_clause", "suite",
  "namedexpr_test", "test", "test_nocond", "lambdef", "lambdef_nocond",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "star_expr",
  "expr", "xor_expr", "and_expr", "shift_expr", "arith_expr", "term",
  "factor", "power", "atom_expr", "atom", "testlist_comp", "trailer",
  "subscriptlist", "subscript", "sliceop", "exprlist", "testlist",
  "dictorsetmaker", "dictorsetmaker1", "dictorsetmaker2", "classdef",
  "arglist", "argument1", "comp_iter", "sync_comp_for", "comp_for",
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
     345,   346
};
#endif

#define YYPACT_NINF (-410)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-308)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -410,   484,    53,  -410,  -410,   171,    48,     2,  -410,  -410,
      47,  -410,    72,    43,    43,    54,    76,   171,     2,    64,
      43,  -410,    79,    46,  -410,    43,   537,   251,    43,    43,
     121,   171,   171,   273,   133,   727,  -410,   212,  -410,  -410,
    -410,  -410,  -410,  -410,   161,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,   114,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,   138,  -410,  -410,  -410,   149,  -410,  -410,  -410,  -410,
     122,   122,   127,  -410,  -410,   150,  -410,  -410,   139,  -410,
    -410,   178,   179,  -410,  -410,   190,   171,  -410,  -410,  -410,
    -410,   168,  -410,  -410,  -410,  -410,   324,  -410,   192,   191,
     171,  -410,  -410,  -410,  -410,  -410,   455,   310,    21,  -410,
    -410,  -410,  -410,  -410,   124,  -410,   193,  -410,  -410,  -410,
     141,  -410,    25,  -410,   171,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,    24,  -410,    30,   217,
      46,   174,   238,   217,   898,   183,   158,   244,     1,    92,
      62,    43,   171,  -410,   226,   373,   198,   234,   -13,   252,
     242,   171,    83,   243,   324,   171,  -410,   245,   207,  -410,
    -410,   243,   171,   222,  -410,    65,   163,    43,  -410,   324,
    -410,  -410,   105,   105,   196,    43,  -410,    34,   105,   208,
    -410,  -410,  -410,   194,   211,  -410,    84,  -410,   848,   224,
    -410,  -410,   278,    25,  -410,  -410,  -410,  -410,  -410,   950,
    -410,   261,    46,    46,  -410,  -410,  -410,  -410,  -410,   237,
    -410,  -410,  -410,   256,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,  -410,  -410,   246,
     171,  -410,   171,   235,   225,  -410,  -410,   324,   284,  -410,
    -410,  -410,   231,   298,   171,   296,   622,  -410,   297,   265,
     190,  -410,  -410,  -410,  -410,   266,  -410,  -410,     2,  -410,
    -410,   812,   627,   306,    16,   308,   253,   171,  -410,   311,
     317,    43,   326,  -410,  -410,   326,  -410,  -410,   105,   171,
     217,  -410,   217,  -410,  -410,  -410,  -410,   290,   632,   375,
    -410,  -410,  -410,    25,  -410,  -410,  -410,   334,  -410,  -410,
     171,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,   171,   171,  -410,  -410,   339,  -410,   171,  -410,   343,
    -410,   171,  -410,  -410,   253,  -410,  -410,   253,   292,  -410,
     346,  -410,    33,  -410,   566,  -410,  -410,   190,   324,   351,
     333,   355,   324,   324,  -410,  -410,  -410,   330,   459,  -410,
    -410,   357,  -410,   105,  -410,  -410,  -410,   363,   364,   316,
    -410,  -410,   321,  -410,  -410,   406,  -410,  -410,  -410,  -410,
     -28,  -410,  -410,   253,  -410,   911,   324,  -410,   265,  -410,
     171,  -410,  -410,  -410,  -410,  -410,   324,   380,  -410,   324,
    -410,  -410,    46,  -410,  -410,   257,  -410,   357,  -410,   140,
    -410,   382,  -410,  -410,   348,   -19,  -410,  -410,   311,  -410,
     389,  -410,   324,  -410,    31,    43,   390,  -410,   393,  -410,
     130,  -410,  -410,   812,   341,  -410,   324,  -410,   378,  -410,
    -410,  -410,  -410,   171,   550,  -410,  -410,  -410,   648,   367,
    -410,   395,    31,  -410,  -410,  -410,  -410,  -410,   812,   378,
    -410,   730,  -410,  -410
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    88,     0,   115,   116,    88,     0,     0,    89,   169,
       0,   170,     0,    88,    88,     0,     0,    88,     0,     0,
      88,     3,     0,    88,   163,    88,    88,    88,    88,    88,
       0,    88,    88,    88,   118,     0,     8,     0,   201,   199,
       4,   130,    22,   133,   144,   134,   135,   136,   164,   165,
     166,   168,   167,   137,   176,   177,   138,   139,   140,   131,
     202,   194,   195,   196,   197,   198,    33,   219,   217,    64,
      66,   227,    33,    68,    70,    72,    74,    76,    79,    82,
     249,   250,   200,   172,     1,    48,   203,   205,   204,    44,
       5,     5,     0,   103,   162,     0,   180,   181,     0,   182,
      46,     0,    62,    42,   178,    38,    88,   247,    46,   226,
     246,   174,   171,    37,   239,   248,    88,    54,    56,     0,
      88,   310,   308,     9,   263,   266,    88,    88,    88,   260,
     264,   261,    92,   265,   262,    90,     0,   121,   120,   119,
      24,   155,    88,   152,    88,   161,   160,   158,   150,   156,
     154,   149,   159,   153,   151,   157,    12,   141,    88,    18,
      88,   224,   225,    18,   228,   240,   241,   242,   243,   244,
     245,    88,    88,   193,   190,    88,     0,     0,     0,    10,
      18,    88,     0,   191,    88,    88,   216,   189,     0,   187,
     222,   192,    88,     0,   214,     0,     0,    88,   212,    88,
     309,   256,    94,    94,     0,    88,   258,    33,    33,     0,
     281,   282,   253,     0,     0,    93,   252,   122,    88,     0,
      27,    26,    30,    88,    13,   145,   106,   143,   142,    19,
     147,     0,    88,    88,   148,   231,   232,   230,   235,   237,
     233,   229,   234,     0,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,   251,    49,     0,
      88,     6,    88,   293,     0,    14,   117,    88,    20,   124,
     128,    14,     0,    16,    88,     0,    88,   279,     0,     0,
      38,   183,   179,    40,   185,     0,    50,    63,     0,    39,
     175,    88,    88,     0,    52,     0,    12,    88,    57,    52,
       0,    88,    18,   303,   267,    18,   269,   257,   108,    88,
      18,   287,    18,   289,   259,   255,   254,     0,    88,    88,
      91,    23,   132,    88,   146,    29,    28,    18,    34,    35,
      88,    65,    67,   238,   236,    69,    71,    73,    75,    77,
      78,    81,    80,    84,    87,    86,    85,    83,    45,   297,
     298,    88,    88,   294,     7,    18,   291,    88,   129,   126,
     125,    88,   127,    11,    12,   105,   104,    12,     0,   186,
      18,    47,    52,    43,    88,    60,   213,    38,    88,     0,
     113,     0,    88,    88,    55,   207,   304,     0,    88,   268,
     270,    18,   285,   108,   288,   290,   274,     0,   276,     0,
      97,   271,     0,    32,    31,    88,   280,   218,   296,   295,
      12,   292,    21,    12,    17,    88,    88,   184,    19,   188,
      88,   206,   215,    61,    59,   210,    88,     0,   209,    88,
     111,   211,    88,    95,    96,    88,   286,    18,   283,    88,
     273,    18,   272,   107,     0,     0,   311,   123,    52,    41,
       0,    53,    88,   112,   301,    88,     0,   284,   101,   100,
      88,   275,    15,    88,     0,   208,    88,   114,    88,   302,
     299,   300,   110,    88,    88,   277,   102,    98,    88,     0,
      51,     0,   305,   221,   220,   109,   278,   312,    88,    88,
     306,    88,   223,   313
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -410,  -410,   322,  -410,  -410,  -135,   145,  -410,  -153,  -410,
    -410,  -410,  -410,  -410,   -60,  -410,  -258,  -410,  -410,  -410,
     304,  -410,  -410,  -280,  -410,  -410,  -410,  -409,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,   218,  -410,  -402,  -410,  -410,  -410,    32,  -410,  -410,
    -410,  -410,   396,  -410,  -410,  -410,    26,  -410,  -410,   -17,
    -410,  -410,     0,    -1,   206,  -410,  -410,   -20,  -410,  -410,
    -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,  -410,
    -410,  -410,    11,   146,   160,  -410,    45,  -410,  -410,  -410,
    -410,  -410,  -410,  -410,   431,  -410,   434,   147,   148,  -173,
     -12,    -3,   -41,  -410,  -410,  -154,   220,   -14,  -410,  -410,
    -111,   -10,   205,   214,   228,  -161,  -100,    20,  -410,  -410,
    -410,   336,  -410,  -410,     5,  -410,    -6,   286,  -410,  -410,
    -410,   417,   154,  -410,    -2,   169,  -172,  -410,  -103,  -410,
    -410
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   176,    34,   275,   444,   355,   362,   230,   358,
     140,   219,   156,   324,   159,   112,   189,   370,   187,   174,
     183,   173,   372,   380,   196,   198,   376,   374,   186,   161,
     162,   164,   165,   166,   167,   168,   169,   170,    35,   216,
     134,   302,   441,   397,   475,   180,   327,   391,   294,   428,
       2,     3,    36,    37,    38,   137,    39,   179,   270,   271,
     272,   273,   375,   194,    42,    43,   157,    44,   158,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      98,   282,   283,   103,   284,   104,   105,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,   117,   295,   195,
     202,    66,   482,    67,   483,    68,    69,    70,    71,   244,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
     135,   204,   320,   399,   400,   476,    94,   227,   209,   210,
     211,    82,   264,   265,   469,   303,   470,   471,    83,   122,
     447
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    40,    85,    93,    93,   101,   231,   113,    95,   109,
     234,   286,   163,   121,   102,   203,   208,   203,   114,   385,
     119,   225,   369,   111,   463,   214,   299,   277,   118,   102,
     304,   306,    86,   223,     8,   311,   313,   458,     8,   221,
     107,   300,   268,     8,   300,   110,   -19,   379,   292,   115,
     309,   248,    90,    84,   478,   228,     8,    89,   224,     8,
      99,   269,   420,   138,   379,   301,    19,   464,   301,    12,
      19,   468,   486,   252,    20,    19,   249,    96,    20,   491,
     106,    23,    14,    20,    97,    23,   253,   339,   340,    25,
      23,   353,   421,    25,   356,   212,    20,   292,    25,    20,
     293,    28,    91,   190,    29,    28,    23,   317,    29,    89,
     224,    25,    33,    29,    25,   300,    33,   200,   329,   424,
     326,    33,   220,   102,   207,   102,    29,    92,   254,    29,
     318,   100,   279,   319,   108,    31,   392,   116,   280,   301,
     255,   222,   256,     8,     7,   250,   -99,   310,   312,   389,
     341,   342,   390,     8,   160,   226,   -99,   394,   -99,   395,
     251,   383,   217,   281,   171,   365,   141,   172,   465,   258,
     142,   175,   263,   143,   406,    19,   178,   144,   226,   296,
     182,   297,   287,    20,     8,    19,   145,   298,   146,   290,
      23,   257,   181,    20,   184,   308,   185,   188,    25,   197,
      23,   -19,   411,   325,   192,   425,   215,   199,    25,   430,
     431,   -99,   147,    29,    12,   148,    19,   419,   218,   332,
     404,   438,   136,    29,    20,   149,   328,    10,   150,   415,
     151,    23,   416,    12,   335,   229,   232,   152,   436,    25,
     153,   233,   154,   448,   351,   300,   245,   246,   247,   259,
     267,   155,   352,   451,    29,   266,   453,   349,   274,   350,
     276,   285,   289,   288,     8,   291,   366,   307,   315,   301,
       8,   363,   343,   344,   345,   346,   347,   434,   454,   467,
     314,   322,  -307,   455,   457,   316,     8,   323,   461,   377,
      41,    93,   330,   480,   118,   387,    19,   333,   334,   354,
     357,   348,    19,   403,    20,   360,   393,   361,   -36,   120,
      20,    23,   364,   367,   484,   398,   263,    23,    19,    25,
     280,   371,   378,     8,   382,    25,    20,   407,   -36,   -19,
    -307,    28,     5,    23,    29,   484,   205,     8,     9,   224,
      29,    25,   379,    11,   388,   396,    13,  -307,   408,   409,
    -307,   301,   405,    28,   412,    19,    29,   410,   414,  -307,
      15,   413,    16,    20,   418,    18,   417,   426,   427,    19,
      23,   429,   432,    41,   423,   435,   433,    20,    25,   439,
    -100,   193,   206,    22,    23,   102,     8,   440,     8,    24,
      28,     8,    25,    29,    26,   442,   452,    27,   479,   260,
     460,   260,   443,   268,    28,   466,   473,    29,   450,   474,
     488,   489,   191,   177,   446,    33,   359,   102,    19,     8,
      19,   305,   -19,   481,   321,   437,    20,   462,    20,   449,
     123,    20,   456,    23,   373,    23,   459,    87,    23,   368,
      88,    25,   381,    25,   384,   472,    25,   261,   492,   401,
     336,    19,   331,   262,   139,   262,    29,   398,    29,    20,
     337,    29,    41,   -19,   213,   477,    23,   278,     8,   386,
     485,   459,     8,   402,    25,   338,     0,    41,   423,     0,
     490,     0,     0,   -19,     4,     0,     0,    41,     0,    29,
      41,   423,     5,     0,     6,     7,     0,     8,     9,    10,
      19,     0,     0,    11,    19,    12,    13,     0,    20,     0,
       0,     0,    20,     0,     0,    23,     0,     0,    14,    23,
      15,     0,    16,    25,    17,    18,   201,    25,     0,    19,
     -19,     0,     0,   -19,     0,    28,     0,    20,    29,    28,
       0,    21,    29,    22,    23,     0,     0,     0,     0,    24,
       8,     0,    25,     0,    26,     0,     0,    27,     0,     0,
       0,     0,     0,     8,    28,     0,     0,    29,   -99,    30,
       0,    31,    32,     0,     5,    33,     6,     7,     0,     8,
       9,    10,    19,     0,     0,    11,   422,    12,    13,     0,
      20,     0,     0,     0,  -173,    19,     0,    23,     0,     0,
      14,     0,    15,    20,    16,    25,    17,    18,     0,     0,
      23,    19,     0,     0,  -173,     0,     0,     0,    25,    20,
      29,   -99,     0,     0,     0,    22,    23,     0,     0,     0,
       0,    24,     0,    29,    25,     8,    26,     0,     0,    27,
       8,     0,     0,   -58,     0,     8,    28,     0,   -99,    29,
       0,    30,     0,    31,    32,     0,     5,    33,     6,     7,
       0,     8,     9,    10,   -19,     0,     0,    11,   487,    12,
      13,     0,    19,     0,     0,    20,     0,    19,     0,   -19,
      20,     0,    14,     0,    15,    20,    16,    23,    17,    18,
      25,     0,    23,    19,     0,    25,     0,     0,     0,   -19,
      25,    20,    28,     0,     0,    29,     0,    22,    23,     0,
      29,     0,     0,    24,     0,    29,    25,     0,    26,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    28,     0,
       0,    29,     0,    30,     0,    31,    32,     0,     5,    33,
       6,     7,     0,     8,     9,    10,     0,     0,     0,    11,
     493,    12,    13,     0,     0,     0,     0,   124,     0,     0,
     125,     0,     0,     0,    14,     0,    15,     0,    16,     0,
      17,    18,     0,   126,   127,    19,   128,     0,     0,     0,
       0,     0,   129,    20,     0,   130,     0,     0,   131,    22,
      23,     0,     0,     0,     0,    24,     0,     0,    25,     0,
      26,     0,     0,    27,     0,     0,     0,     0,     0,   132,
      28,   133,     0,    29,     0,    30,     0,    31,    32,     0,
       5,    33,     6,     7,     0,     8,     9,    10,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,     0,
      16,     0,    17,    18,     0,     0,     5,    19,     0,     0,
       0,     8,     9,     0,     0,    20,     0,    11,     0,     0,
      13,    22,    23,     0,     0,     0,     0,    24,     0,     0,
      25,     0,    26,     0,    15,    27,    16,     0,     0,    18,
       0,     0,    28,    19,     0,    29,     0,    30,     0,    31,
      32,    20,     0,    33,     0,   -25,     0,    22,    23,     0,
       0,     0,     0,    24,     0,     0,    25,     0,    26,     5,
       0,    27,     0,     0,     8,     9,   235,     0,    28,     0,
      11,    29,     0,    13,     0,   236,     0,   237,     0,    33,
     238,     0,   239,     0,     0,     0,   240,    15,     0,    16,
     241,     0,    18,     0,   242,     0,    19,     0,   243,     0,
       0,     0,     0,     8,    20,     0,     0,     0,   445,     0,
      22,    23,     0,     0,     0,     0,    24,     0,     0,    25,
     -88,    26,     0,   -88,    27,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    29,    19,   -88,   -88,     0,   -88,
       0,     0,    33,    20,     0,   -88,     0,     0,   -88,     0,
      23,   -88,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   -88,    29,   -88
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    13,    14,    17,   160,    27,    14,    23,
     163,   184,    72,    33,    17,   126,   127,   128,    28,   299,
      32,   156,   280,    26,    43,   128,   199,   180,    31,    32,
     202,   203,     6,     9,    13,   207,   208,   439,    13,   142,
      20,    10,    55,    13,    10,    25,    74,    31,    32,    29,
      16,    50,     7,     0,   463,   158,    13,    55,    86,    13,
      15,    74,    29,    37,    31,    34,    45,    86,    34,    21,
      45,    40,   474,    11,    53,    45,    75,    23,    53,   488,
      16,    60,    34,    53,    30,    60,    24,   248,   249,    68,
      60,   263,   372,    68,   267,    74,    53,    32,    68,    53,
      35,    80,    55,   106,    83,    80,    60,    23,    83,    55,
      86,    68,    91,    83,    68,    10,    91,   120,   229,   377,
     223,    91,   142,   126,   127,   128,    83,    55,    66,    83,
      46,    55,    49,    49,    55,    87,   308,    16,    55,    34,
      78,   144,    80,    13,    11,    53,    16,   207,   208,   302,
     250,   251,   305,    13,    40,   158,    16,   310,    18,   312,
      68,   296,   136,    80,    26,   276,     5,    18,   448,   172,
       9,    49,   175,    12,   327,    45,    49,    16,   181,    16,
      41,    18,   185,    53,    13,    45,    25,   197,    27,   192,
      60,   171,    42,    53,    16,   205,    17,     7,    68,     7,
      60,    71,   355,   223,    36,   378,    82,    16,    68,   382,
     383,    71,    51,    83,    21,    54,    45,   370,    77,   233,
     323,   393,    10,    83,    53,    64,   229,    15,    67,   364,
      69,    60,   367,    21,   244,    18,    62,    76,   391,    68,
      79,     3,    81,   416,     9,    10,    63,    89,     4,    23,
      16,    90,    17,   426,    83,    57,   429,   260,     6,   262,
      18,    18,    55,    18,    13,    43,   276,    71,    74,    34,
      13,   274,   252,   253,   254,   255,   256,   388,   432,   452,
      72,    57,     9,    26,   437,    74,    13,     9,   441,   292,
     291,   301,    31,   466,   297,   301,    45,    60,    42,    74,
      16,    55,    45,   323,    53,    74,   309,     9,    57,    36,
      53,    60,    16,    16,   468,   318,   319,    60,    45,    68,
      55,    55,    16,    13,    16,    68,    53,   330,    77,    72,
      57,    80,     8,    60,    83,   489,    26,    13,    14,    86,
      83,    68,    31,    19,    18,    55,    22,    74,   351,   352,
      77,    34,    18,    80,   357,    45,    83,    18,   361,    86,
      36,    18,    38,    53,    18,    41,    74,    16,    35,    45,
      60,    16,    42,   374,   374,    18,   388,    53,    68,    16,
      16,    57,    72,    59,    60,   388,    13,    71,    13,    65,
      80,    13,    68,    83,    70,    74,    16,    73,    57,    26,
      18,    26,   405,    55,    80,    16,    16,    83,   420,    16,
      43,    16,   108,    91,   415,    91,   271,   420,    45,    13,
      45,   203,    16,    45,   218,   393,    53,   444,    53,   418,
      34,    53,   435,    60,   288,    60,   439,     6,    60,   279,
       6,    68,   294,    68,   297,   455,    68,    74,   489,    74,
     245,    45,   232,    80,    37,    80,    83,   460,    83,    53,
     246,    83,   463,    57,   128,   460,    60,   181,    13,   300,
     473,   474,    13,   319,    68,   247,    -1,   478,   478,    -1,
     482,    -1,    -1,    77,     0,    -1,    -1,   488,    -1,    83,
     491,   491,     8,    -1,    10,    11,    -1,    13,    14,    15,
      45,    -1,    -1,    19,    45,    21,    22,    -1,    53,    -1,
      -1,    -1,    53,    -1,    -1,    60,    -1,    -1,    34,    60,
      36,    -1,    38,    68,    40,    41,    71,    68,    -1,    45,
      71,    -1,    -1,    74,    -1,    80,    -1,    53,    83,    80,
      -1,    57,    83,    59,    60,    -1,    -1,    -1,    -1,    65,
      13,    -1,    68,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    13,    80,    -1,    -1,    83,    18,    85,
      -1,    87,    88,    -1,     8,    91,    10,    11,    -1,    13,
      14,    15,    45,    -1,    -1,    19,    20,    21,    22,    -1,
      53,    -1,    -1,    -1,    57,    45,    -1,    60,    -1,    -1,
      34,    -1,    36,    53,    38,    68,    40,    41,    -1,    -1,
      60,    45,    -1,    -1,    77,    -1,    -1,    -1,    68,    53,
      83,    71,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    65,    -1,    83,    68,    13,    70,    -1,    -1,    73,
      13,    -1,    -1,    16,    -1,    13,    80,    -1,    16,    83,
      -1,    85,    -1,    87,    88,    -1,     8,    91,    10,    11,
      -1,    13,    14,    15,    42,    -1,    -1,    19,    20,    21,
      22,    -1,    45,    -1,    -1,    53,    -1,    45,    -1,    57,
      53,    -1,    34,    -1,    36,    53,    38,    60,    40,    41,
      68,    -1,    60,    45,    -1,    68,    -1,    -1,    -1,    77,
      68,    53,    80,    -1,    -1,    83,    -1,    59,    60,    -1,
      83,    -1,    -1,    65,    -1,    83,    68,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    83,    -1,    85,    -1,    87,    88,    -1,     8,    91,
      10,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    -1,    34,    -1,    36,    -1,    38,    -1,
      40,    41,    -1,    46,    47,    45,    49,    -1,    -1,    -1,
      -1,    -1,    55,    53,    -1,    58,    -1,    -1,    61,    59,
      60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    82,
      80,    84,    -1,    83,    -1,    85,    -1,    87,    88,    -1,
       8,    91,    10,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      38,    -1,    40,    41,    -1,    -1,     8,    45,    -1,    -1,
      -1,    13,    14,    -1,    -1,    53,    -1,    19,    -1,    -1,
      22,    59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      68,    -1,    70,    -1,    36,    73,    38,    -1,    -1,    41,
      -1,    -1,    80,    45,    -1,    83,    -1,    85,    -1,    87,
      88,    53,    -1,    91,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    65,    -1,    -1,    68,    -1,    70,     8,
      -1,    73,    -1,    -1,    13,    14,    28,    -1,    80,    -1,
      19,    83,    -1,    22,    -1,    37,    -1,    39,    -1,    91,
      42,    -1,    44,    -1,    -1,    -1,    48,    36,    -1,    38,
      52,    -1,    41,    -1,    56,    -1,    45,    -1,    60,    -1,
      -1,    -1,    -1,    13,    53,    -1,    -1,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,
      30,    70,    -1,    33,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    45,    46,    47,    -1,    49,
      -1,    -1,    91,    53,    -1,    55,    -1,    -1,    58,    -1,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,   142,   143,     0,     8,    10,    11,    13,    14,
      15,    19,    21,    22,    34,    36,    38,    40,    41,    45,
      53,    57,    59,    60,    65,    68,    70,    73,    80,    83,
      85,    87,    88,    91,    95,   130,   144,   145,   146,   148,
     154,   155,   156,   157,   159,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   193,   195,   197,   198,
     199,   200,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   223,   230,     0,   193,   148,   186,   188,    55,
     178,    55,    55,   203,   218,   218,    23,    30,   172,   178,
      55,   192,   193,   175,   177,   178,    16,   209,    55,   199,
     209,   193,   107,   159,   203,   209,    16,   189,   193,   192,
      36,   159,   231,   144,    30,    33,    46,    47,    49,    55,
      58,    61,    82,    84,   132,   212,    10,   147,   148,   223,
     102,     5,     9,    12,    16,    25,    27,    51,    54,    64,
      67,    69,    76,    79,    81,    90,   104,   158,   160,   106,
      40,   121,   122,   106,   123,   124,   125,   126,   127,   128,
     129,    26,    18,   113,   111,    49,    94,    94,    49,   149,
     137,    42,    41,   112,    16,    17,   120,   110,     7,   108,
     193,   112,    36,    57,   155,   191,   116,     7,   117,    16,
     193,    71,   192,   202,   213,    26,    72,   193,   202,   220,
     221,   222,    74,   213,   230,    82,   131,   148,    77,   103,
     159,   230,   193,     9,    86,    97,   193,   219,   230,    18,
     100,   197,    62,     3,   100,    28,    37,    39,    42,    44,
      48,    52,    56,    60,   201,    63,    89,     4,    50,    75,
      53,    68,    11,    24,    66,    78,    80,   209,   193,    23,
      26,    74,    80,   193,   224,   225,    57,    16,    55,    74,
     150,   151,   152,   153,     6,    96,    18,   100,   219,    49,
      55,    80,   173,   174,   176,    18,   191,   193,    18,    55,
     193,    43,    32,    35,   140,   190,    16,    18,   203,   191,
      10,    34,   133,   227,   228,   133,   228,    71,   203,    16,
     106,   228,   106,   228,    72,    74,    74,    23,    46,    49,
     214,   156,    57,     9,   105,   159,   230,   138,   193,   202,
      31,   198,   199,    60,    42,   203,   204,   205,   206,   207,
     207,   208,   208,   209,   209,   209,   209,   209,    55,   193,
     193,     9,    17,   228,    74,    98,   191,    16,   101,    98,
      74,     9,    99,   193,    16,   202,   203,    16,   176,   108,
     109,    55,   114,   175,   119,   154,   118,   193,    16,    31,
     115,   190,    16,    97,   189,   115,   227,   218,    18,   100,
     100,   139,   228,   193,   100,   100,    55,   135,   193,   215,
     216,    74,   224,   159,   230,    18,   100,   193,   193,   193,
      18,   100,   193,    18,   193,    97,    97,    74,    18,   100,
      29,   115,    20,   154,   108,   191,    16,    35,   141,    16,
     191,   191,    42,   192,   202,    18,   100,   139,   228,    16,
      71,   134,    74,   193,    97,    57,   155,   232,   191,   174,
     192,   191,    16,   191,   197,    26,   193,   100,   135,   193,
      18,   100,   151,    43,    86,   115,    16,   191,    40,   226,
     228,   229,   203,    16,    16,   136,   217,   216,   119,    57,
     191,    45,   194,   196,   197,   193,   135,    20,    43,    16,
     226,   119,   194,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    94,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   127,   127,   127,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   138,   138,   139,   139,
     139,   140,   140,   141,   141,   142,   143,   144,   145,   146,
     146,   146,   147,   148,   149,   149,   150,   151,   152,   153,
     154,   154,   155,   156,   156,   156,   156,   156,   156,   156,
     156,   157,   157,   157,   157,   157,   158,   159,   159,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   161,   162,   163,   163,   163,   163,   163,   164,
     165,   166,   167,   168,   168,   168,   169,   169,   170,   171,
     172,   172,   172,   173,   173,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   182,   182,   182,   182,   182,
     182,   182,   182,   183,   183,   183,   184,   185,   186,   187,
     187,   188,   189,   190,   191,   191,   192,   193,   193,   193,
     194,   194,   195,   196,   197,   198,   199,   199,   200,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   209,   209,   209,
     210,   210,   211,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   213,   213,   213,
     213,   214,   214,   214,   214,   215,   216,   216,   217,   218,
     219,   220,   220,   221,   221,   221,   221,   222,   222,   222,
     222,   223,   224,   225,   225,   225,   225,   225,   225,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     231,   232,   232,   232
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     4,     0,     2,     0,     1,
       0,     2,     0,     3,     0,     1,     2,     2,     3,     3,
       0,     2,     2,     0,     3,     3,     0,     1,     0,     2,
       0,     3,     0,     3,     0,     3,     0,     3,     0,     2,
       0,     5,     0,     3,     0,     3,     0,     2,     0,     2,
       1,     2,     0,     2,     0,     3,     0,     3,     0,     3,
       0,     3,     0,     3,     0,     3,     0,     3,     3,     0,
       3,     3,     0,     3,     3,     3,     3,     3,     0,     1,
       0,     2,     1,     2,     0,     3,     3,     0,     3,     0,
       1,     0,     1,     0,     3,     3,     0,     3,     0,     5,
       4,     3,     4,     0,     3,     1,     2,     4,     1,     2,
       2,     2,     2,     7,     2,     3,     2,     2,     1,     2,
       1,     1,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     4,     1,     1,     2,     4,
       1,     1,     1,     1,     3,     1,     2,     2,     3,     2,
       2,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     6,     5,     8,     6,
       6,     6,     2,     2,     1,     4,     2,     1,     5,     1,
       1,     1,     3,     3,     2,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     3,     3,     2,     3,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       3,     2,     3,     3,     2,     3,     1,     4,     2,     3,
       3,     1,     1,     4,     5,     3,     4,     2,     3,     2,
       3,     5,     3,     1,     2,     3,     3,     2,     2,     1,
       1,     4,     5,     1,     2,     2,     3,     1,     2,     2,
       1,     1,     4,     6
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



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

  if (yychar <= ENDMARKER)
    {
      yychar = ENDMARKER;
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
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
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
  switch (yyn)
    {

#line 1820 "parser.c"

      default: break;
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
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= ENDMARKER)
        {
          /* Return failure if at end of input.  */
          if (yychar == ENDMARKER)
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


#if !defined yyoverflow
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

  return yyresult;
}

#line 631 "parser.y"


// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

int main() {
    yydebug =1;    
    yyparse();
    printf("PARSE SUCCESSFUL!\n");
    yylex_destroy();    // To avoid memory leaks within flex...
    return 0;
}

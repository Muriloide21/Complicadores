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
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
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
  YYSYMBOL_ENDMARKER = 32,                 /* ENDMARKER  */
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
  YYSYMBOL_semi_small_stmt_star = 103,     /* semi_small_stmt_star  */
  YYSYMBOL_opt_semi = 104,                 /* opt_semi  */
  YYSYMBOL_assing_yield_or_test_plus = 105, /* assing_yield_or_test_plus  */
  YYSYMBOL_opt_assing_yield_or_test = 106, /* opt_assing_yield_or_test  */
  YYSYMBOL_comma_test_star_expr_star = 107, /* comma_test_star_expr_star  */
  YYSYMBOL_opt_testlist_star_expr = 108,   /* opt_testlist_star_expr  */
  YYSYMBOL_opt_as_name = 109,              /* opt_as_name  */
  YYSYMBOL_comma_import_as_name_star = 110, /* comma_import_as_name_star  */
  YYSYMBOL_comma_dotted_as_name_star = 111, /* comma_dotted_as_name_star  */
  YYSYMBOL_dot_name_star = 112,            /* dot_name_star  */
  YYSYMBOL_comma_name_star = 113,          /* comma_name_star  */
  YYSYMBOL_opt_comma_test = 114,           /* opt_comma_test  */
  YYSYMBOL_elif_test_suite_star = 115,     /* elif_test_suite_star  */
  YYSYMBOL_opt_else_suite = 116,           /* opt_else_suite  */
  YYSYMBOL_comma_with_item_star = 117,     /* comma_with_item_star  */
  YYSYMBOL_opt_as_expr = 118,              /* opt_as_expr  */
  YYSYMBOL_opt_test_as_name = 119,         /* opt_test_as_name  */
  YYSYMBOL_stmt_plus = 120,                /* stmt_plus  */
  YYSYMBOL_opt_colonass_test = 121,        /* opt_colonass_test  */
  YYSYMBOL_or_and_test_star = 122,         /* or_and_test_star  */
  YYSYMBOL_and_not_test_star = 123,        /* and_not_test_star  */
  YYSYMBOL_comp_op_expr_star = 124,        /* comp_op_expr_star  */
  YYSYMBOL_or_xor_expr_star = 125,         /* or_xor_expr_star  */
  YYSYMBOL_xor_and_expr_star = 126,        /* xor_and_expr_star  */
  YYSYMBOL_and_shift_expr_star = 127,      /* and_shift_expr_star  */
  YYSYMBOL_shift_arith_expr_star = 128,    /* shift_arith_expr_star  */
  YYSYMBOL_op_term_star = 129,             /* op_term_star  */
  YYSYMBOL_op_factor_star = 130,           /* op_factor_star  */
  YYSYMBOL_opt_await = 131,                /* opt_await  */
  YYSYMBOL_trailer_star = 132,             /* trailer_star  */
  YYSYMBOL_string_plus = 133,              /* string_plus  */
  YYSYMBOL_comma_namedexpr_test_star_expr_star = 134, /* comma_namedexpr_test_star_expr_star  */
  YYSYMBOL_comma_subscript_star = 135,     /* comma_subscript_star  */
  YYSYMBOL_opt_test = 136,                 /* opt_test  */
  YYSYMBOL_opt_sliceop = 137,              /* opt_sliceop  */
  YYSYMBOL_comma_expr_star_expr_star = 138, /* comma_expr_star_expr_star  */
  YYSYMBOL_comma_test_star = 139,          /* comma_test_star  */
  YYSYMBOL_comma_dict1_star = 140,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 141,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 142,        /* opt_finally_suite  */
  YYSYMBOL_program = 143,                  /* program  */
  YYSYMBOL_file_input = 144,               /* file_input  */
  YYSYMBOL_decorator = 145,                /* decorator  */
  YYSYMBOL_decorators = 146,               /* decorators  */
  YYSYMBOL_decorated = 147,                /* decorated  */
  YYSYMBOL_async_funcdef = 148,            /* async_funcdef  */
  YYSYMBOL_funcdef = 149,                  /* funcdef  */
  YYSYMBOL_parameters = 150,               /* parameters  */
  YYSYMBOL_arguments = 151,                /* arguments  */
  YYSYMBOL_argument = 152,                 /* argument  */
  YYSYMBOL_typedargslist = 153,            /* typedargslist  */
  YYSYMBOL_tfpdef = 154,                   /* tfpdef  */
  YYSYMBOL_stmt = 155,                     /* stmt  */
  YYSYMBOL_simple_stmt = 156,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 157,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 158,                /* expr_stmt  */
  YYSYMBOL_annassign = 159,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 160,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 161,                /* augassign  */
  YYSYMBOL_del_stmt = 162,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 163,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 164,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 165,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 166,            /* continue_stmt  */
  YYSYMBOL_return_stmt = 167,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 168,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 169,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 170,              /* import_stmt  */
  YYSYMBOL_import_name = 171,              /* import_name  */
  YYSYMBOL_import_from = 172,              /* import_from  */
  YYSYMBOL_from_part = 173,                /* from_part  */
  YYSYMBOL_import_part = 174,              /* import_part  */
  YYSYMBOL_import_as_name = 175,           /* import_as_name  */
  YYSYMBOL_dotted_as_name = 176,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 177,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 178,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 179,              /* dotted_name  */
  YYSYMBOL_global_stmt = 180,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 181,            /* nonlocal_stmt  */
  YYSYMBOL_assert_stmt = 182,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 183,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 184,               /* async_stmt  */
  YYSYMBOL_if_stmt = 185,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 186,               /* while_stmt  */
  YYSYMBOL_for_stmt = 187,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 188,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 189,                /* with_stmt  */
  YYSYMBOL_with_item = 190,                /* with_item  */
  YYSYMBOL_except_clause = 191,            /* except_clause  */
  YYSYMBOL_suite = 192,                    /* suite  */
  YYSYMBOL_namedexpr_test = 193,           /* namedexpr_test  */
  YYSYMBOL_test = 194,                     /* test  */
  YYSYMBOL_test_nocond = 195,              /* test_nocond  */
  YYSYMBOL_lambdef = 196,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 197,           /* lambdef_nocond  */
  YYSYMBOL_or_test = 198,                  /* or_test  */
  YYSYMBOL_and_test = 199,                 /* and_test  */
  YYSYMBOL_not_test = 200,                 /* not_test  */
  YYSYMBOL_comparison = 201,               /* comparison  */
  YYSYMBOL_comp_op = 202,                  /* comp_op  */
  YYSYMBOL_star_expr = 203,                /* star_expr  */
  YYSYMBOL_expr = 204,                     /* expr  */
  YYSYMBOL_xor_expr = 205,                 /* xor_expr  */
  YYSYMBOL_and_expr = 206,                 /* and_expr  */
  YYSYMBOL_shift_expr = 207,               /* shift_expr  */
  YYSYMBOL_arith_expr = 208,               /* arith_expr  */
  YYSYMBOL_term = 209,                     /* term  */
  YYSYMBOL_factor = 210,                   /* factor  */
  YYSYMBOL_power = 211,                    /* power  */
  YYSYMBOL_atom_expr = 212,                /* atom_expr  */
  YYSYMBOL_atom = 213,                     /* atom  */
  YYSYMBOL_testlist_comp = 214,            /* testlist_comp  */
  YYSYMBOL_trailer = 215,                  /* trailer  */
  YYSYMBOL_subscriptlist = 216,            /* subscriptlist  */
  YYSYMBOL_subscript = 217,                /* subscript  */
  YYSYMBOL_sliceop = 218,                  /* sliceop  */
  YYSYMBOL_exprlist = 219,                 /* exprlist  */
  YYSYMBOL_testlist = 220,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 221,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 222,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 223,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 224,                 /* classdef  */
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
#define YYLAST   1021

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  313
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  494

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
       0,    22,    22,    23,    24,    27,    28,    29,    32,    33,
      36,    37,    40,    41,    44,    45,    47,    48,    51,    52,
      55,    56,    59,    60,    63,    64,    67,    68,    69,    70,
      73,    74,    75,    78,    79,    80,    83,    84,    87,    88,
      91,    92,    95,    96,    99,   100,   103,   104,   107,   108,
     111,   112,   115,   116,   119,   120,   123,   124,   127,   128,
     131,   132,   135,   136,   139,   140,   143,   144,   147,   148,
     151,   152,   155,   156,   159,   160,   163,   164,   165,   168,
     169,   170,   173,   174,   175,   176,   177,   178,   181,   182,
     185,   186,   189,   190,   193,   194,   195,   198,   199,   202,
     203,   206,   207,   210,   211,   212,   215,   216,   219,   220,
     221,   224,   225,   228,   229,   234,   239,   242,   245,   248,
     249,   250,   254,   258,   265,   266,   270,   274,   277,   281,
     287,   288,   292,   297,   298,   299,   300,   301,   302,   303,
     304,   309,   310,   311,   312,   313,   317,   321,   322,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   343,   347,   351,   352,   353,   354,   355,   359,
     363,   367,   371,   375,   376,   377,   381,   382,   386,   391,
     402,   403,   404,   408,   409,   410,   414,   418,   422,   426,
     430,   434,   438,   441,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   455,   456,   457,   460,   463,   466,   469,
     470,   473,   476,   479,   482,   483,   486,   489,   490,   491,
     494,   495,   498,   502,   506,   509,   512,   513,   516,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   531,
     534,   537,   540,   543,   546,   549,   552,   553,   554,   555,
     558,   559,   562,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   575,   576,   577,   578,   581,   582,   583,
     584,   587,   588,   589,   590,   593,   596,   597,   600,   603,
     606,   609,   610,   613,   614,   615,   616,   619,   620,   621,
     622,   625,   628,   631,   632,   633,   634,   635,   636,   639,
     640,   643,   644,   647,   648,   651,   652,   655,   656,   659,
     660,   663,   664,   665
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
  "\"end of file\"", "error", "\"invalid token\"", "AND", "AMPER",
  "AMPEREQUAL", "ARROW", "AS", "ASSERT", "EQUAL", "ASYNC", "AT", "ATEQUAL",
  "AWAIT", "BREAK", "CLASS", "COLON", "COLONEQUAL", "COMMA", "CONTINUE",
  "DEDENT", "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL",
  "DOUBLESTAR", "DOUBLESTAREQUAL", "EQEQUAL", "ELIF", "ELLIPSIS", "ELSE",
  "ENDMARKER", "EXCEPT", "FALSE", "FOR", "FINALLY", "FROM", "GREATEREQUAL",
  "GLOBAL", "GREATER", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LSQB", "LBRACE", "LESSEQUAL", "LPAR", "LEFTSHIFT", "LEFTSHIFTEQUAL",
  "LESS", "MINUS", "MINUSEQUAL", "NAME", "NOTEQUAL", "NEWLINE", "NONE",
  "NONLOCAL", "NOT", "NUMBER", "OR", "VBAR", "VBAREQUAL", "PASS",
  "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "RAISE", "RSQB",
  "RBRACE", "RETURN", "RPAR", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "SEMICOLON",
  "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL", "STRING", "TILDE", "TRUE",
  "TRY", "TYPE_COMMENT", "WITH", "WHILE", "CIRCUMFLEX", "CIRCUMFLEXEQUAL",
  "YIELD", "$accept", "newline_or_stmt_star", "opt_par_arglist",
  "decorator_plus", "opt_arrow_test", "opt_type_comment",
  "comma_argument_star", "opt_assign_test", "opt_comma", "opt_colon_test",
  "semi_small_stmt_star", "opt_semi", "assing_yield_or_test_plus",
  "opt_assing_yield_or_test", "comma_test_star_expr_star",
  "opt_testlist_star_expr", "opt_as_name", "comma_import_as_name_star",
  "comma_dotted_as_name_star", "dot_name_star", "comma_name_star",
  "opt_comma_test", "elif_test_suite_star", "opt_else_suite",
  "comma_with_item_star", "opt_as_expr", "opt_test_as_name", "stmt_plus",
  "opt_colonass_test", "or_and_test_star", "and_not_test_star",
  "comp_op_expr_star", "or_xor_expr_star", "xor_and_expr_star",
  "and_shift_expr_star", "shift_arith_expr_star", "op_term_star",
  "op_factor_star", "opt_await", "trailer_star", "string_plus",
  "comma_namedexpr_test_star_expr_star", "comma_subscript_star",
  "opt_test", "opt_sliceop", "comma_expr_star_expr_star",
  "comma_test_star", "comma_dict1_star", "except_suite_plus",
  "opt_finally_suite", "program", "file_input", "decorator", "decorators",
  "decorated", "async_funcdef", "funcdef", "parameters", "arguments",
  "argument", "typedargslist", "tfpdef", "stmt", "simple_stmt",
  "small_stmt", "expr_stmt", "annassign", "testlist_star_expr",
  "augassign", "del_stmt", "pass_stmt", "flow_stmt", "break_stmt",
  "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
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
     345,   346,   347
};
#endif

#define YYPACT_NINF (-411)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-308)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -411,   324,    52,  -411,   175,    42,    33,  -411,  -411,    44,
    -411,    86,   165,  -411,   165,    25,    95,   175,    33,    55,
     165,  -411,   106,    56,  -411,   165,   538,   170,   165,   165,
      68,   175,   175,   342,   101,   936,  -411,   164,  -411,  -411,
    -411,  -411,  -411,  -411,    67,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,    37,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,   139,  -411,  -411,  -411,   150,  -411,  -411,  -411,  -411,
     119,   119,   131,  -411,  -411,   141,  -411,  -411,   152,  -411,
    -411,   182,   185,  -411,  -411,   190,   175,  -411,  -411,  -411,
    -411,   169,  -411,  -411,  -411,  -411,   769,  -411,   210,   207,
     175,  -411,  -411,  -411,  -411,  -411,    62,   240,    34,  -411,
    -411,  -411,  -411,  -411,   144,  -411,   211,  -411,  -411,  -411,
     155,  -411,   126,  -411,   175,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,    15,  -411,    13,   219,
      56,   177,   238,   219,   752,   179,   156,   241,    22,    -4,
      20,   165,   175,  -411,   224,   373,   192,   244,    -5,   251,
     246,   175,    10,   247,   769,   175,  -411,   249,   206,  -411,
    -411,   247,   175,   225,  -411,   117,    88,   165,  -411,   769,
    -411,  -411,    51,    51,   196,   165,  -411,   180,    51,   198,
    -411,  -411,  -411,   197,   199,  -411,   110,  -411,   820,   218,
    -411,  -411,   268,   126,  -411,  -411,  -411,  -411,  -411,   906,
    -411,   256,    56,    56,  -411,  -411,  -411,  -411,  -411,   230,
    -411,  -411,  -411,   237,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,  -411,  -411,   248,
     175,  -411,   175,   154,   221,  -411,  -411,   769,   281,  -411,
    -411,  -411,   232,   291,   175,   292,   245,  -411,   295,   261,
     190,  -411,  -411,  -411,  -411,   262,  -411,  -411,    33,  -411,
    -411,   733,   712,   296,   181,   306,   243,   175,  -411,   294,
     293,   165,   309,  -411,  -411,   309,  -411,  -411,    51,   175,
     219,  -411,   219,  -411,  -411,  -411,  -411,   277,   838,   389,
    -411,  -411,  -411,   126,  -411,  -411,  -411,   322,  -411,  -411,
     175,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,   175,   175,  -411,  -411,   323,  -411,   175,  -411,   326,
    -411,   175,  -411,  -411,   243,  -411,  -411,   243,   267,  -411,
     329,  -411,   172,  -411,   484,  -411,  -411,   190,   769,   332,
     314,   338,   769,   769,  -411,  -411,  -411,   317,   384,  -411,
    -411,   349,  -411,    51,  -411,  -411,  -411,   352,   353,   299,
    -411,  -411,   301,  -411,  -411,   470,  -411,  -411,  -411,  -411,
      61,  -411,  -411,   243,  -411,   863,   769,  -411,   261,  -411,
     175,  -411,  -411,  -411,  -411,  -411,   769,   361,  -411,   769,
    -411,  -411,    56,  -411,  -411,   621,  -411,   349,  -411,   495,
    -411,   362,  -411,  -411,   325,    -2,  -411,  -411,   294,  -411,
     367,  -411,   769,  -411,    27,   165,   375,  -411,   376,  -411,
     468,  -411,  -411,   733,   336,  -411,   769,  -411,   303,  -411,
    -411,  -411,  -411,   175,   661,  -411,  -411,  -411,   567,   357,
    -411,   388,    27,  -411,  -411,  -411,  -411,  -411,   733,   303,
    -411,   650,  -411,  -411
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    88,     0,   115,    88,     0,     0,    89,   169,     0,
     170,     0,    88,   116,    88,     0,     0,    88,     0,     0,
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
    -411,  -411,   318,  -411,  -411,  -142,   147,  -411,  -135,  -411,
    -411,  -411,  -411,  -411,   -52,  -411,  -257,  -411,  -411,  -411,
     316,  -411,  -411,  -282,  -411,  -411,  -411,  -350,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,   222,  -411,  -410,  -411,  -411,  -411,    35,  -411,  -411,
    -411,  -411,   397,  -411,  -411,  -411,    16,  -411,  -411,   -22,
    -411,  -411,     0,    -1,   214,  -411,  -411,   -18,  -411,  -411,
    -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,  -411,
    -411,  -411,    19,   145,   160,  -411,    28,  -411,  -411,  -411,
    -411,  -411,  -411,  -411,   436,  -411,   439,   149,   153,  -174,
     -13,     1,   -38,  -411,  -411,  -153,   220,   -20,  -411,  -411,
    -115,    -6,   215,   209,   216,  -210,  -194,    29,  -411,  -411,
    -411,   339,  -411,  -411,     6,  -411,   -12,   288,  -411,  -411,
    -411,   434,   157,  -411,   -10,   188,  -167,  -411,  -112,  -411,
    -411
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
      41,    40,    95,   109,   101,    85,    93,   231,    93,   113,
     286,   203,   208,   203,   225,   121,   214,   385,   102,   119,
     163,    86,   114,   369,   223,   299,     7,   111,   234,   458,
     221,   252,   118,   102,    90,   304,   306,   300,   339,   340,
     311,   313,   463,    99,   253,   277,   228,     7,    96,   107,
     250,   268,    84,   138,   110,    97,   341,   342,   115,    19,
     279,   300,   301,    11,   486,   251,   280,    20,   468,     7,
     269,   106,   141,   248,    23,     7,   142,    14,   160,   143,
      19,    89,    25,   144,   116,   464,   301,   254,    20,    89,
     421,   281,   145,   356,   146,    23,   353,    29,   249,   255,
      91,   256,   224,    25,   296,    33,   297,   190,    19,   212,
      20,   326,     6,   478,   329,    28,    20,    23,    29,   147,
     424,   200,   148,    23,   220,    25,    33,   102,   207,   102,
      31,    25,   149,   317,   201,   150,   -19,   151,   491,     7,
      29,   392,    92,    28,   152,   222,    29,   153,   224,   154,
     292,   100,   217,   293,   383,   310,   312,   318,   155,   226,
     319,   365,   108,   351,   300,   171,   465,   389,   172,   175,
     390,   352,    19,   258,   136,   394,   263,   395,     7,     9,
      20,   178,   226,     7,   181,    11,   287,    23,     7,   301,
     300,   298,   406,   290,   182,    25,   309,   188,   184,   308,
     257,   420,   185,   379,   425,   325,   192,    28,   430,   431,
      29,   404,   379,   332,   292,   301,    19,   197,    33,    20,
     411,    19,   415,   199,    20,   416,   438,   215,   -36,    20,
     328,    23,    11,   218,    25,   419,    23,   229,   335,    25,
     232,   233,   448,   245,    25,   247,   246,   259,   -36,    29,
     266,    28,   451,     7,    29,   453,   436,   274,     7,    29,
     267,   349,   289,   350,   276,   285,   205,   288,   307,   291,
     366,   314,   315,   434,   316,   363,   322,   323,   467,   454,
     334,   343,   344,   345,   346,   347,    19,   330,   -19,   387,
      41,   333,   480,   377,    20,    93,   354,   357,   118,    20,
     361,    23,   457,   -19,   348,   403,   461,   360,   364,    25,
     393,   367,   378,   206,    25,   484,     7,   280,   371,   398,
     263,    28,   382,   -19,    29,   379,    28,   388,   301,    29,
     224,   407,     4,   396,     5,     6,   484,     7,     8,     9,
     405,   410,   417,    10,   413,    11,    12,   418,   426,   481,
     427,  -307,   408,   409,   429,     7,    13,    20,   412,    14,
     432,    15,   414,    16,    23,    17,    18,   435,   439,  -100,
      19,   440,    25,    41,   423,   433,   442,   452,    20,   120,
     460,   268,    21,   466,    22,    23,     7,    29,    19,   102,
      24,   473,   474,    25,   479,    26,    20,     7,    27,   260,
    -307,   488,     7,    23,   489,    28,   443,   450,    29,   177,
      30,    25,    31,    32,   446,   260,    33,  -307,   359,    19,
    -307,   102,   462,    28,   191,   305,    29,    20,   437,  -307,
      19,   123,   321,   373,    23,    19,   456,   449,    20,   368,
     459,    87,    25,    20,    88,    23,   384,   381,   261,   472,
      23,   492,   331,    25,   262,   337,   -19,    29,    25,   -19,
     336,   398,    41,   338,   401,    28,   477,   213,    29,   278,
     262,   139,   490,    29,   485,   459,   402,    41,   423,     0,
       0,     7,     0,     7,   -99,     0,   -19,    41,   386,     0,
      41,   423,     4,     0,     5,     6,     0,     7,     8,     9,
       0,     0,     0,    10,   422,    11,    12,     0,     7,     0,
       0,   -99,     0,   -99,    19,     0,    19,     0,     0,    14,
       0,    15,    20,    16,    20,    17,    18,     0,   -19,    23,
      19,    23,     0,     0,     0,     0,     0,    25,    20,    25,
     -19,    19,     0,     0,    22,    23,     0,     0,   -19,    20,
      24,     7,    29,    25,    29,    26,    23,     0,    27,     0,
       0,     0,     0,     0,    25,    28,     0,   -99,    29,     0,
      30,     0,    31,    32,     0,     4,    33,     5,     6,    29,
       7,     8,     9,     0,    19,     0,    10,   487,    11,    12,
       0,     0,    20,     0,     0,     0,  -173,     0,     0,    23,
       0,     0,    14,     0,    15,     0,    16,    25,    17,    18,
       0,     0,     0,    19,     0,     0,  -173,     0,     0,     0,
       0,    20,    29,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,    24,     7,     0,    25,     0,    26,     0,
       0,    27,     0,     0,     0,     0,     0,   455,    28,     0,
       0,    29,     0,    30,     0,    31,    32,     0,     4,    33,
       5,     6,     0,     7,     8,     9,     0,    19,     0,    10,
     493,    11,    12,     0,     7,    20,     0,     0,     0,   -99,
       0,     0,    23,     0,     0,    14,     0,    15,     0,    16,
      25,    17,    18,     0,   -19,     0,    19,     0,     0,     0,
       0,     0,     0,     0,    20,    29,     0,    19,     0,     0,
      22,    23,     0,     0,     0,    20,    24,     0,     0,    25,
       0,    26,    23,     0,    27,     7,     0,     0,   -58,     0,
      25,    28,     0,   -99,    29,     0,    30,     0,    31,    32,
       0,     4,    33,     5,     6,    29,     7,     8,     9,     0,
       0,     0,    10,     0,    11,    12,     0,     0,    19,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    14,     0,
      15,     0,    16,    23,    17,    18,     0,     4,     0,    19,
     235,    25,     7,     8,     0,     0,     0,    20,    10,     0,
     236,    12,   237,    22,    23,   238,    29,   239,     0,    24,
       0,   240,    25,     0,    26,   241,    15,    27,    16,   242,
       0,    18,     0,   243,    28,    19,     0,    29,     0,    30,
       0,    31,    32,    20,     0,    33,     0,   193,     4,    22,
      23,     0,     0,     7,     8,    24,     0,     0,    25,    10,
      26,     0,    12,    27,     0,     0,     0,     0,     0,     0,
      28,     7,     0,    29,   -99,     0,     0,    15,     0,    16,
       0,    33,    18,     0,     0,     0,    19,     0,     0,     0,
       0,     4,     0,     0,    20,     0,     7,     8,   -25,     0,
      22,    23,    10,     0,    19,    12,    24,     0,     0,    25,
       0,    26,    20,     0,    27,     0,     0,     0,     0,    23,
      15,    28,    16,     0,    29,    18,     0,    25,     0,    19,
       0,     0,    33,     0,     0,     0,     0,    20,     0,     7,
       0,   445,    29,    22,    23,     0,     0,     0,     0,    24,
       0,     0,    25,     0,    26,     0,   -88,    27,     0,     0,
     -88,     0,     0,     0,    28,     0,     0,    29,     0,     0,
       0,     0,    19,   -88,   -88,    33,   -88,     0,     0,     0,
      20,     0,   -88,     0,     0,   -88,   124,    23,   -88,     0,
     125,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,   126,   127,     0,   128,    28,     0,   -88,
      29,   -88,   129,     0,     0,   130,     0,     0,   131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
       0,   133
};

static const yytype_int16 yycheck[] =
{
       1,     1,    14,    23,    17,     4,    12,   160,    14,    27,
     184,   126,   127,   128,   156,    33,   128,   299,    17,    32,
      72,     5,    28,   280,     9,   199,    13,    26,   163,   439,
     142,    11,    31,    32,     6,   202,   203,    10,   248,   249,
     207,   208,    44,    15,    24,   180,   158,    13,    23,    20,
      54,    56,     0,    37,    25,    30,   250,   251,    29,    46,
      50,    10,    35,    21,   474,    69,    56,    54,    41,    13,
      75,    16,     5,    51,    61,    13,     9,    35,    41,    12,
      46,    56,    69,    16,    16,    87,    35,    67,    54,    56,
     372,    81,    25,   267,    27,    61,   263,    84,    76,    79,
      56,    81,    87,    69,    16,    92,    18,   106,    46,    75,
      54,   223,    11,   463,   229,    81,    54,    61,    84,    52,
     377,   120,    55,    61,   142,    69,    92,   126,   127,   128,
      88,    69,    65,    23,    72,    68,    75,    70,   488,    13,
      84,   308,    56,    81,    77,   144,    84,    80,    87,    82,
      33,    56,   136,    36,   296,   207,   208,    47,    91,   158,
      50,   276,    56,     9,    10,    26,   448,   302,    18,    50,
     305,    17,    46,   172,    10,   310,   175,   312,    13,    15,
      54,    50,   181,    13,    43,    21,   185,    61,    13,    35,
      10,   197,   327,   192,    42,    69,    16,     7,    16,   205,
     171,    29,    17,    31,   378,   223,    37,    81,   382,   383,
      84,   323,    31,   233,    33,    35,    46,     7,    92,    54,
     355,    46,   364,    16,    54,   367,   393,    83,    58,    54,
     229,    61,    21,    78,    69,   370,    61,    18,   244,    69,
      63,     3,   416,    64,    69,     4,    90,    23,    78,    84,
      58,    81,   426,    13,    84,   429,   391,     6,    13,    84,
      16,   260,    56,   262,    18,    18,    26,    18,    72,    44,
     276,    73,    75,   388,    75,   274,    58,     9,   452,   432,
      43,   252,   253,   254,   255,   256,    46,    31,    43,   301,
     291,    61,   466,   292,    54,   301,    75,    16,   297,    54,
       9,    61,   437,    58,    56,   323,   441,    75,    16,    69,
     309,    16,    16,    73,    69,   468,    13,    56,    56,   318,
     319,    81,    16,    78,    84,    31,    81,    18,    35,    84,
      87,   330,     8,    56,    10,    11,   489,    13,    14,    15,
      18,    18,    75,    19,    18,    21,    22,    18,    16,    46,
      36,     9,   351,   352,    16,    13,    32,    54,   357,    35,
      43,    37,   361,    39,    61,    41,    42,    18,    16,    16,
      46,    72,    69,   374,   374,   388,    75,    16,    54,    37,
      18,    56,    58,    16,    60,    61,    13,    84,    46,   388,
      66,    16,    16,    69,    58,    71,    54,    13,    74,    26,
      58,    44,    13,    61,    16,    81,   405,   420,    84,    91,
      86,    69,    88,    89,   415,    26,    92,    75,   271,    46,
      78,   420,   444,    81,   108,   203,    84,    54,   393,    87,
      46,    34,   218,   288,    61,    46,   435,   418,    54,   279,
     439,     5,    69,    54,     5,    61,   297,   294,    75,   455,
      61,   489,   232,    69,    81,   246,    72,    84,    69,    75,
     245,   460,   463,   247,    75,    81,   460,   128,    84,   181,
      81,    37,   482,    84,   473,   474,   319,   478,   478,    -1,
      -1,    13,    -1,    13,    16,    -1,    16,   488,   300,    -1,
     491,   491,     8,    -1,    10,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    13,    -1,
      -1,    16,    -1,    18,    46,    -1,    46,    -1,    -1,    35,
      -1,    37,    54,    39,    54,    41,    42,    -1,    58,    61,
      46,    61,    -1,    -1,    -1,    -1,    -1,    69,    54,    69,
      72,    46,    -1,    -1,    60,    61,    -1,    -1,    78,    54,
      66,    13,    84,    69,    84,    71,    61,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    69,    81,    -1,    72,    84,    -1,
      86,    -1,    88,    89,    -1,     8,    92,    10,    11,    84,
      13,    14,    15,    -1,    46,    -1,    19,    20,    21,    22,
      -1,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    61,
      -1,    -1,    35,    -1,    37,    -1,    39,    69,    41,    42,
      -1,    -1,    -1,    46,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    54,    84,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    66,    13,    -1,    69,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    26,    81,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    -1,     8,    92,
      10,    11,    -1,    13,    14,    15,    -1,    46,    -1,    19,
      20,    21,    22,    -1,    13,    54,    -1,    -1,    -1,    18,
      -1,    -1,    61,    -1,    -1,    35,    -1,    37,    -1,    39,
      69,    41,    42,    -1,    73,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    84,    -1,    46,    -1,    -1,
      60,    61,    -1,    -1,    -1,    54,    66,    -1,    -1,    69,
      -1,    71,    61,    -1,    74,    13,    -1,    -1,    16,    -1,
      69,    81,    -1,    72,    84,    -1,    86,    -1,    88,    89,
      -1,     8,    92,    10,    11,    84,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    35,    -1,
      37,    -1,    39,    61,    41,    42,    -1,     8,    -1,    46,
      28,    69,    13,    14,    -1,    -1,    -1,    54,    19,    -1,
      38,    22,    40,    60,    61,    43,    84,    45,    -1,    66,
      -1,    49,    69,    -1,    71,    53,    37,    74,    39,    57,
      -1,    42,    -1,    61,    81,    46,    -1,    84,    -1,    86,
      -1,    88,    89,    54,    -1,    92,    -1,    58,     8,    60,
      61,    -1,    -1,    13,    14,    66,    -1,    -1,    69,    19,
      71,    -1,    22,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    13,    -1,    84,    16,    -1,    -1,    37,    -1,    39,
      -1,    92,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    54,    -1,    13,    14,    58,    -1,
      60,    61,    19,    -1,    46,    22,    66,    -1,    -1,    69,
      -1,    71,    54,    -1,    74,    -1,    -1,    -1,    -1,    61,
      37,    81,    39,    -1,    84,    42,    -1,    69,    -1,    46,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    54,    -1,    13,
      -1,    58,    84,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    71,    -1,    30,    74,    -1,    -1,
      34,    -1,    -1,    -1,    81,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    46,    47,    48,    92,    50,    -1,    -1,    -1,
      54,    -1,    56,    -1,    -1,    59,    30,    61,    62,    -1,
      34,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    50,    81,    -1,    83,
      84,    85,    56,    -1,    -1,    59,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   143,   144,     8,    10,    11,    13,    14,    15,
      19,    21,    22,    32,    35,    37,    39,    41,    42,    46,
      54,    58,    60,    61,    66,    69,    71,    74,    81,    84,
      86,    88,    89,    92,    96,   131,   145,   146,   147,   149,
     155,   156,   157,   158,   160,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   194,   196,   198,   199,
     200,   201,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   224,   231,     0,   194,   149,   187,   189,    56,
     179,    56,    56,   204,   219,   219,    23,    30,   173,   179,
      56,   193,   194,   176,   178,   179,    16,   210,    56,   200,
     210,   194,   108,   160,   204,   210,    16,   190,   194,   193,
      37,   160,   232,   145,    30,    34,    47,    48,    50,    56,
      59,    62,    83,    85,   133,   213,    10,   148,   149,   224,
     103,     5,     9,    12,    16,    25,    27,    52,    55,    65,
      68,    70,    77,    80,    82,    91,   105,   159,   161,   107,
      41,   122,   123,   107,   124,   125,   126,   127,   128,   129,
     130,    26,    18,   114,   112,    50,    95,    95,    50,   150,
     138,    43,    42,   113,    16,    17,   121,   111,     7,   109,
     194,   113,    37,    58,   156,   192,   117,     7,   118,    16,
     194,    72,   193,   203,   214,    26,    73,   194,   203,   221,
     222,   223,    75,   214,   231,    83,   132,   149,    78,   104,
     160,   231,   194,     9,    87,    98,   194,   220,   231,    18,
     101,   198,    63,     3,   101,    28,    38,    40,    43,    45,
      49,    53,    57,    61,   202,    64,    90,     4,    51,    76,
      54,    69,    11,    24,    67,    79,    81,   210,   194,    23,
      26,    75,    81,   194,   225,   226,    58,    16,    56,    75,
     151,   152,   153,   154,     6,    97,    18,   101,   220,    50,
      56,    81,   174,   175,   177,    18,   192,   194,    18,    56,
     194,    44,    33,    36,   141,   191,    16,    18,   204,   192,
      10,    35,   134,   228,   229,   134,   229,    72,   204,    16,
     107,   229,   107,   229,    73,    75,    75,    23,    47,    50,
     215,   157,    58,     9,   106,   160,   231,   139,   194,   203,
      31,   199,   200,    61,    43,   204,   205,   206,   207,   208,
     208,   209,   209,   210,   210,   210,   210,   210,    56,   194,
     194,     9,    17,   229,    75,    99,   192,    16,   102,    99,
      75,     9,   100,   194,    16,   203,   204,    16,   177,   109,
     110,    56,   115,   176,   120,   155,   119,   194,    16,    31,
     116,   191,    16,    98,   190,   116,   228,   219,    18,   101,
     101,   140,   229,   194,   101,   101,    56,   136,   194,   216,
     217,    75,   225,   160,   231,    18,   101,   194,   194,   194,
      18,   101,   194,    18,   194,    98,    98,    75,    18,   101,
      29,   116,    20,   155,   109,   192,    16,    36,   142,    16,
     192,   192,    43,   193,   203,    18,   101,   140,   229,    16,
      72,   135,    75,   194,    98,    58,   156,   233,   192,   175,
     193,   192,    16,   192,   198,    26,   194,   101,   136,   194,
      18,   101,   152,    44,    87,   116,    16,   192,    41,   227,
     229,   230,   204,    16,    16,   137,   218,   217,   120,    58,
     192,    46,   195,   197,   198,   194,   136,    20,    44,    16,
     227,   120,   195,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   106,   107,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   129,
     129,   129,   130,   130,   130,   130,   130,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   138,   139,   139,   140,   140,
     140,   141,   141,   142,   142,   143,   144,   145,   146,   147,
     147,   147,   148,   149,   150,   150,   151,   152,   153,   154,
     155,   155,   156,   157,   157,   157,   157,   157,   157,   157,
     157,   158,   158,   158,   158,   158,   159,   160,   160,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   163,   164,   164,   164,   164,   164,   165,
     166,   167,   168,   169,   169,   169,   170,   170,   171,   172,
     173,   173,   173,   174,   174,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   184,   184,   184,   185,   186,   187,   188,
     188,   189,   190,   191,   192,   192,   193,   194,   194,   194,
     195,   195,   196,   197,   198,   199,   200,   200,   201,   202,
     202,   202,   202,   202,   202,   202,   202,   202,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   210,   210,   210,
     211,   211,   212,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   213,   214,   214,   214,
     214,   215,   215,   215,   215,   216,   217,   217,   218,   219,
     220,   221,   221,   222,   222,   222,   222,   223,   223,   223,
     223,   224,   225,   226,   226,   226,   226,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   230,   231,   231,   232,
     232,   233,   233,   233
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

#line 668 "parser.y"


// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

int main() {
    yyparse();
    printf("PARSE SUCCESSFUL!\n");
    yylex_destroy();    // To avoid memory leaks within flex...
    return 0;
}

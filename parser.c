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

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(char const *s);


#line 81 "parser.c"

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
  YYSYMBOL_FALSE = 3,                      /* FALSE  */
  YYSYMBOL_AWAIT = 4,                      /* AWAIT  */
  YYSYMBOL_ELSE = 5,                       /* ELSE  */
  YYSYMBOL_IMPORT = 6,                     /* IMPORT  */
  YYSYMBOL_PASS = 7,                       /* PASS  */
  YYSYMBOL_NONE = 8,                       /* NONE  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_EXCEPT = 10,                    /* EXCEPT  */
  YYSYMBOL_IN = 11,                        /* IN  */
  YYSYMBOL_RAISE = 12,                     /* RAISE  */
  YYSYMBOL_TRUE = 13,                      /* TRUE  */
  YYSYMBOL_CLASS = 14,                     /* CLASS  */
  YYSYMBOL_FINALLY = 15,                   /* FINALLY  */
  YYSYMBOL_IS = 16,                        /* IS  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_LAMBDA = 21,                    /* LAMBDA  */
  YYSYMBOL_TRY = 22,                       /* TRY  */
  YYSYMBOL_AS = 23,                        /* AS  */
  YYSYMBOL_DEF = 24,                       /* DEF  */
  YYSYMBOL_FROM = 25,                      /* FROM  */
  YYSYMBOL_NONLOCAL = 26,                  /* NONLOCAL  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_ASSERT = 28,                    /* ASSERT  */
  YYSYMBOL_DEL = 29,                       /* DEL  */
  YYSYMBOL_GLOBAL = 30,                    /* GLOBAL  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_WITH = 32,                      /* WITH  */
  YYSYMBOL_ASYNC = 33,                     /* ASYNC  */
  YYSYMBOL_ELIF = 34,                      /* ELIF  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_YIELD = 36,                     /* YIELD  */
  YYSYMBOL_EQEQUAL = 37,                   /* EQEQUAL  */
  YYSYMBOL_NOTEQUAL = 38,                  /* NOTEQUAL  */
  YYSYMBOL_LEFTSHIFT = 39,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 40,                /* RIGHTSHIFT  */
  YYSYMBOL_LESSEQUAL = 41,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 42,              /* GREATEREQUAL  */
  YYSYMBOL_LESS = 43,                      /* LESS  */
  YYSYMBOL_GREATER = 44,                   /* GREATER  */
  YYSYMBOL_TILDE = 45,                     /* TILDE  */
  YYSYMBOL_PERCENT = 46,                   /* PERCENT  */
  YYSYMBOL_VBAR = 47,                      /* VBAR  */
  YYSYMBOL_AMPER = 48,                     /* AMPER  */
  YYSYMBOL_DOUBLESLASH = 49,               /* DOUBLESLASH  */
  YYSYMBOL_SLASH = 50,                     /* SLASH  */
  YYSYMBOL_DOUBLESTAR = 51,                /* DOUBLESTAR  */
  YYSYMBOL_STAR = 52,                      /* STAR  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_PLUS = 54,                      /* PLUS  */
  YYSYMBOL_CIRCUMFLEX = 55,                /* CIRCUMFLEX  */
  YYSYMBOL_EQUAL = 56,                     /* EQUAL  */
  YYSYMBOL_COMMA = 57,                     /* COMMA  */
  YYSYMBOL_COLON = 58,                     /* COLON  */
  YYSYMBOL_LPAR = 59,                      /* LPAR  */
  YYSYMBOL_RPAR = 60,                      /* RPAR  */
  YYSYMBOL_LSQB = 61,                      /* LSQB  */
  YYSYMBOL_RSQB = 62,                      /* RSQB  */
  YYSYMBOL_LBRACE = 63,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 64,                    /* RBRACE  */
  YYSYMBOL_AT = 65,                        /* AT  */
  YYSYMBOL_DOT = 66,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 67,                  /* ELLIPSIS  */
  YYSYMBOL_PLUSEQUAL = 68,                 /* PLUSEQUAL  */
  YYSYMBOL_MINEQUAL = 69,                  /* MINEQUAL  */
  YYSYMBOL_COLONEQUAL = 70,                /* COLONEQUAL  */
  YYSYMBOL_DOUBLESTAREQUAL = 71,           /* DOUBLESTAREQUAL  */
  YYSYMBOL_STAREQUAL = 72,                 /* STAREQUAL  */
  YYSYMBOL_DOUBLESLASHEQUAL = 73,          /* DOUBLESLASHEQUAL  */
  YYSYMBOL_SLASHEQUAL = 74,                /* SLASHEQUAL  */
  YYSYMBOL_ATEQUAL = 75,                   /* ATEQUAL  */
  YYSYMBOL_PERCENTEQUAL = 76,              /* PERCENTEQUAL  */
  YYSYMBOL_AMPEREQUAL = 77,                /* AMPEREQUAL  */
  YYSYMBOL_VBAREQUAL = 78,                 /* VBAREQUAL  */
  YYSYMBOL_CIRCUMFLEXEQUAL = 79,           /* CIRCUMFLEXEQUAL  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 80,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_LEFTSHIFTEQUAL = 81,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_STRING = 82,                    /* STRING  */
  YYSYMBOL_NAME = 83,                      /* NAME  */
  YYSYMBOL_NUMBER = 84,                    /* NUMBER  */
  YYSYMBOL_INDENT = 85,                    /* INDENT  */
  YYSYMBOL_DEDENT = 86,                    /* DEDENT  */
  YYSYMBOL_ARROW = 87,                     /* ARROW  */
  YYSYMBOL_NEWLINE = 88,                   /* NEWLINE  */
  YYSYMBOL_OR = 89,                        /* OR  */
  YYSYMBOL_TYPE_COMMENT = 90,              /* TYPE_COMMENT  */
  YYSYMBOL_SEMICOLON = 91,                 /* SEMICOLON  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_single_input = 93,              /* single_input  */
  YYSYMBOL_decorator = 94,                 /* decorator  */
  YYSYMBOL_decorators_fecho = 95,          /* decorators_fecho  */
  YYSYMBOL_decorators = 96,                /* decorators  */
  YYSYMBOL_decorated = 97,                 /* decorated  */
  YYSYMBOL_async_funcdef = 98,             /* async_funcdef  */
  YYSYMBOL_funcdef = 99,                   /* funcdef  */
  YYSYMBOL_parameters = 100,               /* parameters  */
  YYSYMBOL_comma_type_argument_fecho = 101, /* comma_type_argument_fecho  */
  YYSYMBOL_arguments = 102,                /* arguments  */
  YYSYMBOL_argument = 103,                 /* argument  */
  YYSYMBOL_kwargs = 104,                   /* kwargs  */
  YYSYMBOL_args = 105,                     /* args  */
  YYSYMBOL_kwonly_kwargs = 106,            /* kwonly_kwargs  */
  YYSYMBOL_args_kwonly_kwargs = 107,       /* args_kwonly_kwargs  */
  YYSYMBOL_poskeyword_args_kwonly_kwargs = 108, /* poskeyword_args_kwonly_kwargs  */
  YYSYMBOL_typedargslist_no_posonly = 109, /* typedargslist_no_posonly  */
  YYSYMBOL_typedarglist = 110,             /* typedarglist  */
  YYSYMBOL_tfpdef = 111,                   /* tfpdef  */
  YYSYMBOL_vararglist_no_posonly = 112,    /* vararglist_no_posonly  */
  YYSYMBOL_varargslist = 113,              /* varargslist  */
  YYSYMBOL_stmt = 114,                     /* stmt  */
  YYSYMBOL_semicolon_smallstmt_kleene = 115, /* semicolon_smallstmt_kleene  */
  YYSYMBOL_simple_stmt = 116,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 117,               /* small_stmt  */
  YYSYMBOL_eq_yieldexpr_or_teststr_kleene_plus = 118, /* eq_yieldexpr_or_teststr_kleene_plus  */
  YYSYMBOL_expr_stmt = 119,                /* expr_stmt  */
  YYSYMBOL_annassign = 120,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 121,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 122,                /* augassign  */
  YYSYMBOL_del_stmt = 123,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 124,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 125,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 126,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 127,            /* continue_stmt  */
  YYSYMBOL_return_stmt = 128,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 129,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 130,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 131,              /* import_stmt  */
  YYSYMBOL_import_name = 132,              /* import_name  */
  YYSYMBOL_dots_kleene = 133,              /* dots_kleene  */
  YYSYMBOL_dots_kleene_plus = 134,         /* dots_kleene_plus  */
  YYSYMBOL_import_from = 135,              /* import_from  */
  YYSYMBOL_import_as_name = 136,           /* import_as_name  */
  YYSYMBOL_dotted_as_name = 137,           /* dotted_as_name  */
  YYSYMBOL_comma_import = 138,             /* comma_import  */
  YYSYMBOL_import_as_names = 139,          /* import_as_names  */
  YYSYMBOL_comma_dotted = 140,             /* comma_dotted  */
  YYSYMBOL_dotted_as_names = 141,          /* dotted_as_names  */
  YYSYMBOL_dot_name_kleene = 142,          /* dot_name_kleene  */
  YYSYMBOL_dotted_name = 143,              /* dotted_name  */
  YYSYMBOL_comma_name_kleene = 144,        /* comma_name_kleene  */
  YYSYMBOL_global_stmt = 145,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 146,            /* nonlocal_stmt  */
  YYSYMBOL_assert_stmt = 147,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 148,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 149,               /* async_stmt  */
  YYSYMBOL_elif_stmt = 150,                /* elif_stmt  */
  YYSYMBOL_if_stmt = 151,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 152,               /* while_stmt  */
  YYSYMBOL_for_stmt = 153,                 /* for_stmt  */
  YYSYMBOL_expect_clause_suite = 154,      /* expect_clause_suite  */
  YYSYMBOL_try_stmt = 155,                 /* try_stmt  */
  YYSYMBOL_comma_with_item = 156,          /* comma_with_item  */
  YYSYMBOL_with_stmt = 157,                /* with_stmt  */
  YYSYMBOL_with_item = 158,                /* with_item  */
  YYSYMBOL_stmt_kleene_plus = 159,         /* stmt_kleene_plus  */
  YYSYMBOL_suite = 160,                    /* suite  */
  YYSYMBOL_namedexpr_test = 161,           /* namedexpr_test  */
  YYSYMBOL_test = 162,                     /* test  */
  YYSYMBOL_test_nocond = 163,              /* test_nocond  */
  YYSYMBOL_lambdef = 164,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 165,           /* lambdef_nocond  */
  YYSYMBOL_or_and_test_kleene = 166,       /* or_and_test_kleene  */
  YYSYMBOL_or_test = 167,                  /* or_test  */
  YYSYMBOL_and_not_test_kleene = 168,      /* and_not_test_kleene  */
  YYSYMBOL_and_test = 169,                 /* and_test  */
  YYSYMBOL_not_test = 170,                 /* not_test  */
  YYSYMBOL_comp_op_expr_kleene = 171,      /* comp_op_expr_kleene  */
  YYSYMBOL_comparison = 172,               /* comparison  */
  YYSYMBOL_comp_op = 173,                  /* comp_op  */
  YYSYMBOL_star_expr = 174,                /* star_expr  */
  YYSYMBOL_vbar_xor_kleene = 175,          /* vbar_xor_kleene  */
  YYSYMBOL_expr = 176,                     /* expr  */
  YYSYMBOL_circumflex_and_expr_kleene = 177, /* circumflex_and_expr_kleene  */
  YYSYMBOL_xor_expr = 178,                 /* xor_expr  */
  YYSYMBOL_amper_shift_kleene = 179,       /* amper_shift_kleene  */
  YYSYMBOL_and_expr = 180,                 /* and_expr  */
  YYSYMBOL_shifts_arith_expr = 181,        /* shifts_arith_expr  */
  YYSYMBOL_shift_expr = 182,               /* shift_expr  */
  YYSYMBOL_plus_minus_term_kleene = 183,   /* plus_minus_term_kleene  */
  YYSYMBOL_arith_expr = 184,               /* arith_expr  */
  YYSYMBOL_varias_coisas_factor_kleene = 185, /* varias_coisas_factor_kleene  */
  YYSYMBOL_term = 186,                     /* term  */
  YYSYMBOL_factor = 187,                   /* factor  */
  YYSYMBOL_power = 188,                    /* power  */
  YYSYMBOL_trailer_kleene = 189,           /* trailer_kleene  */
  YYSYMBOL_atom_expr = 190,                /* atom_expr  */
  YYSYMBOL_string_kleene_plus = 191,       /* string_kleene_plus  */
  YYSYMBOL_atom = 192,                     /* atom  */
  YYSYMBOL_namedexpr_test_or_star_expr = 193, /* namedexpr_test_or_star_expr  */
  YYSYMBOL_comma_e_o_de_cima_kleene = 194, /* comma_e_o_de_cima_kleene  */
  YYSYMBOL_testlist_comp = 195,            /* testlist_comp  */
  YYSYMBOL_trailer = 196,                  /* trailer  */
  YYSYMBOL_comma_subscript_kleene = 197,   /* comma_subscript_kleene  */
  YYSYMBOL_subscriptlist = 198,            /* subscriptlist  */
  YYSYMBOL_subscript = 199,                /* subscript  */
  YYSYMBOL_sliceop = 200,                  /* sliceop  */
  YYSYMBOL_comma_e_o_de_baixo_kleene = 201, /* comma_e_o_de_baixo_kleene  */
  YYSYMBOL_expr_or_star_expr = 202,        /* expr_or_star_expr  */
  YYSYMBOL_exprlist = 203,                 /* exprlist  */
  YYSYMBOL_comma_test_kleene = 204,        /* comma_test_kleene  */
  YYSYMBOL_testlist = 205,                 /* testlist  */
  YYSYMBOL_test_colon_test_or_doublestar_expr = 206, /* test_colon_test_or_doublestar_expr  */
  YYSYMBOL_comma_test_colon_test_or_doublestar_expr_kleene = 207, /* comma_test_colon_test_or_doublestar_expr_kleene  */
  YYSYMBOL_test_or_star_expr = 208,        /* test_or_star_expr  */
  YYSYMBOL_comma_test_or_star_expr_kleene = 209, /* comma_test_or_star_expr_kleene  */
  YYSYMBOL_dictorsetmaker = 210,           /* dictorsetmaker  */
  YYSYMBOL_classdef = 211,                 /* classdef  */
  YYSYMBOL_comma_argument_kleene = 212,    /* comma_argument_kleene  */
  YYSYMBOL_arglist = 213,                  /* arglist  */
  YYSYMBOL_comp_iter = 214,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 215,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 216,                 /* comp_for  */
  YYSYMBOL_comp_if = 217,                  /* comp_if  */
  YYSYMBOL_yield_expr = 218,               /* yield_expr  */
  YYSYMBOL_yield_arg = 219,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 220           /* func_body_suite  */
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
#define YYFINAL  163
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1978

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  386
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  612

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
       0,    27,    27,    28,    29,    47,    48,    49,    52,    53,
      56,    59,    60,    61,    64,    67,    68,    69,    70,    72,
      73,    76,    77,    78,    79,    80,    82,    84,    85,    87,
      88,    90,    91,    93,    94,    95,    96,    97,    99,   100,
     103,   104,   105,   106,   107,   108,   111,   112,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   125,   126,   151,
     152,   154,   155,   156,   157,   160,   161,   163,   164,   165,
     167,   168,   170,   171,   172,   173,   174,   175,   176,   177,
     180,   181,   182,   183,   185,   186,   187,   188,   189,   190,
     192,   193,   194,   196,   197,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   213,   215,
     217,   218,   219,   220,   221,   224,   227,   230,   231,   234,
     236,   237,   238,   241,   242,   244,   246,   247,   248,   249,
     250,   253,   254,   255,   256,   259,   260,   261,   262,   263,
     264,   267,   268,   271,   272,   275,   276,   277,   280,   281,
     283,   284,   285,   287,   289,   290,   291,   293,   295,   296,
     297,   299,   301,   303,   304,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   317,   318,   319,   322,   323,   324,
     326,   327,   329,   330,   332,   333,   334,   335,   338,   339,
     340,   341,   342,   343,   345,   346,   347,   348,   349,   351,
     352,   353,   355,   356,   358,   359,   365,   366,   368,   369,
     371,   372,   374,   375,   376,   378,   379,   381,   382,   384,
     387,   388,   389,   391,   393,   394,   395,   397,   399,   400,
     402,   403,   404,   406,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   419,   421,   422,   423,   425,   427,
     428,   429,   431,   433,   434,   435,   437,   439,   440,   441,
     442,   443,   445,   447,   448,   449,   450,   451,   453,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     467,   469,   470,   471,   472,   474,   475,   477,   478,   479,
     481,   482,   484,   485,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   502,   503,
     505,   506,   507,   509,   510,   511,   514,   515,   516,   517,
     519,   520,   521,   523,   524,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   536,   537,   539,   540,   541,   543,
     544,   546,   547,   549,   550,   551,   553,   554,   556,   557,
     559,   560,   561,   563,   564,   566,   567,   568,   570,   571,
     572,   573,   574,   575,   577,   578,   579,   581,   582,   583,
     585,   586,   596,   597,   599,   600,   602,   603,   605,   606,
     611,   612,   614,   615,   618,   619,   620
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
  "\"end of file\"", "error", "\"invalid token\"", "FALSE", "AWAIT",
  "ELSE", "IMPORT", "PASS", "NONE", "BREAK", "EXCEPT", "IN", "RAISE",
  "TRUE", "CLASS", "FINALLY", "IS", "RETURN", "AND", "CONTINUE", "FOR",
  "LAMBDA", "TRY", "AS", "DEF", "FROM", "NONLOCAL", "WHILE", "ASSERT",
  "DEL", "GLOBAL", "NOT", "WITH", "ASYNC", "ELIF", "IF", "YIELD",
  "EQEQUAL", "NOTEQUAL", "LEFTSHIFT", "RIGHTSHIFT", "LESSEQUAL",
  "GREATEREQUAL", "LESS", "GREATER", "TILDE", "PERCENT", "VBAR", "AMPER",
  "DOUBLESLASH", "SLASH", "DOUBLESTAR", "STAR", "MINUS", "PLUS",
  "CIRCUMFLEX", "EQUAL", "COMMA", "COLON", "LPAR", "RPAR", "LSQB", "RSQB",
  "LBRACE", "RBRACE", "AT", "DOT", "ELLIPSIS", "PLUSEQUAL", "MINEQUAL",
  "COLONEQUAL", "DOUBLESTAREQUAL", "STAREQUAL", "DOUBLESLASHEQUAL",
  "SLASHEQUAL", "ATEQUAL", "PERCENTEQUAL", "AMPEREQUAL", "VBAREQUAL",
  "CIRCUMFLEXEQUAL", "RIGHTSHIFTEQUAL", "LEFTSHIFTEQUAL", "STRING", "NAME",
  "NUMBER", "INDENT", "DEDENT", "ARROW", "NEWLINE", "OR", "TYPE_COMMENT",
  "SEMICOLON", "$accept", "single_input", "decorator", "decorators_fecho",
  "decorators", "decorated", "async_funcdef", "funcdef", "parameters",
  "comma_type_argument_fecho", "arguments", "argument", "kwargs", "args",
  "kwonly_kwargs", "args_kwonly_kwargs", "poskeyword_args_kwonly_kwargs",
  "typedargslist_no_posonly", "typedarglist", "tfpdef",
  "vararglist_no_posonly", "varargslist", "stmt",
  "semicolon_smallstmt_kleene", "simple_stmt", "small_stmt",
  "eq_yieldexpr_or_teststr_kleene_plus", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "dots_kleene", "dots_kleene_plus",
  "import_from", "import_as_name", "dotted_as_name", "comma_import",
  "import_as_names", "comma_dotted", "dotted_as_names", "dot_name_kleene",
  "dotted_name", "comma_name_kleene", "global_stmt", "nonlocal_stmt",
  "assert_stmt", "compound_stmt", "async_stmt", "elif_stmt", "if_stmt",
  "while_stmt", "for_stmt", "expect_clause_suite", "try_stmt",
  "comma_with_item", "with_stmt", "with_item", "stmt_kleene_plus", "suite",
  "namedexpr_test", "test", "test_nocond", "lambdef", "lambdef_nocond",
  "or_and_test_kleene", "or_test", "and_not_test_kleene", "and_test",
  "not_test", "comp_op_expr_kleene", "comparison", "comp_op", "star_expr",
  "vbar_xor_kleene", "expr", "circumflex_and_expr_kleene", "xor_expr",
  "amper_shift_kleene", "and_expr", "shifts_arith_expr", "shift_expr",
  "plus_minus_term_kleene", "arith_expr", "varias_coisas_factor_kleene",
  "term", "factor", "power", "trailer_kleene", "atom_expr",
  "string_kleene_plus", "atom", "namedexpr_test_or_star_expr",
  "comma_e_o_de_cima_kleene", "testlist_comp", "trailer",
  "comma_subscript_kleene", "subscriptlist", "subscript", "sliceop",
  "comma_e_o_de_baixo_kleene", "expr_or_star_expr", "exprlist",
  "comma_test_kleene", "testlist", "test_colon_test_or_doublestar_expr",
  "comma_test_colon_test_or_doublestar_expr_kleene", "test_or_star_expr",
  "comma_test_or_star_expr_kleene", "dictorsetmaker", "classdef",
  "comma_argument_kleene", "arglist", "comp_iter", "sync_comp_for",
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
     345,   346
};
#endif

#define YYPACT_NINF (-462)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-135)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     836,  -462,  1195,     3,  -462,  -462,  -462,  1774,  -462,    15,
    1563,  -462,  1847,   159,    87,    64,   238,   117,  1774,  1774,
    1847,   123,  1882,  1774,   287,  1774,  1490,  1894,  1894,  1894,
    1894,   460,   426,  1516,    57,     3,  -462,  -462,  -462,  -462,
    -462,   187,  -462,   178,    73,  -462,  -462,  -462,   173,    17,
    -462,   745,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,   162,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,   241,   196,   280,  -462,  -462,
     272,   243,   246,   286,   283,   264,   209,  -462,   261,   244,
     201,   291,  -462,  -462,   201,   271,   297,  -462,   335,   341,
     273,  -462,  -462,  -462,   311,   356,   288,   288,  1774,   312,
      27,   315,  -462,   315,  -462,  -462,   313,  -462,   316,   904,
     314,   369,   370,   199,    65,   321,   323,   319,   325,  -462,
     321,  -462,   326,   361,  -462,  -462,  -462,   332,  1774,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
     145,   331,   333,  -462,   334,  1894,  -462,   337,   146,   181,
     336,   338,    40,  -462,  -462,   374,  -462,  -462,  -462,  1443,
     182,   460,  -462,  1774,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  1589,  1589,  -462,
    1882,  1882,   318,  1882,   383,  -462,   371,   392,  -462,  -462,
    -462,  -462,  -462,  -462,   272,  1894,  1894,   357,  1894,   350,
    1894,   360,  1894,  1894,   302,  1894,  1894,   293,  1894,  1894,
    1894,  1894,  1894,   275,  1894,  -462,   122,  1636,   328,   201,
    -462,  1563,   352,   201,   329,   347,     3,   358,   343,  1774,
     904,   138,  1847,   359,  1774,   364,  -462,  -462,  1774,    25,
    -462,   114,   367,   375,  -462,  1774,  1774,   342,  -462,   404,
     156,    86,  -462,  -462,   412,    31,  -462,  -462,   345,   376,
     904,  1774,  1774,   376,  1774,   299,  1894,   904,  -462,  1847,
     411,  1563,   378,  -462,  -462,  -462,  -462,  -462,  -462,  1774,
    1662,   379,  -462,   380,  -462,  -462,   382,   288,  -462,  -462,
    -462,  -462,   972,  -462,  -462,   384,   388,  -462,  -462,  -462,
    -462,   443,  -462,  1882,  -462,  1882,  -462,  -462,  1894,  -462,
    -462,  1894,  -462,  1894,  -462,  1894,  -462,  -462,  1894,  1894,
    -462,  -462,  1894,  1894,  -462,  -462,  -462,  -462,  -462,  1894,
    1894,  1894,  1894,  1894,  -462,  -462,   393,   389,  1727,   394,
     391,   397,  -462,  -462,  -462,  1563,  -462,   368,  -462,     3,
    -462,  -462,  -462,   398,   395,  -462,  1847,   400,   386,  -462,
     402,   310,  -462,   288,  -462,   157,   105,  -462,  -462,  1375,
    1739,   274,  -462,   100,  -462,  -462,  -462,   401,   544,  1774,
     168,  -462,   387,   442,   415,  -462,  -462,   399,   464,  -462,
    -462,  -462,  1774,   612,  -462,   440,   466,  -462,  -462,  1563,
    -462,   337,  -462,  1662,  1563,   396,   430,  -462,  -462,   460,
    1774,   435,  1774,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,   288,   437,
    -462,  1774,   439,  -462,  1727,  -462,  1636,   438,  -462,  -462,
    -462,   904,   441,  -462,   680,  -462,   161,  -462,  -462,   288,
    -462,    43,  -462,  -462,  -462,  -462,  1123,   904,    33,   444,
    1774,   445,    29,  -462,   133,  1040,  -462,  -462,   446,  -462,
     387,  -462,   451,   417,   387,   449,  -462,   457,  -462,   904,
    -462,  1774,   191,  1882,  -462,  -462,  -462,   413,  -462,  -462,
    -462,  1774,  -462,  -462,   288,  -462,  -462,   439,  -462,  -462,
    1636,  -462,   904,   904,   512,   104,  -462,  -462,  -462,  -462,
    -462,  -462,   447,   904,   904,   495,   904,   463,   278,  1375,
     434,  -462,   748,   465,  -462,  -462,  -462,   387,   904,  -462,
     468,   470,  1774,   213,  -462,  -462,  -462,  -462,  -462,  -462,
     519,   473,    52,   475,  -462,   520,   453,  -462,    44,   480,
    1207,   456,  1040,  -462,  -462,  -462,  -462,   904,   904,   487,
    1821,  -462,  -462,  -462,   488,   904,   904,   491,  -462,   161,
    -462,   103,  -462,  1375,  -462,  -462,  -462,   904,   161,   213,
    -462,  -462,   904,  -462,  -462,   904,  -462,   161,  -462,  1291,
    -462,   496,  -462,  -462,  -462,  -462,  -462,  1821,   517,   497,
    1821,  -462
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   307,     0,     0,   109,   305,   115,   122,   306,     0,
     118,   116,     0,     0,     0,     0,   130,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   380,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   293,   301,   302,
       2,     0,     9,    10,     0,   172,   170,     3,    69,    88,
      72,     0,    73,    74,    75,   110,   111,   112,   114,   113,
      76,   123,   124,    77,    78,    79,     0,   173,   165,   166,
     167,   168,   169,   353,   214,   213,   222,   226,   229,   354,
     232,   247,   251,   255,   261,   267,   279,   284,   286,   303,
     289,   357,   171,   119,   289,   156,   152,   125,   144,   121,
       0,   117,   340,   339,   338,     0,     0,    31,     0,    58,
      41,    25,    39,    25,    60,    59,    28,    64,     0,     0,
       0,   128,   129,     0,     0,   160,     0,   211,   164,   108,
     160,   228,   201,   204,   174,   176,   175,     0,     0,   383,
     381,   283,   244,   282,   281,    83,    82,   296,   308,   309,
     312,     0,     0,   298,     0,     0,   300,   353,   352,   357,
       0,     0,     0,     1,     8,     0,    13,    12,    11,     0,
       0,     0,    89,     0,    95,    96,   106,    97,   107,    99,
      98,   100,   101,   102,   103,   105,   104,     0,     0,     4,
       0,     0,   223,     0,   227,   240,   242,     0,   236,   239,
     238,   237,   234,   235,   233,     0,     0,   248,     0,   252,
       0,   256,     0,     0,   262,     0,     0,   268,     0,     0,
       0,     0,     0,   280,     0,   292,     0,     0,     0,   291,
     288,     0,    94,   290,     0,   157,     0,   153,     0,     0,
       0,     0,     0,   342,     0,     0,    32,   218,     0,    42,
      40,     0,    26,    33,    38,     0,     0,     0,   208,     0,
       0,     0,   126,   127,     0,     0,   131,   132,     0,   162,
       0,     0,     0,   161,     0,     0,     0,     0,   382,     0,
       0,     0,   315,   377,   313,   295,   294,   297,   349,     0,
       0,   360,   358,   363,   361,   299,     0,     0,     5,    14,
      68,    70,     0,    81,    80,    92,   345,    85,    84,    87,
      86,     0,   221,     0,   225,     0,   243,   241,     0,   231,
     246,     0,   250,     0,   254,     0,   259,   260,     0,     0,
     266,   265,     0,     0,   277,   278,   276,   274,   275,     0,
       0,     0,     0,     0,   285,   317,   369,     0,   333,   325,
       0,   322,   319,   287,   356,    93,   155,     0,   151,     0,
     143,   120,   366,     0,     0,   337,   341,     0,    29,    57,
      63,    43,    44,     0,    24,     0,    34,    27,   217,     0,
       0,   194,    19,    41,    47,    46,    56,     0,     0,     0,
       0,   138,     0,   142,   147,   139,   159,     0,   182,   210,
     163,   200,     0,     0,   205,   179,     0,   376,   311,   314,
     348,     0,   351,   359,   362,     0,     0,    71,    67,     0,
       0,   347,     0,   220,   224,   230,   245,   249,   253,   257,
     258,   264,   263,   272,   273,   271,   269,   270,     0,   370,
     316,   335,   331,   332,   330,   318,     0,   324,   355,   154,
     150,     0,     0,   336,     0,    30,    62,    45,    23,     0,
      22,    35,    36,   207,    65,    66,     0,     0,     0,     0,
     190,     0,    42,    20,     0,     0,   384,    15,     0,   135,
       0,   136,     0,     0,     0,   149,   158,     0,   199,     0,
     202,     0,   180,     0,   310,   350,     6,     0,    91,    90,
     344,   346,   212,   368,   371,   334,   329,   327,   328,   321,
     323,   365,     0,     0,   184,    41,    61,    21,    37,   209,
     206,   193,     0,     0,     0,   189,     0,    48,    43,     0,
       0,    17,     0,     0,   140,   141,   146,   148,     0,   203,
       0,     0,     0,   374,     7,   343,   367,   326,   320,   364,
     186,     0,    42,     0,   192,   196,     0,   195,    53,    49,
       0,     0,     0,    16,   137,   145,   183,     0,     0,     0,
       0,   375,   372,   373,     0,     0,     0,     0,   188,     0,
      54,    50,   386,     0,    18,   178,   181,     0,     0,   378,
     216,   215,     0,   185,   191,     0,    55,     0,    51,     0,
     177,     0,   379,   187,   197,    52,   385,     0,     0,     0,
       0,   219
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -462,  -462,   515,  -462,  -462,  -462,  -462,    -1,  -462,   454,
     -11,  -184,  -324,  -462,  -462,   -12,   -10,  -398,  -462,   258,
     108,   -29,  -448,  -462,     0,  -150,  -462,  -462,  -462,     1,
    -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,  -462,
    -462,  -462,  -462,  -462,  -412,   -21,  -462,  -337,  -462,  -462,
    -462,    13,   436,  -462,  -462,  -462,   568,  -462,  -462,  -462,
    -462,   547,  -462,  -462,  -462,   555,  -253,  -461,  -232,    -8,
      -3,  -311,  -462,  -462,  -462,  -185,  -462,  -163,   -13,  -462,
    -462,   377,    14,  -462,    21,  -462,  -162,  -462,  -146,  -462,
    -156,  -462,  -154,  -462,  -165,    10,  -462,   490,  -462,  -462,
     580,  -256,  -462,   552,  -144,  -462,  -462,  -377,  -378,  -462,
    -218,    -7,  -462,  -114,  -255,  -462,   -22,   427,  -462,   543,
    -462,  -159,     2,   308,   -58,  -462,   -25,  -462,  -439
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    41,    42,    43,    44,    45,   166,    46,   261,   252,
     515,   111,   112,   113,   254,   384,   385,   386,   387,   116,
     117,   118,   463,   170,   258,    48,    49,    50,   187,    51,
     188,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,   123,   124,    62,   394,    96,   485,   395,   237,    97,
     235,    98,   269,    63,    64,    65,   465,    67,   492,    68,
      69,    70,   381,    71,   275,    72,   132,   466,   259,   148,
      73,   589,    74,   590,   192,    75,   194,    76,    77,   204,
      78,   205,    79,   207,    80,   209,    81,   211,    82,   214,
      83,   217,    84,   223,    85,    86,    87,   229,    88,    89,
      90,   150,   282,   151,   230,   447,   350,   351,   443,   243,
     104,   105,   421,   307,   158,   291,    91,   232,   160,    92,
     439,   347,   571,   283,   572,   573,    93,   140,   477
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,   114,   110,   115,    99,   311,   146,   152,   362,   131,
     126,   101,   159,   129,   161,   127,   128,   137,   520,   300,
     133,   401,   127,   134,   365,   408,   102,   139,   312,   127,
     127,   157,   145,   103,   102,   412,   531,   141,   398,   143,
     144,   103,   346,   167,   320,   405,   149,   149,   162,   142,
     330,   331,   462,   481,   324,   482,   522,   346,   326,   327,
       1,     2,   322,   238,   506,     5,   508,   374,   560,   509,
       8,   265,   536,   171,   309,   370,   106,   107,    13,   527,
     106,   107,   364,   391,   249,   353,    95,     9,    22,   353,
     392,   523,   284,   563,   106,   106,   107,    15,   100,   297,
     292,   294,    27,   106,   107,   247,   165,   172,   155,    28,
      29,    30,   520,   346,   393,   371,    32,   250,    33,   528,
      34,   156,   599,   584,    36,   565,   109,   109,   298,   547,
     367,   266,   267,   548,   579,   278,   264,   518,   416,    37,
      38,    39,   371,   533,   388,   119,   304,   120,   453,   488,
     423,   520,   418,   494,   106,   107,   106,   472,   495,   426,
     580,   552,   308,   310,   299,   279,   279,   431,   432,   428,
     305,   490,   303,   389,   429,   430,   288,   427,   280,   280,
     314,   596,   345,   598,   306,   306,   109,   163,   109,   458,
     250,   460,   460,   597,   250,   461,   541,   109,   363,   605,
     125,   279,   281,   290,   373,   109,   130,   106,   107,   354,
     106,   107,   106,   107,   280,   358,   382,   108,   529,   511,
     479,   109,   514,   530,   349,   542,   319,   480,   334,   335,
     336,   337,   338,   279,   344,   521,   361,   372,   231,   109,
     109,   306,   109,    35,   109,   369,   280,   459,   570,   383,
     189,   393,   377,   378,   503,   218,   102,   539,   219,   220,
     226,   221,   227,   103,   169,   262,   263,   228,   399,   400,
     301,   133,   406,   302,   222,   517,   190,   517,   127,   469,
     549,   550,    95,   195,   470,   191,   410,   411,   196,   471,
     206,   554,   555,   102,   557,   149,   608,   404,   193,   611,
     103,   208,   424,   197,   121,   122,   566,    12,   543,   198,
     199,    15,   224,   200,   201,   202,   203,   215,   216,    23,
     546,   339,   212,   213,   340,   341,   225,   342,   559,   106,
     107,   240,   241,   448,   210,   585,   586,   234,   450,   425,
     343,   328,   329,   593,   594,   442,   332,   333,   231,   433,
     434,   435,   436,   437,   236,   600,   402,   403,   238,   457,
     603,   106,   107,   604,   245,   246,   239,   244,   242,   255,
     248,   109,   251,   260,   256,  -133,  -134,   468,   268,   464,
     102,   270,   272,   274,   276,   591,   478,   103,   476,   271,
     277,   285,   448,   286,   499,   289,   287,   296,    15,   133,
     295,   315,   316,   317,   321,   323,   127,   313,   325,   355,
     411,   352,   356,   357,   380,   359,   366,   500,   390,   502,
     498,   368,   591,   149,   375,   591,   360,   379,   396,     1,
       2,   279,   376,   397,     5,   409,   413,   414,   505,     8,
     419,   507,   415,   349,   114,   420,   115,    13,   422,   440,
     438,   449,   444,   445,   446,   452,   451,    22,   454,   456,
     372,   473,    26,     1,     2,   483,   464,   525,     5,   487,
     393,    27,   484,     8,   491,   476,   455,   493,    28,    29,
      30,    13,   486,   540,   496,    32,   147,    33,   127,    34,
     497,    22,   501,    36,   504,   510,    26,   441,   545,   512,
     535,   544,   524,   526,   532,    27,   537,   349,    37,    38,
      39,   534,    28,    29,    30,   538,   457,   551,   556,    32,
     558,    33,   561,    34,   574,   564,   567,    36,   568,   464,
     553,   575,   476,   576,   569,   577,   578,   581,   609,   127,
     372,   583,    37,    38,    39,   587,   592,     1,     2,   595,
       3,     4,     5,     6,   607,   610,     7,     8,   164,   601,
     464,    10,   476,    11,   516,    13,   273,   253,    66,    16,
      17,   135,    19,    20,    21,    22,   114,   110,   115,   136,
      26,   318,    94,   464,   233,   154,   293,   168,   407,    27,
       0,   602,     0,     0,     0,     0,    28,    29,    30,   464,
      31,     0,     0,    32,     0,    33,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     1,     2,     0,     3,     4,
       5,     6,     0,     0,     7,     8,    37,    38,    39,    10,
       0,    11,   474,    13,   475,     0,     0,    16,    17,     0,
      19,    20,    21,    22,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,    31,     0,
       0,    32,     0,    33,     0,    34,     0,     0,     0,    36,
       0,     0,     0,     1,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,    37,    38,    39,    10,     0,    11,
     257,    13,   489,     0,     0,    16,    17,     0,    19,    20,
      21,    22,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,    31,     0,     0,    32,
       0,    33,     0,    34,     0,     0,     0,    36,     0,     0,
       0,     1,     2,     0,     3,     4,     5,     6,     0,     0,
       7,     8,    37,    38,    39,    10,     0,    11,   257,    13,
     513,     0,     0,    16,    17,     0,    19,    20,    21,    22,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
      28,    29,    30,   173,    31,     0,     0,    32,     0,    33,
       0,    34,     0,   174,   175,    36,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,     0,     0,     0,
      37,    38,    39,     0,     0,     0,   474,     0,   562,     1,
       2,     0,     3,     4,     5,     6,     0,     0,     7,     8,
       9,     0,     0,    10,     0,    11,    12,    13,    14,     0,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,    28,    29,
      30,     0,    31,     0,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,     0,     0,     1,     2,     0,
       3,     4,     5,     6,     0,     0,     7,     8,    37,    38,
      39,    10,     0,    11,    40,    13,     0,     0,     0,    16,
      17,     0,    19,    20,    21,    22,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,    28,    29,    30,     0,
      31,     0,     0,    32,     0,    33,     0,    34,     0,     0,
       0,    36,     0,     0,     0,     1,     2,     0,     3,     4,
       5,     6,     0,     0,     7,     8,    37,    38,    39,    10,
       0,    11,   257,    13,     0,     0,     0,    16,    17,     0,
      19,    20,    21,    22,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,    28,    29,    30,     0,    31,     0,
       0,    32,     0,    33,     0,    34,     0,     0,     0,    36,
       0,     0,     0,     1,     2,     0,     3,     4,     5,     6,
       0,     0,     7,     8,    37,    38,    39,    10,     0,    11,
     417,    13,     0,     0,     0,    16,    17,     0,    19,    20,
      21,    22,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,    28,    29,    30,     0,    31,     0,     0,    32,
       0,    33,     0,    34,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,     1,     2,   474,     3,
       4,     5,     6,     0,     0,     7,     8,     9,     0,     0,
      10,     0,    11,    12,    13,    14,     0,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,    31,
       0,     0,    32,     0,    33,     0,    34,     0,    35,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     5,     0,    37,    38,    39,     8,   519,
       1,     2,     0,     3,     4,     5,     6,     0,     0,     7,
       8,     9,     0,     0,    10,     0,    11,    12,    13,    14,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    32,     0,    33,     0,    34,    28,
      29,    30,    36,    31,     0,     0,    32,     0,    33,     0,
      34,     0,    35,     0,    36,     0,     0,    37,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,     0,   582,     1,     2,     0,     3,     4,     5,
       6,     0,     0,     7,     8,     9,     0,     0,    10,     0,
      11,    12,    13,    14,     0,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    28,    29,    30,     0,    31,     0,     0,
      32,     0,    33,     0,    34,     0,    35,     0,    36,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,    39,     0,   606,     1,     2,
       0,     3,     4,     5,     6,     0,     0,     7,     8,     9,
       0,     0,    10,     0,    11,    12,    13,    14,     0,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,    31,     0,     0,    32,     0,    33,     0,    34,     0,
      35,     0,    36,     0,     0,     0,     1,     2,     0,     3,
       4,     5,     6,     0,     0,     7,     8,    37,    38,    39,
      10,     0,    11,     0,    13,     0,     0,     0,    16,    17,
       0,    19,    20,    21,    22,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     1,     2,    28,    29,    30,     5,    31,
       0,     0,    32,     8,    33,     0,    34,     0,     0,     0,
      36,    13,     0,     0,     0,   138,     0,     0,     0,     1,
       2,    22,     0,     0,     5,    37,    38,    39,     0,     8,
       0,     0,     0,     0,     0,    27,     0,    13,     0,     0,
       0,     0,    28,    29,    30,     0,     0,    22,     0,    32,
       0,    33,     0,    34,     0,     0,     0,    36,     0,     0,
       0,    27,     0,     0,     0,     0,     1,     2,    28,    29,
      30,     5,    37,    38,    39,    32,     8,    33,   153,    34,
       0,     0,     0,    36,    13,     0,     0,     0,     0,     0,
       0,     0,     1,     2,    22,     0,     0,     5,    37,    38,
      39,     0,     8,     0,     0,     0,     0,     0,    27,     0,
      13,     0,     0,     0,     0,    28,    29,    30,     0,     0,
      22,     0,    32,     0,    33,    26,    34,     0,     0,     0,
      36,     0,     0,     0,    27,     0,     0,     0,     0,     1,
       2,     0,    29,    30,     5,    37,    38,    39,    32,     8,
      33,     0,    34,     0,     0,     0,    36,    13,     0,     0,
       0,     0,     0,     0,     0,     1,     2,    22,     0,     0,
       5,    37,    38,    39,     0,     8,     0,     0,     0,     0,
       0,    27,     0,    13,     0,     0,     0,     0,     0,    29,
      30,     0,     0,    22,   348,    32,     0,    33,     0,    34,
       0,     0,     0,    36,     0,     0,     0,    27,     0,     0,
       0,     0,     0,   155,     0,    29,    30,     0,    37,    38,
      39,    32,     0,    33,     0,    34,     0,     0,     0,    36,
       1,     2,     0,     0,     0,     5,     0,     0,     0,     0,
       8,     0,     1,     2,    37,    38,    39,     5,    13,     0,
       0,     0,     8,     0,     0,     0,     0,     0,    22,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,    27,     0,     0,     0,     0,     1,     2,     0,
      29,    30,     5,     0,    27,   441,    32,     8,    33,     0,
      34,     0,    29,    30,    36,    13,     0,   467,    32,     0,
      33,     0,    34,     0,     0,    22,    36,     0,     0,    37,
      38,    39,     0,     0,     0,     0,     0,     0,     0,    27,
       0,    37,    38,    39,     1,     2,     0,    29,    30,     5,
       0,     0,     0,    32,     8,    33,     0,    34,     0,     0,
       0,    36,   588,     0,     0,     0,     0,     0,     0,     0,
       1,     2,    22,     0,     0,     5,    37,    38,    39,     0,
       8,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,    29,    30,     0,     0,     0,     0,
      32,     0,    33,     0,    34,     1,     2,     0,    36,     0,
       5,     0,    27,     0,     0,     8,     0,     1,     2,    28,
      29,    30,     5,    37,    38,    39,    32,     8,    33,     0,
      34,     0,     0,    22,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,     0,    37,
      38,    39,     0,     0,     0,    29,    30,     0,     0,    27,
       0,    32,     0,    33,     0,    34,     0,    29,    30,    36,
       0,     0,     0,    32,     0,    33,     0,    34,     0,     0,
       0,    36,     0,     0,    37,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39
};

static const yytype_int16 yycheck[] =
{
       0,    13,    13,    13,     7,   190,    31,    32,   240,    22,
      18,    10,    34,    20,    35,    18,    19,    25,   466,   169,
      23,   274,    25,    24,   242,   281,    12,    26,   191,    32,
      33,    34,    31,    12,    20,   290,   475,    27,   270,    29,
      30,    20,   226,    44,   206,   277,    32,    33,    35,    28,
     215,   216,   376,   390,   210,   392,    23,   241,   212,   213,
       3,     4,   208,    23,   442,     8,   444,   251,   529,   446,
      13,     6,   484,    56,   188,    50,    51,    52,    21,    50,
      51,    52,   241,    52,    57,   229,    83,    14,    31,   233,
      59,    58,   150,   532,    51,    51,    52,    24,    83,    59,
     158,   159,    45,    51,    52,   108,    33,    90,    51,    52,
      53,    54,   560,   297,    83,    90,    59,    90,    61,    90,
      63,    64,   583,   562,    67,   537,    83,    83,    88,   507,
     244,    66,    67,   510,    90,   138,   123,   461,   297,    82,
      83,    84,    90,   480,    58,    58,   171,    83,   366,   402,
     313,   599,   302,   409,    51,    52,    51,    57,   413,   321,
     558,    57,   187,   188,   165,    20,    20,   332,   333,   325,
     173,   403,   171,    87,   328,   329,   155,   323,    33,    33,
     193,   579,    60,   581,   187,   188,    83,     0,    83,   373,
      90,   375,   376,    90,    90,    90,     5,    83,    60,   597,
      83,    20,    57,    57,    90,    83,    83,    51,    52,   231,
      51,    52,    51,    52,    33,   236,    60,    58,    85,   451,
      52,    83,   454,    90,   227,    34,   205,    59,   218,   219,
     220,   221,   222,    20,   224,   467,   239,   249,    57,    83,
      83,   244,    83,    65,    83,   248,    33,    90,    35,   260,
      88,    83,   255,   256,   438,    46,   242,   489,    49,    50,
      59,    52,    61,   242,    91,    66,    67,    66,   271,   272,
      88,   274,   279,    91,    65,   459,    35,   461,   281,     5,
     512,   513,    83,    11,    10,    89,   289,   290,    16,    15,
      47,   523,   524,   279,   526,   281,   607,   276,    18,   610,
     279,    55,   315,    31,    66,    67,   538,    20,   493,    37,
      38,    24,    51,    41,    42,    43,    44,    53,    54,    32,
     504,    46,    39,    40,    49,    50,    82,    52,    50,    51,
      52,    58,    59,   355,    48,   567,   568,    66,   359,   318,
      65,    39,    40,   575,   576,   348,    53,    54,    57,   339,
     340,   341,   342,   343,    57,   587,    57,    58,    23,   371,
     592,    51,    52,   595,   106,   107,    25,    11,    57,    56,
      58,    83,    57,    59,    58,     6,     6,   380,    57,   379,
     366,    58,    57,    57,    23,   570,   389,   366,   388,    70,
      58,    60,   414,    60,   419,    58,    62,    59,    24,   402,
      64,    18,    31,    11,    47,    55,   409,    89,    48,    57,
     413,    83,    83,    66,    10,    57,    57,   420,     6,   422,
     419,    57,   607,   409,    57,   610,    83,    85,    83,     3,
       4,    20,    57,    57,     8,    57,    57,    57,   441,    13,
      56,   444,    60,   446,   456,    57,   456,    21,     5,    60,
      57,    83,    58,    62,    57,    60,    58,    31,    58,    57,
     472,    60,    36,     3,     4,    23,   466,   470,     8,     5,
      83,    45,    57,    13,    34,   475,    90,    11,    52,    53,
      54,    21,    83,   491,    88,    59,    60,    61,   491,    63,
      60,    31,    57,    67,    57,    57,    36,    58,   501,    58,
      83,    88,    58,    58,    58,    45,    57,   510,    82,    83,
      84,    60,    52,    53,    54,    58,   528,     5,    23,    59,
      57,    61,    88,    63,     5,    60,    58,    67,    58,   529,
      83,    58,   532,    58,   542,    15,    83,    57,    21,   542,
     552,    85,    82,    83,    84,    58,    58,     3,     4,    58,
       6,     7,     8,     9,    58,    58,    12,    13,    43,   588,
     560,    17,   562,    19,   456,    21,   130,   113,     0,    25,
      26,    24,    28,    29,    30,    31,   588,   588,   588,    24,
      36,   204,     2,   583,    94,    33,   159,    44,   280,    45,
      -1,   589,    -1,    -1,    -1,    -1,    52,    53,    54,   599,
      56,    -1,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    82,    83,    84,    17,
      -1,    19,    88,    21,    90,    -1,    -1,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    56,    -1,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    82,    83,    84,    17,    -1,    19,
      88,    21,    90,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    -1,    56,    -1,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,     3,     4,    -1,     6,     7,     8,     9,    -1,    -1,
      12,    13,    82,    83,    84,    17,    -1,    19,    88,    21,
      90,    -1,    -1,    25,    26,    -1,    28,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    58,    56,    -1,    -1,    59,    -1,    61,
      -1,    63,    -1,    68,    69,    67,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    -1,    -1,    -1,
      82,    83,    84,    -1,    -1,    -1,    88,    -1,    90,     3,
       4,    -1,     6,     7,     8,     9,    -1,    -1,    12,    13,
      14,    -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    56,    -1,    -1,    59,    -1,    61,    -1,    63,
      -1,    65,    -1,    67,    -1,    -1,    -1,     3,     4,    -1,
       6,     7,     8,     9,    -1,    -1,    12,    13,    82,    83,
      84,    17,    -1,    19,    88,    21,    -1,    -1,    -1,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,
      56,    -1,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,     3,     4,    -1,     6,     7,
       8,     9,    -1,    -1,    12,    13,    82,    83,    84,    17,
      -1,    19,    88,    21,    -1,    -1,    -1,    25,    26,    -1,
      28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    56,    -1,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    67,
      -1,    -1,    -1,     3,     4,    -1,     6,     7,     8,     9,
      -1,    -1,    12,    13,    82,    83,    84,    17,    -1,    19,
      88,    21,    -1,    -1,    -1,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    -1,    56,    -1,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    -1,     3,     4,    88,     6,
       7,     8,     9,    -1,    -1,    12,    13,    14,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,    56,
      -1,    -1,    59,    -1,    61,    -1,    63,    -1,    65,    -1,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,     8,    -1,    82,    83,    84,    13,    86,
       3,     4,    -1,     6,     7,     8,     9,    -1,    -1,    12,
      13,    14,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    59,    -1,    61,    -1,    63,    52,
      53,    54,    67,    56,    -1,    -1,    59,    -1,    61,    -1,
      63,    -1,    65,    -1,    67,    -1,    -1,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    -1,    86,     3,     4,    -1,     6,     7,     8,
       9,    -1,    -1,    12,    13,    14,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    -1,    56,    -1,    -1,
      59,    -1,    61,    -1,    63,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    -1,    86,     3,     4,
      -1,     6,     7,     8,     9,    -1,    -1,    12,    13,    14,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      -1,    56,    -1,    -1,    59,    -1,    61,    -1,    63,    -1,
      65,    -1,    67,    -1,    -1,    -1,     3,     4,    -1,     6,
       7,     8,     9,    -1,    -1,    12,    13,    82,    83,    84,
      17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,     3,     4,    52,    53,    54,     8,    56,
      -1,    -1,    59,    13,    61,    -1,    63,    -1,    -1,    -1,
      67,    21,    -1,    -1,    -1,    25,    -1,    -1,    -1,     3,
       4,    31,    -1,    -1,     8,    82,    83,    84,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    21,    -1,    -1,
      -1,    -1,    52,    53,    54,    -1,    -1,    31,    -1,    59,
      -1,    61,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    -1,     3,     4,    52,    53,
      54,     8,    82,    83,    84,    59,    13,    61,    62,    63,
      -1,    -1,    -1,    67,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    31,    -1,    -1,     8,    82,    83,
      84,    -1,    13,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      21,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,    -1,
      31,    -1,    59,    -1,    61,    36,    63,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,     3,
       4,    -1,    53,    54,     8,    82,    83,    84,    59,    13,
      61,    -1,    63,    -1,    -1,    -1,    67,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    31,    -1,    -1,
       8,    82,    83,    84,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    21,    -1,    -1,    -1,    -1,    -1,    53,
      54,    -1,    -1,    31,    58,    59,    -1,    61,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    53,    54,    -1,    82,    83,
      84,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    67,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      13,    -1,     3,     4,    82,    83,    84,     8,    21,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    45,    -1,    -1,    -1,    -1,     3,     4,    -1,
      53,    54,     8,    -1,    45,    58,    59,    13,    61,    -1,
      63,    -1,    53,    54,    67,    21,    -1,    58,    59,    -1,
      61,    -1,    63,    -1,    -1,    31,    67,    -1,    -1,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    82,    83,    84,     3,     4,    -1,    53,    54,     8,
      -1,    -1,    -1,    59,    13,    61,    -1,    63,    -1,    -1,
      -1,    67,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    31,    -1,    -1,     8,    82,    83,    84,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      59,    -1,    61,    -1,    63,     3,     4,    -1,    67,    -1,
       8,    -1,    45,    -1,    -1,    13,    -1,     3,     4,    52,
      53,    54,     8,    82,    83,    84,    59,    13,    61,    -1,
      63,    -1,    -1,    31,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    82,
      83,    84,    -1,    -1,    -1,    53,    54,    -1,    -1,    45,
      -1,    59,    -1,    61,    -1,    63,    -1,    53,    54,    67,
      -1,    -1,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,     7,     8,     9,    12,    13,    14,
      17,    19,    20,    21,    22,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    35,    36,    45,    52,    53,
      54,    56,    59,    61,    63,    65,    67,    82,    83,    84,
      88,    93,    94,    95,    96,    97,    99,   116,   117,   118,
     119,   121,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   135,   145,   146,   147,   148,   149,   151,   152,
     153,   155,   157,   162,   164,   167,   169,   170,   172,   174,
     176,   178,   180,   182,   184,   186,   187,   188,   190,   191,
     192,   208,   211,   218,   192,    83,   137,   141,   143,   162,
      83,   121,   174,   176,   202,   203,    51,    52,    58,    83,
     102,   103,   104,   105,   107,   108,   111,   112,   113,    58,
      83,    66,    67,   133,   134,    83,   161,   162,   162,   203,
      83,   170,   158,   162,    99,   153,   157,   161,    25,   121,
     219,   187,   176,   187,   187,   121,   218,    60,   161,   174,
     193,   195,   218,    62,   195,    51,    64,   162,   206,   208,
     210,   137,   143,     0,    94,    33,    98,    99,   211,    91,
     115,    56,    90,    58,    68,    69,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,   120,   122,    88,
      35,    89,   166,    18,   168,    11,    16,    31,    37,    38,
      41,    42,    43,    44,   171,   173,    47,   175,    55,   177,
      48,   179,    39,    40,   181,    53,    54,   183,    46,    49,
      50,    52,    65,   185,    51,    82,    59,    61,    66,   189,
     196,    57,   209,   189,    66,   142,    57,   140,    23,    25,
      58,    59,    57,   201,    11,   111,   111,   162,    58,    57,
      90,    57,   101,   101,   106,    56,    58,    88,   116,   160,
      59,   100,    66,    67,   143,     6,    66,    67,    57,   144,
      58,    70,    57,   144,    57,   156,    23,    58,   162,    20,
      33,    57,   194,   215,   216,    60,    60,    62,   176,    58,
      57,   207,   216,   209,   216,    64,    59,    59,    88,    99,
     117,    88,    91,   121,   218,   162,   162,   205,   218,   205,
     218,   167,   169,    89,   170,    18,    31,    11,   173,   176,
     178,    47,   180,    55,   182,    48,   184,   184,    39,    40,
     186,   186,    53,    54,   187,   187,   187,   187,   187,    46,
      49,    50,    52,    65,   187,    60,   103,   213,    58,   162,
     198,   199,    83,   196,   208,    57,    83,    66,   137,    57,
      83,   162,   160,    60,   213,   202,    57,   205,    57,   162,
      50,    90,   107,    90,   103,    57,    57,   162,   162,    85,
      10,   154,    60,   102,   107,   108,   109,   110,    58,    87,
       6,    52,    59,    83,   136,   139,    83,    57,   160,   162,
     162,   158,    57,    58,   176,   160,   203,   215,   193,    57,
     162,   162,   206,    57,    57,    60,   213,    88,   117,    56,
      57,   204,     5,   169,   170,   176,   178,   180,   182,   184,
     184,   186,   186,   187,   187,   187,   187,   187,    57,   212,
      60,    58,   162,   200,    58,    62,    57,   197,   208,    83,
     137,    58,    60,   202,    58,    90,    57,   107,   103,    90,
     103,    90,   104,   114,   116,   148,   159,    58,   162,     5,
      10,    15,    57,    60,    88,    90,   116,   220,   162,    52,
      59,   139,   139,    23,    57,   138,    83,     5,   158,    90,
     160,    34,   150,    11,   193,   206,    88,    60,   121,   218,
     162,    57,   162,   103,    57,   162,   200,   162,   200,   199,
      57,   160,    58,    90,   160,   102,   112,   103,   104,    86,
     114,   160,    23,    58,    58,   162,    58,    50,    90,    85,
      90,   220,    58,   139,    60,    83,   136,    57,    58,   160,
     161,     5,    34,   167,    88,   162,   103,   200,   199,   160,
     160,     5,    57,    83,   160,   160,    23,   160,    57,    50,
     159,    88,    90,   220,    60,   136,   160,    58,    58,   161,
      35,   214,   216,   217,     5,    58,    58,    15,    83,    90,
     109,    57,    86,    85,   220,   160,   160,    58,    21,   163,
     165,   167,    58,   160,   160,    58,   109,    90,   109,   159,
     160,   113,   214,   160,   160,   109,    86,    58,   163,    21,
      58,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    94,    94,    94,    95,    95,
      96,    97,    97,    97,    98,    99,    99,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   124,
     125,   125,   125,   125,   125,   126,   127,   128,   128,   129,
     130,   130,   130,   131,   131,   132,   133,   133,   133,   133,
     133,   134,   134,   134,   134,   135,   135,   135,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     140,   140,   140,   141,   142,   142,   142,   143,   144,   144,
     144,   145,   146,   147,   147,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   149,   150,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   154,   155,   155,   155,   155,   155,   156,
     156,   156,   157,   157,   158,   158,   159,   159,   160,   160,
     161,   161,   162,   162,   162,   163,   163,   164,   164,   165,
     166,   166,   166,   167,   168,   168,   168,   169,   170,   170,
     171,   171,   171,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   174,   175,   175,   175,   176,   177,
     177,   177,   178,   179,   179,   179,   180,   181,   181,   181,
     181,   181,   182,   183,   183,   183,   183,   183,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     186,   187,   187,   187,   187,   188,   188,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   193,   193,
     194,   194,   194,   195,   195,   195,   196,   196,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   200,   200,   201,   201,   201,   202,
     202,   203,   203,   204,   204,   204,   205,   205,   206,   206,
     207,   207,   207,   208,   208,   209,   209,   209,   210,   210,
     210,   210,   210,   210,   211,   211,   211,   212,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   220
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     5,     6,     2,     1,
       1,     2,     2,     2,     2,     5,     7,     6,     8,     2,
       3,     4,     3,     3,     2,     0,     2,     3,     1,     3,
       4,     1,     2,     1,     2,     3,     3,     4,     2,     1,
       2,     1,     2,     3,     3,     4,     1,     1,     3,     4,
       5,     6,     7,     4,     5,     6,     1,     3,     1,     1,
       1,     5,     4,     3,     1,     1,     1,     3,     2,     0,
       3,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     3,     3,     3,     3,     1,     2,
       4,     4,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       4,     2,     1,     1,     1,     2,     2,     2,     1,     1,
       0,     2,     2,     1,     1,     5,     5,     7,     4,     4,
       6,     3,     1,     3,     1,     3,     2,     0,     3,     2,
       3,     2,     0,     2,     3,     2,     0,     2,     3,     2,
       0,     3,     3,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     5,     4,     0,
       5,     8,     4,     7,     6,     9,     7,    10,     5,     3,
       2,     6,     4,     3,     4,     7,     7,    10,     7,     3,
       2,     0,     5,     6,     1,     3,     2,     1,     1,     4,
       3,     1,     5,     1,     1,     1,     1,     4,     3,     7,
       3,     2,     0,     2,     3,     2,     0,     2,     2,     1,
       3,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     3,     2,     0,     2,     3,
       2,     0,     2,     3,     2,     0,     2,     3,     3,     2,
       2,     0,     2,     3,     3,     2,     2,     0,     2,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     1,     3,     1,     2,     1,     0,
       3,     2,     2,     1,     3,     3,     2,     3,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     0,     2,     3,     2,     3,     2,     3,     2,
       3,     2,     0,     3,     2,     1,     4,     3,     3,     3,
       2,     2,     2,     1,     2,     1,     3,     2,     0,     1,
       1,     3,     2,     3,     2,     0,     3,     2,     3,     2,
       3,     2,     0,     1,     1,     3,     2,     0,     2,     3,
       2,     2,     3,     2,     7,     6,     4,     3,     2,     0,
       2,     3,     1,     1,     4,     5,     2,     1,     2,     3,
       1,     2,     2,     1,     1,     6,     4
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

#line 2045 "parser.c"

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


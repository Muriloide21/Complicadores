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
  YYSYMBOL_elif_test_suite_plus = 111,     /* elif_test_suite_plus  */
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
  YYSYMBOL_comma_dict1_star = 122,         /* comma_dict1_star  */
  YYSYMBOL_except_suite_plus = 123,        /* except_suite_plus  */
  YYSYMBOL_opt_finally_suite = 124,        /* opt_finally_suite  */
  YYSYMBOL_program = 125,                  /* program  */
  YYSYMBOL_file_input = 126,               /* file_input  */
  YYSYMBOL_decorator = 127,                /* decorator  */
  YYSYMBOL_decorators = 128,               /* decorators  */
  YYSYMBOL_decorated = 129,                /* decorated  */
  YYSYMBOL_async_funcdef = 130,            /* async_funcdef  */
  YYSYMBOL_funcdef = 131,                  /* funcdef  */
  YYSYMBOL_132_1 = 132,                    /* $@1  */
  YYSYMBOL_parameters = 133,               /* parameters  */
  YYSYMBOL_arguments = 134,                /* arguments  */
  YYSYMBOL_argument = 135,                 /* argument  */
  YYSYMBOL_typedargslist = 136,            /* typedargslist  */
  YYSYMBOL_tfpdef = 137,                   /* tfpdef  */
  YYSYMBOL_138_2 = 138,                    /* $@2  */
  YYSYMBOL_stmt = 139,                     /* stmt  */
  YYSYMBOL_simple_stmt = 140,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 141,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 142,                /* expr_stmt  */
  YYSYMBOL_annassign = 143,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 144,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 145,                /* augassign  */
  YYSYMBOL_del_stmt = 146,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 147,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 148,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 149,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 150,            /* continue_stmt  */
  YYSYMBOL_yield_stmt = 151,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 152,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 153,              /* import_stmt  */
  YYSYMBOL_import_name = 154,              /* import_name  */
  YYSYMBOL_import_from = 155,              /* import_from  */
  YYSYMBOL_from_part = 156,                /* from_part  */
  YYSYMBOL_import_part = 157,              /* import_part  */
  YYSYMBOL_import_as_name = 158,           /* import_as_name  */
  YYSYMBOL_159_3 = 159,                    /* $@3  */
  YYSYMBOL_dotted_as_name = 160,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 161,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 162,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 163,              /* dotted_name  */
  YYSYMBOL_164_4 = 164,                    /* $@4  */
  YYSYMBOL_global_stmt = 165,              /* global_stmt  */
  YYSYMBOL_166_5 = 166,                    /* $@5  */
  YYSYMBOL_nonlocal_stmt = 167,            /* nonlocal_stmt  */
  YYSYMBOL_168_6 = 168,                    /* $@6  */
  YYSYMBOL_assert_stmt = 169,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 170,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 171,               /* async_stmt  */
  YYSYMBOL_if_stmt = 172,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 173,               /* while_stmt  */
  YYSYMBOL_for_stmt = 174,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 175,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 176,                /* with_stmt  */
  YYSYMBOL_with_item = 177,                /* with_item  */
  YYSYMBOL_except_clause = 178,            /* except_clause  */
  YYSYMBOL_suite = 179,                    /* suite  */
  YYSYMBOL_namedexpr_test = 180,           /* namedexpr_test  */
  YYSYMBOL_test = 181,                     /* test  */
  YYSYMBOL_test_nocond = 182,              /* test_nocond  */
  YYSYMBOL_or_test = 183,                  /* or_test  */
  YYSYMBOL_and_test = 184,                 /* and_test  */
  YYSYMBOL_not_test = 185,                 /* not_test  */
  YYSYMBOL_comparison = 186,               /* comparison  */
  YYSYMBOL_expr = 187,                     /* expr  */
  YYSYMBOL_xor_expr = 188,                 /* xor_expr  */
  YYSYMBOL_and_expr = 189,                 /* and_expr  */
  YYSYMBOL_shift_expr = 190,               /* shift_expr  */
  YYSYMBOL_arith_expr = 191,               /* arith_expr  */
  YYSYMBOL_term = 192,                     /* term  */
  YYSYMBOL_factor = 193,                   /* factor  */
  YYSYMBOL_power = 194,                    /* power  */
  YYSYMBOL_atom_expr = 195,                /* atom_expr  */
  YYSYMBOL_atom = 196,                     /* atom  */
  YYSYMBOL_testlist_comp = 197,            /* testlist_comp  */
  YYSYMBOL_trailer = 198,                  /* trailer  */
  YYSYMBOL_subscriptlist = 199,            /* subscriptlist  */
  YYSYMBOL_subscript = 200,                /* subscript  */
  YYSYMBOL_sliceop = 201,                  /* sliceop  */
  YYSYMBOL_exprlist = 202,                 /* exprlist  */
  YYSYMBOL_testlist = 203,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 204,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 205,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 206,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 207,                 /* classdef  */
  YYSYMBOL_208_7 = 208,                    /* $@7  */
  YYSYMBOL_arglist = 209,                  /* arglist  */
  YYSYMBOL_argument1 = 210,                /* argument1  */
  YYSYMBOL_comp_iter = 211,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 212,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 213,                 /* comp_for  */
  YYSYMBOL_comp_if = 214,                  /* comp_if  */
  YYSYMBOL_yield_expr = 215,               /* yield_expr  */
  YYSYMBOL_yield_arg = 216,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 217           /* func_body_suite  */
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
#define YYLAST   846

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  286
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  466

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
     132,   135,   136,   143,   144,   147,   148,   151,   152,   155,
     156,   159,   160,   209,   210,   213,   214,   221,   222,   234,
     235,   238,   239,   251,   252,   253,   256,   257,   260,   261,
     266,   271,   274,   277,   280,   281,   282,   285,   288,   288,
     291,   292,   298,   299,   302,   305,   308,   308,   313,   314,
     317,   320,   321,   322,   323,   324,   325,   326,   327,   330,
     331,   332,   333,   334,   337,   340,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   360,
     363,   366,   367,   369,   370,   373,   376,   382,   385,   386,
     387,   390,   391,   394,   397,   408,   409,   410,   413,   414,
     415,   418,   418,   421,   424,   427,   430,   430,   433,   433,
     436,   436,   439,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   453,   454,   455,   458,   459,   462,   463,   466,
     467,   470,   471,   474,   477,   480,   483,   484,   490,   493,
     494,   498,   511,   512,   520,   521,   525,   526,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   564,
     565,   568,   569,   572,   573,   576,   577,   578,   581,   582,
     583,   586,   587,   588,   589,   590,   591,   594,   595,   596,
     597,   600,   601,   604,   605,   611,   612,   613,   614,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   636,
     637,   641,   642,   643,   644,   649,   650,   653,   654,   657,
     663,   664,   670,   671,   674,   675,   678,   679,   680,   681,
     684,   685,   691,   691,   697,   698,   701,   702,   703,   704,
     705,   706,   709,   710,   713,   714,   717,   718,   721,   722,
     725,   726,   729,   730,   733,   734,   735
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
  "opt_comma_test", "elif_test_suite_plus", "opt_else_suite",
  "comma_with_item_star", "opt_as_expr", "opt_test_as_name", "stmt_plus",
  "opt_await", "trailer_plus", "string_plus", "opt_test", "opt_sliceop",
  "comma_dict1_star", "except_suite_plus", "opt_finally_suite", "program",
  "file_input", "decorator", "decorators", "decorated", "async_funcdef",
  "funcdef", "$@1", "parameters", "arguments", "argument", "typedargslist",
  "tfpdef", "$@2", "stmt", "simple_stmt", "small_stmt", "expr_stmt",
  "annassign", "testlist_star_expr", "augassign", "del_stmt", "pass_stmt",
  "flow_stmt", "break_stmt", "continue_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
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

#define YYPACT_NINF (-305)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-281)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -305,   329,    42,  -305,  -305,   430,    34,     4,  -305,  -305,
       9,  -305,    28,    32,    32,    35,    44,   430,     4,    32,
    -305,    53,   430,  -305,    32,   482,    32,    61,   430,   430,
      66,   107,   196,  -305,   150,  -305,  -305,  -305,  -305,    50,
    -305,   195,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,   124,   119,    85,   169,  -305,   694,   122,   104,
     193,   -18,    67,    73,  -305,   175,  -305,  -305,  -305,   185,
    -305,  -305,  -305,  -305,   172,  -305,  -305,   210,  -305,   189,
    -305,  -305,   191,  -305,  -305,   218,  -305,  -305,  -305,   228,
    -305,  -305,  -305,  -305,   203,  -305,   696,  -305,   233,   225,
     430,  -305,  -305,  -305,  -305,  -305,   308,   142,    18,  -305,
    -305,  -305,  -305,  -305,   166,    49,   235,  -305,  -305,  -305,
    -305,   201,  -305,    20,  -305,   430,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,    19,  -305,    20,
    -305,  -305,   430,   430,   430,    32,    32,    32,    32,   589,
      32,    32,    32,   231,    32,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,   430,  -305,  -305,
     224,   209,   172,   211,    80,  -305,   430,     7,  -305,   696,
     249,   220,  -305,  -305,   430,   238,  -305,    93,   148,    32,
    -305,   696,  -305,  -305,   266,   267,   217,   271,    32,  -305,
     128,   221,  -305,  -305,  -305,    33,    22,   223,  -305,   234,
    -305,   247,    21,   358,    49,  -305,  -305,  -305,  -305,  -305,
     300,    20,  -305,  -305,   292,  -305,  -305,   287,  -305,  -305,
    -305,  -305,  -305,  -305,    32,  -305,  -305,  -305,  -305,    32,
    -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,   304,   430,  -305,   430,   182,   254,
     312,  -305,   316,   -11,   327,  -305,   318,   281,  -305,  -305,
    -305,  -305,  -305,   323,   146,     4,  -305,   323,  -305,   660,
     377,   330,   149,   331,   263,   430,  -305,   324,   252,  -305,
     557,  -305,    33,   320,   430,    32,  -305,  -305,  -305,  -305,
     170,  -305,  -305,  -305,  -305,   285,  -305,   283,  -305,    20,
    -305,  -305,  -305,   430,  -305,  -305,   303,  -305,  -305,   430,
     430,  -305,  -305,   440,  -305,   696,  -305,  -305,  -305,   342,
     288,   355,   430,   350,   263,   299,   228,   356,   322,   430,
     359,   165,  -305,  -305,   414,  -305,  -305,   228,   696,   343,
     364,   696,   696,  -305,   365,   369,  -305,  -305,   374,  -305,
    -305,    33,   345,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,   380,   346,  -305,   430,  -305,  -305,
     263,   696,  -305,  -305,   281,  -305,  -305,   382,   696,   430,
    -305,  -305,  -305,  -305,  -305,   384,  -305,   696,  -305,  -305,
     696,   562,  -305,  -305,   541,  -305,   374,  -305,   430,   430,
    -305,  -305,  -305,   754,   371,  -305,   696,  -305,   387,   696,
    -305,  -305,  -305,    32,   388,  -305,    26,  -305,    -4,  -305,
    -305,   389,  -305,   696,  -305,  -305,   430,   430,  -305,  -305,
    -305,   660,   349,   696,  -305,  -305,    26,  -305,   496,   366,
    -305,  -305,  -305,   660,   578,  -305
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    53,     0,    70,    71,    53,     0,     0,    54,   125,
       0,   126,     0,    53,    53,     0,     0,    53,     0,    53,
       3,     0,    53,   120,    53,    53,    53,     0,    53,    53,
      53,    73,     0,     8,     0,   160,   158,     4,    88,    20,
      91,   102,    92,    93,    94,   121,   122,   124,   123,    95,
     131,   132,    96,    97,    98,    89,   161,   153,   154,   155,
     156,   157,    16,   179,   183,   185,   187,   198,   200,   202,
     204,   207,   210,   216,   220,   221,   159,   127,     1,    39,
     162,   164,   163,   146,     5,   262,    78,    16,   119,     0,
     135,   136,     0,   137,   148,     0,   178,    33,   133,    29,
     218,   150,   186,   217,   129,   219,    53,    45,    47,     0,
      53,   283,   281,     9,   235,   238,    53,    53,    53,   232,
     236,   233,    57,   237,   234,   224,     0,    76,    75,    74,
      21,     0,   112,    53,   109,    53,   118,   117,   115,   107,
     113,   111,   106,   116,   110,   108,   114,    12,    99,    53,
      17,   105,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,     0,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,   152,    35,
      53,     0,     5,     0,    53,   251,    53,     0,    37,    53,
     145,     0,   143,    37,    53,     0,   176,     0,     0,    53,
     174,    53,   282,   228,     0,   247,     0,    16,    53,   230,
     261,     0,   254,   255,   225,     0,   178,     0,   240,     0,
      58,     0,    53,    53,   223,    55,    77,    90,    23,    22,
      26,    53,    13,   103,    16,   101,   100,     0,   182,   184,
     190,   191,   189,   194,    53,   196,   192,   188,   193,    53,
     199,   201,   203,   205,   206,   209,   208,   212,   215,   214,
     213,   211,   222,    40,   147,    53,     6,    53,   266,     0,
      16,    72,     0,     0,    10,   250,     0,     0,   141,   138,
     134,    31,   140,   149,    43,     0,    30,   151,   130,    53,
      53,     0,    43,     0,    12,    53,    48,   168,    53,   229,
      53,   246,    63,     0,    53,    53,   276,   260,   231,   239,
      53,   253,   227,   226,   244,     0,   241,     0,    56,    53,
     104,    25,    24,    53,   197,   195,     0,   270,   271,    53,
      53,   267,     7,    53,   265,    53,    86,    80,    85,    83,
       0,    14,    53,     0,    12,     0,    29,    16,     0,    53,
       0,    43,   166,    34,    53,    51,   175,    29,    53,    68,
       0,    53,    53,    46,     0,    61,    60,   245,    16,   258,
     277,    63,     0,   252,   243,   242,    28,    27,   180,    36,
     269,   268,   264,   263,    18,     0,    81,    53,    84,    11,
      12,    53,   139,   142,    17,   144,    38,     0,    53,    53,
     165,   177,    52,    50,   172,     0,   171,    53,    66,   173,
      53,    53,   248,    62,    53,   259,    16,   256,    53,    53,
      87,    82,    15,    53,   170,    32,    53,    44,     0,    53,
      67,   167,   249,    53,     0,   257,   274,    19,     0,   284,
      79,     0,    41,    53,    69,    65,    53,    53,   275,   272,
     273,    53,     0,    53,    42,    64,   278,   181,    53,     0,
     169,   279,   285,    53,    53,   286
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -305,  -305,   227,  -305,  -305,  -273,  -305,   -56,  -305,  -305,
    -305,  -305,  -189,  -305,  -305,  -305,   239,  -305,  -305,  -256,
    -305,  -305,  -305,  -304,  -305,  -305,  -305,  -281,  -305,    43,
    -305,  -305,  -305,  -305,   409,  -305,  -305,  -305,     5,  -305,
    -305,    56,  -305,  -305,  -305,  -305,     0,    -1,  -305,  -305,
    -305,   -15,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,  -305,  -305,  -305,  -305,    51,  -305,   135,   171,  -305,
      55,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,  -305,
    -305,   441,  -305,   446,   164,   168,  -173,   -26,    -3,  -305,
    -145,   311,   444,  -107,    -9,   305,   306,    39,    40,   143,
      -6,  -305,  -305,  -305,  -305,   245,  -192,  -305,  -305,    -5,
    -139,  -305,  -305,  -305,   437,  -305,  -200,  -305,    17,   173,
    -191,  -305,  -106,  -305,  -305
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   181,    31,   343,   233,   388,   311,   420,   131,
     147,   320,   192,   347,   190,   264,   283,   178,   351,   352,
     198,   200,   356,   354,    32,   224,   124,   204,   412,   368,
     292,   406,     2,     3,    33,    34,    35,   127,    36,   183,
     274,   338,   339,   340,   341,   384,   355,   196,    39,    40,
     148,    41,   149,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    92,   280,   281,   346,    97,   282,    98,
      99,   179,    52,   188,    53,   193,    54,    55,    56,    57,
      58,    59,    60,    61,   107,   293,   197,    95,    62,   456,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,   125,   217,   225,   206,   207,   413,    88,
     218,   211,   212,   213,    76,   182,   269,   270,   448,   306,
     449,   450,    77,   112,   440
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      38,    37,    79,   109,    87,    87,   151,   237,   238,    89,
     235,    80,   219,   100,    96,   111,   284,   365,   103,   307,
     105,   362,   104,   317,   309,   108,    96,   229,   297,   231,
     315,   185,     8,   167,     8,     8,   359,   303,   -59,   128,
     451,   310,    78,   236,   303,   336,     8,   276,   240,   241,
     242,   243,   245,   246,   247,   248,    12,   277,   168,    90,
      83,   305,    84,   278,   337,    85,    91,   447,   305,    14,
      93,   391,    19,   221,    19,    19,  -280,   331,   106,    22,
       8,    22,    22,   452,    86,   171,    19,    24,   279,    24,
      24,    83,   215,   214,     8,   400,   222,   -16,   172,   223,
      94,    24,    26,   110,    26,    26,   232,   202,   367,   101,
      30,   369,    30,   205,   210,   216,    26,   423,   228,     7,
      19,   169,    28,   -17,  -280,   322,   290,    22,   130,   291,
     432,   226,   230,   382,    19,    24,   170,   324,   -17,   303,
     173,  -280,   325,   150,  -280,   304,   234,   458,   153,    24,
      26,   301,   174,  -280,   175,   250,     8,   393,   -17,   464,
     152,   126,   383,   305,    26,   294,    10,   295,   403,   208,
     262,   373,    12,   154,   263,    87,   349,   268,   350,   275,
     417,   350,   290,   234,     8,   404,   164,   -17,   408,   409,
     296,   288,   329,   303,   165,   399,    19,   350,   166,   302,
     330,   132,   176,    22,   177,   133,   253,   254,   134,   255,
     256,    24,   135,   377,   334,   209,   321,   305,   424,   205,
     268,   136,   180,   137,    19,   427,    26,   114,   -17,   184,
     115,    22,   186,   187,   430,   189,   191,   431,     8,    24,
     194,   199,   201,   116,   117,   -17,   118,   138,   -17,   220,
     139,   265,   119,   442,    26,   120,   444,    12,   121,   227,
     140,   273,   327,   141,   328,   142,     8,   271,   285,   -59,
     454,   -59,   143,   436,   249,   144,   286,   145,    19,   122,
     460,   123,   289,   298,   -60,    22,   146,   357,    38,   299,
     300,   395,   108,    24,   308,   366,    87,   205,   312,   266,
     372,   371,   457,   314,   376,   267,    19,   234,    26,   313,
     319,   310,   415,    22,   257,   258,   259,   260,   261,   323,
     378,    24,     8,   397,   -59,   -59,   380,   381,   326,   332,
     268,   333,     4,   335,   342,   344,    26,   278,     5,   389,
       6,     7,   348,     8,     9,    10,    96,   358,   361,    11,
     232,    12,    13,    38,   402,   305,   364,   374,   375,   379,
     435,   385,    19,   386,    14,   387,    15,   390,    16,    22,
      17,    18,     8,   428,   392,   394,   398,    24,   396,   405,
     203,   407,   410,    19,   422,   265,   411,    20,   418,    21,
      22,     8,    26,   414,   -49,    23,    96,   419,    24,   426,
      25,   429,   336,   441,   443,   446,   453,   459,   366,   272,
     463,   434,    19,    26,   416,    27,   437,    28,    29,    22,
     353,    30,   439,     5,   445,     6,     7,    24,     8,     9,
      10,    19,   287,   316,    11,   401,    12,    13,    22,   267,
     113,   421,    26,   455,     8,   425,    24,    81,   345,    14,
      38,    15,    82,    16,     8,    17,    18,    38,   402,   363,
     360,    26,    38,    38,   402,   239,   102,   265,    19,   318,
     251,   129,   252,   461,    21,    22,   370,     0,     0,     0,
      23,     0,     0,    24,    19,    25,     0,     0,     0,     0,
       0,    22,     0,     0,    19,     0,     8,     0,    26,    24,
      27,    22,    28,    29,     0,     5,    30,     6,     7,    24,
       8,     9,    10,     0,    26,   -17,    11,   462,    12,    13,
       0,   267,     0,     0,    26,     0,     0,     0,     0,     0,
       0,    14,     0,    15,     0,    16,    19,    17,    18,     0,
    -128,     0,     0,    22,     0,     0,     0,     0,     0,     0,
      19,    24,     0,     0,     0,     8,    21,    22,     0,     0,
    -128,     0,    23,     0,     0,    24,    26,    25,   433,     0,
       0,     8,     0,     0,   -59,     0,     8,     0,     0,     0,
      26,   -59,    27,     0,    28,    29,     0,     5,    30,     6,
       7,     0,     8,     9,    10,    19,     0,     0,    11,   465,
      12,    13,    22,     8,     0,     0,     0,     0,     0,     0,
      24,    19,     0,    14,   -17,    15,    19,    16,    22,    17,
      18,     0,     0,    22,     0,    26,    24,     0,     0,   -17,
       0,    24,    19,     0,   -59,     0,     0,     0,    21,    22,
       0,    26,     0,    19,    23,     0,    26,    24,     0,    25,
     244,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,    26,     0,    27,     0,    28,    29,     0,     5,
      30,     6,     7,    26,     8,     9,    10,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,    15,     0,    16,
       0,    17,    18,     0,     0,     5,     0,     0,     0,     0,
       8,     9,     0,     0,    19,     0,    11,     0,     0,    13,
      21,    22,     0,   155,     0,     0,    23,     0,     0,    24,
       0,    25,   156,    15,   157,    16,     0,   158,    18,   159,
       0,     0,     0,   160,    26,     0,    27,   161,    28,    29,
      19,   162,    30,     0,   195,   163,    21,    22,     0,     0,
       0,     0,    23,     5,     0,    24,     0,    25,     8,     9,
       0,     0,     0,     0,    11,     0,     0,    13,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,    15,     0,    16,     0,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,   438,     0,    21,    22,     0,     0,     0,     0,
      23,     0,     0,    24,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    30
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    29,    13,    14,    62,   152,   153,    14,
     149,     6,   118,    19,    17,    30,   189,   298,    24,   210,
      26,   294,    25,   223,   215,    28,    29,   133,   201,    10,
     222,    87,    14,    51,    14,    14,   292,    11,    17,    34,
      44,    19,     0,   149,    11,    56,    14,   186,   155,   156,
     157,   158,   159,   160,   161,   162,    22,    50,    76,    24,
      56,    35,     7,    56,    75,    56,    31,    41,    35,    35,
      15,   344,    54,    24,    54,    54,    10,   268,    17,    61,
      14,    61,    61,    87,    56,    12,    54,    69,    81,    69,
      69,    56,   118,    75,    14,   351,    47,    75,    25,    50,
      56,    69,    84,    37,    84,    84,    87,   110,   300,    56,
      92,   302,    92,   116,   117,   118,    84,   390,   133,    12,
      54,    54,    88,    43,    58,   231,    33,    61,    78,    36,
     411,   126,   135,   333,    54,    69,    69,   244,    58,    11,
      67,    75,   249,    19,    78,    17,   149,   451,    63,    69,
      84,   207,    79,    87,    81,   164,    14,   346,    78,   463,
      41,    11,   335,    35,    84,    17,    16,    19,   357,    27,
     176,   310,    22,     4,   177,   184,    30,   180,    32,   184,
     371,    32,    33,   186,    14,   358,    64,    17,   361,   362,
     199,   194,    10,    11,    90,    30,    54,    32,     5,   208,
      18,     6,    27,    61,    19,    10,   167,   168,    13,   169,
     170,    69,    17,   319,   270,    73,   231,    35,   391,   222,
     223,    26,    50,    28,    54,   398,    84,    31,    58,    19,
      34,    61,    43,    42,   407,    17,     8,   410,    14,    69,
      37,     8,    17,    47,    48,    75,    50,    52,    78,    83,
      55,    27,    56,   426,    84,    59,   429,    22,    62,    58,
      65,    50,   265,    68,   267,    70,    14,    58,    19,    17,
     443,    19,    77,   418,    43,    80,    56,    82,    54,    83,
     453,    85,    44,    17,    17,    61,    91,   290,   289,    72,
      19,   347,   295,    69,    73,   298,   305,   300,    75,    75,
     305,   304,   447,    56,   319,    81,    54,   310,    84,    75,
      10,    19,   368,    61,   171,   172,   173,   174,   175,    32,
     323,    69,    14,   349,    72,    17,   329,   330,    24,    75,
     333,    19,     3,    17,     7,    17,    84,    56,     9,   342,
      11,    12,    19,    14,    15,    16,   349,    17,    17,    20,
      87,    22,    23,   354,   354,    35,    32,    72,    75,    56,
     416,    19,    54,    75,    35,    10,    37,    17,    39,    61,
      41,    42,    14,   399,    75,    19,    17,    69,    56,    36,
      72,    17,    17,    54,   387,    27,    17,    58,    43,    60,
      61,    14,    84,    19,    17,    66,   399,    17,    69,    17,
      71,    17,    56,    32,    17,    17,    17,    58,   411,   182,
      44,   414,    54,    84,   371,    86,   419,    88,    89,    61,
     285,    92,   423,     9,   433,    11,    12,    69,    14,    15,
      16,    54,   193,    75,    20,    21,    22,    23,    61,    81,
      31,   385,    84,   446,    14,   394,    69,     6,   277,    35,
     451,    37,     6,    39,    14,    41,    42,   458,   458,   295,
     292,    84,   463,   464,   464,   154,    22,    27,    54,   224,
     165,    34,   166,   456,    60,    61,   303,    -1,    -1,    -1,
      66,    -1,    -1,    69,    54,    71,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    54,    -1,    14,    -1,    84,    69,
      86,    61,    88,    89,    -1,     9,    92,    11,    12,    69,
      14,    15,    16,    -1,    84,    75,    20,    21,    22,    23,
      -1,    81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    -1,    39,    54,    41,    42,    -1,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    69,    -1,    -1,    -1,    14,    60,    61,    -1,    -1,
      78,    -1,    66,    -1,    -1,    69,    84,    71,    27,    -1,
      -1,    14,    -1,    -1,    17,    -1,    14,    -1,    -1,    -1,
      84,    19,    86,    -1,    88,    89,    -1,     9,    92,    11,
      12,    -1,    14,    15,    16,    54,    -1,    -1,    20,    21,
      22,    23,    61,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    54,    -1,    35,    73,    37,    54,    39,    61,    41,
      42,    -1,    -1,    61,    -1,    84,    69,    -1,    -1,    72,
      -1,    69,    54,    -1,    72,    -1,    -1,    -1,    60,    61,
      -1,    84,    -1,    54,    66,    -1,    84,    69,    -1,    71,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,     9,
      92,    11,    12,    84,    14,    15,    16,    -1,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      14,    15,    -1,    -1,    54,    -1,    20,    -1,    -1,    23,
      60,    61,    -1,    29,    -1,    -1,    66,    -1,    -1,    69,
      -1,    71,    38,    37,    40,    39,    -1,    43,    42,    45,
      -1,    -1,    -1,    49,    84,    -1,    86,    53,    88,    89,
      54,    57,    92,    -1,    58,    61,    60,    61,    -1,    -1,
      -1,    -1,    66,     9,    -1,    69,    -1,    71,    14,    15,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    58,    -1,    60,    61,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    69,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   125,   126,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    54,
      58,    60,    61,    66,    69,    71,    84,    86,    88,    89,
      92,    96,   117,   127,   128,   129,   131,   139,   140,   141,
     142,   144,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   165,   167,   169,   170,   171,   172,   173,   174,
     175,   176,   181,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   207,   215,     0,   181,
     131,   174,   176,    56,   163,    56,    56,   187,   202,   202,
      24,    31,   156,   163,    56,   180,   181,   160,   162,   163,
     193,    56,   185,   193,   181,   193,    17,   177,   181,   180,
      37,   144,   216,   127,    31,    34,    47,    48,    50,    56,
      59,    62,    83,    85,   119,   196,    11,   130,   131,   207,
      78,   102,     6,    10,    13,    17,    26,    28,    52,    55,
      65,    68,    70,    77,    80,    82,    91,   103,   143,   145,
      19,   100,    41,    63,     4,    29,    38,    40,    43,    45,
      49,    53,    57,    61,    64,    90,     5,    51,    76,    54,
      69,    12,    25,    67,    79,    81,    27,    19,   110,   164,
      50,    95,   208,   132,    19,   100,    43,    42,   166,    17,
     107,     8,   105,   168,    37,    58,   140,   179,   113,     8,
     114,    17,   181,    72,   120,   181,   199,   200,    27,    73,
     181,   204,   205,   206,    75,   180,   181,   197,   203,   215,
      83,    24,    47,    50,   118,   198,   131,    58,   144,   215,
     181,    10,    87,    98,   181,   203,   215,   183,   183,   184,
     186,   186,   186,   186,    61,   186,   186,   186,   186,    43,
     187,   188,   189,   190,   190,   191,   191,   192,   192,   192,
     192,   192,   193,   181,   108,    27,    75,    81,   181,   209,
     210,    58,    95,    50,   133,   202,   203,    50,    56,    81,
     157,   158,   161,   109,   179,    19,    56,   109,   181,    44,
      33,    36,   123,   178,    17,    19,   187,   179,    17,    72,
      19,   100,   187,    11,    17,    35,   212,   213,    73,   213,
      19,   100,    75,    75,    56,   199,    75,   209,   198,    10,
     104,   144,   215,    32,   186,   186,    24,   181,   181,    10,
      18,   213,    75,    19,   100,    17,    56,    75,   134,   135,
     136,   137,     7,    97,    17,   161,   159,   106,    19,    30,
      32,   111,   112,   160,   116,   139,   115,   181,    17,   112,
     178,    17,    98,   177,    32,   120,   181,   199,   122,   213,
     212,   181,   202,   203,    72,    75,   144,   215,   181,    56,
     181,   181,   209,   179,   138,    19,    75,    10,    99,   181,
      17,    98,    75,   105,    19,   100,    56,   180,    17,    30,
     112,    21,   139,   105,   179,    36,   124,    17,   179,   179,
      17,    17,   121,   201,    19,   100,   122,   213,    43,    17,
     101,   134,   181,    98,   179,   158,    17,   179,   180,    17,
     179,   179,   120,    27,   181,   100,   183,   181,    58,   140,
     217,    32,   179,    17,   179,   187,    17,    41,   211,   213,
     214,    44,    87,    17,   179,   181,   182,   183,   116,    58,
     179,   211,    21,    44,   116,    21
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
     120,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   126,   127,   128,   129,   129,   129,   130,   132,   131,
     133,   133,   134,   134,   135,   136,   138,   137,   139,   139,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   142,
     142,   142,   142,   142,   143,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     147,   148,   148,   148,   148,   149,   150,   151,   152,   152,
     152,   153,   153,   154,   155,   156,   156,   156,   157,   157,
     157,   159,   158,   160,   161,   162,   164,   163,   166,   165,
     168,   167,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   176,   177,   178,   179,   179,   180,   181,
     181,   182,   183,   183,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   187,
     187,   188,   188,   189,   189,   190,   190,   190,   191,   191,
     191,   192,   192,   192,   192,   192,   192,   193,   193,   193,
     193,   194,   194,   195,   195,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   197,
     197,   198,   198,   198,   198,   199,   199,   200,   200,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   205,   205,
     206,   206,   208,   207,   209,   209,   210,   210,   210,   210,
     210,   210,   211,   211,   212,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   217,   217,   217
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     2,     0,     1,     0,     2,
       0,     1,     2,     2,     3,     3,     0,     2,     2,     0,
       2,     0,     3,     0,     3,     0,     3,     0,     3,     0,
       2,     4,     5,     0,     3,     0,     3,     0,     2,     0,
       2,     1,     2,     0,     1,     1,     2,     1,     2,     0,
       1,     0,     1,     0,     5,     4,     3,     4,     0,     3,
       1,     2,     4,     1,     2,     2,     2,     2,     0,     8,
       2,     3,     3,     1,     2,     1,     0,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     1,     3,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     1,     1,     2,     4,     1,     1,     1,     1,     3,
       1,     0,     3,     2,     3,     2,     0,     3,     0,     4,
       0,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     6,     5,     7,     4,    10,
       7,     6,     6,     6,     2,     2,     1,     4,     1,     1,
       5,     1,     3,     1,     3,     1,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     4,     3,     4,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       1,     1,     3,     3,     2,     2,     3,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     3,     3,     2,     3,     2,     1,     4,     2,
       3,     2,     3,     2,     1,     1,     4,     5,     3,     4,
       2,     1,     0,     6,     3,     2,     1,     2,     3,     3,
       2,     2,     1,     1,     4,     5,     1,     2,     2,     3,
       1,     2,     2,     1,     1,     4,     6
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
#line 2260 "parser.c"
    break;

  case 3: /* newline_or_stmt_star: newline_or_stmt_star NEWLINE  */
#line 44 "parser.y"
                                                   { yyval = yyvsp[-1]; printf("newline_or_stmt_star_2\n"); }
#line 2266 "parser.c"
    break;

  case 4: /* newline_or_stmt_star: newline_or_stmt_star stmt  */
#line 45 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; printf("newline_or_stmt_star_3\n"); }
#line 2272 "parser.c"
    break;

  case 22: /* assing_yield_or_test_plus: EQUAL yield_expr  */
#line 90 "parser.y"
                                            { yyval = yyvsp[0]; }
#line 2278 "parser.c"
    break;

  case 23: /* assing_yield_or_test_plus: EQUAL testlist_star_expr  */
#line 91 "parser.y"
                                                    { yyval = yyvsp[0]; }
#line 2284 "parser.c"
    break;

  case 24: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL yield_expr  */
#line 92 "parser.y"
                                                                      { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2290 "parser.c"
    break;

  case 25: /* assing_yield_or_test_plus: assing_yield_or_test_plus EQUAL testlist_star_expr  */
#line 93 "parser.y"
                                                                              { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2296 "parser.c"
    break;

  case 30: /* opt_as_name: AS NAME  */
#line 112 "parser.y"
                     { new_var(); }
#line 2302 "parser.c"
    break;

  case 36: /* dot_name_star: dot_name_star DOT NAME  */
#line 124 "parser.y"
                                      { new_var(); }
#line 2308 "parser.c"
    break;

  case 38: /* comma_name_star: comma_name_star COMMA NAME  */
#line 128 "parser.y"
                                            { new_var(); }
#line 2314 "parser.c"
    break;

  case 41: /* elif_test_suite_plus: ELIF namedexpr_test COLON suite  */
#line 135 "parser.y"
                                                      { yyval = new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2320 "parser.c"
    break;

  case 42: /* elif_test_suite_plus: elif_test_suite_plus ELIF namedexpr_test COLON suite  */
#line 136 "parser.y"
                                                                           { add_child(yyvsp[-4], new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0])); yyval = yyvsp[-4]; }
#line 2326 "parser.c"
    break;

  case 43: /* opt_else_suite: %empty  */
#line 143 "parser.y"
                       { yyval = new_node(NOOP_NODE, 0, NO_TYPE); }
#line 2332 "parser.c"
    break;

  case 44: /* opt_else_suite: ELSE COLON suite  */
#line 144 "parser.y"
                                 { yyval = new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2338 "parser.c"
    break;

  case 51: /* stmt_plus: stmt  */
#line 159 "parser.y"
                { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2344 "parser.c"
    break;

  case 52: /* stmt_plus: stmt_plus stmt  */
#line 160 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); }
#line 2350 "parser.c"
    break;

  case 55: /* trailer_plus: trailer  */
#line 213 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2356 "parser.c"
    break;

  case 56: /* trailer_plus: trailer_plus trailer  */
#line 214 "parser.y"
                                               { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2362 "parser.c"
    break;

  case 57: /* string_plus: STRING  */
#line 221 "parser.y"
                    { yyval = new_subtree(STRING_NODE, STR_TYPE, 0); }
#line 2368 "parser.c"
    break;

  case 58: /* string_plus: string_plus STRING  */
#line 222 "parser.y"
                                { add_child(yyvsp[-1],yyvsp[0]); yyval = yyvsp[-1]; }
#line 2374 "parser.c"
    break;

  case 70: /* program: file_input  */
#line 266 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); printf("program\n"); }
#line 2380 "parser.c"
    break;

  case 71: /* file_input: newline_or_stmt_star ENDMARKER  */
#line 271 "parser.y"
                                           { yyval = yyvsp[-1]; printf("file input\n"); }
#line 2386 "parser.c"
    break;

  case 78: /* $@1: %empty  */
#line 288 "parser.y"
                  { new_var(); }
#line 2392 "parser.c"
    break;

  case 86: /* $@2: %empty  */
#line 308 "parser.y"
             { check_var("tfpdef"); }
#line 2398 "parser.c"
    break;

  case 88: /* stmt: simple_stmt  */
#line 313 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2404 "parser.c"
    break;

  case 89: /* stmt: compound_stmt  */
#line 314 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2410 "parser.c"
    break;

  case 90: /* simple_stmt: small_stmt opt_semi NEWLINE  */
#line 317 "parser.y"
                                         { yyval = yyvsp[-2]; }
#line 2416 "parser.c"
    break;

  case 91: /* small_stmt: expr_stmt  */
#line 320 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2422 "parser.c"
    break;

  case 92: /* small_stmt: del_stmt  */
#line 321 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2428 "parser.c"
    break;

  case 93: /* small_stmt: pass_stmt  */
#line 322 "parser.y"
                               { yyval = yyvsp[0]; }
#line 2434 "parser.c"
    break;

  case 94: /* small_stmt: flow_stmt  */
#line 323 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2440 "parser.c"
    break;

  case 95: /* small_stmt: import_stmt  */
#line 324 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2446 "parser.c"
    break;

  case 96: /* small_stmt: global_stmt  */
#line 325 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2452 "parser.c"
    break;

  case 97: /* small_stmt: nonlocal_stmt  */
#line 326 "parser.y"
                                  { yyval = yyvsp[0]; }
#line 2458 "parser.c"
    break;

  case 98: /* small_stmt: assert_stmt  */
#line 327 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2464 "parser.c"
    break;

  case 103: /* expr_stmt: testlist_star_expr assing_yield_or_test_plus opt_type_comment  */
#line 334 "parser.y"
                                                                                 { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2470 "parser.c"
    break;

  case 105: /* testlist_star_expr: test opt_comma  */
#line 340 "parser.y"
                                   { yyval = yyvsp[-1]; }
#line 2476 "parser.c"
    break;

  case 119: /* del_stmt: DEL exprlist  */
#line 360 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2482 "parser.c"
    break;

  case 120: /* pass_stmt: PASS  */
#line 363 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2488 "parser.c"
    break;

  case 125: /* break_stmt: BREAK  */
#line 373 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2494 "parser.c"
    break;

  case 126: /* continue_stmt: CONTINUE  */
#line 376 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2500 "parser.c"
    break;

  case 133: /* import_name: IMPORT dotted_as_names  */
#line 394 "parser.y"
                                    {}
#line 2506 "parser.c"
    break;

  case 141: /* $@3: %empty  */
#line 418 "parser.y"
                     { new_var(); }
#line 2512 "parser.c"
    break;

  case 146: /* $@4: %empty  */
#line 430 "parser.y"
                   { new_var(); }
#line 2518 "parser.c"
    break;

  case 148: /* $@5: %empty  */
#line 433 "parser.y"
                         { new_var(); }
#line 2524 "parser.c"
    break;

  case 150: /* $@6: %empty  */
#line 436 "parser.y"
                             { new_var(); }
#line 2530 "parser.c"
    break;

  case 153: /* compound_stmt: if_stmt  */
#line 442 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2536 "parser.c"
    break;

  case 154: /* compound_stmt: while_stmt  */
#line 443 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2542 "parser.c"
    break;

  case 155: /* compound_stmt: for_stmt  */
#line 444 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2548 "parser.c"
    break;

  case 156: /* compound_stmt: try_stmt  */
#line 445 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2554 "parser.c"
    break;

  case 157: /* compound_stmt: with_stmt  */
#line 446 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2560 "parser.c"
    break;

  case 158: /* compound_stmt: funcdef  */
#line 447 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2566 "parser.c"
    break;

  case 159: /* compound_stmt: classdef  */
#line 448 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2572 "parser.c"
    break;

  case 160: /* compound_stmt: decorated  */
#line 449 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2578 "parser.c"
    break;

  case 161: /* compound_stmt: async_stmt  */
#line 450 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2584 "parser.c"
    break;

  case 165: /* if_stmt: IF namedexpr_test COLON suite elif_test_suite_plus opt_else_suite  */
#line 458 "parser.y"
                                                                           { yyval = new_subtree(IF_NODE, NO_TYPE, 4, yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2590 "parser.c"
    break;

  case 166: /* if_stmt: IF namedexpr_test COLON suite opt_else_suite  */
#line 459 "parser.y"
                                                      { yyval = new_subtree(IF_NODE, NO_TYPE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 2596 "parser.c"
    break;

  case 167: /* while_stmt: WHILE namedexpr_test COLON suite ELSE COLON suite  */
#line 462 "parser.y"
                                                              { yyval = new_subtree(WHILE_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2602 "parser.c"
    break;

  case 168: /* while_stmt: WHILE namedexpr_test COLON suite  */
#line 463 "parser.y"
                                             { yyval = new_subtree(WHILE_NODE, NO_TYPE, 2, yyvsp[-3], yyvsp[0]); }
#line 2608 "parser.c"
    break;

  case 169: /* for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite ELSE COLON suite  */
#line 466 "parser.y"
                                                                                 { yyval = new_subtree(FOR_NODE, NO_TYPE, 4, yyvsp[-8], yyvsp[-6], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2614 "parser.c"
    break;

  case 170: /* for_stmt: FOR exprlist IN testlist COLON opt_type_comment suite  */
#line 467 "parser.y"
                                                                { yyval = new_subtree(FOR_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], yyvsp[0]); }
#line 2620 "parser.c"
    break;

  case 176: /* suite: simple_stmt  */
#line 483 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2626 "parser.c"
    break;

  case 177: /* suite: NEWLINE INDENT stmt_plus DEDENT  */
#line 484 "parser.y"
                                       { yyval = yyvsp[-1]; }
#line 2632 "parser.c"
    break;

  case 178: /* namedexpr_test: test  */
#line 490 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2638 "parser.c"
    break;

  case 182: /* or_test: and_test OR or_test  */
#line 511 "parser.y"
                             { yyval = new_subtree(OR_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); printf("or_test_1\n"); }
#line 2644 "parser.c"
    break;

  case 183: /* or_test: and_test  */
#line 512 "parser.y"
                  { yyval = yyvsp[0]; printf("or_test_2\n"); }
#line 2650 "parser.c"
    break;

  case 184: /* and_test: not_test AND and_test  */
#line 520 "parser.y"
                                { yyval = new_subtree(AND_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2656 "parser.c"
    break;

  case 185: /* and_test: not_test  */
#line 521 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2662 "parser.c"
    break;

  case 186: /* not_test: NOT not_test  */
#line 525 "parser.y"
                       { yyval = new_subtree(NOT_NODE, BOOL_TYPE, 1, yyvsp[0]); }
#line 2668 "parser.c"
    break;

  case 187: /* not_test: comparison  */
#line 526 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2674 "parser.c"
    break;

  case 188: /* comparison: expr LESS comparison  */
#line 529 "parser.y"
                                 { yyval = new_subtree(LESS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2680 "parser.c"
    break;

  case 189: /* comparison: expr GREATER comparison  */
#line 530 "parser.y"
                                    { yyval = new_subtree(GREATER_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2686 "parser.c"
    break;

  case 190: /* comparison: expr EQEQUAL comparison  */
#line 531 "parser.y"
                                    { yyval = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2692 "parser.c"
    break;

  case 191: /* comparison: expr GREATEREQUAL comparison  */
#line 532 "parser.y"
                                         { yyval = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2698 "parser.c"
    break;

  case 192: /* comparison: expr LESSEQUAL comparison  */
#line 533 "parser.y"
                                      { yyval = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2704 "parser.c"
    break;

  case 193: /* comparison: expr NOTEQUAL comparison  */
#line 534 "parser.y"
                                     { yyval = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2710 "parser.c"
    break;

  case 194: /* comparison: expr IN comparison  */
#line 535 "parser.y"
                               { yyval = new_subtree(IN_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2716 "parser.c"
    break;

  case 195: /* comparison: expr NOT IN comparison  */
#line 536 "parser.y"
                                   { yyval = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2722 "parser.c"
    break;

  case 196: /* comparison: expr IS comparison  */
#line 537 "parser.y"
                               { yyval = new_subtree(IS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2728 "parser.c"
    break;

  case 197: /* comparison: expr IS NOT comparison  */
#line 538 "parser.y"
                                   { yyval = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2734 "parser.c"
    break;

  case 198: /* comparison: expr  */
#line 539 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2740 "parser.c"
    break;

  case 199: /* expr: xor_expr VBAR expr  */
#line 564 "parser.y"
                         { yyval = new_subtree(BIT_OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2746 "parser.c"
    break;

  case 200: /* expr: xor_expr  */
#line 565 "parser.y"
               { yyval = yyvsp[0]; }
#line 2752 "parser.c"
    break;

  case 201: /* xor_expr: and_expr CIRCUMFLEX xor_expr  */
#line 568 "parser.y"
                                       { yyval = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2758 "parser.c"
    break;

  case 202: /* xor_expr: and_expr  */
#line 569 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2764 "parser.c"
    break;

  case 203: /* and_expr: shift_expr AMPER and_expr  */
#line 572 "parser.y"
                                    { yyval = new_subtree(BIT_AND_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2770 "parser.c"
    break;

  case 204: /* and_expr: shift_expr  */
#line 573 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2776 "parser.c"
    break;

  case 205: /* shift_expr: arith_expr LEFTSHIFT shift_expr  */
#line 576 "parser.y"
                                            { yyval = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2782 "parser.c"
    break;

  case 206: /* shift_expr: arith_expr RIGHTSHIFT shift_expr  */
#line 577 "parser.y"
                                             { yyval = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2788 "parser.c"
    break;

  case 207: /* shift_expr: arith_expr  */
#line 578 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2794 "parser.c"
    break;

  case 208: /* arith_expr: term PLUS arith_expr  */
#line 581 "parser.y"
                                 { yyval = new_subtree(PLUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2800 "parser.c"
    break;

  case 209: /* arith_expr: term MINUS arith_expr  */
#line 582 "parser.y"
                                  { yyval = new_subtree(MINUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2806 "parser.c"
    break;

  case 210: /* arith_expr: term  */
#line 583 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2812 "parser.c"
    break;

  case 211: /* term: factor STAR term  */
#line 586 "parser.y"
                       { yyval = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2818 "parser.c"
    break;

  case 212: /* term: factor AT term  */
#line 587 "parser.y"
                     { yyval = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2824 "parser.c"
    break;

  case 213: /* term: factor SLASH term  */
#line 588 "parser.y"
                        { yyval = new_subtree(DIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2830 "parser.c"
    break;

  case 214: /* term: factor PERCENT term  */
#line 589 "parser.y"
                          { yyval = new_subtree(MOD_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2836 "parser.c"
    break;

  case 215: /* term: factor DOUBLESLASH term  */
#line 590 "parser.y"
                              { yyval = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2842 "parser.c"
    break;

  case 216: /* term: factor  */
#line 591 "parser.y"
             { yyval = yyvsp[0]; }
#line 2848 "parser.c"
    break;

  case 217: /* factor: PLUS factor  */
#line 594 "parser.y"
                    { yyval = new_subtree(PLUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2854 "parser.c"
    break;

  case 218: /* factor: MINUS factor  */
#line 595 "parser.y"
                     { yyval = new_subtree(MINUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2860 "parser.c"
    break;

  case 219: /* factor: TILDE factor  */
#line 596 "parser.y"
                     { yyval = new_subtree(TILDE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2866 "parser.c"
    break;

  case 220: /* factor: power  */
#line 597 "parser.y"
              { yyval = yyvsp[0]; }
#line 2872 "parser.c"
    break;

  case 221: /* power: atom_expr  */
#line 600 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2878 "parser.c"
    break;

  case 222: /* power: atom_expr DOUBLESTAR factor  */
#line 601 "parser.y"
                                   { yyval = new_subtree(POWER_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2884 "parser.c"
    break;

  case 223: /* atom_expr: opt_await atom trailer_plus  */
#line 604 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2890 "parser.c"
    break;

  case 224: /* atom_expr: opt_await atom  */
#line 605 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2896 "parser.c"
    break;

  case 225: /* atom: LPAR RPAR  */
#line 611 "parser.y"
                { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2902 "parser.c"
    break;

  case 226: /* atom: LPAR yield_expr RPAR  */
#line 612 "parser.y"
                           { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2908 "parser.c"
    break;

  case 227: /* atom: LPAR testlist_comp RPAR  */
#line 613 "parser.y"
                              { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2914 "parser.c"
    break;

  case 228: /* atom: LSQB RSQB  */
#line 614 "parser.y"
                { yyval = new_node(LIST_NODE, 0, NO_TYPE); }
#line 2920 "parser.c"
    break;

  case 229: /* atom: LSQB subscriptlist RSQB  */
#line 616 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 2926 "parser.c"
    break;

  case 230: /* atom: LBRACE RBRACE  */
#line 617 "parser.y"
                    { yyval = new_node(DICT_NODE, 0, NO_TYPE); }
#line 2932 "parser.c"
    break;

  case 231: /* atom: LBRACE dictorsetmaker RBRACE  */
#line 618 "parser.y"
                                   { yyval = new_subtree(DICT_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2938 "parser.c"
    break;

  case 232: /* atom: NAME  */
#line 619 "parser.y"
           { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2944 "parser.c"
    break;

  case 233: /* atom: NUMBER  */
#line 620 "parser.y"
             { yyval = new_node(NUMBER_NODE, 0, NO_TYPE); }
#line 2950 "parser.c"
    break;

  case 234: /* atom: string_plus  */
#line 621 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2956 "parser.c"
    break;

  case 235: /* atom: ELLIPSIS  */
#line 622 "parser.y"
               { yyval = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
#line 2962 "parser.c"
    break;

  case 236: /* atom: NONE  */
#line 623 "parser.y"
           { yyval = new_node(NONE_NODE, 0, NO_TYPE); }
#line 2968 "parser.c"
    break;

  case 237: /* atom: TRUE  */
#line 624 "parser.y"
           { yyval = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
#line 2974 "parser.c"
    break;

  case 238: /* atom: FALSE  */
#line 625 "parser.y"
            { yyval = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
#line 2980 "parser.c"
    break;

  case 240: /* testlist_comp: testlist  */
#line 637 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2986 "parser.c"
    break;

  case 241: /* trailer: LPAR RPAR  */
#line 641 "parser.y"
                   { yyval = new_node(ARGLIST_NODE, 0, NO_TYPE); }
#line 2992 "parser.c"
    break;

  case 242: /* trailer: LPAR arglist RPAR  */
#line 642 "parser.y"
                           { yyval = yyvsp[-1]; }
#line 2998 "parser.c"
    break;

  case 243: /* trailer: LSQB subscriptlist RSQB  */
#line 643 "parser.y"
                                 { yyval = yyvsp[-1]; }
#line 3004 "parser.c"
    break;

  case 244: /* trailer: DOT NAME  */
#line 644 "parser.y"
                  { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 3010 "parser.c"
    break;

  case 245: /* subscriptlist: subscript COMMA subscriptlist  */
#line 649 "parser.y"
                                             { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; printf("Adiciona comma subscript\n");}
#line 3016 "parser.c"
    break;

  case 246: /* subscriptlist: subscript opt_comma  */
#line 650 "parser.y"
                                   { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); printf("Fecha recursão subscript"); }
#line 3022 "parser.c"
    break;

  case 250: /* exprlist: expr COMMA exprlist  */
#line 663 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3028 "parser.c"
    break;

  case 251: /* exprlist: expr opt_comma  */
#line 664 "parser.y"
                         { yyval = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3034 "parser.c"
    break;

  case 252: /* testlist: test COMMA testlist  */
#line 670 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3040 "parser.c"
    break;

  case 253: /* testlist: test opt_comma  */
#line 671 "parser.y"
                         { yyval = new_subtree(TESTLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3046 "parser.c"
    break;

  case 262: /* $@7: %empty  */
#line 691 "parser.y"
                     { new_var(); }
#line 3052 "parser.c"
    break;

  case 264: /* arglist: argument1 COMMA arglist  */
#line 697 "parser.y"
                                 { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 3058 "parser.c"
    break;

  case 265: /* arglist: argument1 opt_comma  */
#line 698 "parser.y"
                             { yyval = new_subtree(ARGLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 3064 "parser.c"
    break;


#line 3068 "parser.c"

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

#line 738 "parser.y"


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

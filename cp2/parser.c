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
#include "parser.h"

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

extern char *yytext;
extern int yylineno;

StrTable *st;
VarTable *vt;

#line 90 "parser.c"

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
  YYSYMBOL_150_1 = 150,                    /* $@1  */
  YYSYMBOL_parameters = 151,               /* parameters  */
  YYSYMBOL_arguments = 152,                /* arguments  */
  YYSYMBOL_argument = 153,                 /* argument  */
  YYSYMBOL_typedargslist = 154,            /* typedargslist  */
  YYSYMBOL_tfpdef = 155,                   /* tfpdef  */
  YYSYMBOL_156_2 = 156,                    /* $@2  */
  YYSYMBOL_stmt = 157,                     /* stmt  */
  YYSYMBOL_simple_stmt = 158,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 159,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 160,                /* expr_stmt  */
  YYSYMBOL_annassign = 161,                /* annassign  */
  YYSYMBOL_testlist_star_expr = 162,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 163,                /* augassign  */
  YYSYMBOL_del_stmt = 164,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 165,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 166,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 167,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 168,            /* continue_stmt  */
  YYSYMBOL_return_stmt = 169,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 170,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 171,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 172,              /* import_stmt  */
  YYSYMBOL_import_name = 173,              /* import_name  */
  YYSYMBOL_import_from = 174,              /* import_from  */
  YYSYMBOL_from_part = 175,                /* from_part  */
  YYSYMBOL_import_part = 176,              /* import_part  */
  YYSYMBOL_import_as_name = 177,           /* import_as_name  */
  YYSYMBOL_178_3 = 178,                    /* $@3  */
  YYSYMBOL_dotted_as_name = 179,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 180,          /* import_as_names  */
  YYSYMBOL_dotted_as_names = 181,          /* dotted_as_names  */
  YYSYMBOL_dotted_name = 182,              /* dotted_name  */
  YYSYMBOL_global_stmt = 183,              /* global_stmt  */
  YYSYMBOL_184_4 = 184,                    /* $@4  */
  YYSYMBOL_nonlocal_stmt = 185,            /* nonlocal_stmt  */
  YYSYMBOL_186_5 = 186,                    /* $@5  */
  YYSYMBOL_assert_stmt = 187,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 188,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 189,               /* async_stmt  */
  YYSYMBOL_if_stmt = 190,                  /* if_stmt  */
  YYSYMBOL_while_stmt = 191,               /* while_stmt  */
  YYSYMBOL_for_stmt = 192,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 193,                 /* try_stmt  */
  YYSYMBOL_with_stmt = 194,                /* with_stmt  */
  YYSYMBOL_with_item = 195,                /* with_item  */
  YYSYMBOL_except_clause = 196,            /* except_clause  */
  YYSYMBOL_suite = 197,                    /* suite  */
  YYSYMBOL_namedexpr_test = 198,           /* namedexpr_test  */
  YYSYMBOL_test = 199,                     /* test  */
  YYSYMBOL_test_nocond = 200,              /* test_nocond  */
  YYSYMBOL_lambdef = 201,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 202,           /* lambdef_nocond  */
  YYSYMBOL_or_test = 203,                  /* or_test  */
  YYSYMBOL_and_test = 204,                 /* and_test  */
  YYSYMBOL_not_test = 205,                 /* not_test  */
  YYSYMBOL_comparison = 206,               /* comparison  */
  YYSYMBOL_comp_op = 207,                  /* comp_op  */
  YYSYMBOL_star_expr = 208,                /* star_expr  */
  YYSYMBOL_expr = 209,                     /* expr  */
  YYSYMBOL_xor_expr = 210,                 /* xor_expr  */
  YYSYMBOL_and_expr = 211,                 /* and_expr  */
  YYSYMBOL_shift_expr = 212,               /* shift_expr  */
  YYSYMBOL_arith_expr = 213,               /* arith_expr  */
  YYSYMBOL_term = 214,                     /* term  */
  YYSYMBOL_factor = 215,                   /* factor  */
  YYSYMBOL_power = 216,                    /* power  */
  YYSYMBOL_atom_expr = 217,                /* atom_expr  */
  YYSYMBOL_atom = 218,                     /* atom  */
  YYSYMBOL_testlist_comp = 219,            /* testlist_comp  */
  YYSYMBOL_trailer = 220,                  /* trailer  */
  YYSYMBOL_subscriptlist = 221,            /* subscriptlist  */
  YYSYMBOL_subscript = 222,                /* subscript  */
  YYSYMBOL_sliceop = 223,                  /* sliceop  */
  YYSYMBOL_exprlist = 224,                 /* exprlist  */
  YYSYMBOL_testlist = 225,                 /* testlist  */
  YYSYMBOL_dictorsetmaker = 226,           /* dictorsetmaker  */
  YYSYMBOL_dictorsetmaker1 = 227,          /* dictorsetmaker1  */
  YYSYMBOL_dictorsetmaker2 = 228,          /* dictorsetmaker2  */
  YYSYMBOL_classdef = 229,                 /* classdef  */
  YYSYMBOL_230_6 = 230,                    /* $@6  */
  YYSYMBOL_arglist = 231,                  /* arglist  */
  YYSYMBOL_argument1 = 232,                /* argument1  */
  YYSYMBOL_comp_iter = 233,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 234,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 235,                 /* comp_for  */
  YYSYMBOL_comp_if = 236,                  /* comp_if  */
  YYSYMBOL_yield_expr = 237,               /* yield_expr  */
  YYSYMBOL_yield_arg = 238,                /* yield_arg  */
  YYSYMBOL_func_body_suite = 239           /* func_body_suite  */
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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   981

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  147
/* YYNRULES -- Number of rules.  */
#define YYNRULES  319
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  500

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
       0,    35,    35,    36,    37,    40,    41,    42,    45,    46,
      49,    50,    53,    54,    57,    58,    61,    62,    65,    66,
      69,    70,    73,    74,    77,    78,    81,    82,    83,    84,
      87,    88,    89,    92,    93,    94,    97,    98,   101,   102,
     105,   106,   109,   110,   113,   114,   117,   118,   121,   122,
     125,   126,   129,   130,   133,   134,   137,   138,   141,   142,
     145,   146,   149,   150,   153,   154,   157,   158,   161,   162,
     165,   166,   169,   170,   173,   174,   177,   178,   179,   182,
     183,   184,   187,   188,   189,   190,   191,   192,   195,   196,
     199,   200,   203,   204,   207,   208,   209,   212,   213,   216,
     217,   220,   221,   224,   225,   226,   229,   230,   233,   234,
     235,   238,   239,   242,   243,   248,   253,   256,   259,   262,
     263,   264,   267,   270,   270,   273,   274,   277,   280,   283,
     286,   286,   291,   292,   295,   298,   299,   300,   301,   302,
     303,   304,   305,   308,   309,   310,   311,   312,   315,   318,
     319,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   337,   340,   343,   344,   345,   346,
     347,   350,   353,   356,   359,   362,   363,   364,   367,   368,
     371,   374,   385,   386,   387,   390,   391,   392,   395,   395,
     398,   401,   404,   407,   410,   410,   413,   413,   416,   419,
     420,   421,   422,   423,   424,   425,   426,   427,   430,   431,
     432,   435,   438,   441,   444,   445,   448,   451,   454,   457,
     458,   461,   464,   465,   466,   469,   470,   473,   477,   481,
     484,   487,   488,   491,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   506,   509,   512,   515,   518,   521,
     524,   527,   528,   529,   530,   533,   534,   537,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   553,   556,   557,   558,   559,   562,   563,   564,   565,
     568,   571,   572,   575,   578,   581,   584,   585,   588,   589,
     590,   591,   594,   595,   596,   597,   600,   600,   603,   606,
     607,   608,   609,   610,   611,   614,   615,   618,   619,   622,
     623,   626,   627,   630,   631,   634,   635,   638,   639,   640
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
  "$@1", "parameters", "arguments", "argument", "typedargslist", "tfpdef",
  "$@2", "stmt", "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "$@3", "dotted_as_name", "import_as_names",
  "dotted_as_names", "dotted_name", "global_stmt", "$@4", "nonlocal_stmt",
  "$@5", "assert_stmt", "compound_stmt", "async_stmt", "if_stmt",
  "while_stmt", "for_stmt", "try_stmt", "with_stmt", "with_item",
  "except_clause", "suite", "namedexpr_test", "test", "test_nocond",
  "lambdef", "lambdef_nocond", "or_test", "and_test", "not_test",
  "comparison", "comp_op", "star_expr", "expr", "xor_expr", "and_expr",
  "shift_expr", "arith_expr", "term", "factor", "power", "atom_expr",
  "atom", "testlist_comp", "trailer", "subscriptlist", "subscript",
  "sliceop", "exprlist", "testlist", "dictorsetmaker", "dictorsetmaker1",
  "dictorsetmaker2", "classdef", "$@6", "arglist", "argument1",
  "comp_iter", "sync_comp_for", "comp_for", "comp_if", "yield_expr",
  "yield_arg", "func_body_suite", YY_NULLPTR
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

#define YYTABLE_NINF (-314)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -403,   311,    53,  -403,  -403,   169,    23,    10,  -403,  -403,
      59,  -403,    92,    95,    95,    30,   103,   169,    10,   144,
      95,  -403,   107,   126,  -403,    95,   138,   305,    95,    95,
     153,   169,   169,   218,   181,   820,  -403,   146,  -403,  -403,
    -403,  -403,  -403,  -403,    74,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,   160,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,   185,  -403,  -403,  -403,   189,  -403,  -403,  -403,  -403,
     190,  -403,  -403,  -403,  -403,   188,  -403,  -403,   175,  -403,
    -403,   224,   225,  -403,  -403,   237,   169,  -403,  -403,  -403,
    -403,   209,  -403,  -403,  -403,  -403,   772,  -403,   252,   244,
     169,  -403,  -403,  -403,  -403,  -403,   869,   395,    13,  -403,
    -403,  -403,  -403,  -403,   179,  -403,   241,  -403,  -403,  -403,
     187,  -403,    29,  -403,   169,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,    14,  -403,    35,   249,
     126,   208,   269,   249,   919,   210,   191,   270,    -7,     3,
      39,    95,   169,  -403,   256,   516,   232,   190,   242,   282,
     169,    -8,  -403,   772,   169,  -403,   284,   248,  -403,  -403,
    -403,   169,   262,  -403,   101,    46,    95,  -403,   772,  -403,
    -403,    44,    44,   235,    95,  -403,   174,    44,   238,  -403,
    -403,  -403,   233,   240,  -403,    83,  -403,   835,   254,  -403,
    -403,   303,    29,  -403,  -403,  -403,  -403,  -403,   404,  -403,
     285,   126,   126,  -403,  -403,  -403,  -403,  -403,   255,  -403,
    -403,  -403,   281,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,  -403,  -403,   272,   169,
    -403,   169,   259,   257,  -403,  -403,   312,    56,   323,   464,
    -403,   318,   280,  -403,  -403,  -403,  -403,  -403,   319,  -403,
    -403,    10,  -403,   319,  -403,   736,    24,   320,   157,   324,
     253,   169,  -403,   313,   309,    95,   328,  -403,  -403,   328,
    -403,  -403,    44,   169,   249,  -403,   249,  -403,  -403,  -403,
    -403,   293,   506,   598,  -403,  -403,  -403,    29,  -403,  -403,
    -403,   336,  -403,  -403,   169,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,   169,   169,  -403,  -403,   337,
     772,  -403,  -403,  -403,  -403,   286,   350,   169,   345,  -403,
    -403,   253,   289,   237,   354,   322,   106,  -403,   490,  -403,
    -403,   237,   772,   358,   340,   364,   772,   772,  -403,  -403,
    -403,   341,   344,  -403,  -403,   368,  -403,    44,  -403,  -403,
    -403,   371,   374,   321,  -403,  -403,   326,  -403,  -403,   640,
    -403,  -403,  -403,  -403,   -25,  -403,  -403,   377,   383,  -403,
     169,  -403,  -403,   253,   772,  -403,  -403,   280,  -403,  -403,
     169,  -403,  -403,  -403,  -403,  -403,   772,   387,  -403,   772,
    -403,  -403,   126,  -403,  -403,   739,  -403,   368,  -403,   722,
    -403,   391,  -403,  -403,   355,   169,  -403,   253,  -403,   871,
     313,  -403,   389,  -403,   772,  -403,    36,    95,   397,  -403,
     398,  -403,   897,  -403,  -403,  -403,    12,  -403,  -403,  -403,
     772,  -403,   183,  -403,  -403,  -403,  -403,   169,   152,  -403,
    -403,  -403,   736,   362,  -403,   406,    36,  -403,  -403,  -403,
    -403,   572,   380,   183,  -403,  -403,   736,  -403,   654,  -403
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    88,     0,   115,   116,    88,     0,     0,    89,   171,
       0,   172,     0,    88,    88,     0,     0,    88,     0,     0,
      88,     3,     0,    88,   165,    88,    88,    88,    88,    88,
       0,    88,    88,    88,   118,     0,     8,     0,   206,   204,
       4,   132,    22,   135,   146,   136,   137,   138,   166,   167,
     168,   170,   169,   139,   178,   179,   140,   141,   142,   133,
     207,   199,   200,   201,   202,   203,    33,   224,   222,    64,
      66,   232,    33,    68,    70,    72,    74,    76,    79,    82,
     254,   255,   205,   174,     1,    48,   208,   210,   209,    44,
       5,   296,   123,   103,   164,     0,   182,   183,     0,   184,
     194,     0,    62,    42,   180,    38,    88,   252,   196,   231,
     251,   176,   173,    37,   244,   253,    88,    54,    56,     0,
      88,   316,   314,     9,   268,   271,    88,    88,    88,   265,
     269,   266,    92,   270,   267,    90,     0,   121,   120,   119,
      24,   157,    88,   154,    88,   163,   162,   160,   152,   158,
     156,   151,   161,   155,   153,   159,    12,   143,    88,    18,
      88,   229,   230,    18,   233,   245,   246,   247,   248,   249,
     250,    88,    88,   198,   193,    88,     0,     5,     0,    18,
      88,     0,    46,    88,    88,   221,   192,     0,   190,   227,
      46,    88,     0,   219,     0,     0,    88,   217,    88,   315,
     261,    94,    94,     0,    88,   263,    33,    33,     0,   286,
     287,   258,     0,     0,    93,   257,   122,    88,     0,    27,
      26,    30,    88,    13,   147,   106,   145,   144,    19,   149,
       0,    88,    88,   150,   236,   237,   235,   240,   242,   238,
     234,   239,     0,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,   256,    49,     0,    88,
       6,    88,   299,     0,    14,   117,     0,     0,    10,    88,
     284,     0,     0,   188,   185,   181,    40,   187,   195,    50,
      63,     0,    39,   197,   177,    88,    88,     0,    52,     0,
      12,    88,    57,    52,     0,    88,    18,   309,   272,    18,
     274,   262,   108,    88,    18,   292,    18,   294,   264,   260,
     259,     0,    88,    88,    91,    23,   134,    88,   148,    29,
      28,    18,    34,    35,    88,    65,    67,   243,   241,    69,
      71,    73,    75,    77,    78,    81,    80,    84,    87,    86,
      85,    83,    45,   303,   304,    88,    88,   300,     7,    18,
      88,   130,   125,   129,    14,     0,    16,    88,     0,   105,
     104,    12,     0,    38,    18,     0,    52,    43,    88,    60,
     218,    38,    88,     0,   113,     0,    88,    88,    55,   212,
     310,     0,    88,   273,   275,    18,   290,   108,   293,   295,
     279,     0,   281,     0,    97,   276,     0,    32,    31,    88,
     285,   223,   302,   301,    12,   298,   297,    20,   127,   126,
      88,   128,    11,    12,    88,   186,   189,    19,   191,    47,
      88,   211,   220,    61,    59,   215,    88,     0,   214,    88,
     111,   216,    88,    95,    96,    88,   291,    18,   288,    88,
     278,    18,   277,   107,     0,    88,   131,    12,    17,    88,
      52,    41,     0,    53,    88,   112,   307,    88,     0,   289,
     101,   100,    88,   280,    15,    21,     0,   317,   124,   213,
      88,   114,    88,   308,   305,   306,   110,    88,    88,   282,
     102,    98,    88,     0,    51,     0,   311,   226,   225,   109,
     283,    88,     0,    88,   312,   318,    88,   228,    88,   319
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -403,  -403,   250,  -403,  -403,  -147,    58,  -403,  -146,  -403,
    -403,  -403,  -403,  -403,   -60,  -403,  -303,  -403,  -403,  -403,
     231,  -403,  -403,  -274,  -403,  -403,  -403,  -368,  -403,  -403,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,   227,  -403,  -402,  -403,  -403,  -403,    43,  -403,  -403,
    -403,  -403,   392,  -403,  -403,  -403,     9,  -403,  -403,  -403,
     -11,  -403,  -403,  -403,     0,    -1,   214,  -403,  -403,   -20,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,
    -403,  -403,  -403,  -403,    17,  -403,   156,   168,  -403,   167,
    -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,  -403,   433,
    -403,   437,   154,   158,  -172,   -12,    -3,   -49,  -403,  -403,
    -154,   222,   -13,  -403,  -403,   -96,   -10,   211,   212,   215,
     -21,   -15,    -4,  -403,  -403,  -403,   334,  -403,  -403,     5,
    -403,    -6,   290,  -403,  -403,  -403,   432,  -403,   159,  -403,
      -9,   177,  -167,  -403,  -106,  -403,  -403
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   176,    34,   358,   444,   349,   411,   229,   446,
     140,   218,   156,   318,   159,   112,   188,   364,   186,   174,
     278,   173,   366,   374,   195,   197,   370,   368,   185,   161,
     162,   164,   165,   166,   167,   168,   169,   170,    35,   215,
     134,   296,   441,   391,   479,   179,   321,   385,   288,   428,
       2,     3,    36,    37,    38,   137,    39,   178,   268,   353,
     354,   355,   356,   407,   369,   193,    42,    43,   157,    44,
     158,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    98,   275,   276,   363,   103,   277,   104,   105,
      56,   182,    57,   190,    58,    59,    60,    61,    62,    63,
      64,    65,   117,   289,   194,   201,    66,   486,    67,   487,
      68,    69,    70,    71,   243,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,   135,   203,   314,   393,   394,
     480,    94,   226,   208,   209,   210,    82,   177,   263,   264,
     473,   297,   474,   475,    83,   122,   468
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    40,    85,    93,    93,   101,   230,   113,    95,   224,
     109,   279,   163,   121,   102,    86,   107,   233,   114,   379,
     119,   110,   213,   111,   222,   115,   293,     8,   118,   102,
     202,   207,   202,   270,   298,   300,   220,   460,     8,   305,
     307,   -58,   272,     8,   247,    12,   138,   294,   273,     8,
     -19,   251,   227,    84,    96,   294,   482,   249,    14,    19,
     416,    97,   223,   290,   252,   291,    89,    20,   424,   248,
      19,   295,   250,   274,    23,    19,   490,   472,    20,   295,
     141,    19,    25,    20,   142,    23,    89,   143,   211,    20,
      23,   144,   421,    25,    28,   347,    23,    29,    25,   483,
     145,   223,   146,   189,    25,    33,   253,   311,    29,     8,
      28,    31,   351,    29,   491,    91,   320,   199,   254,    29,
     255,    33,   219,   102,   206,   102,   147,    33,   498,   148,
     312,   352,   323,   313,   286,   386,   420,   287,   373,   149,
       8,   221,   150,   377,   151,   216,   304,   306,    92,    20,
     383,   152,     8,   384,   153,   225,   154,   136,   388,   100,
     389,   106,    10,   108,    25,   155,     8,   256,    12,   257,
     116,   -99,   262,   359,    90,   400,   469,   225,   406,    29,
      20,   280,    99,     8,    19,   294,   292,    23,   284,   373,
     286,   303,    20,     7,   302,    25,  -175,     8,    19,    23,
     425,   160,   319,   405,   430,   431,    20,    25,   172,   295,
      29,   398,   171,    23,   414,    19,  -175,   181,   418,   326,
     438,    25,    29,    20,   -99,   322,   333,   334,  -313,   485,
      23,   180,     8,   329,   335,   336,    29,    20,    25,   436,
     175,   183,   450,   184,    23,   187,   191,   337,   338,   339,
     340,   341,    25,    29,   453,   120,   343,   455,   344,   360,
     196,   198,   214,    12,    19,   217,   449,    29,   228,   345,
     294,   231,    20,   232,   244,   246,  -313,   346,   456,    23,
     258,   245,   471,   371,    41,    93,   434,    25,   118,   381,
     265,   459,   267,  -313,   295,   463,  -313,   397,   484,    28,
     387,   269,    29,   281,   282,  -313,   285,   301,   309,   392,
     262,   308,   316,   317,     4,   310,   327,   324,   488,     8,
       5,   401,     6,     7,   328,     8,     9,    10,   342,   350,
     357,    11,   348,    12,    13,   361,   273,   372,   365,   488,
     223,   376,   402,   403,   295,   373,    14,   382,    15,   390,
      16,    19,    17,    18,   412,   399,   404,    19,     8,    20,
     410,   409,   413,   -36,   415,    20,    23,    41,   423,    21,
     433,    22,    23,   417,    25,   426,   427,    24,   419,   102,
      25,   429,    26,   -36,   432,    27,    28,   435,   439,    29,
      19,  -100,    28,   440,   445,    29,   443,    30,    20,    31,
      32,   442,   447,    33,   454,    23,   470,   448,   452,     8,
     462,   351,   408,    25,   477,   478,   -19,   102,     8,   -19,
     492,   283,   204,   493,   496,    28,   123,   266,    29,   299,
     437,   315,   458,   464,   451,   -88,   461,   367,   -88,    87,
     362,    19,   465,    88,   497,   378,   375,   476,   467,    20,
      19,   -88,   -88,   325,   -88,   330,    23,   331,    20,   392,
     -88,   332,   212,   -88,    25,    23,   -88,   481,   205,   139,
     271,   380,   396,    25,   489,   461,    28,   494,     8,    29,
       0,    41,     0,     0,     0,    28,     0,   -88,    29,   -88,
      41,   423,     0,     0,     0,    41,     0,    41,   423,     5,
       0,     6,     7,     0,     8,     9,    10,   -19,     0,     0,
      11,   422,    12,    13,     0,     0,     0,     0,    20,     0,
       8,     0,   -19,   -99,     0,    14,     0,    15,     0,    16,
       8,    17,    18,    25,     0,     0,    19,     0,     0,     0,
       0,     0,   -19,   259,    20,    28,     0,     0,    29,     0,
      22,    23,    19,     0,     0,     0,    24,     0,     0,    25,
      20,    26,    19,     0,    27,     0,     0,    23,     0,     0,
      20,    28,     0,     0,    29,    25,    30,    23,    31,    32,
       0,     5,    33,     6,     7,    25,     8,     9,    10,     0,
      29,   260,    11,   495,    12,    13,     0,   261,     0,     0,
      29,     0,     0,     0,     0,     0,     0,    14,     0,    15,
       0,    16,     8,    17,    18,     0,     0,     0,    19,     0,
       0,     0,     0,     0,     0,   259,    20,     0,     0,     0,
       0,     0,    22,    23,     0,     0,     0,     0,    24,     0,
       0,    25,     0,    26,    19,     0,    27,     0,     0,     0,
       0,     0,    20,    28,     8,     0,    29,   -19,    30,    23,
      31,    32,     0,     5,    33,     6,     7,    25,     8,     9,
      10,     0,     0,   395,    11,   499,    12,    13,     0,   261,
       0,     0,    29,     0,     0,     0,    19,     0,     0,    14,
       0,    15,     0,    16,    20,    17,    18,     0,   -19,     0,
      19,    23,     0,     0,     0,     0,     0,     0,    20,    25,
       0,     0,     0,     0,    22,    23,     0,     0,   -19,     0,
      24,     0,     0,    25,    29,    26,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    28,     8,     0,    29,   -99,
      30,   -99,    31,    32,     0,     5,    33,     6,     7,     0,
       8,     9,    10,     8,     0,     0,    11,     0,    12,    13,
       0,     0,     0,     0,     0,     0,   457,     0,    19,     0,
       0,    14,     0,    15,     0,    16,    20,    17,    18,     0,
       0,     5,    19,    23,     0,    19,     8,     9,     0,     0,
      20,    25,    11,    20,   -99,    13,    22,    23,     0,     0,
      23,     0,    24,     0,     0,    25,    29,    26,    25,    15,
      27,    16,   -19,     0,    18,     0,     0,    28,    19,     0,
      29,     0,    30,    29,    31,    32,    20,     0,    33,     0,
     192,     0,    22,    23,     0,     0,     0,     0,    24,     0,
       0,    25,     0,    26,     5,     0,    27,     0,     0,     8,
       9,   124,     0,    28,   125,    11,    29,     0,    13,     0,
       0,     0,     0,     0,    33,     0,     0,   126,   127,     0,
     128,     0,    15,     0,    16,     0,   129,    18,     0,   130,
       5,    19,   131,     8,     0,     8,     9,     0,     0,    20,
       0,    11,     0,   -25,    13,    22,    23,     0,     0,     0,
       0,    24,     0,   132,    25,   133,    26,     0,    15,    27,
      16,     8,     0,    18,   -99,    19,    28,    19,     0,    29,
       0,     0,     0,    20,     0,    20,     0,    33,     0,   466,
      23,    22,    23,     0,     0,     0,     0,    24,    25,     0,
      25,   200,    26,    19,     0,    27,     0,     0,   234,     0,
      28,    20,    28,    29,     0,    29,     0,   235,    23,   236,
       0,     0,   237,    33,   238,     0,    25,     0,   239,   -19,
       0,     0,   240,     0,     0,     0,   241,     0,     0,     0,
     242,    29
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    13,    14,    17,   160,    27,    14,   156,
      23,   183,    72,    33,    17,     6,    20,   163,    28,   293,
      32,    25,   128,    26,    10,    29,   198,    14,    31,    32,
     126,   127,   128,   179,   201,   202,   142,   439,    14,   206,
     207,    17,    50,    14,    51,    22,    37,    11,    56,    14,
      75,    12,   158,     0,    24,    11,    44,    54,    35,    46,
     363,    31,    87,    17,    25,    19,    56,    54,   371,    76,
      46,    35,    69,    81,    61,    46,   478,    41,    54,    35,
       6,    46,    69,    54,    10,    61,    56,    13,    75,    54,
      61,    17,   366,    69,    81,   262,    61,    84,    69,    87,
      26,    87,    28,   106,    69,    92,    67,    24,    84,    14,
      81,    88,    56,    84,   482,    56,   222,   120,    79,    84,
      81,    92,   142,   126,   127,   128,    52,    92,   496,    55,
      47,    75,   228,    50,    33,   302,    30,    36,    32,    65,
      14,   144,    68,   290,    70,   136,   206,   207,    56,    54,
     296,    77,    14,   299,    80,   158,    82,    11,   304,    56,
     306,    17,    16,    56,    69,    91,    14,   171,    22,   172,
      17,    19,   175,   269,     7,   321,   450,   180,   350,    84,
      54,   184,    15,    14,    46,    11,   196,    61,   191,    32,
      33,    17,    54,    12,   204,    69,    58,    14,    46,    61,
     372,    41,   222,   349,   376,   377,    54,    69,    19,    35,
      84,   317,    27,    61,   361,    46,    78,    42,   364,   232,
     387,    69,    84,    54,    72,   228,   247,   248,    10,    46,
      61,    43,    14,   243,   249,   250,    84,    54,    69,   385,
      50,    17,   414,    18,    61,     8,    37,   251,   252,   253,
     254,   255,    69,    84,   426,    37,   259,   429,   261,   269,
       8,    17,    83,    22,    46,    78,   413,    84,    19,    10,
      11,    63,    54,     4,    64,     5,    58,    18,   432,    61,
      24,    90,   454,   286,   285,   295,   382,    69,   291,   295,
      58,   437,    50,    75,    35,   441,    78,   317,   470,    81,
     303,    19,    84,    19,    56,    87,    44,    72,    75,   312,
     313,    73,    58,    10,     3,    75,    61,    32,   472,    14,
       9,   324,    11,    12,    43,    14,    15,    16,    56,    17,
       7,    20,    75,    22,    23,    17,    56,    17,    19,   493,
      87,    17,   345,   346,    35,    32,    35,    19,    37,    56,
      39,    46,    41,    42,   357,    19,    19,    46,    14,    54,
      10,    75,    17,    58,    75,    54,    61,   368,   368,    58,
     382,    60,    61,    19,    69,    17,    36,    66,    56,   382,
      69,    17,    71,    78,    43,    74,    81,    19,    17,    84,
      46,    17,    81,    72,    17,    84,   399,    86,    54,    88,
      89,    75,    19,    92,    17,    61,    17,   410,   420,    14,
      19,    56,   354,    69,    17,    17,    72,   420,    14,    75,
      58,   190,    27,    17,    44,    81,    34,   177,    84,   202,
     387,   217,   435,   444,   417,    31,   439,   281,    34,     6,
     272,    46,   445,     6,   493,   291,   288,   457,   449,    54,
      46,    47,    48,   231,    50,   244,    61,   245,    54,   462,
      56,   246,   128,    59,    69,    61,    62,   462,    73,    37,
     180,   294,   313,    69,   477,   478,    81,   486,    14,    84,
      -1,   482,    -1,    -1,    -1,    81,    -1,    83,    84,    85,
     491,   491,    -1,    -1,    -1,   496,    -1,   498,   498,     9,
      -1,    11,    12,    -1,    14,    15,    16,    43,    -1,    -1,
      20,    21,    22,    23,    -1,    -1,    -1,    -1,    54,    -1,
      14,    -1,    58,    17,    -1,    35,    -1,    37,    -1,    39,
      14,    41,    42,    69,    -1,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    78,    27,    54,    81,    -1,    -1,    84,    -1,
      60,    61,    46,    -1,    -1,    -1,    66,    -1,    -1,    69,
      54,    71,    46,    -1,    74,    -1,    -1,    61,    -1,    -1,
      54,    81,    -1,    -1,    84,    69,    86,    61,    88,    89,
      -1,     9,    92,    11,    12,    69,    14,    15,    16,    -1,
      84,    75,    20,    21,    22,    23,    -1,    81,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    39,    14,    41,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    54,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    71,    46,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    54,    81,    14,    -1,    84,    17,    86,    61,
      88,    89,    -1,     9,    92,    11,    12,    69,    14,    15,
      16,    -1,    -1,    75,    20,    21,    22,    23,    -1,    81,
      -1,    -1,    84,    -1,    -1,    -1,    46,    -1,    -1,    35,
      -1,    37,    -1,    39,    54,    41,    42,    -1,    58,    -1,
      46,    61,    -1,    -1,    -1,    -1,    -1,    -1,    54,    69,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    78,    -1,
      66,    -1,    -1,    69,    84,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    14,    -1,    84,    17,
      86,    19,    88,    89,    -1,     9,    92,    11,    12,    -1,
      14,    15,    16,    14,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    46,    -1,
      -1,    35,    -1,    37,    -1,    39,    54,    41,    42,    -1,
      -1,     9,    46,    61,    -1,    46,    14,    15,    -1,    -1,
      54,    69,    20,    54,    72,    23,    60,    61,    -1,    -1,
      61,    -1,    66,    -1,    -1,    69,    84,    71,    69,    37,
      74,    39,    73,    -1,    42,    -1,    -1,    81,    46,    -1,
      84,    -1,    86,    84,    88,    89,    54,    -1,    92,    -1,
      58,    -1,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,    71,     9,    -1,    74,    -1,    -1,    14,
      15,    31,    -1,    81,    34,    20,    84,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    47,    48,    -1,
      50,    -1,    37,    -1,    39,    -1,    56,    42,    -1,    59,
       9,    46,    62,    14,    -1,    14,    15,    -1,    -1,    54,
      -1,    20,    -1,    58,    23,    60,    61,    -1,    -1,    -1,
      -1,    66,    -1,    83,    69,    85,    71,    -1,    37,    74,
      39,    14,    -1,    42,    17,    46,    81,    46,    -1,    84,
      -1,    -1,    -1,    54,    -1,    54,    -1,    92,    -1,    58,
      61,    60,    61,    -1,    -1,    -1,    -1,    66,    69,    -1,
      69,    72,    71,    46,    -1,    74,    -1,    -1,    29,    -1,
      81,    54,    81,    84,    -1,    84,    -1,    38,    61,    40,
      -1,    -1,    43,    92,    45,    -1,    69,    -1,    49,    72,
      -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      61,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   143,   144,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    46,
      54,    58,    60,    61,    66,    69,    71,    74,    81,    84,
      86,    88,    89,    92,    96,   131,   145,   146,   147,   149,
     157,   158,   159,   160,   162,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   183,   185,   187,   188,
     189,   190,   191,   192,   193,   194,   199,   201,   203,   204,
     205,   206,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   229,   237,     0,   199,   149,   192,   194,    56,
     182,    56,    56,   209,   224,   224,    24,    31,   175,   182,
      56,   198,   199,   179,   181,   182,    17,   215,    56,   205,
     215,   199,   108,   162,   209,   215,    17,   195,   199,   198,
      37,   162,   238,   145,    31,    34,    47,    48,    50,    56,
      59,    62,    83,    85,   133,   218,    11,   148,   149,   229,
     103,     6,    10,    13,    17,    26,    28,    52,    55,    65,
      68,    70,    77,    80,    82,    91,   105,   161,   163,   107,
      41,   122,   123,   107,   124,   125,   126,   127,   128,   129,
     130,    27,    19,   114,   112,    50,    95,   230,   150,   138,
      43,    42,   184,    17,    18,   121,   111,     8,   109,   199,
     186,    37,    58,   158,   197,   117,     8,   118,    17,   199,
      72,   198,   208,   219,    27,    73,   199,   208,   226,   227,
     228,    75,   219,   237,    83,   132,   149,    78,   104,   162,
     237,   199,    10,    87,    98,   199,   225,   237,    19,   101,
     203,    63,     4,   101,    29,    38,    40,    43,    45,    49,
      53,    57,    61,   207,    64,    90,     5,    51,    76,    54,
      69,    12,    25,    67,    79,    81,   215,   199,    24,    27,
      75,    81,   199,   231,   232,    58,    95,    50,   151,    19,
     101,   225,    50,    56,    81,   176,   177,   180,   113,   197,
     199,    19,    56,   113,   199,    44,    33,    36,   141,   196,
      17,    19,   209,   197,    11,    35,   134,   234,   235,   134,
     235,    72,   209,    17,   107,   235,   107,   235,    73,    75,
      75,    24,    47,    50,   220,   159,    58,    10,   106,   162,
     237,   139,   199,   208,    32,   204,   205,    61,    43,   209,
     210,   211,   212,   213,   213,   214,   214,   215,   215,   215,
     215,   215,    56,   199,   199,    10,    18,   235,    75,    99,
      17,    56,    75,   152,   153,   154,   155,     7,    97,   208,
     209,    17,   180,   178,   110,    19,   115,   179,   120,   157,
     119,   199,    17,    32,   116,   196,    17,    98,   195,   116,
     234,   224,    19,   101,   101,   140,   235,   199,   101,   101,
      56,   136,   199,   221,   222,    75,   231,   162,   237,    19,
     101,   199,   199,   199,    19,   101,   197,   156,    99,    75,
      10,   100,   199,    17,    98,    75,   109,    19,   101,    56,
      30,   116,    21,   157,   109,   197,    17,    36,   142,    17,
     197,   197,    43,   198,   208,    19,   101,   140,   235,    17,
      72,   135,    75,   199,    98,    17,   102,    19,   199,    98,
     197,   177,   198,   197,    17,   197,   203,    27,   199,   101,
     136,   199,    19,   101,   153,   199,    58,   158,   239,   116,
      17,   197,    41,   233,   235,   236,   209,    17,    17,   137,
     223,   222,    44,    87,   197,    46,   200,   202,   203,   199,
     136,   120,    58,    17,   233,    21,    44,   200,   120,    21
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
     147,   147,   148,   150,   149,   151,   151,   152,   153,   154,
     156,   155,   157,   157,   158,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   160,   160,   161,   162,
     162,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   165,   166,   166,   166,   166,
     166,   167,   168,   169,   170,   171,   171,   171,   172,   172,
     173,   174,   175,   175,   175,   176,   176,   176,   178,   177,
     179,   180,   181,   182,   184,   183,   186,   185,   187,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   189,   189,
     189,   190,   191,   192,   193,   193,   194,   195,   196,   197,
     197,   198,   199,   199,   199,   200,   200,   201,   202,   203,
     204,   205,   205,   206,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   215,   215,   215,   216,   216,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,   218,   219,   219,   219,   219,   220,   220,   220,   220,
     221,   222,   222,   223,   224,   225,   226,   226,   227,   227,
     227,   227,   228,   228,   228,   228,   230,   229,   231,   232,
     232,   232,   232,   232,   232,   233,   233,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   239
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
       2,     2,     2,     0,     8,     2,     3,     2,     2,     1,
       0,     3,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     4,     1,     1,
       2,     4,     1,     1,     1,     1,     3,     1,     0,     3,
       2,     3,     2,     2,     0,     4,     0,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     6,     5,     8,     6,     6,     6,     2,     2,     1,
       4,     2,     1,     5,     1,     1,     1,     3,     3,     2,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     3,     3,     2,     3,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     2,     3,     2,     3,     3,     2,
       3,     1,     4,     2,     3,     3,     1,     1,     4,     5,
       3,     4,     2,     3,     2,     3,     0,     6,     3,     1,
       2,     3,     3,     2,     2,     1,     1,     4,     5,     1,
       2,     2,     3,     1,     2,     2,     1,     1,     4,     6
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
  case 39: /* opt_as_name: AS NAME  */
#line 102 "parser.y"
                     { new_var(); }
#line 2334 "parser.c"
    break;

  case 47: /* comma_name_star: comma_name_star COMMA NAME  */
#line 118 "parser.y"
                                            { new_var(); }
#line 2340 "parser.c"
    break;

  case 123: /* $@1: %empty  */
#line 270 "parser.y"
                  { new_var(); }
#line 2346 "parser.c"
    break;

  case 130: /* $@2: %empty  */
#line 286 "parser.y"
             { check_var(); }
#line 2352 "parser.c"
    break;

  case 188: /* $@3: %empty  */
#line 395 "parser.y"
                     { new_var(); }
#line 2358 "parser.c"
    break;

  case 194: /* $@4: %empty  */
#line 410 "parser.y"
                         { new_var(); }
#line 2364 "parser.c"
    break;

  case 196: /* $@5: %empty  */
#line 413 "parser.y"
                             { new_var(); }
#line 2370 "parser.c"
    break;

  case 265: /* atom: NAME  */
#line 547 "parser.y"
           { check_var(); }
#line 2376 "parser.c"
    break;

  case 279: /* trailer: DOT NAME  */
#line 565 "parser.y"
                  { check_var(); }
#line 2382 "parser.c"
    break;

  case 296: /* $@6: %empty  */
#line 600 "parser.y"
                     { new_var(); }
#line 2388 "parser.c"
    break;


#line 2392 "parser.c"

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

#line 643 "parser.y"


void check_var() {
    int idx = lookup_var(vt, yytext);
    if (idx == -1) {
        printf("SEMANTIC ERROR (%d): variable '%s' was not declared.\n",
                yylineno, yytext);
        exit(EXIT_FAILURE);
    }
}

void new_var() {
    int idx = lookup_var(vt, yytext);
    if (idx != -1) {
        printf("SEMANTIC ERROR (%d): variable '%s' already declared at line %d.\n",
                yylineno, yytext, get_line(vt, idx));
        exit(EXIT_FAILURE);
    }
    add_var(vt, yytext, yylineno, NUMBER);
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

    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}

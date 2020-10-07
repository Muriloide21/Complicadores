/* A Bison parser, made by GNU Bison 3.6.4.  */

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
#define YYBISON_VERSION "3.6.4"

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



#line 82 "parser.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FALSE = 258,                   /* FALSE  */
    AWAIT = 259,                   /* AWAIT  */
    ELSE = 260,                    /* ELSE  */
    IMPORT = 261,                  /* IMPORT  */
    PASS = 262,                    /* PASS  */
    NONE = 263,                    /* NONE  */
    BREAK = 264,                   /* BREAK  */
    EXCEPT = 265,                  /* EXCEPT  */
    IN = 266,                      /* IN  */
    RAISE = 267,                   /* RAISE  */
    TRUE = 268,                    /* TRUE  */
    CLASS = 269,                   /* CLASS  */
    FINALLY = 270,                 /* FINALLY  */
    IS = 271,                      /* IS  */
    RETURN = 272,                  /* RETURN  */
    AND = 273,                     /* AND  */
    CONTINUE = 274,                /* CONTINUE  */
    FOR = 275,                     /* FOR  */
    LAMBDA = 276,                  /* LAMBDA  */
    TRY = 277,                     /* TRY  */
    AS = 278,                      /* AS  */
    DEF = 279,                     /* DEF  */
    FROM = 280,                    /* FROM  */
    NONLOCAL = 281,                /* NONLOCAL  */
    WHILE = 282,                   /* WHILE  */
    ASSERT = 283,                  /* ASSERT  */
    DEL = 284,                     /* DEL  */
    GLOBAL = 285,                  /* GLOBAL  */
    NOT = 286,                     /* NOT  */
    WITH = 287,                    /* WITH  */
    ASYNC = 288,                   /* ASYNC  */
    ELIF = 289,                    /* ELIF  */
    IF = 290,                      /* IF  */
    YIELD = 291,                   /* YIELD  */
    EQEQUAL = 292,                 /* EQEQUAL  */
    NOTEQUAL = 293,                /* NOTEQUAL  */
    LEFTSHIFT = 294,               /* LEFTSHIFT  */
    RIGHTSHIFT = 295,              /* RIGHTSHIFT  */
    LESSEQUAL = 296,               /* LESSEQUAL  */
    GREATEREQUAL = 297,            /* GREATEREQUAL  */
    LESS = 298,                    /* LESS  */
    GREATER = 299,                 /* GREATER  */
    TILDE = 300,                   /* TILDE  */
    PERCENT = 301,                 /* PERCENT  */
    VBAR = 302,                    /* VBAR  */
    AMPER = 303,                   /* AMPER  */
    DOUBLESLASH = 304,             /* DOUBLESLASH  */
    SLASH = 305,                   /* SLASH  */
    DOUBLESTAR = 306,              /* DOUBLESTAR  */
    STAR = 307,                    /* STAR  */
    MINUS = 308,                   /* MINUS  */
    PLUS = 309,                    /* PLUS  */
    CIRCUMFLEX = 310,              /* CIRCUMFLEX  */
    EQUAL = 311,                   /* EQUAL  */
    COMMA = 312,                   /* COMMA  */
    COLON = 313,                   /* COLON  */
    LPAR = 314,                    /* LPAR  */
    RPAR = 315,                    /* RPAR  */
    LSQB = 316,                    /* LSQB  */
    RSQB = 317,                    /* RSQB  */
    LBRACE = 318,                  /* LBRACE  */
    RBRACE = 319,                  /* RBRACE  */
    AT = 320,                      /* AT  */
    DOT = 321,                     /* DOT  */
    ELLIPSIS = 322,                /* ELLIPSIS  */
    PLUSEQUAL = 323,               /* PLUSEQUAL  */
    MINEQUAL = 324,                /* MINEQUAL  */
    COLONEQUAL = 325,              /* COLONEQUAL  */
    DOUBLESTAREQUAL = 326,         /* DOUBLESTAREQUAL  */
    STAREQUAL = 327,               /* STAREQUAL  */
    DOUBLESLASHEQUAL = 328,        /* DOUBLESLASHEQUAL  */
    SLASHEQUAL = 329,              /* SLASHEQUAL  */
    ATEQUAL = 330,                 /* ATEQUAL  */
    PERCENTEQUAL = 331,            /* PERCENTEQUAL  */
    AMPEREQUAL = 332,              /* AMPEREQUAL  */
    VBAREQUAL = 333,               /* VBAREQUAL  */
    CIRCUMFLEXEQUAL = 334,         /* CIRCUMFLEXEQUAL  */
    RIGHTSHIFTEQUAL = 335,         /* RIGHTSHIFTEQUAL  */
    LEFTSHIFTEQUAL = 336,          /* LEFTSHIFTEQUAL  */
    STRING = 337,                  /* STRING  */
    NAME = 338,                    /* NAME  */
    NUMBER = 339,                  /* NUMBER  */
    INDENT = 340,                  /* INDENT  */
    DEDENT = 341,                  /* DEDENT  */
    ARROW = 342,                   /* ARROW  */
    NEWLINE = 343,                 /* NEWLINE  */
    OR = 344,                      /* OR  */
    TYPE_COMMENT = 345,            /* TYPE_COMMENT  */
    SEMICOLON = 346,               /* SEMICOLON  */
    LOW = 347                      /* LOW  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


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
  YYSYMBOL_LOW = 92,                       /* LOW  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_start_program = 94,             /* start_program  */
  YYSYMBOL_newline_fecho = 95,             /* newline_fecho  */
  YYSYMBOL_opt_arglist = 96,               /* opt_arglist  */
  YYSYMBOL_opt_equal_test = 97,            /* opt_equal_test  */
  YYSYMBOL_opt_comma = 98,                 /* opt_comma  */
  YYSYMBOL_opt_vfpdef = 99,                /* opt_vfpdef  */
  YYSYMBOL_opt_doublestar_vfpdef_comma = 100, /* opt_doublestar_vfpdef_comma  */
  YYSYMBOL_opt_comma_e_o_de_cima = 101,    /* opt_comma_e_o_de_cima  */
  YYSYMBOL_comma_vfpdef_opt_equal_test_kleene = 102, /* comma_vfpdef_opt_equal_test_kleene  */
  YYSYMBOL_opt_menor_varargslist = 103,    /* opt_menor_varargslist  */
  YYSYMBOL_opt_segundo_menor_varargslist = 104, /* opt_segundo_menor_varargslist  */
  YYSYMBOL_opt_terceiro_menor_varargslist = 105, /* opt_terceiro_menor_varargslist  */
  YYSYMBOL_comma_slash = 106,              /* comma_slash  */
  YYSYMBOL_varargslist = 107,              /* varargslist  */
  YYSYMBOL_vfpdef = 108,                   /* vfpdef  */
  YYSYMBOL_comma_or_test_star_expr_kleene = 109, /* comma_or_test_star_expr_kleene  */
  YYSYMBOL_testlist_star_expr = 110,       /* testlist_star_expr  */
  YYSYMBOL_namedexpr_test = 111,           /* namedexpr_test  */
  YYSYMBOL_opt_if_ortest_else_test = 112,  /* opt_if_ortest_else_test  */
  YYSYMBOL_test = 113,                     /* test  */
  YYSYMBOL_test_nocond = 114,              /* test_nocond  */
  YYSYMBOL_opt_varargslist = 115,          /* opt_varargslist  */
  YYSYMBOL_lambdef = 116,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 117,           /* lambdef_nocond  */
  YYSYMBOL_or_and_test_kleene = 118,       /* or_and_test_kleene  */
  YYSYMBOL_or_test = 119,                  /* or_test  */
  YYSYMBOL_and_not_test_kleene = 120,      /* and_not_test_kleene  */
  YYSYMBOL_and_test = 121,                 /* and_test  */
  YYSYMBOL_not_test = 122,                 /* not_test  */
  YYSYMBOL_comp_op_kleene = 123,           /* comp_op_kleene  */
  YYSYMBOL_comparison = 124,               /* comparison  */
  YYSYMBOL_comp_op = 125,                  /* comp_op  */
  YYSYMBOL_star_expr = 126,                /* star_expr  */
  YYSYMBOL_vbar_xor_expr_kleene = 127,     /* vbar_xor_expr_kleene  */
  YYSYMBOL_expr = 128,                     /* expr  */
  YYSYMBOL_circumflex_and_expr_kleene = 129, /* circumflex_and_expr_kleene  */
  YYSYMBOL_xor_expr = 130,                 /* xor_expr  */
  YYSYMBOL_amper_shift_expr_kleene = 131,  /* amper_shift_expr_kleene  */
  YYSYMBOL_and_expr = 132,                 /* and_expr  */
  YYSYMBOL_left_shift_or_right_shift = 133, /* left_shift_or_right_shift  */
  YYSYMBOL_left_shift_or_right_shift_arith_expr_kleene = 134, /* left_shift_or_right_shift_arith_expr_kleene  */
  YYSYMBOL_shift_expr = 135,               /* shift_expr  */
  YYSYMBOL_plus_or_minus_term_kleene = 136, /* plus_or_minus_term_kleene  */
  YYSYMBOL_arith_expr = 137,               /* arith_expr  */
  YYSYMBOL_varias_coisas_factor_kleene = 138, /* varias_coisas_factor_kleene  */
  YYSYMBOL_term = 139,                     /* term  */
  YYSYMBOL_factor = 140,                   /* factor  */
  YYSYMBOL_opt_double_star = 141,          /* opt_double_star  */
  YYSYMBOL_power = 142,                    /* power  */
  YYSYMBOL_opt_await = 143,                /* opt_await  */
  YYSYMBOL_trailer_kleene = 144,           /* trailer_kleene  */
  YYSYMBOL_atom_expr = 145,                /* atom_expr  */
  YYSYMBOL_opt_yieldex_or_testlist_comp = 146, /* opt_yieldex_or_testlist_comp  */
  YYSYMBOL_opt_testlist_comp = 147,        /* opt_testlist_comp  */
  YYSYMBOL_opt_dictorsetmaker = 148,       /* opt_dictorsetmaker  */
  YYSYMBOL_string_plus = 149,              /* string_plus  */
  YYSYMBOL_atom = 150,                     /* atom  */
  YYSYMBOL_or_namedaexpr_test_star_expr = 151, /* or_namedaexpr_test_star_expr  */
  YYSYMBOL_comma_opt_namedaexpr_test_star_expr_kleene = 152, /* comma_opt_namedaexpr_test_star_expr_kleene  */
  YYSYMBOL_comma_subscript_kleene = 153,   /* comma_subscript_kleene  */
  YYSYMBOL_testlist_comp = 154,            /* testlist_comp  */
  YYSYMBOL_trailer = 155,                  /* trailer  */
  YYSYMBOL_subscriptlist = 156,            /* subscriptlist  */
  YYSYMBOL_opt_sliceop = 157,              /* opt_sliceop  */
  YYSYMBOL_subscript = 158,                /* subscript  */
  YYSYMBOL_sliceop = 159,                  /* sliceop  */
  YYSYMBOL_expr_or_star_expr = 160,        /* expr_or_star_expr  */
  YYSYMBOL_comma_expr_or_star_expr_kleene = 161, /* comma_expr_or_star_expr_kleene  */
  YYSYMBOL_exprlist = 162,                 /* exprlist  */
  YYSYMBOL_or_test_star_expr = 163,        /* or_test_star_expr  */
  YYSYMBOL_comma_e_o_de_cima2_kleene = 164, /* comma_e_o_de_cima2_kleene  */
  YYSYMBOL_opt_test_colon_test_doublestar_expr = 165, /* opt_test_colon_test_doublestar_expr  */
  YYSYMBOL_comma_e_o_de_cima3_kleene = 166, /* comma_e_o_de_cima3_kleene  */
  YYSYMBOL_opt_primeiro_menor_dictorsetmaker = 167, /* opt_primeiro_menor_dictorsetmaker  */
  YYSYMBOL_opt_segundo_menor_dictorsetmaker = 168, /* opt_segundo_menor_dictorsetmaker  */
  YYSYMBOL_dictorsetmaker = 169,           /* dictorsetmaker  */
  YYSYMBOL_opt_comma_argument_kleene = 170, /* opt_comma_argument_kleene  */
  YYSYMBOL_arglist = 171,                  /* arglist  */
  YYSYMBOL_opt_comp_for = 172,             /* opt_comp_for  */
  YYSYMBOL_argument = 173,                 /* argument  */
  YYSYMBOL_comp_iter = 174,                /* comp_iter  */
  YYSYMBOL_opt_comp_iter = 175,            /* opt_comp_iter  */
  YYSYMBOL_sync_comp_for = 176,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 177,                 /* comp_for  */
  YYSYMBOL_comp_if = 178,                  /* comp_if  */
  YYSYMBOL_yield_expr = 179,               /* yield_expr  */
  YYSYMBOL_yield_arg = 180,                /* yield_arg  */
  YYSYMBOL_func_type_input = 181,          /* func_type_input  */
  YYSYMBOL_opt_typelist = 182,             /* opt_typelist  */
  YYSYMBOL_func_type = 183,                /* func_type  */
  YYSYMBOL_comma_test_fecho = 184,         /* comma_test_fecho  */
  YYSYMBOL_opt_comma_doublestar_test = 185, /* opt_comma_doublestar_test  */
  YYSYMBOL_opt_test = 186,                 /* opt_test  */
  YYSYMBOL_opt_maluco = 187,               /* opt_maluco  */
  YYSYMBOL_opt_comma_maluco = 188,         /* opt_comma_maluco  */
  YYSYMBOL_typelist = 189                  /* typelist  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   508

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

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
       0,    26,    26,    27,    39,    40,    44,    44,    89,    89,
      91,    91,    93,    93,    95,    95,    97,    97,    99,   100,
     103,   104,   105,   107,   107,   109,   110,   111,   112,   114,
     115,   116,   117,   118,   119,   121,   149,   150,   152,   235,
     236,   238,   239,   241,   242,   244,   245,   247,   247,   249,
     251,   253,   254,   256,   258,   259,   261,   263,   264,   266,
     267,   269,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   284,   285,   286,   288,   290,   291,   293,   295,
     296,   298,   300,   300,   302,   303,   305,   307,   308,   309,
     311,   313,   314,   315,   316,   317,   318,   320,   322,   323,
     324,   325,   327,   327,   329,   331,   331,   338,   339,   345,
     348,   348,   348,   350,   350,   352,   352,   354,   354,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   367,
     368,   370,   371,   373,   374,   376,   377,   379,   380,   381,
     383,   385,   385,   387,   387,   389,   391,   391,   393,   394,
     396,   400,   400,   402,   402,   404,   404,   406,   406,   408,
     409,   411,   412,   414,   415,   419,   420,   422,   424,   424,
     426,   427,   428,   429,   430,   432,   433,   435,   435,   437,
     439,   440,   442,   447,   448,   450,   451,   458,   460,   460,
     462,   464,   465,   468,   468,   470,   470,   472,   473,   474,
     476,   476,   478,   479,   480
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
  "SEMICOLON", "LOW", "$accept", "start_program", "newline_fecho",
  "opt_arglist", "opt_equal_test", "opt_comma", "opt_vfpdef",
  "opt_doublestar_vfpdef_comma", "opt_comma_e_o_de_cima",
  "comma_vfpdef_opt_equal_test_kleene", "opt_menor_varargslist",
  "opt_segundo_menor_varargslist", "opt_terceiro_menor_varargslist",
  "comma_slash", "varargslist", "vfpdef", "comma_or_test_star_expr_kleene",
  "testlist_star_expr", "namedexpr_test", "opt_if_ortest_else_test",
  "test", "test_nocond", "opt_varargslist", "lambdef", "lambdef_nocond",
  "or_and_test_kleene", "or_test", "and_not_test_kleene", "and_test",
  "not_test", "comp_op_kleene", "comparison", "comp_op", "star_expr",
  "vbar_xor_expr_kleene", "expr", "circumflex_and_expr_kleene", "xor_expr",
  "amper_shift_expr_kleene", "and_expr", "left_shift_or_right_shift",
  "left_shift_or_right_shift_arith_expr_kleene", "shift_expr",
  "plus_or_minus_term_kleene", "arith_expr", "varias_coisas_factor_kleene",
  "term", "factor", "opt_double_star", "power", "opt_await",
  "trailer_kleene", "atom_expr", "opt_yieldex_or_testlist_comp",
  "opt_testlist_comp", "opt_dictorsetmaker", "string_plus", "atom",
  "or_namedaexpr_test_star_expr",
  "comma_opt_namedaexpr_test_star_expr_kleene", "comma_subscript_kleene",
  "testlist_comp", "trailer", "subscriptlist", "opt_sliceop", "subscript",
  "sliceop", "expr_or_star_expr", "comma_expr_or_star_expr_kleene",
  "exprlist", "or_test_star_expr", "comma_e_o_de_cima2_kleene",
  "opt_test_colon_test_doublestar_expr", "comma_e_o_de_cima3_kleene",
  "opt_primeiro_menor_dictorsetmaker", "opt_segundo_menor_dictorsetmaker",
  "dictorsetmaker", "opt_comma_argument_kleene", "arglist", "opt_comp_for",
  "argument", "comp_iter", "opt_comp_iter", "sync_comp_for", "comp_for",
  "comp_if", "yield_expr", "yield_arg", "func_type_input", "opt_typelist",
  "func_type", "comma_test_fecho", "opt_comma_doublestar_test", "opt_test",
  "opt_maluco", "opt_comma_maluco", "typelist", YY_NULLPTR
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

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-200)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -239,    13,  -239,   280,  -239,  -239,  -239,   -22,    53,   194,
     423,   388,   194,   194,  -239,  -239,    25,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    34,   -17,
     -19,  -239,   -30,   -18,   -18,  -239,  -239,    17,    12,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,    20,    53,  -239,    -3,
      61,   464,    42,    41,    57,    60,    49,   178,  -239,  -239,
    -239,   291,   236,    83,  -239,  -239,  -239,  -239,    27,  -239,
     194,  -239,    24,  -239,    68,  -239,  -239,   423,  -239,   423,
      72,   316,  -239,   127,    53,    53,  -239,   114,   138,  -239,
    -239,  -239,  -239,  -239,  -239,   194,   194,   194,   194,  -239,
    -239,   194,   194,   194,   194,   194,   194,   194,   194,   334,
     194,  -239,    82,  -239,    94,    23,  -239,  -239,    97,  -239,
     194,   102,  -239,    98,    23,    23,  -239,  -239,    87,  -239,
     423,  -239,  -239,   106,  -239,   107,  -239,   418,  -239,   423,
     388,  -239,  -239,   423,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
     423,  -239,  -239,  -239,  -239,  -239,   423,  -239,   165,   148,
     113,  -239,  -239,  -239,  -239,   423,  -239,   129,  -239,  -239,
     133,  -239,  -239,   350,   120,    88,  -239,  -239,   -35,  -239,
       0,  -239,   134,   423,  -239,  -239,  -239,  -239,   136,  -239,
    -239,  -239,  -239,   166,  -239,    14,  -239,  -239,   135,  -239,
     151,  -239,   423,   423,   137,    -1,  -239,  -239,   145,   146,
    -239,   154,  -239,   -18,  -239,    17,  -239,   -18,   -18,  -239,
     -12,  -239,    72,   407,  -239,   164,    53,  -239,  -239,   102,
    -239,  -239,  -239,  -239,   423,   423,  -239,  -239,   169,  -239,
     172,   221,    68,  -239,    68,  -239,   -18,   -18,  -239,    17,
    -239,  -239,   254,  -239,    11,  -239,  -239,   354,  -239,   251,
    -239,   173,  -239,  -239,   106,    68,  -239,  -239,  -239,   425,
    -239,  -239,  -239,  -239,  -239,  -239,   240,  -239,  -239,  -239,
    -239,   106,   175,   -22,    11,  -239,  -239,  -239,  -239,    75,
    -239,   179,  -239,   425,  -239
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,   106,     2,     5,   105,    48,   106,   106,
     106,   106,   106,   106,   192,    44,    42,    52,    55,    58,
      60,    74,    77,    80,    85,    89,    96,   101,     0,   103,
       0,   188,   187,     0,    13,    35,    47,     9,     0,    57,
     100,   204,   195,   192,    99,    98,   201,   106,    43,    53,
      56,    61,    75,    78,    81,    86,    90,    97,   128,   126,
     127,   106,   106,   106,   125,   118,   122,   123,   124,   107,
     106,   104,     0,     4,    11,    19,    12,   106,    19,   106,
     194,   106,   202,     0,   106,   106,    68,    70,     0,    64,
      67,    66,    65,    62,    63,   106,   106,   106,   106,    82,
      83,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   129,    40,   130,     0,   132,   111,   110,     0,   113,
     106,   151,   152,     0,   154,   158,   115,   117,   109,   102,
     106,    10,    34,    17,     8,    24,    49,   106,   203,   106,
     106,   191,   200,   106,    51,    54,    71,    69,    59,    73,
      76,    79,    84,    88,    87,    94,    95,    93,    91,    92,
     106,   186,   151,    37,   183,    72,   106,   119,   106,     0,
      11,   181,   135,   120,   156,   106,   121,    11,   164,   161,
      11,   163,   159,   106,   106,     0,   108,   190,    15,    33,
      22,    32,    31,   106,   198,   192,    41,   185,    11,    39,
     147,   146,   149,     0,   180,   106,   136,   155,   106,   162,
     106,   160,   106,   106,     0,   169,     6,   166,   143,     0,
     134,     0,   139,     0,    16,     9,    29,     0,    13,    23,
      28,   193,   194,   106,    38,    11,   106,   131,   153,     0,
     157,   173,   174,   137,   106,   106,   170,   168,    11,   138,
      11,   106,    11,    18,    11,    19,     0,    13,    30,     9,
     197,    36,   106,   150,   178,   172,   171,   106,   167,   106,
     140,   142,    14,    21,    17,    11,    19,    19,   148,   106,
     177,   179,   175,   176,   165,   133,   106,   144,   141,    20,
      27,    17,    24,    48,   178,    46,    45,   145,    26,    22,
      25,     0,   182,   106,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,  -239,  -210,  -160,  -203,  -239,  -238,   -76,
    -239,   -97,  -239,  -239,  -239,    -7,  -239,  -239,  -239,  -239,
       1,   -81,   -60,  -239,  -239,  -239,   -44,  -239,   152,     6,
    -239,  -239,  -239,   -55,  -239,   -87,  -239,   142,  -239,   153,
    -239,  -239,   155,  -239,   150,  -239,    40,    15,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    51,  -239,
    -239,   192,  -239,  -239,  -239,    -9,  -239,     2,  -239,  -239,
    -100,  -239,    52,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
      -4,  -239,   -25,   104,  -103,  -239,  -239,  -239,  -239,  -239,
    -239,   -38,    45,   -10,  -239,  -239,  -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,   214,    78,   132,    75,   224,   189,   133,
     229,   191,   258,   192,    36,    76,   198,   161,   111,    48,
      42,   294,    38,    15,   295,    49,    16,    50,    17,    18,
      51,    19,    95,   122,    52,    20,    53,    21,    54,    22,
     101,    55,    23,    56,    24,    57,    25,    26,    71,    27,
      28,   128,    29,   114,   118,   123,    68,    69,   115,   170,
     250,   116,   186,   219,   287,   220,   288,   202,   235,   203,
     124,   177,   125,   180,   181,   178,   126,   248,   216,   246,
     217,   280,   281,   171,   282,   283,   117,   164,     4,    30,
       5,    46,   138,   221,   142,    82,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    43,   135,    83,    14,    80,   113,   113,   148,   163,
     206,    41,   172,     2,    39,   253,   223,   209,     6,   168,
     211,   179,   182,   165,    40,   255,    74,    44,    45,    33,
      34,   168,   169,   174,    70,     7,   289,    58,   234,   256,
     257,    72,    59,   168,   169,     8,   279,    60,    35,   277,
     226,   227,   228,   298,   276,   244,   169,     6,    73,     9,
      47,    35,   112,   112,   121,    35,   110,    12,    13,   245,
      79,    35,     3,    77,   -10,   263,   -10,    81,   134,    85,
     136,   201,   141,    35,     8,   129,    84,     6,   268,    96,
     270,   145,   272,    61,   273,    62,    97,    63,     9,    99,
     100,    64,   102,   103,     7,    98,    12,    13,   238,   127,
     162,   130,   247,   200,     8,   290,    65,    66,    67,   155,
     156,   157,   158,   159,     6,   131,   227,   228,     9,   137,
     195,   187,   143,   261,   120,   110,    12,    13,   141,     6,
     194,     7,   153,   154,   196,   146,   183,  -116,   184,   147,
     113,     8,   166,   185,   167,     6,     7,   232,    35,   173,
     175,   197,   176,   188,   190,     9,     8,   199,   168,     6,
     205,   222,     7,    12,    13,   201,   207,   236,  -196,   274,
       9,   225,     8,   225,   215,   218,   208,   110,    12,    13,
     210,   230,   264,   233,   231,   300,     9,   243,     6,   -10,
     291,   292,   120,  -195,    12,    13,   112,   200,   249,   162,
       9,   239,   251,   241,   242,   -10,   252,   110,    12,    13,
     254,   262,   304,   259,   104,     6,   267,   105,   106,   269,
     107,   286,   299,   301,   162,   296,   144,   303,   149,     9,
       6,   271,     7,   108,     6,   265,   266,    12,    13,   275,
     150,   152,     8,   151,   119,     6,   237,     7,     6,   296,
     285,     7,   240,   284,   278,   -10,     9,     8,   215,   302,
     218,     8,     7,   204,    12,    13,   297,   260,  -196,  -196,
       0,     9,     8,  -196,     6,     9,    37,     0,   110,    12,
      13,     0,   225,    12,    13,     6,     9,  -196,  -114,     9,
       0,     7,  -196,     0,    12,    13,   110,    12,    13,  -196,
       0,     8,     7,   -10,     0,     0,     0,     0,     0,     0,
       6,     0,     8,     0,     0,     9,     0,   109,     0,     0,
       0,    10,    11,    12,    13,     0,     9,     7,     6,     0,
    -189,     0,     0,   110,    12,    13,     0,     8,     0,     0,
       0,  -112,     0,     0,     6,     7,     0,     0,     6,   160,
       0,     9,     0,     0,     0,     8,     0,   139,   140,    12,
      13,     7,     0,     0,     0,     7,  -199,     0,     0,     9,
       0,     8,     0,     0,     0,     8,   110,    12,    13,     0,
       0,     0,     6,     0,  -184,     9,     0,     0,     0,     9,
       0,   212,   213,    12,    13,   212,   213,    12,    13,     7,
      -7,     6,     0,     0,   -10,     0,     0,     0,     0,     8,
       0,     0,     6,     0,     0,     0,     0,     6,     7,     6,
       0,     0,     0,     9,     0,     0,     0,     0,     8,     7,
       0,    12,    13,     0,     7,  -196,   293,     0,  -196,     8,
       0,     0,     9,     0,     8,     0,     8,     0,     0,   110,
      12,    13,     0,     9,     0,     0,     0,   -10,     9,   193,
       9,    12,    13,     0,     0,    86,    12,    13,    12,    13,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,    89,    90,     0,     0,    91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
       7,    11,    78,    47,     3,    43,    61,    62,    95,   109,
     170,    10,   115,     0,     8,   225,    51,   177,     4,    20,
     180,   124,   125,   110,     9,   228,    33,    12,    13,    51,
      52,    20,    33,   120,    51,    21,   274,     3,   198,    51,
      52,    60,     8,    20,    33,    31,    35,    13,    83,   259,
      50,    51,    52,   291,   257,    56,    33,     4,    88,    45,
      35,    83,    61,    62,    63,    83,    52,    53,    54,    70,
      58,    83,    59,    56,    60,   235,    62,    57,    77,    18,
      79,   168,    81,    83,    31,    70,    89,     4,   248,    47,
     250,    85,   252,    59,   254,    61,    55,    63,    45,    39,
      40,    67,    53,    54,    21,    48,    53,    54,   208,    82,
     109,    87,   215,   168,    31,   275,    82,    83,    84,   104,
     105,   106,   107,   108,     4,    57,    51,    52,    45,    57,
     140,   130,     5,   233,    51,    52,    53,    54,   137,     4,
     139,    21,   102,   103,   143,    31,    59,    64,    61,    11,
     205,    31,    70,    66,    60,     4,    21,   195,    83,    62,
      58,   160,    64,    57,    57,    45,    31,   166,    20,     4,
      57,    83,    21,    53,    54,   262,   175,    11,    58,   255,
      45,   188,    31,   190,   183,   184,    57,    52,    53,    54,
      57,    57,   236,    57,   193,   292,    45,    60,     4,    64,
     276,   277,    51,    58,    53,    54,   205,   262,    62,   208,
      45,   210,    58,   212,   213,    64,   223,    52,    53,    54,
     227,    57,   303,   230,    46,     4,    57,    49,    50,    57,
      52,    58,    57,   293,   233,   279,    84,    58,    96,    45,
       4,   251,    21,    65,     4,   244,   245,    53,    54,   256,
      97,   101,    31,    98,    62,     4,   205,    21,     4,   303,
     269,    21,   210,   267,   262,    11,    45,    31,   267,   294,
     269,    31,    21,   169,    53,    54,   286,   232,    57,    58,
      -1,    45,    31,    62,     4,    45,   293,    -1,    52,    53,
      54,    -1,   299,    53,    54,     4,    45,    57,    62,    45,
      -1,    21,    62,    -1,    53,    54,    52,    53,    54,    58,
      -1,    31,    21,    62,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    31,    -1,    -1,    45,    -1,    36,    -1,    -1,
      -1,    51,    52,    53,    54,    -1,    45,    21,     4,    -1,
      60,    -1,    -1,    52,    53,    54,    -1,    31,    -1,    -1,
      -1,    60,    -1,    -1,     4,    21,    -1,    -1,     4,    25,
      -1,    45,    -1,    -1,    -1,    31,    -1,    51,    52,    53,
      54,    21,    -1,    -1,    -1,    21,    60,    -1,    -1,    45,
      -1,    31,    -1,    -1,    -1,    31,    52,    53,    54,    -1,
      -1,    -1,     4,    -1,    60,    45,    -1,    -1,    -1,    45,
      -1,    51,    52,    53,    54,    51,    52,    53,    54,    21,
      60,     4,    -1,    -1,    60,    -1,    -1,    -1,    -1,    31,
      -1,    -1,     4,    -1,    -1,    -1,    -1,     4,    21,     4,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    31,    21,
      -1,    53,    54,    -1,    21,    57,    21,    -1,    60,    31,
      -1,    -1,    45,    -1,    31,    -1,    31,    -1,    -1,    52,
      53,    54,    -1,    45,    -1,    -1,    -1,    60,    45,    51,
      45,    53,    54,    -1,    -1,    11,    53,    54,    53,    54,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,     0,    59,   181,   183,     4,    21,    31,    45,
      51,    52,    53,    54,   113,   116,   119,   121,   122,   124,
     128,   130,   132,   135,   137,   139,   140,   142,   143,   145,
     182,   189,    95,    51,    52,    83,   107,   108,   115,   122,
     140,   113,   113,   186,   140,   140,   184,    35,   112,   118,
     120,   123,   127,   129,   131,   134,   136,   138,     3,     8,
      13,    59,    61,    63,    67,    82,    83,    84,   149,   150,
      51,   141,    60,    88,   108,    99,   108,    56,    97,    58,
     184,    57,   188,   119,    89,    18,    11,    16,    31,    37,
      38,    41,    42,    43,    44,   125,    47,    55,    48,    39,
      40,   133,    53,    54,    46,    49,    50,    52,    65,    36,
      52,   111,   113,   126,   146,   151,   154,   179,   147,   154,
      51,   113,   126,   148,   163,   165,   169,    82,   144,   140,
      87,    57,    98,   102,   113,   102,   113,    57,   185,    51,
      52,   113,   187,     5,   121,   122,    31,    11,   128,   130,
     132,   135,   137,   139,   139,   140,   140,   140,   140,   140,
      25,   110,   113,   163,   180,   128,    70,    60,    20,    33,
     152,   176,   177,    62,   128,    58,    64,   164,   168,   177,
     166,   167,   177,    59,    61,    66,   155,   113,    57,   101,
      57,   104,   106,    51,   113,   186,   113,   113,   109,   113,
     126,   128,   160,   162,   176,    57,    98,   113,    57,    98,
      57,    98,    51,    52,    96,   113,   171,   173,   113,   156,
     158,   186,    83,    51,   100,   108,    50,    51,    52,   103,
      57,   113,   184,    57,    98,   161,    11,   151,   163,   113,
     165,   113,   113,    60,    56,    70,   172,   177,   170,    62,
     153,    58,   108,    97,   108,    99,    51,    52,   105,   108,
     185,   163,    57,    98,   119,   113,   113,    57,    98,    57,
      98,   186,    98,    98,   102,   108,    99,    97,   160,    35,
     174,   175,   177,   178,   173,   158,    58,   157,   159,   101,
      98,   102,   102,    21,   114,   117,   119,   186,   101,    57,
     104,   115,   175,    58,   114
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   105,   105,   105,   105,   106,
     107,   107,   107,   107,   107,   108,   109,   109,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     117,   118,   118,   119,   120,   120,   121,   122,   122,   123,
     123,   124,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   126,   127,   127,   128,   129,   129,   130,   131,
     131,   132,   133,   133,   134,   134,   135,   136,   136,   136,
     137,   138,   138,   138,   138,   138,   138,   139,   140,   140,
     140,   140,   141,   141,   142,   143,   143,   144,   144,   145,
     146,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     156,   157,   157,   158,   158,   159,   160,   160,   161,   161,
     162,   163,   163,   164,   164,   165,   165,   166,   166,   167,
     167,   168,   168,   169,   169,   170,   170,   171,   172,   172,
     173,   173,   173,   173,   173,   174,   174,   175,   175,   176,
     177,   177,   178,   179,   179,   180,   180,   181,   182,   182,
     183,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     188,   188,   189,   189,   189
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     1,     0,     2,     0,
       1,     0,     1,     0,     3,     0,     2,     0,     4,     0,
       4,     3,     0,     2,     0,     4,     4,     3,     0,     2,
       6,     4,     4,     4,     3,     1,     3,     0,     3,     3,
       1,     4,     0,     2,     1,     1,     1,     1,     0,     4,
       4,     3,     0,     2,     3,     0,     2,     2,     1,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     3,     0,     2,     3,     0,     2,     3,
       0,     2,     1,     1,     3,     0,     2,     3,     3,     0,
       2,     3,     3,     3,     3,     3,     0,     2,     2,     2,
       2,     1,     2,     0,     2,     1,     0,     0,     2,     3,
       1,     1,     0,     1,     0,     1,     0,     2,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     3,     0,     2,     3,     3,     3,     2,
       3,     1,     0,     1,     4,     2,     1,     1,     3,     0,
       3,     1,     1,     3,     0,     3,     2,     3,     0,     1,
       2,     1,     2,     2,     2,     3,     0,     3,     1,     0,
       2,     3,     3,     2,     2,     1,     1,     1,     0,     5,
       2,     1,     3,     2,     1,     2,     1,     2,     1,     0,
       5,     3,     0,     3,     0,     1,     0,     4,     2,     0,
       2,     0,     3,     4,     2
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


/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


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

#line 1700 "parser.tab.c"

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
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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


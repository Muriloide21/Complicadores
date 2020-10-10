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


#line 82 "parser.c"

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
  YYSYMBOL_LOW = 92,                       /* LOW  */
  YYSYMBOL_YYACCEPT = 93,                  /* $accept  */
  YYSYMBOL_start_program = 94,             /* start_program  */
  YYSYMBOL_single_input = 95,              /* single_input  */
  YYSYMBOL_newline_fecho = 96,             /* newline_fecho  */
  YYSYMBOL_opt_arglist = 97,               /* opt_arglist  */
  YYSYMBOL_decorator = 98,                 /* decorator  */
  YYSYMBOL_decorator_fecho_plus = 99,      /* decorator_fecho_plus  */
  YYSYMBOL_decorators = 100,               /* decorators  */
  YYSYMBOL_decorated = 101,                /* decorated  */
  YYSYMBOL_async_funcdef = 102,            /* async_funcdef  */
  YYSYMBOL_opt_arrow_test = 103,           /* opt_arrow_test  */
  YYSYMBOL_opt_typecomment = 104,          /* opt_typecomment  */
  YYSYMBOL_funcdef = 105,                  /* funcdef  */
  YYSYMBOL_opt_typedargslist = 106,        /* opt_typedargslist  */
  YYSYMBOL_parameters = 107,               /* parameters  */
  YYSYMBOL_opt_tfpdef = 108,               /* opt_tfpdef  */
  YYSYMBOL_kleene_gigante = 109,           /* kleene_gigante  */
  YYSYMBOL_opt_mediano = 110,              /* opt_mediano  */
  YYSYMBOL_opt_maiorzin = 111,             /* opt_maiorzin  */
  YYSYMBOL_typecomment_or_maiorzin = 112,  /* typecomment_or_maiorzin  */
  YYSYMBOL_star_e_outros_or_doublestar_e_outros = 113, /* star_e_outros_or_doublestar_e_outros  */
  YYSYMBOL_opt_das_estrelas = 114,         /* opt_das_estrelas  */
  YYSYMBOL_opt_comma_opts = 115,           /* opt_comma_opts  */
  YYSYMBOL_type_comment_or_opt_comma_opts = 116, /* type_comment_or_opt_comma_opts  */
  YYSYMBOL_or_enorme = 117,                /* or_enorme  */
  YYSYMBOL_opt_enorme = 118,               /* opt_enorme  */
  YYSYMBOL_opt_comma_enorme = 119,         /* opt_comma_enorme  */
  YYSYMBOL_typedargslist = 120,            /* typedargslist  */
  YYSYMBOL_opt_colon_test = 121,           /* opt_colon_test  */
  YYSYMBOL_tfpdef = 122,                   /* tfpdef  */
  YYSYMBOL_opt_equal_test = 123,           /* opt_equal_test  */
  YYSYMBOL_opt_comma = 124,                /* opt_comma  */
  YYSYMBOL_opt_vfpdef = 125,               /* opt_vfpdef  */
  YYSYMBOL_opt_doublestar_vfpdef_comma = 126, /* opt_doublestar_vfpdef_comma  */
  YYSYMBOL_opt_comma_e_o_de_cima = 127,    /* opt_comma_e_o_de_cima  */
  YYSYMBOL_comma_vfpdef_opt_equal_test_kleene = 128, /* comma_vfpdef_opt_equal_test_kleene  */
  YYSYMBOL_opt_menor_varargslist = 129,    /* opt_menor_varargslist  */
  YYSYMBOL_opt_segundo_menor_varargslist = 130, /* opt_segundo_menor_varargslist  */
  YYSYMBOL_opt_terceiro_menor_varargslist = 131, /* opt_terceiro_menor_varargslist  */
  YYSYMBOL_comma_slash = 132,              /* comma_slash  */
  YYSYMBOL_varargslist = 133,              /* varargslist  */
  YYSYMBOL_vfpdef = 134,                   /* vfpdef  */
  YYSYMBOL_stmt = 135,                     /* stmt  */
  YYSYMBOL_semicolon_smallstmt_fecho = 136, /* semicolon_smallstmt_fecho  */
  YYSYMBOL_opt_semicolon = 137,            /* opt_semicolon  */
  YYSYMBOL_simple_stmt = 138,              /* simple_stmt  */
  YYSYMBOL_small_stmt = 139,               /* small_stmt  */
  YYSYMBOL_yield_expr_or_testlist = 140,   /* yield_expr_or_testlist  */
  YYSYMBOL_yield_expr_or_testlist_star_expr = 141, /* yield_expr_or_testlist_star_expr  */
  YYSYMBOL_equal_yield_expr_or_testlist_star_expr_plus = 142, /* equal_yield_expr_or_testlist_star_expr_plus  */
  YYSYMBOL_expr_stmt = 143,                /* expr_stmt  */
  YYSYMBOL_annassign = 144,                /* annassign  */
  YYSYMBOL_comma_or_test_star_expr_kleene = 145, /* comma_or_test_star_expr_kleene  */
  YYSYMBOL_testlist_star_expr = 146,       /* testlist_star_expr  */
  YYSYMBOL_augassign = 147,                /* augassign  */
  YYSYMBOL_del_stmt = 148,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 149,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 150,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 151,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 152,            /* continue_stmt  */
  YYSYMBOL_opt_testlist_star_expr = 153,   /* opt_testlist_star_expr  */
  YYSYMBOL_return_stmt = 154,              /* return_stmt  */
  YYSYMBOL_yield_stmt = 155,               /* yield_stmt  */
  YYSYMBOL_opt_from_test = 156,            /* opt_from_test  */
  YYSYMBOL_opt_test_opt_from_test = 157,   /* opt_test_opt_from_test  */
  YYSYMBOL_raise_stmt = 158,               /* raise_stmt  */
  YYSYMBOL_import_stmt = 159,              /* import_stmt  */
  YYSYMBOL_import_name = 160,              /* import_name  */
  YYSYMBOL_dot_or_ellipsis_kleene = 161,   /* dot_or_ellipsis_kleene  */
  YYSYMBOL_dot_or_ellipsis_plus = 162,     /* dot_or_ellipsis_plus  */
  YYSYMBOL_dot_or_ellipsis_kleene_dotted_name_or_dot_or_ellipsis_plus = 163, /* dot_or_ellipsis_kleene_dotted_name_or_dot_or_ellipsis_plus  */
  YYSYMBOL_star_or_lpar_import_as_names_rpar_or_import_as_names = 164, /* star_or_lpar_import_as_names_rpar_or_import_as_names  */
  YYSYMBOL_import_from = 165,              /* import_from  */
  YYSYMBOL_opt_as_name = 166,              /* opt_as_name  */
  YYSYMBOL_import_as_name = 167,           /* import_as_name  */
  YYSYMBOL_dotted_as_name = 168,           /* dotted_as_name  */
  YYSYMBOL_comma_import_as_name_kleene = 169, /* comma_import_as_name_kleene  */
  YYSYMBOL_import_as_names = 170,          /* import_as_names  */
  YYSYMBOL_comma_dotted_as_name_kleene = 171, /* comma_dotted_as_name_kleene  */
  YYSYMBOL_dotted_as_names = 172,          /* dotted_as_names  */
  YYSYMBOL_dot_name_kleene = 173,          /* dot_name_kleene  */
  YYSYMBOL_dotted_name = 174,              /* dotted_name  */
  YYSYMBOL_comma_name_kleene = 175,        /* comma_name_kleene  */
  YYSYMBOL_global_stmt = 176,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 177,            /* nonlocal_stmt  */
  YYSYMBOL_opt_comma_test = 178,           /* opt_comma_test  */
  YYSYMBOL_assert_stmt = 179,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 180,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 181,               /* async_stmt  */
  YYSYMBOL_if_stmt = 182,                  /* if_stmt  */
  YYSYMBOL_elif_colon_suite_kleene = 183,  /* elif_colon_suite_kleene  */
  YYSYMBOL_while_stmt = 184,               /* while_stmt  */
  YYSYMBOL_for_in_colon_prefix = 185,      /* for_in_colon_prefix  */
  YYSYMBOL_for_stmt = 186,                 /* for_stmt  */
  YYSYMBOL_opt_else_colon_suite = 187,     /* opt_else_colon_suite  */
  YYSYMBOL_opt_finally_colon_suite = 188,  /* opt_finally_colon_suite  */
  YYSYMBOL_exceptclausecolonsuite_plus = 189, /* exceptclausecolonsuite_plus  */
  YYSYMBOL_start_try_stmt = 190,           /* start_try_stmt  */
  YYSYMBOL_try_stmt = 191,                 /* try_stmt  */
  YYSYMBOL_comma_with_item_kleene = 192,   /* comma_with_item_kleene  */
  YYSYMBOL_with_stmt = 193,                /* with_stmt  */
  YYSYMBOL_opt_as_expr = 194,              /* opt_as_expr  */
  YYSYMBOL_with_item = 195,                /* with_item  */
  YYSYMBOL_opt_test_opt_as_name = 196,     /* opt_test_opt_as_name  */
  YYSYMBOL_except_clause = 197,            /* except_clause  */
  YYSYMBOL_suite = 198,                    /* suite  */
  YYSYMBOL_opt_colonequal_test = 199,      /* opt_colonequal_test  */
  YYSYMBOL_namedexpr_test = 200,           /* namedexpr_test  */
  YYSYMBOL_opt_if_ortest_else_test = 201,  /* opt_if_ortest_else_test  */
  YYSYMBOL_test = 202,                     /* test  */
  YYSYMBOL_test_nocond = 203,              /* test_nocond  */
  YYSYMBOL_opt_varargslist = 204,          /* opt_varargslist  */
  YYSYMBOL_prefix_lambdef = 205,           /* prefix_lambdef  */
  YYSYMBOL_lambdef = 206,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 207,           /* lambdef_nocond  */
  YYSYMBOL_or_and_test_kleene = 208,       /* or_and_test_kleene  */
  YYSYMBOL_or_test = 209,                  /* or_test  */
  YYSYMBOL_and_not_test_kleene = 210,      /* and_not_test_kleene  */
  YYSYMBOL_and_test = 211,                 /* and_test  */
  YYSYMBOL_not_test = 212,                 /* not_test  */
  YYSYMBOL_comp_op_kleene = 213,           /* comp_op_kleene  */
  YYSYMBOL_comparison = 214,               /* comparison  */
  YYSYMBOL_comp_op = 215,                  /* comp_op  */
  YYSYMBOL_star_expr = 216,                /* star_expr  */
  YYSYMBOL_vbar_xor_expr_kleene = 217,     /* vbar_xor_expr_kleene  */
  YYSYMBOL_expr = 218,                     /* expr  */
  YYSYMBOL_circumflex_and_expr_kleene = 219, /* circumflex_and_expr_kleene  */
  YYSYMBOL_xor_expr = 220,                 /* xor_expr  */
  YYSYMBOL_amper_shift_expr_kleene = 221,  /* amper_shift_expr_kleene  */
  YYSYMBOL_and_expr = 222,                 /* and_expr  */
  YYSYMBOL_left_shift_or_right_shift = 223, /* left_shift_or_right_shift  */
  YYSYMBOL_left_shift_or_right_shift_arith_expr_kleene = 224, /* left_shift_or_right_shift_arith_expr_kleene  */
  YYSYMBOL_shift_expr = 225,               /* shift_expr  */
  YYSYMBOL_plus_or_minus_term_kleene = 226, /* plus_or_minus_term_kleene  */
  YYSYMBOL_arith_expr = 227,               /* arith_expr  */
  YYSYMBOL_varias_coisas_factor_kleene = 228, /* varias_coisas_factor_kleene  */
  YYSYMBOL_term = 229,                     /* term  */
  YYSYMBOL_factor = 230,                   /* factor  */
  YYSYMBOL_opt_double_star_factor = 231,   /* opt_double_star_factor  */
  YYSYMBOL_power = 232,                    /* power  */
  YYSYMBOL_opt_await = 233,                /* opt_await  */
  YYSYMBOL_trailer_kleene = 234,           /* trailer_kleene  */
  YYSYMBOL_atom_expr = 235,                /* atom_expr  */
  YYSYMBOL_opt_yieldex_or_testlist_comp = 236, /* opt_yieldex_or_testlist_comp  */
  YYSYMBOL_opt_testlist_comp = 237,        /* opt_testlist_comp  */
  YYSYMBOL_opt_dictorsetmaker = 238,       /* opt_dictorsetmaker  */
  YYSYMBOL_string_plus = 239,              /* string_plus  */
  YYSYMBOL_atom = 240,                     /* atom  */
  YYSYMBOL_or_namedaexpr_test_star_expr = 241, /* or_namedaexpr_test_star_expr  */
  YYSYMBOL_comma_opt_namedaexpr_test_star_expr_kleene = 242, /* comma_opt_namedaexpr_test_star_expr_kleene  */
  YYSYMBOL_comma_subscript_kleene = 243,   /* comma_subscript_kleene  */
  YYSYMBOL_testlist_comp = 244,            /* testlist_comp  */
  YYSYMBOL_trailer = 245,                  /* trailer  */
  YYSYMBOL_subscriptlist = 246,            /* subscriptlist  */
  YYSYMBOL_opt_sliceop = 247,              /* opt_sliceop  */
  YYSYMBOL_subscript = 248,                /* subscript  */
  YYSYMBOL_sliceop = 249,                  /* sliceop  */
  YYSYMBOL_expr_or_star_expr = 250,        /* expr_or_star_expr  */
  YYSYMBOL_comma_expr_or_star_expr_kleene = 251, /* comma_expr_or_star_expr_kleene  */
  YYSYMBOL_exprlist = 252,                 /* exprlist  */
  YYSYMBOL_testlist = 253,                 /* testlist  */
  YYSYMBOL_or_test_star_expr = 254,        /* or_test_star_expr  */
  YYSYMBOL_comma_e_o_de_cima2_kleene = 255, /* comma_e_o_de_cima2_kleene  */
  YYSYMBOL_opt_test_colon_test_doublestar_expr = 256, /* opt_test_colon_test_doublestar_expr  */
  YYSYMBOL_comma_e_o_de_cima3_kleene = 257, /* comma_e_o_de_cima3_kleene  */
  YYSYMBOL_opt_primeiro_menor_dictorsetmaker = 258, /* opt_primeiro_menor_dictorsetmaker  */
  YYSYMBOL_opt_segundo_menor_dictorsetmaker = 259, /* opt_segundo_menor_dictorsetmaker  */
  YYSYMBOL_dictorsetmaker = 260,           /* dictorsetmaker  */
  YYSYMBOL_opt_lpar_opt_arglist_rpar = 261, /* opt_lpar_opt_arglist_rpar  */
  YYSYMBOL_classdef = 262,                 /* classdef  */
  YYSYMBOL_opt_comma_argument_kleene = 263, /* opt_comma_argument_kleene  */
  YYSYMBOL_arglist = 264,                  /* arglist  */
  YYSYMBOL_opt_comp_for = 265,             /* opt_comp_for  */
  YYSYMBOL_argument = 266,                 /* argument  */
  YYSYMBOL_comp_iter = 267,                /* comp_iter  */
  YYSYMBOL_opt_comp_iter = 268,            /* opt_comp_iter  */
  YYSYMBOL_sync_comp_for = 269,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 270,                 /* comp_for  */
  YYSYMBOL_comp_if = 271,                  /* comp_if  */
  YYSYMBOL_opt_yield_arg = 272,            /* opt_yield_arg  */
  YYSYMBOL_yield_expr = 273,               /* yield_expr  */
  YYSYMBOL_yield_arg = 274,                /* yield_arg  */
  YYSYMBOL_opt_type_comment_newline = 275, /* opt_type_comment_newline  */
  YYSYMBOL_stmt_kleene_plus = 276,         /* stmt_kleene_plus  */
  YYSYMBOL_func_body_suite = 277,          /* func_body_suite  */
  YYSYMBOL_func_type_input = 278,          /* func_type_input  */
  YYSYMBOL_opt_typelist = 279,             /* opt_typelist  */
  YYSYMBOL_func_type = 280,                /* func_type  */
  YYSYMBOL_comma_test_fecho = 281,         /* comma_test_fecho  */
  YYSYMBOL_opt_comma_doublestar_test = 282, /* opt_comma_doublestar_test  */
  YYSYMBOL_opt_test = 283,                 /* opt_test  */
  YYSYMBOL_opt_maluco = 284,               /* opt_maluco  */
  YYSYMBOL_opt_comma_maluco = 285,         /* opt_comma_maluco  */
  YYSYMBOL_typelist = 286                  /* typelist  */
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
#define YYLAST   1017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  194
/* YYNRULES -- Number of rules.  */
#define YYNRULES  391
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  608

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
       0,    34,    34,    35,    36,    38,    39,    40,    48,    49,
      53,    53,    59,    60,    62,    63,    65,    67,    68,    69,
      72,    74,    74,    76,    76,    78,    80,    80,    82,    84,
      84,    86,    87,    89,    89,    91,    91,    93,    93,    95,
      96,    98,    98,   100,   100,   103,   103,   105,   106,   108,
     108,   110,   110,   112,   113,   115,   117,   119,   119,   121,
     121,   123,   123,   125,   125,   127,   127,   129,   130,   133,
     134,   135,   137,   137,   139,   140,   142,   143,   144,   145,
     146,   147,   149,   151,   151,   153,   154,   156,   156,   158,
     160,   161,   162,   163,   164,   165,   166,   167,   172,   172,
     175,   175,   178,   179,   182,   188,   189,   192,   193,   195,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   201,   203,   205,   205,   205,   205,   205,
     207,   209,   211,   211,   213,   215,   217,   217,   219,   219,
     221,   223,   223,   225,   228,   229,   231,   232,   233,   234,
     236,   236,   238,   239,   240,   242,   244,   244,   245,   247,
     249,   250,   252,   254,   254,   256,   258,   258,   260,   262,
     262,   264,   266,   268,   268,   270,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   284,   285,   286,   289,   292,
     293,   296,   299,   302,   305,   305,   307,   307,   309,   310,
     312,   314,   315,   318,   319,   322,   325,   325,   327,   330,
     330,   332,   334,   335,   337,   337,   340,   343,   344,   346,
     347,   349,   350,   352,   352,   354,   356,   358,   360,   361,
     363,   365,   366,   368,   370,   371,   373,   374,   376,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   391,
     392,   393,   395,   397,   398,   400,   402,   403,   405,   407,
     407,   409,   410,   412,   414,   415,   416,   419,   421,   422,
     423,   424,   425,   426,   428,   430,   431,   432,   433,   435,
     435,   437,   439,   439,   446,   447,   453,   456,   456,   458,
     458,   460,   460,   462,   462,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   475,   476,   478,   479,   481,
     482,   484,   485,   487,   488,   489,   491,   493,   493,   495,
     495,   497,   499,   499,   501,   502,   504,   506,   508,   508,
     510,   510,   512,   512,   514,   514,   516,   517,   519,   520,
     522,   523,   525,   525,   527,   529,   530,   532,   534,   534,
     536,   537,   538,   539,   540,   542,   543,   545,   545,   547,
     549,   550,   552,   557,   557,   559,   561,   562,   567,   567,
     570,   571,   573,   574,   576,   578,   578,   580,   582,   583,
     586,   586,   588,   588,   590,   591,   592,   594,   594,   596,
     597,   598
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
  "SEMICOLON", "LOW", "$accept", "start_program", "single_input",
  "newline_fecho", "opt_arglist", "decorator", "decorator_fecho_plus",
  "decorators", "decorated", "async_funcdef", "opt_arrow_test",
  "opt_typecomment", "funcdef", "opt_typedargslist", "parameters",
  "opt_tfpdef", "kleene_gigante", "opt_mediano", "opt_maiorzin",
  "typecomment_or_maiorzin", "star_e_outros_or_doublestar_e_outros",
  "opt_das_estrelas", "opt_comma_opts", "type_comment_or_opt_comma_opts",
  "or_enorme", "opt_enorme", "opt_comma_enorme", "typedargslist",
  "opt_colon_test", "tfpdef", "opt_equal_test", "opt_comma", "opt_vfpdef",
  "opt_doublestar_vfpdef_comma", "opt_comma_e_o_de_cima",
  "comma_vfpdef_opt_equal_test_kleene", "opt_menor_varargslist",
  "opt_segundo_menor_varargslist", "opt_terceiro_menor_varargslist",
  "comma_slash", "varargslist", "vfpdef", "stmt",
  "semicolon_smallstmt_fecho", "opt_semicolon", "simple_stmt",
  "small_stmt", "yield_expr_or_testlist",
  "yield_expr_or_testlist_star_expr",
  "equal_yield_expr_or_testlist_star_expr_plus", "expr_stmt", "annassign",
  "comma_or_test_star_expr_kleene", "testlist_star_expr", "augassign",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "opt_testlist_star_expr", "return_stmt", "yield_stmt", "opt_from_test",
  "opt_test_opt_from_test", "raise_stmt", "import_stmt", "import_name",
  "dot_or_ellipsis_kleene", "dot_or_ellipsis_plus",
  "dot_or_ellipsis_kleene_dotted_name_or_dot_or_ellipsis_plus",
  "star_or_lpar_import_as_names_rpar_or_import_as_names", "import_from",
  "opt_as_name", "import_as_name", "dotted_as_name",
  "comma_import_as_name_kleene", "import_as_names",
  "comma_dotted_as_name_kleene", "dotted_as_names", "dot_name_kleene",
  "dotted_name", "comma_name_kleene", "global_stmt", "nonlocal_stmt",
  "opt_comma_test", "assert_stmt", "compound_stmt", "async_stmt",
  "if_stmt", "elif_colon_suite_kleene", "while_stmt",
  "for_in_colon_prefix", "for_stmt", "opt_else_colon_suite",
  "opt_finally_colon_suite", "exceptclausecolonsuite_plus",
  "start_try_stmt", "try_stmt", "comma_with_item_kleene", "with_stmt",
  "opt_as_expr", "with_item", "opt_test_opt_as_name", "except_clause",
  "suite", "opt_colonequal_test", "namedexpr_test",
  "opt_if_ortest_else_test", "test", "test_nocond", "opt_varargslist",
  "prefix_lambdef", "lambdef", "lambdef_nocond", "or_and_test_kleene",
  "or_test", "and_not_test_kleene", "and_test", "not_test",
  "comp_op_kleene", "comparison", "comp_op", "star_expr",
  "vbar_xor_expr_kleene", "expr", "circumflex_and_expr_kleene", "xor_expr",
  "amper_shift_expr_kleene", "and_expr", "left_shift_or_right_shift",
  "left_shift_or_right_shift_arith_expr_kleene", "shift_expr",
  "plus_or_minus_term_kleene", "arith_expr", "varias_coisas_factor_kleene",
  "term", "factor", "opt_double_star_factor", "power", "opt_await",
  "trailer_kleene", "atom_expr", "opt_yieldex_or_testlist_comp",
  "opt_testlist_comp", "opt_dictorsetmaker", "string_plus", "atom",
  "or_namedaexpr_test_star_expr",
  "comma_opt_namedaexpr_test_star_expr_kleene", "comma_subscript_kleene",
  "testlist_comp", "trailer", "subscriptlist", "opt_sliceop", "subscript",
  "sliceop", "expr_or_star_expr", "comma_expr_or_star_expr_kleene",
  "exprlist", "testlist", "or_test_star_expr", "comma_e_o_de_cima2_kleene",
  "opt_test_colon_test_doublestar_expr", "comma_e_o_de_cima3_kleene",
  "opt_primeiro_menor_dictorsetmaker", "opt_segundo_menor_dictorsetmaker",
  "dictorsetmaker", "opt_lpar_opt_arglist_rpar", "classdef",
  "opt_comma_argument_kleene", "arglist", "opt_comp_for", "argument",
  "comp_iter", "opt_comp_iter", "sync_comp_for", "comp_for", "comp_if",
  "opt_yield_arg", "yield_expr", "yield_arg", "opt_type_comment_newline",
  "stmt_kleene_plus", "func_body_suite", "func_type_input", "opt_typelist",
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

#define YYPACT_NINF (-513)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-387)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -513,   548,  -513,  -513,   -22,  -513,  -513,   120,    33,    45,
    -513,    26,    83,    35,    66,   132,    74,   159,   159,    26,
     123,   399,   159,   247,   159,    29,    61,    61,    61,    61,
     212,   -22,  -513,  -513,  -513,   149,   236,  -513,  -513,  -513,
    -513,  -513,    42,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,   -21,  -513,  -513,
    -513,   133,  -513,   145,  -513,  -513,  -513,   159,  -513,   204,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,   169,   194,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,   231,  -513,   256,   226,  -513,  -513,  -513,  -513,
    -513,   284,   221,   221,  -513,  -513,   249,   248,   475,   250,
    -513,  -513,   -22,    36,   305,  -513,   259,   244,   261,  -513,
    -513,  -513,  -513,   298,  -513,  -513,  -513,   268,   159,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,   159,   880,  -513,   269,
    -513,    51,  -513,   304,  -513,  -513,  -513,   239,   159,   932,
    -513,  -513,   475,   914,   273,   195,   276,  -513,   399,  -513,
     246,   320,   959,   292,   286,   296,    19,   172,   309,  -513,
    -513,  -513,   486,   639,   374,  -513,  -513,  -513,  -513,   266,
    -513,    61,  -513,   294,   282,   283,   299,   288,  -513,   159,
    -513,   840,   314,   325,   159,   326,  -513,  -513,   159,  -513,
    -513,   300,  -513,  -513,   301,   302,  -513,  -513,  -513,   144,
     329,   475,   159,  -513,   159,  -513,   329,   198,    61,  -513,
     475,  -513,  -513,  -513,  -513,   333,   317,   840,  -513,  -513,
     599,   303,   336,   936,   391,  -513,   231,   475,   343,   387,
     348,   475,   403,   399,   399,  -513,   378,   400,  -513,  -513,
    -513,  -513,  -513,  -513,    61,    61,    61,    61,  -513,  -513,
      61,    61,    61,    61,    61,    61,    61,    61,  -513,  -513,
     350,  -513,   182,  -513,  -513,   352,    61,   354,   353,   182,
     182,  -513,  -513,   -15,  -513,   932,  -513,  -513,   338,   -22,
    -513,  -513,   159,   159,   356,   168,  -513,  -513,   475,    59,
    -513,  -513,   364,  -513,  -513,   367,  -513,   377,   805,   379,
     375,  -513,   249,   159,   381,  -513,   357,   231,  -513,  -513,
    -513,   359,   391,  -513,  -513,   159,   133,  -513,  -513,   386,
     844,  -513,   159,   376,  -513,  -513,   935,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
     505,  -513,  -513,  -513,   475,   388,  -513,   475,  -513,   159,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,    26,   425,   390,
    -513,  -513,  -513,  -513,   159,  -513,   393,  -513,  -513,   394,
    -513,  -513,   840,   920,   365,   395,  -513,  -513,  -513,  -513,
    -513,  -513,   159,   159,  -513,  -513,   398,  -513,  -513,   401,
    -513,   -10,  -513,     5,  -513,   402,  -513,  -513,  -513,   701,
     159,  -513,  -513,  -513,  -513,   133,   404,  -513,   405,  -513,
    -513,  -513,   475,   147,   643,  -513,   159,   880,  -513,  -513,
    -513,   372,  -513,  -513,  -513,   932,  -513,  -513,  -513,   475,
    -513,  -513,   450,  -513,   315,  -513,  -513,   237,  -513,   312,
    -513,   408,   411,   410,  -513,   416,  -513,  -513,  -513,  -513,
     878,  -513,   159,  -513,   221,  -513,   249,  -513,   221,   221,
    -513,   197,  -513,  -513,  -513,    52,   650,  -513,   357,  -513,
    -513,   159,  -513,   159,  -513,  -513,  -513,   407,  -513,   399,
    -513,  -513,   354,  -513,  -513,  -513,   419,   588,  -513,   326,
    -513,   326,  -513,  -513,  -513,   249,   133,  -513,  -513,   232,
     409,  -513,  -513,  -513,   420,  -513,   386,   935,    -3,   209,
     125,  -513,   422,  -513,  -513,   367,  -513,    75,   301,   301,
    -513,   389,   406,   475,  -513,  -513,   935,   932,   159,  -513,
    -513,  -513,  -513,  -513,   824,  -513,  -513,  -513,   426,   432,
    -513,  -513,   249,   326,  -513,  -513,  -513,   805,  -513,  -513,
    -513,   209,   159,  -513,  -513,  -513,   197,  -513,    17,  -513,
    -513,   133,    71,   753,  -513,  -513,   301,  -513,  -513,  -513,
    -513,   133,  -513,  -513,  -513,  -513,   249,    13,  -513,   301,
    -513,   107,   326,   133,  -513,   133,   210,  -513
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,   283,     1,   282,     0,   124,   130,   283,     0,   283,
     131,   283,   224,     0,     0,   145,     0,   283,   283,   283,
       0,   283,   283,     0,   283,   283,   283,   283,   283,   283,
     283,     0,     7,     2,    15,    16,     0,   183,   181,     5,
      86,    90,     0,    91,    92,    93,   125,   126,   127,   129,
     128,    94,   141,   142,    95,    96,    97,     0,   184,   176,
     177,    24,   178,     0,   179,   180,   328,   283,   220,   218,
     229,   232,   235,   329,   237,   251,   254,   257,   262,   266,
     273,   278,     0,   280,   108,   182,   135,     3,     9,   167,
     164,   143,   157,   140,   137,   343,   132,   134,   323,   322,
     325,     0,     0,    62,    82,   223,    58,     0,   283,     0,
     148,   149,     0,   144,     0,   170,     0,   215,   174,   123,
     170,   234,   204,   207,   185,   187,   186,     0,   283,   367,
     365,   363,   277,   249,   276,   275,   283,   283,   379,     0,
     375,     0,    14,     0,    19,    18,    17,    88,   283,   283,
       6,    23,   283,   283,     0,   195,     0,   226,   283,   219,
     230,   233,   238,   252,   255,   258,   263,   267,   274,   304,
     302,   303,   283,   283,   283,   301,   294,   298,   299,   300,
     284,   283,   281,    60,   374,   168,   165,     0,   159,   283,
     138,   283,     0,    60,   283,    60,    68,    61,   283,    68,
     225,     0,   212,   200,    27,    22,   150,   146,   147,     0,
     172,   283,   283,   216,   283,   175,   171,     0,   283,   208,
     283,   366,   391,   382,   379,   388,     0,   283,    12,    20,
     283,     0,   106,     0,   195,   211,   157,   283,     0,   197,
       0,   283,     0,   283,   283,   245,   247,     0,   241,   244,
     243,   242,   239,   240,   283,   283,   283,   283,   259,   260,
     283,   283,   283,   283,   283,   283,   283,   283,   305,   306,
       0,   288,   308,   289,   287,     0,   283,   328,     0,   331,
     335,   291,   293,   286,   279,    59,   109,     8,     0,     0,
     156,   136,   283,   283,     0,   349,    10,   346,   283,   283,
     326,   379,     0,    59,    81,    66,    57,    73,   283,     0,
       0,    26,    58,   283,     0,   152,     0,   157,   155,   161,
     154,     0,   195,   214,   173,   283,    24,   206,   190,   381,
     283,   389,   283,     0,    85,    89,   283,   110,   111,   121,
     112,   122,   114,   113,   115,   116,   117,   118,   120,   119,
     283,   193,   209,   202,   283,     0,   201,   283,   199,   283,
     228,   231,   248,   246,   236,   250,   253,   256,   261,   265,
     264,   271,   272,   270,   268,   269,   295,   283,     0,    60,
     361,   311,   296,   333,   283,   297,    60,   341,   338,    60,
     340,   336,   283,   283,     0,     0,   107,   166,   163,   353,
     354,   342,   283,   283,   350,   348,    60,   344,   324,    60,
     192,    64,    80,    71,    79,    78,   371,    83,    84,   283,
     283,    56,    28,    32,    21,    24,     0,   158,    60,   169,
     191,   203,   283,   195,   283,   390,   283,   283,   378,   387,
     377,     0,   105,   101,   100,   283,    99,    98,   194,   283,
     198,   217,     0,   360,   283,   312,   332,   283,   339,   283,
     337,     0,   319,     0,   310,     0,   315,   285,   352,   351,
     283,   347,    59,   327,     0,    65,    58,    76,     0,    62,
      72,    71,   213,   370,    55,    44,   283,   153,    59,   162,
     205,   283,   188,   283,   385,   379,    13,     0,   196,   283,
     307,   330,     0,   334,   313,   314,    60,   283,   345,    60,
      67,    60,    68,    75,    77,    58,    24,    45,    46,     0,
     369,   372,    25,   160,     0,   380,   381,   283,    24,   358,
     283,   316,   318,    63,    70,    66,    68,     0,     0,    30,
      54,     0,     0,   283,   384,   103,   283,   283,   283,   357,
     359,   355,   356,   309,   283,   320,   317,    69,    73,    52,
      41,    43,    58,    60,    32,    29,   368,   283,   189,   102,
     104,   358,   283,   222,   221,   321,    71,    74,    24,    53,
      31,    24,    36,   283,   362,   227,     0,    48,    49,    51,
      40,    24,    37,    38,    39,   373,    58,    34,    32,     0,
      35,    44,    60,    24,    47,    24,    42,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -513,  -513,  -513,  -513,  -198,   458,  -513,  -513,  -513,  -513,
    -513,  -281,    11,  -513,  -513,  -513,  -512,  -513,  -513,  -513,
    -487,  -513,  -513,  -106,  -513,  -513,  -513,  -513,  -513,  -186,
    -284,  -169,    18,  -513,   -37,  -189,    27,   -48,  -513,  -513,
    -513,    -8,  -388,  -513,  -513,    -1,   285,  -513,  -387,  -513,
    -513,  -513,  -513,    -4,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,  -513,
    -513,  -513,  -513,  -199,    24,   224,  -513,   200,  -513,  -513,
    -513,     9,   412,  -513,  -513,  -513,  -513,   513,  -513,  -513,
    -513,  -513,  -513,   495,  -214,  -513,  -513,  -513,  -513,  -513,
     496,  -513,   196,  -513,   369,  -136,  -513,   -16,  -513,    -5,
     -42,  -513,  -500,  -513,  -513,  -513,  -149,  -513,   290,     2,
    -513,  -513,  -513,     3,  -513,    16,  -513,   279,  -513,   281,
    -513,  -513,   278,  -513,   287,  -513,    37,    10,  -513,  -513,
    -513,  -513,  -513,  -513,   371,  -513,  -513,  -513,    91,  -513,
    -513,  -513,  -513,  -513,  -513,    21,  -513,   254,  -513,   -13,
     206,  -163,  -513,   102,  -513,  -513,  -513,  -513,  -513,   528,
    -513,  -513,  -513,   101,  -513,    14,   208,  -142,  -513,  -513,
    -165,  -513,  -513,    20,  -513,  -513,  -513,  -513,  -209,    62,
    -134,  -513,  -513,  -513
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    33,   184,   294,    34,    35,    36,    37,   144,
     314,   152,    38,   310,   205,   564,   485,   600,   593,   594,
     560,   561,   518,   519,   588,   589,   579,   311,   421,   562,
     199,   286,   196,   475,   412,   305,   480,   414,   514,   415,
     105,   476,   416,   147,   231,   202,    40,   445,   442,   528,
      41,   149,   183,    42,   350,    43,    44,    45,    46,    47,
      97,    48,    49,   190,    93,    50,    51,    52,   112,   113,
     114,   318,    53,   188,   319,    90,   428,   320,   186,    91,
     185,    92,   210,    54,    55,   215,    56,   418,    58,    59,
     433,    60,    61,    62,   239,   356,   155,    63,    64,   217,
      65,   219,   122,   235,   156,   203,   213,   268,   159,    66,
     571,   107,    67,    68,   573,   160,    69,   161,    70,    71,
     162,    72,   254,    73,   163,    74,   164,    75,   165,    76,
     260,   166,    77,   167,    78,   168,    79,    80,   182,    81,
      82,   283,    83,   270,   271,   278,   179,   180,   272,   379,
     506,   273,   395,   463,   555,   464,   556,   100,   193,   101,
     302,    84,   386,   280,   389,   390,   387,   281,   192,    85,
     406,   296,   404,   297,   549,   550,   380,   551,   552,   130,
      86,   131,   542,   419,   522,    87,   139,    88,   225,   435,
     465,   439,   331,   140
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   116,    94,   224,   106,    96,   119,   274,   127,   242,
     307,   279,   117,   118,    98,   329,   234,   123,   312,   117,
     351,   129,    98,   121,   300,   138,   304,    99,   423,   333,
       3,   483,   540,     3,   124,    99,   132,   352,   134,   135,
     141,   474,  -151,   133,   392,   432,   393,   145,   572,     3,
      12,   394,   582,   546,   128,   477,   478,   479,   258,   259,
      21,    89,   157,     3,   599,     3,    12,   150,   538,   539,
     -59,    26,   572,   104,    26,   322,    21,   -50,    27,    28,
      29,    27,    28,    29,   328,  -364,   601,   151,   104,  -364,
      26,   587,   409,   108,   195,   197,   309,    27,    28,    29,
     148,   353,   207,   208,    26,   358,    26,   151,   430,   516,
     227,    27,    28,    29,    28,    29,    95,  -364,   427,  -364,
    -364,   206,   396,   221,     3,   559,   538,   539,   591,     3,
     381,   222,   223,  -133,   102,   103,  -133,   388,   391,   228,
     545,    12,   517,   232,   486,   233,    12,   -59,   236,   109,
     -59,    21,   238,   405,   229,   153,    21,   115,   309,   569,
     154,   592,   407,     3,   603,    26,   104,   117,   117,   277,
      26,   444,   169,    28,    29,   269,   269,   170,    28,    29,
      12,   491,   171,  -383,   291,   447,   295,   -59,   377,   301,
      21,   284,   510,   306,   461,   483,   315,   517,   110,   111,
     238,   378,   377,   316,    26,   153,   120,   323,  -139,   324,
     455,  -139,    28,    29,    31,   378,     3,   458,   448,   492,
     460,   450,   295,   151,   402,   261,   262,   317,   172,   377,
     173,   536,   174,    12,   327,   537,   175,   471,   403,   158,
     473,     3,   378,    21,   548,   181,   361,   547,   478,   479,
       8,   176,   177,   178,   187,   325,   326,    26,    12,   489,
      14,   538,   539,   136,   137,    28,    29,    11,    21,   143,
     364,    14,  -376,   371,   372,   373,   374,   375,   580,    22,
     104,   189,    26,   538,   539,   191,   526,   399,   400,    27,
      28,    29,   383,   309,   501,   194,   490,   586,   369,   370,
     590,   -59,    98,   495,   104,   198,   200,   417,   424,   204,
     597,   209,   598,   498,   212,    99,     3,   211,   214,     3,
     123,   218,   606,   535,   607,   438,   220,   440,    14,   226,
     230,   237,   443,    12,   241,   243,    12,   531,   244,   255,
     533,   256,   534,    21,   257,   301,    21,   558,   282,   288,
     529,   285,   563,   565,   451,   263,   289,    26,   264,   265,
      26,   266,   444,   276,   452,    28,    29,    27,    28,    29,
     287,   290,   298,   532,   267,   -59,   -59,   -59,     3,   456,
      98,   444,   299,   303,   309,   308,   321,   295,   462,   313,
     330,   335,   336,    99,   581,    12,   238,   468,   469,   574,
     596,   354,   355,     3,   332,    21,   357,   568,   359,   362,
     376,   363,   384,   602,   382,   484,   401,   385,   417,    26,
     575,   397,   410,   574,   411,   276,    27,    28,    29,   438,
      21,   494,   223,   605,   413,   422,   441,   420,  -292,   425,
     317,   497,   429,   434,    26,   377,   449,   454,   466,   117,
     457,   459,    28,    29,   502,   470,   467,   269,   472,   481,
     496,   499,   488,   527,   487,   295,   509,   438,   504,  -382,
     511,   197,   505,   515,   507,   524,   530,   566,   543,     3,
     554,     4,     5,   576,     6,   521,   117,     7,   525,   578,
       3,   567,     9,   142,    10,   604,    12,   512,   557,   541,
      15,    16,   223,    18,    19,    20,    21,    12,   513,     3,
     577,    25,   523,   398,    57,   334,   426,    21,   125,   126,
      26,   431,    25,   443,   240,   462,    12,    27,    28,    29,
     585,    26,   216,   360,   365,   367,    21,   366,    27,    28,
      29,    25,   443,   570,   275,   500,  -290,   368,     2,   223,
      26,   553,     3,   408,     4,     5,   446,     6,    28,    29,
       7,   503,     8,   201,   146,     9,   417,    10,    11,    12,
      13,   508,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,   417,    24,    25,   584,   453,   583,   544,     0,
       0,     0,     3,    26,     0,     0,     0,     0,     0,     0,
      27,    28,    29,     3,     0,     4,     5,    30,     6,    12,
       0,     7,     0,    31,     0,     0,     9,     0,    10,    21,
      12,     0,     0,     0,    15,    16,     0,    18,    19,    20,
      21,     0,     0,    26,     0,    25,    32,     0,     0,     0,
       0,    28,    29,     3,    26,  -383,  -383,     3,     0,     0,
    -383,    27,    28,    29,     3,     0,     4,     5,     0,     6,
      12,     0,     7,     0,    12,     0,     0,     9,     0,    10,
      21,    12,     0,     0,    21,    15,    16,     0,    18,    19,
      20,    21,     0,     0,    26,     0,    25,   -87,    26,     0,
       0,    27,    28,    29,   493,    26,    28,    29,     0,     0,
       0,  -290,    27,    28,    29,     3,     0,     4,     5,     0,
       6,     0,     0,     7,     0,     8,     0,     0,     9,     0,
      10,    11,    12,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,   520,     0,
       0,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,    27,    28,    29,     0,     3,     0,     4,
       5,     0,     6,     0,     0,     7,    31,     8,     0,     0,
       9,     0,    10,    11,    12,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,   482,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,    27,    28,    29,     0,     3,
       0,     4,     5,     0,     6,     0,     0,     7,    31,     8,
       0,     0,     9,     0,    10,    11,    12,    13,     3,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   595,
      24,    25,     0,     0,     3,    12,     0,     0,     3,     0,
      26,     0,     0,     0,     0,    21,     0,    27,    28,    29,
       0,    12,     0,     0,     0,    12,     0,     0,     0,    26,
      31,    21,     0,     0,     0,    21,     0,    28,    29,     0,
       0,  -383,     3,     0,     3,    26,  -383,     0,     0,    26,
       0,   292,   293,    28,    29,   436,   437,    28,    29,    12,
     -11,    12,     0,     0,  -386,     0,     0,     0,     0,    21,
       0,    21,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,    26,     3,    26,     0,     0,     0,   292,
     293,    28,    29,    28,    29,    12,     3,  -383,   -59,     3,
    -383,    12,     0,     0,     0,    21,     0,     0,     0,     0,
       0,    21,     0,    12,     0,     0,    12,     0,     0,    26,
       0,     0,     0,    21,     0,    26,    21,    28,    29,     0,
     245,    25,  -210,    28,    29,   246,     0,    26,  -383,     0,
      26,     0,     0,     0,    27,    28,    29,    27,    28,    29,
     247,     0,     0,     0,     0,     0,   248,   249,     0,     0,
     250,   251,   252,   253,   337,   338,     0,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349
};

static const yytype_int16 yycheck[] =
{
       1,    17,     7,   137,    12,     9,    19,   172,    24,   158,
     199,   174,    17,    18,    11,   224,   152,    22,   204,    24,
     234,    25,    19,    21,   193,    30,   195,    11,   312,   227,
       4,   419,   519,     4,    23,    19,    26,   236,    28,    29,
      31,    51,     6,    27,    59,   326,    61,    36,   548,     4,
      21,    66,   564,    56,    25,    50,    51,    52,    39,    40,
      31,    83,    67,     4,    51,     4,    21,    88,    51,    52,
      11,    45,   572,    83,    45,   211,    31,    60,    52,    53,
      54,    52,    53,    54,   220,    56,   598,    90,    83,    60,
      45,   578,   301,    58,   102,   103,    83,    52,    53,    54,
      58,   237,    66,    67,    45,   241,    45,    90,   322,    57,
      59,    52,    53,    54,    53,    54,    83,    88,   317,    90,
      91,   112,   285,   128,     4,    50,    51,    52,    57,     4,
     272,   136,   137,    88,    51,    52,    91,   279,   280,    88,
     527,    21,    90,   148,   425,   149,    21,    88,   153,    83,
      91,    31,     5,   295,   143,    10,    31,    83,    83,   546,
      15,    90,   298,     4,    57,    45,    83,   172,   173,   174,
      45,   336,     3,    53,    54,   172,   173,     8,    53,    54,
      21,    34,    13,    58,   189,   350,   191,    62,    20,   194,
      31,   181,   476,   198,   392,   583,    52,    90,    66,    67,
       5,    33,    20,    59,    45,    10,    83,   212,    88,   214,
     379,    91,    53,    54,    65,    33,     4,   386,   354,   433,
     389,   357,   227,    90,    56,    53,    54,    83,    59,    20,
      61,   515,    63,    21,   218,   516,    67,   406,    70,    35,
     409,     4,    33,    31,    35,    51,   244,   528,    51,    52,
      14,    82,    83,    84,    23,    57,    58,    45,    21,   428,
      24,    51,    52,    51,    52,    53,    54,    20,    31,    33,
     254,    24,    60,   263,   264,   265,   266,   267,   562,    32,
      83,    25,    45,    51,    52,    59,   495,   292,   293,    52,
      53,    54,   276,    83,   457,    11,   432,   578,   261,   262,
     581,    64,   299,   437,    83,    56,    58,   308,   313,    59,
     591,     6,   596,   449,    70,   299,     4,    58,    57,     4,
     325,    23,   603,   512,   605,   330,    58,   332,    24,    60,
      91,    58,   336,    21,    58,    89,    21,   506,    18,    47,
     509,    55,   511,    31,    48,   350,    31,   536,    82,    66,
     499,    57,   538,   539,   359,    46,    57,    45,    49,    50,
      45,    52,   527,    51,   377,    53,    54,    52,    53,    54,
      88,    83,    58,   507,    65,    60,    64,    62,     4,   384,
     377,   546,    57,    57,    83,    85,    57,   392,   393,    87,
      57,    88,    56,   377,   563,    21,     5,   402,   403,   548,
     586,    58,    15,     4,    87,    31,    58,   543,     5,    31,
      60,    11,    58,   599,    62,   420,    60,    64,   419,    45,
     554,    83,    58,   572,    57,    51,    52,    53,    54,   434,
      31,   436,   437,   602,    57,    60,    60,    58,    64,    58,
      83,   445,    83,    57,    45,    20,    58,    57,    83,   454,
      57,    57,    53,    54,   459,    57,    61,   454,    57,    57,
      88,    11,    57,    56,    60,   470,   474,   472,    60,    58,
     478,   479,    62,   481,    58,   491,    57,    88,    58,     4,
      58,     6,     7,    57,     9,   486,   491,    12,   493,    57,
       4,    85,    17,    35,    19,   601,    21,   479,   535,    90,
      25,    26,   507,    28,    29,    30,    31,    21,   481,     4,
     558,    36,   488,   289,     1,   230,   316,    31,    23,    23,
      45,   325,    36,   527,   155,   530,    21,    52,    53,    54,
     572,    45,   120,   243,   255,   257,    31,   256,    52,    53,
      54,    36,   546,   547,   173,   454,    60,   260,     0,   554,
      45,   530,     4,   299,     6,     7,   350,     9,    53,    54,
      12,   459,    14,    88,    36,    17,   567,    19,    20,    21,
      22,   470,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,   583,    35,    36,   571,   378,   567,   526,    -1,
      -1,    -1,     4,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,     4,    -1,     6,     7,    59,     9,    21,
      -1,    12,    -1,    65,    -1,    -1,    17,    -1,    19,    31,
      21,    -1,    -1,    -1,    25,    26,    -1,    28,    29,    30,
      31,    -1,    -1,    45,    -1,    36,    88,    -1,    -1,    -1,
      -1,    53,    54,     4,    45,    57,    58,     4,    -1,    -1,
      62,    52,    53,    54,     4,    -1,     6,     7,    -1,     9,
      21,    -1,    12,    -1,    21,    -1,    -1,    17,    -1,    19,
      31,    21,    -1,    -1,    31,    25,    26,    -1,    28,    29,
      30,    31,    -1,    -1,    45,    -1,    36,    88,    45,    -1,
      -1,    52,    53,    54,    51,    45,    53,    54,    -1,    -1,
      -1,    62,    52,    53,    54,     4,    -1,     6,     7,    -1,
       9,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,    -1,
      19,    20,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    -1,     4,    -1,     6,
       7,    -1,     9,    -1,    -1,    12,    65,    14,    -1,    -1,
      17,    -1,    19,    20,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    86,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    -1,     4,
      -1,     6,     7,    -1,     9,    -1,    -1,    12,    65,    14,
      -1,    -1,    17,    -1,    19,    20,    21,    22,     4,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    86,
      35,    36,    -1,    -1,     4,    21,    -1,    -1,     4,    -1,
      45,    -1,    -1,    -1,    -1,    31,    -1,    52,    53,    54,
      -1,    21,    -1,    -1,    -1,    21,    -1,    -1,    -1,    45,
      65,    31,    -1,    -1,    -1,    31,    -1,    53,    54,    -1,
      -1,    57,     4,    -1,     4,    45,    62,    -1,    -1,    45,
      -1,    51,    52,    53,    54,    51,    52,    53,    54,    21,
      60,    21,    -1,    -1,    60,    -1,    -1,    -1,    -1,    31,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    45,     4,    45,    -1,    -1,    -1,    51,
      52,    53,    54,    53,    54,    21,     4,    57,    60,     4,
      60,    21,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    21,    -1,    -1,    21,    -1,    -1,    45,
      -1,    -1,    -1,    31,    -1,    45,    31,    53,    54,    -1,
      11,    36,    58,    53,    54,    16,    -1,    45,    58,    -1,
      45,    -1,    -1,    -1,    52,    53,    54,    52,    53,    54,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,
      41,    42,    43,    44,    68,    69,    -1,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    94,     0,     4,     6,     7,     9,    12,    14,    17,
      19,    20,    21,    22,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    35,    36,    45,    52,    53,    54,
      59,    65,    88,    95,    98,    99,   100,   101,   105,   138,
     139,   143,   146,   148,   149,   150,   151,   152,   154,   155,
     158,   159,   160,   165,   176,   177,   179,   180,   181,   182,
     184,   185,   186,   190,   191,   193,   202,   205,   206,   209,
     211,   212,   214,   216,   218,   220,   222,   225,   227,   229,
     230,   232,   233,   235,   254,   262,   273,   278,   280,    83,
     168,   172,   174,   157,   202,    83,   146,   153,   216,   218,
     250,   252,    51,    52,    83,   133,   134,   204,    58,    83,
      66,    67,   161,   162,   163,    83,   200,   202,   202,   252,
      83,   212,   195,   202,   105,   186,   193,   200,    25,   146,
     272,   274,   230,   218,   230,   230,    51,    52,   202,   279,
     286,   174,    98,    33,   102,   105,   262,   136,    58,   144,
      88,    90,   104,    10,    15,   189,   197,   202,    35,   201,
     208,   210,   213,   217,   219,   221,   224,   226,   228,     3,
       8,    13,    59,    61,    63,    67,    82,    83,    84,   239,
     240,    51,   231,   145,    96,   173,   171,    23,   166,    25,
     156,    59,   261,   251,    11,   134,   125,   134,    56,   123,
      58,    88,   138,   198,    59,   107,   174,    66,    67,     6,
     175,    58,    70,   199,    57,   178,   175,   192,    23,   194,
      58,   202,   202,   202,   283,   281,    60,    59,    88,   105,
      91,   137,   202,   146,   198,   196,   202,    58,     5,   187,
     197,    58,   209,    89,    18,    11,    16,    31,    37,    38,
      41,    42,    43,    44,   215,    47,    55,    48,    39,    40,
     223,    53,    54,    46,    49,    50,    52,    65,   200,   216,
     236,   237,   241,   244,   273,   237,    51,   202,   238,   254,
     256,   260,    82,   234,   230,    57,   124,    88,    66,    57,
      83,   202,    51,    52,    97,   202,   264,   266,    58,    57,
     124,   202,   253,    57,   124,   128,   202,   128,    85,    83,
     106,   120,   122,    87,   103,    52,    59,    83,   164,   167,
     170,    57,   198,   202,   202,    57,    58,   218,   198,   281,
      57,   285,    87,    97,   139,    88,    56,    68,    69,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
     147,   187,   166,   198,    58,    15,   188,    58,   198,     5,
     211,   212,    31,    11,   218,   220,   222,   225,   227,   229,
     229,   230,   230,   230,   230,   230,    60,    20,    33,   242,
     269,   270,    62,   218,    58,    64,   255,   259,   270,   257,
     258,   270,    59,    61,    66,   245,   254,    83,   168,   202,
     202,    60,    56,    70,   265,   270,   263,   198,   250,   281,
      58,    57,   127,    57,   130,   132,   135,   138,   180,   276,
      58,   121,    60,   123,   202,    58,   170,   166,   169,    83,
     187,   195,   104,   183,    57,   282,    51,    52,   202,   284,
     202,    60,   141,   146,   273,   140,   253,   273,   198,    58,
     198,   202,   252,   269,    57,   124,   202,    57,   124,    57,
     124,    97,   202,   246,   248,   283,    83,    61,   202,   202,
      57,   124,    57,   124,    51,   126,   134,    50,    51,    52,
     129,    57,    86,   135,   202,   109,   104,    60,    57,   124,
     198,    34,   187,    51,   202,   283,    88,   146,   198,    11,
     241,   254,   202,   256,    60,    62,   243,    58,   266,   134,
     123,   134,   125,   129,   131,   134,    57,    90,   115,   116,
      88,   138,   277,   167,   200,   202,   281,    56,   142,   209,
      57,   124,   283,   124,   124,   128,   123,   104,    51,    52,
     113,    90,   275,    58,   282,   141,    56,   104,    35,   267,
     268,   270,   271,   248,    58,   247,   249,   127,   128,    50,
     113,   114,   122,   122,   108,   122,    88,    85,   198,   141,
     146,   203,   205,   207,   209,   283,    57,   130,    57,   119,
     123,   124,   109,   276,   268,   203,   104,   113,   117,   118,
     104,    57,    90,   111,   112,    86,   122,   104,   123,    51,
     110,   109,   122,    57,   116,   124,   104,   104
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   101,   101,   101,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   122,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   130,   130,   131,   131,   132,   133,   133,   133,
     133,   133,   134,   135,   135,   136,   136,   137,   137,   138,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   144,   144,   145,   145,   146,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   149,   150,   150,   150,   150,   150,
     151,   152,   153,   153,   154,   155,   156,   156,   157,   157,
     158,   159,   159,   160,   161,   161,   162,   162,   162,   162,
     163,   163,   164,   164,   164,   165,   166,   166,   167,   168,
     169,   169,   170,   171,   171,   172,   173,   173,   174,   175,
     175,   176,   177,   178,   178,   179,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   181,   181,   181,   182,   183,
     183,   184,   185,   186,   187,   187,   188,   188,   189,   189,
     190,   191,   191,   192,   192,   193,   194,   194,   195,   196,
     196,   197,   198,   198,   199,   199,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   205,   206,   207,   208,   208,
     209,   210,   210,   211,   212,   212,   213,   213,   214,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   216,
     217,   217,   218,   219,   219,   220,   221,   221,   222,   223,
     223,   224,   224,   225,   226,   226,   226,   227,   228,   228,
     228,   228,   228,   228,   229,   230,   230,   230,   230,   231,
     231,   232,   233,   233,   234,   234,   235,   236,   236,   237,
     237,   238,   238,   239,   239,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   241,   241,   242,   242,   243,
     243,   244,   244,   245,   245,   245,   246,   247,   247,   248,
     248,   249,   250,   250,   251,   251,   252,   253,   254,   254,
     255,   255,   256,   256,   257,   257,   258,   258,   259,   259,
     260,   260,   261,   261,   262,   263,   263,   264,   265,   265,
     266,   266,   266,   266,   266,   267,   267,   268,   268,   269,
     270,   270,   271,   272,   272,   273,   274,   274,   275,   275,
     276,   276,   277,   277,   278,   279,   279,   280,   281,   281,
     282,   282,   283,   283,   284,   284,   284,   285,   285,   286,
     286,   286
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     2,     1,     2,     0,
       1,     0,     3,     6,     2,     1,     1,     2,     2,     2,
       2,     2,     0,     1,     0,     7,     1,     0,     3,     1,
       0,     5,     0,     4,     0,     3,     0,     1,     1,     4,
       4,     1,     0,     3,     0,     1,     1,     5,     1,     1,
       0,     2,     0,     7,     5,     2,     2,     2,     0,     1,
       0,     1,     0,     3,     0,     2,     0,     4,     0,     4,
       3,     0,     2,     0,     4,     1,     2,     6,     4,     4,
       4,     3,     1,     1,     1,     3,     0,     1,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     9,     4,     2,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     2,     0,     2,     0,
       2,     1,     1,     2,     1,     0,     2,     2,     1,     1,
       2,     1,     1,     3,     1,     4,     2,     0,     2,     2,
       3,     0,     3,     3,     0,     2,     3,     0,     2,     3,
       0,     3,     3,     2,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     6,     5,
       0,     5,     5,     4,     3,     0,     3,     0,     4,     3,
       3,     4,     4,     3,     0,     6,     2,     0,     2,     2,
       0,     2,     1,     4,     2,     0,     2,     4,     0,     2,
       1,     1,     1,     1,     0,     3,     2,     2,     3,     0,
       2,     3,     0,     2,     2,     1,     3,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       3,     0,     2,     3,     0,     2,     3,     0,     2,     1,
       1,     3,     0,     2,     3,     3,     0,     2,     3,     3,
       3,     3,     3,     0,     2,     2,     2,     2,     1,     2,
       0,     2,     1,     0,     0,     3,     3,     1,     1,     1,
       0,     1,     0,     2,     1,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     0,     3,
       0,     2,     3,     3,     3,     2,     3,     1,     0,     1,
       4,     2,     1,     1,     3,     0,     3,     3,     1,     1,
       3,     0,     3,     2,     3,     0,     1,     2,     1,     2,
       2,     2,     3,     0,     5,     3,     0,     3,     1,     0,
       2,     3,     3,     2,     2,     1,     1,     1,     0,     5,
       2,     1,     3,     1,     0,     2,     2,     1,     2,     0,
       2,     1,     1,     5,     2,     1,     0,     5,     3,     0,
       3,     0,     1,     0,     4,     2,     0,     2,     0,     3,
       4,     2
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

#line 1961 "parser.c"

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


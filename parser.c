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
  YYSYMBOL_lambdef = 205,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 206,           /* lambdef_nocond  */
  YYSYMBOL_or_and_test_kleene = 207,       /* or_and_test_kleene  */
  YYSYMBOL_or_test = 208,                  /* or_test  */
  YYSYMBOL_and_not_test_kleene = 209,      /* and_not_test_kleene  */
  YYSYMBOL_and_test = 210,                 /* and_test  */
  YYSYMBOL_not_test = 211,                 /* not_test  */
  YYSYMBOL_comp_op_kleene = 212,           /* comp_op_kleene  */
  YYSYMBOL_comparison = 213,               /* comparison  */
  YYSYMBOL_comp_op = 214,                  /* comp_op  */
  YYSYMBOL_star_expr = 215,                /* star_expr  */
  YYSYMBOL_vbar_xor_expr_kleene = 216,     /* vbar_xor_expr_kleene  */
  YYSYMBOL_expr = 217,                     /* expr  */
  YYSYMBOL_circumflex_and_expr_kleene = 218, /* circumflex_and_expr_kleene  */
  YYSYMBOL_xor_expr = 219,                 /* xor_expr  */
  YYSYMBOL_amper_shift_expr_kleene = 220,  /* amper_shift_expr_kleene  */
  YYSYMBOL_and_expr = 221,                 /* and_expr  */
  YYSYMBOL_left_shift_or_right_shift = 222, /* left_shift_or_right_shift  */
  YYSYMBOL_left_shift_or_right_shift_arith_expr_kleene = 223, /* left_shift_or_right_shift_arith_expr_kleene  */
  YYSYMBOL_shift_expr = 224,               /* shift_expr  */
  YYSYMBOL_plus_or_minus = 225,            /* plus_or_minus  */
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
#define YYLAST   1050

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
       0,    26,    26,    27,    28,    30,    31,    32,    40,    41,
      45,    45,    51,    52,    54,    55,    57,    59,    60,    61,
      64,    66,    66,    68,    68,    70,    72,    72,    74,    76,
      76,    78,    79,    81,    81,    83,    83,    85,    85,    87,
      88,    90,    90,    92,    92,    95,    95,    97,    98,   100,
     100,   102,   102,   104,   105,   107,   109,   111,   111,   113,
     113,   115,   115,   117,   117,   119,   119,   121,   122,   125,
     126,   127,   129,   129,   131,   132,   134,   135,   136,   137,
     138,   139,   141,   143,   143,   145,   146,   148,   148,   150,
     152,   153,   154,   155,   156,   157,   158,   159,   164,   164,
     167,   167,   170,   171,   174,   180,   181,   184,   185,   187,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   193,   195,   197,   197,   197,   197,   197,
     199,   201,   203,   203,   205,   207,   209,   209,   211,   211,
     213,   215,   215,   217,   220,   221,   223,   224,   225,   226,
     228,   228,   230,   231,   232,   234,   236,   236,   237,   239,
     241,   242,   244,   246,   246,   248,   250,   250,   252,   254,
     254,   256,   258,   260,   260,   262,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   276,   277,   278,   281,   284,
     285,   288,   291,   294,   297,   297,   299,   299,   301,   302,
     304,   306,   307,   310,   311,   314,   317,   317,   319,   322,
     322,   324,   326,   327,   329,   329,   332,   335,   336,   338,
     339,   341,   342,   344,   344,   346,   348,   350,   351,   353,
     355,   356,   358,   360,   361,   363,   364,   366,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   381,   382,
     383,   385,   387,   388,   390,   392,   393,   395,   397,   397,
     399,   400,   402,   404,   404,   406,   407,   408,   411,   413,
     414,   415,   416,   417,   418,   420,   422,   423,   424,   426,
     426,   428,   430,   430,   437,   438,   444,   447,   447,   449,
     449,   451,   451,   453,   453,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   466,   467,   469,   470,   472,
     473,   475,   476,   478,   479,   480,   482,   484,   484,   486,
     486,   488,   490,   490,   492,   493,   495,   497,   499,   499,
     501,   501,   503,   503,   505,   505,   507,   508,   510,   511,
     513,   514,   516,   516,   518,   520,   521,   523,   525,   525,
     527,   528,   529,   530,   531,   533,   534,   536,   536,   538,
     540,   541,   543,   548,   548,   550,   552,   553,   558,   558,
     561,   562,   564,   565,   567,   569,   569,   571,   573,   574,
     577,   577,   579,   579,   581,   582,   583,   585,   585,   587,
     588,   589
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
  "lambdef", "lambdef_nocond", "or_and_test_kleene", "or_test",
  "and_not_test_kleene", "and_test", "not_test", "comp_op_kleene",
  "comparison", "comp_op", "star_expr", "vbar_xor_expr_kleene", "expr",
  "circumflex_and_expr_kleene", "xor_expr", "amper_shift_expr_kleene",
  "and_expr", "left_shift_or_right_shift",
  "left_shift_or_right_shift_arith_expr_kleene", "shift_expr",
  "plus_or_minus", "plus_or_minus_term_kleene", "arith_expr",
  "varias_coisas_factor_kleene", "term", "factor",
  "opt_double_star_factor", "power", "opt_await", "trailer_kleene",
  "atom_expr", "opt_yieldex_or_testlist_comp", "opt_testlist_comp",
  "opt_dictorsetmaker", "string_plus", "atom",
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

#define YYPACT_NINF (-522)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-387)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -522,   562,  -522,  -522,   -32,  -522,  -522,   177,   -21,    43,
    -522,   228,    73,    12,    58,    72,    65,   980,   980,   228,
      75,   171,   980,   251,   980,    54,    33,    33,  -522,  -522,
     838,   -32,  -522,  -522,  -522,    95,   116,  -522,  -522,  -522,
    -522,  -522,   110,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,   -20,  -522,  -522,
    -522,    94,  -522,    42,  -522,  -522,  -522,  -522,   154,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,    33,  -522,  -522,
    -522,  -522,   316,   143,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,   173,  -522,   184,   153,  -522,  -522,  -522,  -522,
    -522,   204,   146,   146,  -522,  -522,   182,   183,   472,   201,
    -522,  -522,   -32,    34,   272,  -522,   226,   217,   233,  -522,
    -522,  -522,  -522,   273,  -522,  -522,  -522,   242,   980,  -522,
    -522,  -522,  -522,  -522,   980,   900,  -522,   248,  -522,   -17,
    -522,   285,  -522,  -522,  -522,   219,   980,   937,  -522,  -522,
     472,   404,   257,   164,   258,   171,  -522,   229,   299,   507,
     274,   265,   278,  -522,   165,   190,   209,  -522,  -522,  -522,
     101,    59,   483,  -522,  -522,  -522,  -522,   245,  -522,    33,
    -522,   277,   247,   271,   283,   260,  -522,   980,  -522,   854,
     286,   288,   980,   291,  -522,  -522,   980,  -522,   980,   266,
    -522,  -522,   269,   267,  -522,  -522,  -522,   187,   296,   472,
     980,  -522,   980,  -522,   296,   206,    33,  -522,   472,  -522,
    -522,  -522,  -522,   298,   270,   854,  -522,  -522,   613,   268,
     302,   969,   355,  -522,   173,   472,   303,   347,   306,   472,
     360,   171,   171,  -522,   335,   362,  -522,  -522,  -522,  -522,
    -522,  -522,    33,    33,    33,    33,  -522,  -522,    33,    33,
      33,    33,    33,    33,    33,    33,  -522,  -522,   314,  -522,
      36,  -522,  -522,   323,    33,   320,   324,    36,    36,  -522,
    -522,   181,  -522,   937,  -522,  -522,   297,   -32,  -522,  -522,
     980,   980,   327,   150,  -522,  -522,   472,   112,  -522,  -522,
     333,  -522,  -522,   337,  -522,   339,  -522,   819,   343,   345,
    -522,   182,   980,   348,  -522,   326,   173,  -522,  -522,  -522,
     328,   355,  -522,  -522,   980,    94,  -522,  -522,   350,   866,
    -522,   980,   352,  -522,  -522,   925,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,   962,
    -522,  -522,  -522,   472,   357,  -522,   472,  -522,   980,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,   228,   390,   356,  -522,
    -522,  -522,  -522,   980,  -522,   359,  -522,  -522,   361,  -522,
    -522,   854,   918,   336,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,   980,   980,  -522,  -522,   365,  -522,  -522,   369,  -522,
      99,  -522,    -2,  -522,   370,  -522,  -522,  -522,   715,   980,
    -522,  -522,  -522,  -522,    94,   368,  -522,   372,  -522,  -522,
    -522,   472,    50,   943,  -522,   980,   900,  -522,  -522,  -522,
     342,  -522,  -522,  -522,   937,  -522,  -522,  -522,   472,  -522,
    -522,   421,  -522,   602,  -522,  -522,   241,  -522,   318,  -522,
     373,   381,   379,  -522,   384,  -522,  -522,  -522,   882,  -522,
     980,  -522,   146,  -522,   182,  -522,   146,   146,  -522,    76,
    -522,  -522,  -522,     3,   664,  -522,   326,  -522,  -522,   980,
    -522,   980,  -522,  -522,  -522,   388,  -522,   171,  -522,  -522,
     320,  -522,  -522,  -522,   391,   393,  -522,   291,  -522,   291,
    -522,  -522,  -522,   182,    94,  -522,  -522,   225,   363,  -522,
    -522,  -522,   394,  -522,   350,   925,   -18,   234,   501,  -522,
     398,  -522,  -522,   337,  -522,   135,   269,   269,  -522,   375,
     382,   472,  -522,  -522,   925,   937,   982,  -522,  -522,  -522,
    -522,  -522,   653,  -522,  -522,  -522,   403,   407,  -522,  -522,
     182,   291,  -522,  -522,  -522,   819,  -522,  -522,  -522,    73,
     234,  -522,  -522,  -522,    76,  -522,    -7,  -522,  -522,    94,
       4,   767,   412,  -522,   269,  -522,  -522,  -522,  -522,    94,
    -522,  -522,  -522,  -522,   982,   182,   144,  -522,  -522,   269,
    -522,    19,   291,    94,  -522,    94,   127,  -522
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       4,   283,     1,   282,     0,   124,   130,   283,     0,   283,
     131,   283,   224,     0,     0,   145,     0,   283,   283,   283,
       0,   283,   283,     0,   283,   283,   283,   283,   264,   263,
     283,     0,     5,     3,    15,    16,     0,   183,   181,     6,
      86,    90,     0,    91,    92,    93,   125,   126,   127,   129,
     128,    94,   141,   142,    95,    96,    97,     0,   184,   176,
     177,    24,   178,     0,   179,   180,   328,   220,   218,   228,
     231,   234,   329,   236,   250,   253,   256,   283,   261,   267,
     274,   278,     0,   280,   108,   182,   135,     2,     9,   167,
     164,   143,   157,   140,   137,   343,   132,   134,   323,   322,
     325,     0,     0,    62,    82,   223,    58,     0,   283,     0,
     148,   149,     0,   144,     0,   170,     0,   215,   174,   123,
     170,   233,   204,   207,   185,   187,   186,     0,   283,   367,
     365,   363,   277,   248,   283,   283,   379,     0,   375,     0,
      14,     0,    19,    18,    17,    88,   283,   283,     7,    23,
     283,   283,     0,   195,     0,   283,   219,   229,   232,   237,
     251,   254,   257,   276,   262,   268,   275,   304,   302,   303,
     283,   283,   283,   301,   294,   298,   299,   300,   284,   283,
     281,    60,   374,   168,   165,     0,   159,   283,   138,   283,
       0,    60,   283,    60,    68,    61,   283,    68,   283,     0,
     212,   200,    27,    22,   150,   146,   147,     0,   172,   283,
     283,   216,   283,   175,   171,     0,   283,   208,   283,   366,
     391,   382,   379,   388,     0,   283,    12,    20,   283,     0,
     106,     0,   195,   211,   157,   283,     0,   197,     0,   283,
       0,   283,   283,   244,   246,     0,   240,   243,   242,   241,
     238,   239,   283,   283,   283,   283,   258,   259,   283,   283,
     283,   283,   283,   283,   283,   283,   305,   306,     0,   288,
     308,   289,   287,     0,   283,   328,     0,   331,   335,   291,
     293,   286,   279,    59,   109,     8,     0,     0,   156,   136,
     283,   283,     0,   349,    10,   346,   283,   283,   326,   379,
       0,    59,    81,    66,    57,    73,   225,   283,     0,     0,
      26,    58,   283,     0,   152,     0,   157,   155,   161,   154,
       0,   195,   214,   173,   283,    24,   206,   190,   381,   283,
     389,   283,     0,    85,    89,   283,   110,   111,   121,   112,
     122,   114,   113,   115,   116,   117,   118,   120,   119,   283,
     193,   209,   202,   283,     0,   201,   283,   199,   283,   227,
     230,   247,   245,   235,   249,   252,   255,   260,   266,   265,
     272,   273,   271,   269,   270,   295,   283,     0,    60,   361,
     311,   296,   333,   283,   297,    60,   341,   338,    60,   340,
     336,   283,   283,     0,   285,   107,   166,   163,   353,   354,
     342,   283,   283,   350,   348,    60,   344,   324,    60,   192,
      64,    80,    71,    79,    78,   371,    83,    84,   283,   283,
      56,    28,    32,    21,    24,     0,   158,    60,   169,   191,
     203,   283,   195,   283,   390,   283,   283,   378,   387,   377,
       0,   105,   101,   100,   283,    99,    98,   194,   283,   198,
     217,     0,   360,   283,   312,   332,   283,   339,   283,   337,
       0,   319,     0,   310,     0,   315,   352,   351,   283,   347,
      59,   327,     0,    65,    58,    76,     0,    62,    72,    71,
     213,   370,    55,    44,   283,   153,    59,   162,   205,   283,
     188,   283,   385,   379,    13,     0,   196,   283,   307,   330,
       0,   334,   313,   314,    60,   283,   345,    60,    67,    60,
      68,    75,    77,    58,    24,    45,    46,     0,   369,   372,
      25,   160,     0,   380,   381,   283,    24,   358,   283,   316,
     318,    63,    70,    66,    68,     0,     0,    30,    54,     0,
       0,   283,   384,   103,   283,   283,   283,   357,   359,   355,
     356,   309,   283,   320,   317,    69,    73,    52,    41,    43,
      58,    60,    32,    29,   368,   283,   189,   102,   104,   224,
     358,   222,   221,   321,    71,    74,    24,    53,    31,    24,
      36,   283,     0,   362,     0,    48,    49,    51,    40,    24,
      37,    38,    39,   373,   283,    58,    34,   226,    32,     0,
      35,    44,    60,    24,    47,    24,    42,    33
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -522,  -522,  -522,  -522,  -190,   437,  -522,  -522,  -522,  -522,
    -522,  -291,    10,  -522,  -522,  -522,  -521,  -522,  -522,  -522,
    -474,  -522,  -522,  -128,  -522,  -522,  -522,  -522,  -522,  -195,
    -294,  -171,     0,  -522,   -58,  -187,     7,   -76,  -522,  -522,
    -522,   -11,  -389,  -522,  -522,    -1,   254,  -522,  -471,  -522,
    -522,  -522,  -522,    -4,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,  -522,
    -522,  -522,  -522,  -198,     2,   198,  -522,   179,  -522,  -522,
    -522,     8,   376,  -522,  -522,  -522,  -522,   494,  -522,  -522,
    -522,  -522,  -522,   476,  -204,  -522,  -522,  -522,  -522,  -522,
     484,  -522,   185,  -522,   358,  -120,  -522,   -15,  -522,     1,
     -84,   -57,  -522,  -522,  -522,  -151,  -522,   275,     6,  -522,
    -522,  -522,    -8,  -522,     5,  -522,   262,  -522,   259,  -522,
    -522,   264,  -522,  -522,   281,  -522,    44,   -12,  -522,  -522,
    -522,  -522,  -522,  -522,   349,  -522,  -522,  -522,    74,  -522,
    -522,  -522,  -522,  -522,  -522,    14,  -522,   236,  -522,    -6,
     194,  -157,  -522,    98,  -522,  -522,  -522,  -522,  -522,   495,
    -522,  -522,  -522,    62,  -522,   -13,   175,  -211,  -522,  -522,
    -158,  -522,  -522,    13,  -522,  -522,  -522,  -522,  -196,    37,
    -129,  -522,  -522,  -522
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    33,   182,   292,    34,    35,    36,    37,   142,
     313,   150,    38,   309,   203,   562,   483,   600,   591,   592,
     558,   559,   516,   517,   586,   587,   577,   310,   420,   560,
     197,   284,   194,   473,   411,   303,   478,   413,   512,   414,
     105,   474,   415,   145,   229,   200,    40,   444,   441,   526,
      41,   147,   181,    42,   349,    43,    44,    45,    46,    47,
      97,    48,    49,   188,    93,    50,    51,    52,   112,   113,
     114,   317,    53,   186,   318,    90,   427,   319,   184,    91,
     183,    92,   208,    54,    55,   213,    56,   417,    58,    59,
     432,    60,    61,    62,   237,   355,   153,    63,    64,   215,
      65,   217,   122,   233,   154,   201,   211,   266,   156,    66,
     570,   107,    67,   571,   157,    68,   158,    69,    70,   159,
      71,   252,    72,   160,    73,   161,    74,   162,    75,   258,
     164,    76,    77,   165,    78,   166,    79,    80,   180,    81,
      82,   281,    83,   268,   269,   276,   177,   178,   270,   378,
     504,   271,   394,   462,   553,   463,   554,   100,   191,   101,
     300,    84,   385,   278,   388,   389,   386,   279,   190,    85,
     405,   294,   403,   295,   547,   548,   379,   549,   550,   130,
      86,   131,   540,   418,   520,    87,   137,    88,   223,   434,
     464,   438,   330,   138
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,   106,   116,    98,   240,    96,   222,   311,    94,   127,
     305,    98,   272,   119,   132,   277,    99,   422,   117,   118,
     298,   129,   302,   123,    99,   117,   328,   121,   350,   481,
     232,   136,   133,   124,   431,   332,   351,     3,   544,   139,
    -151,   580,   225,   538,   536,   537,   143,     3,   475,   476,
     477,    89,   151,   -50,   543,   236,   376,   152,     3,   380,
     514,   589,    95,     3,    12,   163,   387,   390,   148,   377,
     108,   226,   149,   567,    21,    12,   603,   601,    26,   128,
      12,   104,   404,   149,   489,    21,    28,    29,    26,   321,
      21,   193,   195,   515,   590,    27,    28,    29,   327,    26,
     205,   206,   585,   408,    26,     3,    27,    28,    29,   515,
    -364,    27,    28,    29,  -364,   352,     3,   429,   426,   357,
     204,  -290,    12,   -59,   102,   103,   395,   476,   477,   219,
       8,  -133,    21,   484,  -133,   220,   221,    25,   110,   111,
      14,   109,  -364,   231,  -364,  -364,    26,   230,   115,   141,
     472,   227,   234,    27,    28,    29,   104,    26,   120,   104,
      31,  -290,   267,   267,    27,    28,    29,   282,   146,   236,
     376,   117,   117,   275,   151,     3,   406,   443,   536,   537,
     508,     3,   104,   377,   149,   557,   536,   537,   289,   155,
     293,   446,   481,   299,   179,   599,   185,   304,    12,   306,
     -59,   460,    21,   -59,   256,   257,   401,   454,    21,   187,
     308,   322,   189,   323,   457,   192,    26,   459,   308,   534,
     402,   326,    26,   535,    28,    29,   293,   308,   490,   104,
      28,    29,     3,   447,   469,   545,   449,   471,   196,   314,
     391,   198,   392,   259,   260,     3,   315,   393,   360,   370,
     371,   372,   373,   374,   376,   261,   487,   363,   262,   263,
     202,   264,    12,   324,   325,  -139,   578,   377,  -139,   546,
     316,    11,    21,    26,   265,    14,   536,   537,   207,   382,
      27,    28,    29,    22,   209,   584,    26,   210,   588,    98,
     212,   398,   399,    27,    28,    29,   216,   524,   596,   499,
     218,   598,    99,   368,   369,   -59,   416,   493,   224,    14,
     228,   488,   606,   423,   607,   235,   239,   242,   241,   167,
     254,   253,     3,   533,   168,   123,   255,   280,   496,   169,
     437,   442,   439,   529,   283,   285,   531,   286,   532,    12,
     287,   561,   563,   288,   296,   297,   527,   556,   301,    21,
     299,   307,   308,   320,   312,   329,   334,   331,   335,   450,
     236,   353,   354,    26,   356,   358,   361,   443,    98,   274,
     451,    28,    29,   362,   375,   170,   530,   171,   383,   172,
     396,    99,   -59,   173,   455,   381,   443,   400,   384,   595,
     579,   409,   293,   461,   410,   572,   412,     3,   174,   175,
     176,   419,   466,   467,   602,   421,   424,   433,     3,   316,
     376,   428,   440,   453,    12,   448,   456,   416,   458,   465,
     482,   566,   468,   573,    21,    12,   470,   479,   485,   486,
     494,   605,   497,   502,   437,    21,   492,   221,    26,  -382,
     495,   503,   505,   572,   525,   267,    28,    29,   528,    26,
    -383,  -383,   541,   539,   117,  -383,   552,    28,    29,   500,
     574,   507,  -210,   564,   576,   509,   195,   565,   513,   293,
     594,   437,   140,   604,   522,   555,     3,   510,     4,     5,
     575,     6,   333,   519,     7,   397,   511,     3,   521,     9,
     117,    10,   523,    12,   425,    57,   214,    15,    16,   125,
      18,    19,    20,    21,    12,     3,   221,   126,    25,   430,
     597,   238,   582,   365,    21,   364,   359,    26,   243,   366,
     273,   442,    12,   244,    27,    28,    29,   498,    26,   461,
     506,   144,    21,   407,   274,    27,    28,    29,   245,   367,
     442,   568,   551,   445,   246,   247,    26,  -292,   248,   249,
     250,   251,   452,   221,    28,    29,   501,   583,   106,  -383,
     199,   542,     2,   -59,   416,     0,     3,     0,     4,     5,
       0,     6,     0,     0,     7,     0,     8,     0,   581,     9,
     416,    10,    11,    12,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     3,    26,     0,     0,
       0,     0,     0,     0,    27,    28,    29,     3,     0,     4,
       5,    30,     6,    12,     0,     7,     0,    31,     0,     0,
       9,     0,    10,    21,    12,     0,     0,     0,    15,    16,
       0,    18,    19,    20,    21,     0,     0,    26,     0,    25,
      32,     0,     0,     0,    27,    28,    29,     3,    26,     0,
       0,     0,   -59,     0,   -59,    27,    28,    29,     3,     0,
       4,     5,     0,     6,    12,     0,     7,     0,     0,     0,
       0,     9,     0,    10,    21,    12,     0,     0,     0,    15,
      16,     0,    18,    19,    20,    21,     0,     0,    26,     0,
      25,   -87,     0,     0,     0,     0,    28,    29,     0,    26,
    -383,     0,     0,     0,     0,  -383,    27,    28,    29,     3,
       0,     4,     5,     0,     6,     0,     0,     7,     0,     8,
       0,     0,     9,     0,    10,    11,    12,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,   518,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,    27,    28,    29,
       0,     3,     0,     4,     5,     0,     6,     0,     0,     7,
      31,     8,     0,     0,     9,     0,    10,    11,    12,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,   480,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,    27,
      28,    29,     0,     3,     0,     4,     5,     0,     6,     0,
       0,     7,    31,     8,     0,     0,     9,     0,    10,    11,
      12,    13,     3,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   593,    24,    25,     0,     0,     3,    12,
       0,     0,     0,     0,    26,     0,     0,     0,     0,    21,
       3,    27,    28,    29,     0,    12,     0,     0,     0,     0,
       0,     0,     0,    26,    31,    21,     3,    12,     0,   134,
     135,    28,    29,     0,     0,     0,     0,    21,  -376,    26,
       0,     0,     0,    12,     3,   290,   291,    28,    29,     0,
       0,    26,     0,    21,   -11,     0,     0,   435,   436,    28,
      29,    12,     3,     0,     0,     0,  -386,    26,     0,     3,
       0,    21,     0,   290,   291,    28,    29,     0,     0,    12,
       0,     3,   -59,     0,     0,    26,    12,     3,     0,    21,
       0,     0,     0,    28,    29,     0,    21,  -383,    12,     0,
    -383,    25,     0,    26,    12,     0,     3,     0,    21,     0,
      26,    28,    29,     0,    21,     0,  -383,    27,    28,    29,
       0,     0,    26,    12,     3,     0,     3,     0,    26,    27,
      28,    29,     0,    21,   491,     0,    28,    29,    25,     0,
       0,    12,     0,   569,     0,     0,     0,    26,     0,     0,
       0,    21,     0,    21,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,    26,     0,     0,
       0,     0,     0,    28,    29,    28,    29,   336,   337,     0,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348
};

static const yytype_int16 yycheck[] =
{
       1,    12,    17,    11,   155,     9,   135,   202,     7,    24,
     197,    19,   170,    19,    26,   172,    11,   311,    17,    18,
     191,    25,   193,    22,    19,    24,   222,    21,   232,   418,
     150,    30,    27,    23,   325,   225,   234,     4,    56,    31,
       6,   562,    59,   517,    51,    52,    36,     4,    50,    51,
      52,    83,    10,    60,   525,     5,    20,    15,     4,   270,
      57,    57,    83,     4,    21,    77,   277,   278,    88,    33,
      58,    88,    90,   544,    31,    21,    57,   598,    45,    25,
      21,    83,   293,    90,    34,    31,    53,    54,    45,   209,
      31,   102,   103,    90,    90,    52,    53,    54,   218,    45,
      66,    67,   576,   299,    45,     4,    52,    53,    54,    90,
      56,    52,    53,    54,    60,   235,     4,   321,   316,   239,
     112,    62,    21,    11,    51,    52,   283,    51,    52,   128,
      14,    88,    31,   424,    91,   134,   135,    36,    66,    67,
      24,    83,    88,   147,    90,    91,    45,   146,    83,    33,
      51,   141,   151,    52,    53,    54,    83,    45,    83,    83,
      65,    60,   170,   171,    52,    53,    54,   179,    58,     5,
      20,   170,   171,   172,    10,     4,   296,   335,    51,    52,
     474,     4,    83,    33,    90,    50,    51,    52,   187,    35,
     189,   349,   581,   192,    51,    51,    23,   196,    21,   198,
      88,   391,    31,    91,    39,    40,    56,   378,    31,    25,
      83,   210,    59,   212,   385,    11,    45,   388,    83,   513,
      70,   216,    45,   514,    53,    54,   225,    83,   432,    83,
      53,    54,     4,   353,   405,   526,   356,   408,    56,    52,
      59,    58,    61,    53,    54,     4,    59,    66,   242,   261,
     262,   263,   264,   265,    20,    46,   427,   252,    49,    50,
      59,    52,    21,    57,    58,    88,   560,    33,    91,    35,
      83,    20,    31,    45,    65,    24,    51,    52,     6,   274,
      52,    53,    54,    32,    58,   576,    45,    70,   579,   297,
      57,   290,   291,    52,    53,    54,    23,   493,   589,   456,
      58,   595,   297,   259,   260,    64,   307,   436,    60,    24,
      91,   431,   603,   312,   605,    58,    58,    18,    89,     3,
      55,    47,     4,   510,     8,   324,    48,    82,   448,    13,
     329,   335,   331,   504,    57,    88,   507,    66,   509,    21,
      57,   536,   537,    83,    58,    57,   497,   534,    57,    31,
     349,    85,    83,    57,    87,    57,    88,    87,    56,   358,
       5,    58,    15,    45,    58,     5,    31,   525,   376,    51,
     376,    53,    54,    11,    60,    59,   505,    61,    58,    63,
      83,   376,    64,    67,   383,    62,   544,    60,    64,   584,
     561,    58,   391,   392,    57,   546,    57,     4,    82,    83,
      84,    58,   401,   402,   599,    60,    58,    57,     4,    83,
      20,    83,    60,    57,    21,    58,    57,   418,    57,    83,
     419,   541,    57,   552,    31,    21,    57,    57,    60,    57,
      88,   602,    11,    60,   433,    31,   435,   436,    45,    58,
     444,    62,    58,   594,    56,   453,    53,    54,    57,    45,
      57,    58,    58,    90,   453,    62,    58,    53,    54,   458,
      57,   472,    58,    88,    57,   476,   477,    85,   479,   468,
      58,   470,    35,   601,   489,   533,     4,   477,     6,     7,
     556,     9,   228,   484,    12,   287,   479,     4,   486,    17,
     489,    19,   491,    21,   315,     1,   120,    25,    26,    23,
      28,    29,    30,    31,    21,     4,   505,    23,    36,   324,
     594,   153,   569,   254,    31,   253,   241,    45,    11,   255,
     171,   525,    21,    16,    52,    53,    54,   453,    45,   528,
     468,    36,    31,   297,    51,    52,    53,    54,    31,   258,
     544,   545,   528,   349,    37,    38,    45,    64,    41,    42,
      43,    44,   377,   552,    53,    54,   458,   570,   569,    58,
      88,   524,     0,    62,   565,    -1,     4,    -1,     6,     7,
      -1,     9,    -1,    -1,    12,    -1,    14,    -1,   565,    17,
     581,    19,    20,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,     4,    -1,     6,
       7,    59,     9,    21,    -1,    12,    -1,    65,    -1,    -1,
      17,    -1,    19,    31,    21,    -1,    -1,    -1,    25,    26,
      -1,    28,    29,    30,    31,    -1,    -1,    45,    -1,    36,
      88,    -1,    -1,    -1,    52,    53,    54,     4,    45,    -1,
      -1,    -1,    60,    -1,    62,    52,    53,    54,     4,    -1,
       6,     7,    -1,     9,    21,    -1,    12,    -1,    -1,    -1,
      -1,    17,    -1,    19,    31,    21,    -1,    -1,    -1,    25,
      26,    -1,    28,    29,    30,    31,    -1,    -1,    45,    -1,
      36,    88,    -1,    -1,    -1,    -1,    53,    54,    -1,    45,
      57,    -1,    -1,    -1,    -1,    62,    52,    53,    54,     4,
      -1,     6,     7,    -1,     9,    -1,    -1,    12,    -1,    14,
      -1,    -1,    17,    -1,    19,    20,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      -1,     4,    -1,     6,     7,    -1,     9,    -1,    -1,    12,
      65,    14,    -1,    -1,    17,    -1,    19,    20,    21,    22,
      -1,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    86,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    -1,     4,    -1,     6,     7,    -1,     9,    -1,
      -1,    12,    65,    14,    -1,    -1,    17,    -1,    19,    20,
      21,    22,     4,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    86,    35,    36,    -1,    -1,     4,    21,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    31,
       4,    52,    53,    54,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    65,    31,     4,    21,    -1,    51,
      52,    53,    54,    -1,    -1,    -1,    -1,    31,    60,    45,
      -1,    -1,    -1,    21,     4,    51,    52,    53,    54,    -1,
      -1,    45,    -1,    31,    60,    -1,    -1,    51,    52,    53,
      54,    21,     4,    -1,    -1,    -1,    60,    45,    -1,     4,
      -1,    31,    -1,    51,    52,    53,    54,    -1,    -1,    21,
      -1,     4,    60,    -1,    -1,    45,    21,     4,    -1,    31,
      -1,    -1,    -1,    53,    54,    -1,    31,    57,    21,    -1,
      60,    36,    -1,    45,    21,    -1,     4,    -1,    31,    -1,
      45,    53,    54,    -1,    31,    -1,    58,    52,    53,    54,
      -1,    -1,    45,    21,     4,    -1,     4,    -1,    45,    52,
      53,    54,    -1,    31,    51,    -1,    53,    54,    36,    -1,
      -1,    21,    -1,    21,    -1,    -1,    -1,    45,    -1,    -1,
      -1,    31,    -1,    31,    -1,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    45,    -1,    -1,
      -1,    -1,    -1,    53,    54,    53,    54,    68,    69,    -1,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81
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
     184,   185,   186,   190,   191,   193,   202,   205,   208,   210,
     211,   213,   215,   217,   219,   221,   224,   225,   227,   229,
     230,   232,   233,   235,   254,   262,   273,   278,   280,    83,
     168,   172,   174,   157,   202,    83,   146,   153,   215,   217,
     250,   252,    51,    52,    83,   133,   134,   204,    58,    83,
      66,    67,   161,   162,   163,    83,   200,   202,   202,   252,
      83,   211,   195,   202,   105,   186,   193,   200,    25,   146,
     272,   274,   230,   217,    51,    52,   202,   279,   286,   174,
      98,    33,   102,   105,   262,   136,    58,   144,    88,    90,
     104,    10,    15,   189,   197,    35,   201,   207,   209,   212,
     216,   218,   220,   230,   223,   226,   228,     3,     8,    13,
      59,    61,    63,    67,    82,    83,    84,   239,   240,    51,
     231,   145,    96,   173,   171,    23,   166,    25,   156,    59,
     261,   251,    11,   134,   125,   134,    56,   123,    58,    88,
     138,   198,    59,   107,   174,    66,    67,     6,   175,    58,
      70,   199,    57,   178,   175,   192,    23,   194,    58,   202,
     202,   202,   283,   281,    60,    59,    88,   105,    91,   137,
     202,   146,   198,   196,   202,    58,     5,   187,   197,    58,
     208,    89,    18,    11,    16,    31,    37,    38,    41,    42,
      43,    44,   214,    47,    55,    48,    39,    40,   222,    53,
      54,    46,    49,    50,    52,    65,   200,   215,   236,   237,
     241,   244,   273,   237,    51,   202,   238,   254,   256,   260,
      82,   234,   230,    57,   124,    88,    66,    57,    83,   202,
      51,    52,    97,   202,   264,   266,    58,    57,   124,   202,
     253,    57,   124,   128,   202,   128,   202,    85,    83,   106,
     120,   122,    87,   103,    52,    59,    83,   164,   167,   170,
      57,   198,   202,   202,    57,    58,   217,   198,   281,    57,
     285,    87,    97,   139,    88,    56,    68,    69,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,   147,
     187,   166,   198,    58,    15,   188,    58,   198,     5,   210,
     211,    31,    11,   217,   219,   221,   224,   227,   229,   229,
     230,   230,   230,   230,   230,    60,    20,    33,   242,   269,
     270,    62,   217,    58,    64,   255,   259,   270,   257,   258,
     270,    59,    61,    66,   245,   254,    83,   168,   202,   202,
      60,    56,    70,   265,   270,   263,   198,   250,   281,    58,
      57,   127,    57,   130,   132,   135,   138,   180,   276,    58,
     121,    60,   123,   202,    58,   170,   166,   169,    83,   187,
     195,   104,   183,    57,   282,    51,    52,   202,   284,   202,
      60,   141,   146,   273,   140,   253,   273,   198,    58,   198,
     202,   252,   269,    57,   124,   202,    57,   124,    57,   124,
      97,   202,   246,   248,   283,    83,   202,   202,    57,   124,
      57,   124,    51,   126,   134,    50,    51,    52,   129,    57,
      86,   135,   202,   109,   104,    60,    57,   124,   198,    34,
     187,    51,   202,   283,    88,   146,   198,    11,   241,   254,
     202,   256,    60,    62,   243,    58,   266,   134,   123,   134,
     125,   129,   131,   134,    57,    90,   115,   116,    88,   138,
     277,   167,   200,   202,   281,    56,   142,   208,    57,   124,
     283,   124,   124,   128,   123,   104,    51,    52,   113,    90,
     275,    58,   282,   141,    56,   104,    35,   267,   268,   270,
     271,   248,    58,   247,   249,   127,   128,    50,   113,   114,
     122,   122,   108,   122,    88,    85,   198,   141,   146,    21,
     203,   206,   208,   283,    57,   130,    57,   119,   123,   124,
     109,   276,   204,   268,   104,   113,   117,   118,   104,    57,
      90,   111,   112,    86,    58,   122,   104,   203,   123,    51,
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
     202,   203,   203,   204,   204,   205,   206,   207,   207,   208,
     209,   209,   210,   211,   211,   212,   212,   213,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   215,   216,
     216,   217,   218,   218,   219,   220,   220,   221,   222,   222,
     223,   223,   224,   225,   225,   226,   226,   226,   227,   228,
     228,   228,   228,   228,   228,   229,   230,   230,   230,   231,
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
       0,     2,     2,     2,     0,     1,     1,     2,     2,     0,
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
       1,     1,     1,     1,     0,     4,     4,     3,     0,     2,
       3,     0,     2,     2,     1,     3,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     3,
       0,     2,     3,     0,     2,     3,     0,     2,     1,     1,
       3,     0,     2,     1,     1,     3,     3,     0,     2,     3,
       3,     3,     3,     3,     0,     2,     2,     2,     1,     2,
       0,     2,     1,     0,     0,     2,     3,     1,     1,     1,
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

#line 1970 "parser.c"

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


/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 7 "parser.y"

typedef enum yytokentype yytoken_kind_t;

#line 52 "parser.h"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDMARKER = 258,
    AND = 259,
    AMPER = 260,
    AMPEREQUAL = 261,
    ARROW = 262,
    AS = 263,
    ASSERT = 264,
    EQUAL = 265,
    ASYNC = 266,
    AT = 267,
    ATEQUAL = 268,
    AWAIT = 269,
    BREAK = 270,
    CLASS = 271,
    COLON = 272,
    COLONEQUAL = 273,
    COMMA = 274,
    CONTINUE = 275,
    DEDENT = 276,
    DEF = 277,
    DEL = 278,
    DOT = 279,
    DOUBLESLASH = 280,
    DOUBLESLASHEQUAL = 281,
    DOUBLESTAR = 282,
    DOUBLESTAREQUAL = 283,
    EQEQUAL = 284,
    ELIF = 285,
    ELLIPSIS = 286,
    ELSE = 287,
    EXCEPT = 288,
    FALSE = 289,
    FOR = 290,
    FINALLY = 291,
    FROM = 292,
    GREATEREQUAL = 293,
    GLOBAL = 294,
    GREATER = 295,
    IF = 296,
    IMPORT = 297,
    IN = 298,
    INDENT = 299,
    IS = 300,
    LAMBDA = 301,
    LSQB = 302,
    LBRACE = 303,
    LESSEQUAL = 304,
    LPAR = 305,
    LEFTSHIFT = 306,
    LEFTSHIFTEQUAL = 307,
    LESS = 308,
    MINUS = 309,
    MINUSEQUAL = 310,
    NAME = 311,
    NOTEQUAL = 312,
    NEWLINE = 313,
    NONE = 314,
    NONLOCAL = 315,
    NOT = 316,
    NUMBER = 317,
    OR = 318,
    VBAR = 319,
    VBAREQUAL = 320,
    PASS = 321,
    PERCENT = 322,
    PERCENTEQUAL = 323,
    PLUS = 324,
    PLUSEQUAL = 325,
    RAISE = 326,
    RSQB = 327,
    RBRACE = 328,
    RETURN = 329,
    RPAR = 330,
    RIGHTSHIFT = 331,
    RIGHTSHIFTEQUAL = 332,
    SEMICOLON = 333,
    SLASH = 334,
    SLASHEQUAL = 335,
    STAR = 336,
    STAREQUAL = 337,
    STRING = 338,
    TILDE = 339,
    TRUE = 340,
    TRY = 341,
    TYPE_COMMENT = 342,
    WITH = 343,
    WHILE = 344,
    CIRCUMFLEX = 345,
    CIRCUMFLEXEQUAL = 346,
    YIELD = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef AST* YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

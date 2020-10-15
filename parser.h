/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ENDMARKER = 0,
    AND = 258,
    AMPER = 259,
    AMPEREQUAL = 260,
    ARROW = 261,
    AS = 262,
    ASSERT = 263,
    EQUAL = 264,
    ASYNC = 265,
    AT = 266,
    ATEQUAL = 267,
    AWAIT = 268,
    BREAK = 269,
    CLASS = 270,
    COLON = 271,
    COLONEQUAL = 272,
    COMMA = 273,
    CONTINUE = 274,
    DEDENT = 275,
    DEF = 276,
    DEL = 277,
    DOT = 278,
    DOUBLESLASH = 279,
    DOUBLESLASHEQUAL = 280,
    DOUBLESTAR = 281,
    DOUBLESTAREQUAL = 282,
    EQEQUAL = 283,
    ELIF = 284,
    ELLIPSIS = 285,
    ELSE = 286,
    EXCEPT = 287,
    FALSE = 288,
    FOR = 289,
    FINALLY = 290,
    FROM = 291,
    GREATEREQUAL = 292,
    GLOBAL = 293,
    GREATER = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LSQB = 301,
    LBRACE = 302,
    LESSEQUAL = 303,
    LPAR = 304,
    LEFTSHIFT = 305,
    LEFTSHIFTEQUAL = 306,
    LESS = 307,
    MINUS = 308,
    MINUSEQUAL = 309,
    NAME = 310,
    NOTEQUAL = 311,
    NEWLINE = 312,
    NONE = 313,
    NONLOCAL = 314,
    NOT = 315,
    NUMBER = 316,
    OR = 317,
    VBAR = 318,
    VBAREQUAL = 319,
    PASS = 320,
    PERCENT = 321,
    PERCENTEQUAL = 322,
    PLUS = 323,
    PLUSEQUAL = 324,
    RAISE = 325,
    RSQB = 326,
    RBRACE = 327,
    RETURN = 328,
    RPAR = 329,
    RIGHTSHIFT = 330,
    RIGHTSHIFTEQUAL = 331,
    SEMICOLON = 332,
    SLASH = 333,
    SLASHEQUAL = 334,
    STAR = 335,
    STAREQUAL = 336,
    STRING = 337,
    TILDE = 338,
    TRUE = 339,
    TRY = 340,
    TYPE_COMMENT = 341,
    WITH = 342,
    WHILE = 343,
    CIRCUMFLEX = 344,
    CIRCUMFLEXEQUAL = 345,
    YIELD = 346
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

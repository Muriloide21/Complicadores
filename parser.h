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
    FALSE = 258,
    AWAIT = 259,
    ELSE = 260,
    IMPORT = 261,
    PASS = 262,
    NONE = 263,
    BREAK = 264,
    EXCEPT = 265,
    IN = 266,
    RAISE = 267,
    TRUE = 268,
    CLASS = 269,
    FINALLY = 270,
    IS = 271,
    RETURN = 272,
    AND = 273,
    CONTINUE = 274,
    FOR = 275,
    LAMBDA = 276,
    TRY = 277,
    AS = 278,
    DEF = 279,
    FROM = 280,
    NONLOCAL = 281,
    WHILE = 282,
    ASSERT = 283,
    DEL = 284,
    GLOBAL = 285,
    NOT = 286,
    WITH = 287,
    ASYNC = 288,
    ELIF = 289,
    IF = 290,
    YIELD = 291,
    EQEQUAL = 292,
    NOTEQUAL = 293,
    LEFTSHIFT = 294,
    RIGHTSHIFT = 295,
    LESSEQUAL = 296,
    GREATEREQUAL = 297,
    LESS = 298,
    GREATER = 299,
    TILDE = 300,
    PERCENT = 301,
    VBAR = 302,
    AMPER = 303,
    DOUBLESLASH = 304,
    SLASH = 305,
    DOUBLESTAR = 306,
    STAR = 307,
    MINUS = 308,
    PLUS = 309,
    CIRCUMFLEX = 310,
    EQUAL = 311,
    COMMA = 312,
    COLON = 313,
    LPAR = 314,
    RPAR = 315,
    LSQB = 316,
    RSQB = 317,
    LBRACE = 318,
    RBRACE = 319,
    AT = 320,
    DOT = 321,
    ELLIPSIS = 322,
    PLUSEQUAL = 323,
    MINEQUAL = 324,
    COLONEQUAL = 325,
    DOUBLESTAREQUAL = 326,
    STAREQUAL = 327,
    DOUBLESLASHEQUAL = 328,
    SLASHEQUAL = 329,
    ATEQUAL = 330,
    PERCENTEQUAL = 331,
    AMPEREQUAL = 332,
    VBAREQUAL = 333,
    CIRCUMFLEXEQUAL = 334,
    RIGHTSHIFTEQUAL = 335,
    LEFTSHIFTEQUAL = 336,
    STRING = 337,
    NAME = 338,
    NUMBER = 339,
    INDENT = 340,
    DEDENT = 341,
    ARROW = 342,
    NEWLINE = 343,
    OR = 344,
    TYPE_COMMENT = 345,
    SEMICOLON = 346
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

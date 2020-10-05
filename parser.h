/* A Bison parser, made by GNU Bison 3.7.2.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    SEMICOLON = 346                /* SEMICOLON  */
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

#endif /* !YY_YY_PARSER_H_INCLUDED  */

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
    ENDMARKER = 0,                 /* ENDMARKER  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AND = 258,                     /* AND  */
    AMPER = 259,                   /* AMPER  */
    AMPEREQUAL = 260,              /* AMPEREQUAL  */
    ARROW = 261,                   /* ARROW  */
    AS = 262,                      /* AS  */
    ASSERT = 263,                  /* ASSERT  */
    EQUAL = 264,                   /* EQUAL  */
    ASYNC = 265,                   /* ASYNC  */
    AT = 266,                      /* AT  */
    ATEQUAL = 267,                 /* ATEQUAL  */
    AWAIT = 268,                   /* AWAIT  */
    BREAK = 269,                   /* BREAK  */
    CLASS = 270,                   /* CLASS  */
    COLON = 271,                   /* COLON  */
    COLONEQUAL = 272,              /* COLONEQUAL  */
    COMMA = 273,                   /* COMMA  */
    CONTINUE = 274,                /* CONTINUE  */
    DEDENT = 275,                  /* DEDENT  */
    DEF = 276,                     /* DEF  */
    DEL = 277,                     /* DEL  */
    DOT = 278,                     /* DOT  */
    DOUBLESLASH = 279,             /* DOUBLESLASH  */
    DOUBLESLASHEQUAL = 280,        /* DOUBLESLASHEQUAL  */
    DOUBLESTAR = 281,              /* DOUBLESTAR  */
    DOUBLESTAREQUAL = 282,         /* DOUBLESTAREQUAL  */
    EQEQUAL = 283,                 /* EQEQUAL  */
    ELIF = 284,                    /* ELIF  */
    ELLIPSIS = 285,                /* ELLIPSIS  */
    ELSE = 286,                    /* ELSE  */
    EXCEPT = 287,                  /* EXCEPT  */
    FALSE = 288,                   /* FALSE  */
    FOR = 289,                     /* FOR  */
    FINALLY = 290,                 /* FINALLY  */
    FROM = 291,                    /* FROM  */
    GREATEREQUAL = 292,            /* GREATEREQUAL  */
    GLOBAL = 293,                  /* GLOBAL  */
    GREATER = 294,                 /* GREATER  */
    IF = 295,                      /* IF  */
    IMPORT = 296,                  /* IMPORT  */
    IN = 297,                      /* IN  */
    INDENT = 298,                  /* INDENT  */
    IS = 299,                      /* IS  */
    LAMBDA = 300,                  /* LAMBDA  */
    LSQB = 301,                    /* LSQB  */
    LBRACE = 302,                  /* LBRACE  */
    LESSEQUAL = 303,               /* LESSEQUAL  */
    LPAR = 304,                    /* LPAR  */
    LEFTSHIFT = 305,               /* LEFTSHIFT  */
    LEFTSHIFTEQUAL = 306,          /* LEFTSHIFTEQUAL  */
    LESS = 307,                    /* LESS  */
    MINUS = 308,                   /* MINUS  */
    MINUSEQUAL = 309,              /* MINUSEQUAL  */
    NAME = 310,                    /* NAME  */
    NOTEQUAL = 311,                /* NOTEQUAL  */
    NEWLINE = 312,                 /* NEWLINE  */
    NONE = 313,                    /* NONE  */
    NONLOCAL = 314,                /* NONLOCAL  */
    NOT = 315,                     /* NOT  */
    NUMBER = 316,                  /* NUMBER  */
    OR = 317,                      /* OR  */
    VBAR = 318,                    /* VBAR  */
    VBAREQUAL = 319,               /* VBAREQUAL  */
    PASS = 320,                    /* PASS  */
    PERCENT = 321,                 /* PERCENT  */
    PERCENTEQUAL = 322,            /* PERCENTEQUAL  */
    PLUS = 323,                    /* PLUS  */
    PLUSEQUAL = 324,               /* PLUSEQUAL  */
    RAISE = 325,                   /* RAISE  */
    RSQB = 326,                    /* RSQB  */
    RBRACE = 327,                  /* RBRACE  */
    RETURN = 328,                  /* RETURN  */
    RPAR = 329,                    /* RPAR  */
    RIGHTSHIFT = 330,              /* RIGHTSHIFT  */
    RIGHTSHIFTEQUAL = 331,         /* RIGHTSHIFTEQUAL  */
    SEMICOLON = 332,               /* SEMICOLON  */
    SLASH = 333,                   /* SLASH  */
    SLASHEQUAL = 334,              /* SLASHEQUAL  */
    STAR = 335,                    /* STAR  */
    STAREQUAL = 336,               /* STAREQUAL  */
    STRING = 337,                  /* STRING  */
    TILDE = 338,                   /* TILDE  */
    TRUE = 339,                    /* TRUE  */
    TRY = 340,                     /* TRY  */
    TYPE_COMMENT = 341,            /* TYPE_COMMENT  */
    WITH = 342,                    /* WITH  */
    WHILE = 343,                   /* WHILE  */
    CIRCUMFLEX = 344,              /* CIRCUMFLEX  */
    CIRCUMFLEXEQUAL = 345,         /* CIRCUMFLEXEQUAL  */
    YIELD = 346                    /* YIELD  */
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

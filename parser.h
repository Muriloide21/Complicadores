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
    COLONENQUAL = 272,             /* COLONENQUAL  */
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
    ENDMARKER = 287,               /* ENDMARKER  */
    EXCEPT = 288,                  /* EXCEPT  */
    FALSE = 289,                   /* FALSE  */
    FOR = 290,                     /* FOR  */
    FINALLY = 291,                 /* FINALLY  */
    FROM = 292,                    /* FROM  */
    GREATEREQUAL = 293,            /* GREATEREQUAL  */
    GLOBAL = 294,                  /* GLOBAL  */
    GREATER = 295,                 /* GREATER  */
    IF = 296,                      /* IF  */
    IMPORT = 297,                  /* IMPORT  */
    IN = 298,                      /* IN  */
    INDENT = 299,                  /* INDENT  */
    IS = 300,                      /* IS  */
    LAMBDA = 301,                  /* LAMBDA  */
    LSQB = 302,                    /* LSQB  */
    LBRACE = 303,                  /* LBRACE  */
    LESSEQUAL = 304,               /* LESSEQUAL  */
    LPAR = 305,                    /* LPAR  */
    LEFTSHIFT = 306,               /* LEFTSHIFT  */
    LEFTSHIFTEQUAL = 307,          /* LEFTSHIFTEQUAL  */
    LESS = 308,                    /* LESS  */
    MINUS = 309,                   /* MINUS  */
    MINUSEQUAL = 310,              /* MINUSEQUAL  */
    NAME = 311,                    /* NAME  */
    NOTEQUAL = 312,                /* NOTEQUAL  */
    NEWLINE = 313,                 /* NEWLINE  */
    NONE = 314,                    /* NONE  */
    NONLOCAL = 315,                /* NONLOCAL  */
    NOT = 316,                     /* NOT  */
    NUMBER = 317,                  /* NUMBER  */
    OR = 318,                      /* OR  */
    VBAR = 319,                    /* VBAR  */
    VBAREQUAL = 320,               /* VBAREQUAL  */
    PASS = 321,                    /* PASS  */
    PERCENT = 322,                 /* PERCENT  */
    PERCENTEQUAL = 323,            /* PERCENTEQUAL  */
    PLUS = 324,                    /* PLUS  */
    PLUSEQUAL = 325,               /* PLUSEQUAL  */
    RAISE = 326,                   /* RAISE  */
    RSQB = 327,                    /* RSQB  */
    RBRACE = 328,                  /* RBRACE  */
    RETURN = 329,                  /* RETURN  */
    RPAR = 330,                    /* RPAR  */
    RIGHTSHIFT = 331,              /* RIGHTSHIFT  */
    RIGHTSHIFTEQUAL = 332,         /* RIGHTSHIFTEQUAL  */
    SEMICOLON = 333,               /* SEMICOLON  */
    SLASH = 334,                   /* SLASH  */
    SLASHEQUAL = 335,              /* SLASHEQUAL  */
    STAR = 336,                    /* STAR  */
    STAREQUAL = 337,               /* STAREQUAL  */
    STRING = 338,                  /* STRING  */
    TILDE = 339,                   /* TILDE  */
    TRUE = 340,                    /* TRUE  */
    TRY = 341,                     /* TRY  */
    TYPE_COMMENT = 342,            /* TYPE_COMMENT  */
    WITH = 343,                    /* WITH  */
    WHILE = 344,                   /* WHILE  */
    CIRCUMFLEX = 345,              /* CIRCUMFLEX  */
    CIRCUMFLEXEQUAL = 346,         /* CIRCUMFLEXEQUAL  */
    YIELD = 347                    /* YIELD  */
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

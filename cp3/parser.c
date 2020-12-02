/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 11 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include "types.h"
#include "tables.h"
#include "ast.h"
#include "parser.h"
#include "string.h"

#define CHILDREN_LIMIT 20

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

extern char *yytext;
extern int yylineno;
extern mdl names_list;
extern mdl numbers_list;
extern mdl bool_list;

int position = 0;
int position_f = 0;
int position_numbers = 0;
int position_boolean = 0;

StrTable *st;
VarTable *vt;
AST *root;

int builtin_funcs_n = 16;
char **builtin_funcs = (char *[]){"print","input","abs","float","len","int","max","min","pow","range","round","slice","str","tuple","type"};


#line 111 "parser.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 158 "parser.c"

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
#endif


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
#define YYFINAL  80
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   859

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  116
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  458

#define YYUNDEFTOK  2
#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,    63,    63,    64,    65,    68,    69,    70,    73,    74,
      77,    78,    81,    82,    85,    86,    89,    90,    93,    94,
      97,    98,    99,   100,   103,   104,   105,   108,   109,   112,
     113,   116,   117,   120,   121,   124,   125,   128,   129,   132,
     133,   136,   137,   140,   141,   144,   145,   148,   149,   152,
     153,   156,   157,   160,   161,   164,   165,   168,   169,   172,
     173,   174,   177,   178,   181,   182,   187,   190,   193,   196,
     199,   200,   201,   204,   207,   210,   211,   214,   215,   218,
     219,   222,   227,   228,   231,   234,   235,   236,   237,   238,
     239,   240,   241,   244,   245,   246,   247,   248,   251,   254,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   272,   275,   278,   279,   280,   281,   282,
     285,   288,   291,   292,   295,   298,   299,   300,   303,   304,
     307,   310,   313,   314,   315,   318,   319,   320,   323,   326,
     329,   332,   335,   338,   341,   344,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   358,   359,   360,   363,   364,
     367,   368,   371,   372,   375,   376,   379,   382,   385,   388,
     389,   392,   395,   396,   399,   402,   403,   406,   407,   410,
     411,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   427,   428,   431,   432,   435,   436,   439,   440,
     441,   444,   445,   446,   449,   450,   451,   452,   453,   454,
     457,   458,   459,   460,   463,   464,   467,   468,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   487,   488,   491,   492,   493,   494,   497,   498,
     501,   502,   505,   508,   509,   512,   513,   516,   517,   520,
     521,   522,   523,   526,   527,   530,   533,   534,   537,   538,
     539,   540,   541,   542,   545,   546,   549,   550,   553,   554,
     557,   558,   561,   562,   565,   566,   569,   570,   571
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ENDMARKER", "AND", "AMPER",
  "AMPEREQUAL", "ARROW", "AS", "ASSERT", "EQUAL", "ASYNC", "AT", "ATEQUAL",
  "AWAIT", "BREAK", "CLASS", "COLON", "COLONEQUAL", "COMMA", "CONTINUE",
  "DEDENT", "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL",
  "DOUBLESTAR", "DOUBLESTAREQUAL", "EQEQUAL", "ELIF", "ELLIPSIS", "ELSE",
  "EXCEPT", "FALSE", "FOR", "FINALLY", "FROM", "GREATEREQUAL", "GLOBAL",
  "GREATER", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA", "LSQB",
  "LBRACE", "LESSEQUAL", "LPAR", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS",
  "MINUS", "MINUSEQUAL", "NAME", "NOTEQUAL", "NEWLINE", "NONE", "NONLOCAL",
  "NOT", "NUMBER", "OR", "VBAR", "VBAREQUAL", "PASS", "PERCENT",
  "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "RAISE", "RSQB", "RBRACE", "RETURN",
  "RPAR", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "SEMICOLON", "SLASH",
  "SLASHEQUAL", "STAR", "STAREQUAL", "STRING", "TILDE", "TRUE", "TRY",
  "TYPE_COMMENT", "WITH", "WHILE", "CIRCUMFLEX", "CIRCUMFLEXEQUAL",
  "YIELD", "$accept", "newline_or_stmt_star", "opt_par_arglist",
  "decorator_plus", "opt_arrow_test", "opt_type_comment", "opt_comma",
  "opt_colon_test", "opt_semi", "assing_yield_or_test_plus",
  "opt_assing_yield_or_test", "opt_as_name", "comma_import_as_name_star",
  "comma_dotted_as_name_star", "dot_name_star", "comma_name_star",
  "opt_comma_test", "elif_test_suite_plus", "opt_else_suite",
  "comma_with_item_star", "opt_as_expr", "opt_test_as_name", "stmt_plus",
  "opt_await", "trailer_plus", "opt_test", "opt_sliceop",
  "comma_dict1_star", "except_suite_plus", "opt_finally_suite", "program",
  "file_input", "decorator", "decorators", "decorated", "async_funcdef",
  "funcdef", "parameters", "arguments", "argument", "tfpdef", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "annassign",
  "testlist_star_expr", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "import_stmt", "import_name", "import_from", "from_part", "import_part",
  "import_as_name", "dotted_as_name", "import_as_names", "dotted_as_names",
  "dotted_name", "global_stmt", "nonlocal_stmt", "assert_stmt",
  "compound_stmt", "async_stmt", "if_stmt", "while_stmt", "for_stmt",
  "try_stmt", "with_stmt", "with_item", "except_clause", "suite",
  "namedexpr_test", "test", "test_nocond", "or_test", "and_test",
  "not_test", "comparison", "expr", "xor_expr", "and_expr", "shift_expr",
  "arith_expr", "term", "factor", "power", "atom_expr", "atom",
  "testlist_comp", "trailer", "subscriptlist", "subscript", "sliceop",
  "exprlist", "testlist", "dictorsetmaker", "dictorsetmaker1",
  "dictorsetmaker2", "classdef", "arglist", "argument1", "comp_iter",
  "sync_comp_for", "comp_for", "comp_if", "yield_expr", "yield_arg",
  "func_body_suite", YY_NULLPTR
};
#endif

# ifdef YYPRINT
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
# endif

#define YYPACT_NINF (-390)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-273)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -390,   326,    31,  -390,  -390,   411,    33,    77,  -390,  -390,
      84,  -390,    87,    23,    23,    11,    90,   411,    77,    23,
    -390,   115,   411,  -390,    23,   187,   421,    23,    59,   411,
     411,   175,    70,   588,  -390,   192,  -390,  -390,  -390,  -390,
      88,  -390,    74,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,   158,   133,   117,   188,  -390,   762,
     132,   128,   195,    48,    95,    44,  -390,   183,  -390,  -390,
    -390,   206,  -390,  -390,  -390,  -390,   176,   176,   184,   216,
    -390,   208,  -390,  -390,   201,  -390,  -390,   232,  -390,  -390,
    -390,   247,  -390,  -390,  -390,  -390,   223,  -390,  -390,   709,
    -390,   255,   250,   411,  -390,  -390,  -390,  -390,  -390,   155,
     261,    20,  -390,  -390,  -390,  -390,  -390,   111,   246,  -390,
    -390,  -390,  -390,   212,  -390,    91,  -390,   411,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,    10,
    -390,    91,  -390,  -390,   411,   411,   411,    23,    23,    23,
      23,   562,    23,    23,    23,   229,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,   411,
    -390,   249,   136,   218,   263,    72,   271,   350,  -390,   411,
       7,   262,   709,   272,   234,  -390,   262,   411,   248,  -390,
      26,    53,    23,  -390,   709,  -390,  -390,   279,   287,   236,
     290,    23,  -390,   120,   237,  -390,  -390,  -390,   127,    39,
     239,  -390,   242,   264,   443,   177,   111,  -390,  -390,  -390,
    -390,  -390,   301,    91,  -390,  -390,   299,  -390,  -390,   289,
    -390,  -390,  -390,  -390,  -390,  -390,    23,  -390,  -390,  -390,
    -390,    23,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,   267,   411,  -390,   411,
      55,   244,   305,  -390,   709,   308,  -390,   253,   312,   334,
     411,   330,  -390,   333,   296,   247,  -390,  -390,  -390,  -390,
     297,   138,    77,  -390,  -390,   673,   520,   337,    28,   338,
     273,   411,  -390,   339,    24,  -390,   493,  -390,   127,   327,
     411,    23,  -390,  -390,  -390,  -390,   416,  -390,  -390,  -390,
    -390,   294,  -390,   298,  -390,    91,  -390,  -390,  -390,   411,
    -390,  -390,  -390,  -390,  -390,   411,   411,  -390,  -390,   342,
    -390,  -390,   411,  -390,  -390,   316,   411,  -390,   273,   273,
     300,  -390,   355,  -390,   411,   359,   200,  -390,  -390,   427,
    -390,  -390,   247,   709,   341,   361,   709,   709,  -390,   362,
     364,  -390,  -390,   363,  -390,  -390,   127,   340,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
     767,   709,  -390,   296,  -390,   368,   709,   411,  -390,  -390,
    -390,  -390,  -390,   371,  -390,   709,  -390,  -390,   709,   228,
    -390,  -390,   495,  -390,   363,  -390,   411,    -4,  -390,  -390,
     358,  -390,   709,  -390,   374,   709,  -390,  -390,  -390,    23,
     381,  -390,    68,   673,   343,   382,  -390,   709,  -390,  -390,
     411,   411,  -390,  -390,  -390,   509,   369,   709,  -390,  -390,
      68,  -390,  -390,   673,  -390,  -390,   591,  -390
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    51,     0,    66,    67,    51,     0,     0,    52,   120,
       0,   121,     0,    51,    51,     0,     0,    51,     0,    51,
       3,     0,    51,   114,    51,    51,    51,    51,     0,    51,
      51,    51,    69,     0,     8,     0,   153,   151,     4,    82,
      18,    85,    96,    86,    87,    88,   115,   116,   117,   119,
     118,    89,   128,   129,    90,    91,    92,    83,   154,   146,
     147,   148,   149,   150,    14,   172,   176,   178,   180,   191,
     193,   195,   197,   200,   203,   209,   213,   214,   152,   124,
       1,    37,   155,   157,   156,    33,     5,     5,     0,    14,
     113,     0,   132,   133,     0,   134,    35,     0,   171,    31,
     130,    27,   211,    35,   179,   210,   126,   122,   212,    51,
      43,    45,     0,    51,   275,   273,     9,   228,   231,    51,
      51,    51,   225,   229,   226,   227,   230,   217,     0,    72,
      71,    70,    19,     0,   106,    51,   103,    51,   112,   111,
     109,   101,   107,   105,   100,   110,   104,   102,   108,    12,
      93,    51,    15,    99,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,     0,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
     145,   142,    51,     0,     0,     0,    10,    51,   244,    51,
       0,   143,    51,   141,     0,   139,   144,    51,     0,   169,
       0,     0,    51,   167,    51,   274,   221,     0,   240,     0,
      14,    51,   223,   254,     0,   247,   248,   218,     0,   171,
       0,   233,     0,     0,    51,    51,   216,    53,    73,    84,
      21,    20,    24,    51,    13,    97,    14,    95,    94,     0,
     175,   177,   183,   184,   182,   187,    51,   189,   185,   181,
     186,    51,   192,   194,   196,   198,   199,   202,   201,   205,
     208,   207,   206,   204,   215,    38,     0,    51,     6,    51,
     258,     0,    14,    68,    51,    16,    75,     0,    78,    80,
      51,     0,   243,     0,     0,    27,   135,   131,    29,   137,
       0,    41,     0,    28,   127,    51,    51,     0,    41,     0,
      12,    51,    46,   161,    51,   222,    51,   239,    59,     0,
      51,    51,   268,   253,   224,   232,    51,   246,   220,   219,
     237,     0,   234,     0,    54,    51,    98,    23,    22,    51,
     190,   188,    34,   262,   263,    51,    51,   259,     7,    51,
     257,   255,    51,    81,    76,     0,    51,    11,    12,    12,
       0,   138,    14,    36,    51,     0,    41,   159,    32,    51,
      49,   168,    27,    51,    64,     0,    51,    51,    44,     0,
      57,    56,   238,    14,   251,   269,    59,     0,   245,   236,
     235,    26,    25,   173,   261,   260,   256,    17,    77,    79,
      51,    51,   136,    15,   140,     0,    51,    51,   158,   170,
      50,    48,   165,     0,   164,    51,    62,   166,    51,    51,
     241,    58,    51,   252,    14,   249,    51,     0,   276,    74,
     163,    30,    51,    42,     0,    51,    63,   160,   242,    51,
       0,   250,   266,    51,     0,     0,    39,    51,    65,    61,
      51,    51,   267,   264,   265,    51,     0,    51,    40,    60,
     270,   174,   277,    51,   162,   271,    51,   278
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -390,  -390,   315,  -390,  -390,  -229,   -57,  -390,  -390,  -390,
    -390,  -264,  -390,  -390,  -390,   302,  -390,  -390,  -270,  -390,
    -390,  -390,  -389,  -390,  -390,  -287,  -390,    40,  -390,  -390,
    -390,  -390,   375,  -390,  -390,  -390,     4,  -390,    76,  -390,
    -390,     0,    -1,  -390,  -390,  -390,   -20,  -390,  -390,  -390,
    -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,  -390,
    -390,    29,   135,   140,  -390,   152,  -390,  -390,  -390,  -390,
    -390,  -390,  -390,   423,  -390,   425,   139,   148,  -168,   -27,
      -3,  -390,  -142,   295,   431,  -110,    -9,   291,   286,    18,
      35,   110,     6,  -390,  -390,  -390,  -390,   233,  -205,  -390,
    -390,    -5,  -143,  -390,  -390,  -390,   426,  -209,  -390,    13,
     162,  -195,  -390,  -106,  -390,  -390
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   183,    32,   281,   235,   317,   343,   133,   149,
     326,   195,   352,   193,   181,   191,   180,   356,   357,   201,
     203,   361,   359,    33,   226,   207,   410,   373,   298,   404,
       2,     3,    34,    35,    36,   129,    37,   186,   277,   278,
     279,   360,   199,    40,    41,   150,    42,   151,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    94,
     287,   288,    99,   289,   100,   101,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,   110,   299,   200,    97,
      64,   450,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   127,   220,   227,   209,   210,
     411,    90,   221,   214,   215,   216,    78,   271,   272,   442,
     312,   443,   444,    79,   115,   419
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    38,    81,   112,    89,    89,   107,   153,   237,    91,
      82,   114,   239,   240,    98,   222,   323,   370,   313,   321,
     233,   351,   106,   315,   291,   102,   111,    98,   364,   231,
     105,    80,   188,   108,     8,    92,   303,     8,     8,   130,
     433,   -55,    93,   -55,   445,   238,   283,   242,   243,   244,
     245,   247,   248,   249,   250,    12,   173,   284,   316,   296,
     355,   296,   297,   285,   456,   335,   309,    85,    14,   174,
     300,   367,   301,   336,    19,   337,   109,    19,    19,   309,
     134,    22,     7,   434,   135,    22,   398,   136,   286,    24,
     311,   137,    24,    24,   218,   217,   -55,   234,   401,   169,
     138,   372,   139,   311,    27,     8,   341,    27,    27,   441,
     205,   175,    31,   374,   -14,   230,   208,   213,   219,   390,
     391,    29,   428,   176,   170,   177,   140,   328,   275,   141,
     386,   309,   228,    85,   232,   223,   330,   310,   309,   142,
      87,   331,   143,    88,   144,    19,    96,   276,   236,   171,
       8,   145,    22,   307,   146,   311,   147,   252,   224,    86,
      24,   225,   311,   267,   172,   148,   132,    95,   354,     8,
     355,   103,   -55,   378,   154,    27,   265,   152,    89,   270,
     155,   415,   282,    31,   264,  -272,   236,   255,   256,     8,
      19,     8,   156,   302,   294,   402,   166,    22,   406,   407,
     168,     8,   308,   128,   267,    24,   257,   258,    10,    19,
     178,   268,   113,   327,    12,   340,    22,   269,   167,   382,
      27,   208,   270,   420,    24,   179,   182,   206,   423,    19,
     397,    19,   355,  -272,   185,   187,    22,   426,    22,    27,
     427,    19,     8,   190,    24,  -125,    24,   -55,    22,   192,
    -272,   189,   322,  -272,   436,   194,    24,   438,   269,    27,
     197,    27,  -272,   202,   333,  -125,   334,   204,    12,   448,
     229,    27,   251,   266,   432,     8,   273,   347,   280,   454,
     274,   290,    19,   259,   260,   261,   262,   263,   211,    22,
     293,   292,   295,   362,    39,   394,   304,    24,   111,   451,
     -55,   371,    89,   208,   -56,   381,   377,   376,   305,   306,
     314,   325,    27,   236,   318,    19,   413,   319,   316,   338,
     320,   329,    22,   332,   339,   342,   383,   395,   344,     4,
      24,   345,   384,   385,   212,     5,   270,     6,     7,   387,
       8,     9,    10,   389,   346,    27,    11,   348,    12,    13,
     349,    98,   285,   353,   363,   366,     8,   431,    39,   400,
     234,    14,   311,    15,     8,    16,   379,    17,    18,   267,
     424,   369,   275,   380,   393,   392,   396,   403,   405,   408,
      19,   409,   412,   416,    20,   422,    21,    22,   425,   418,
     435,   437,    23,   -15,    98,    24,    19,    25,   440,   447,
      26,   446,   184,    22,    19,   196,   371,   116,   -15,   430,
      27,    24,    28,   453,    29,    30,   414,   -15,    31,    24,
     439,   388,   421,   269,   350,     8,    27,   358,   -15,    83,
       8,    84,    39,   -15,    27,     8,     5,   449,     6,     7,
     368,     8,     9,    10,    39,   400,   365,    11,   399,    12,
      13,   241,    39,   104,   254,    39,   400,     8,   253,   324,
     -55,   131,    14,   455,    15,    19,    16,     0,    17,    18,
      19,   375,    22,     0,   -15,    19,     0,    22,     0,  -123,
      24,    19,    22,     0,     0,    24,     0,    21,    22,     0,
      24,   -15,     0,    23,   -15,    27,    24,    19,    25,  -123,
      27,    26,     0,     0,    22,    27,     0,     8,     0,     8,
     -55,    27,    24,    28,     0,    29,    30,     0,     5,    31,
       6,     7,   429,     8,     9,    10,     0,    27,     0,    11,
     452,    12,    13,     0,     8,     0,     0,   -47,     0,     0,
       0,     0,     0,     0,    14,     0,    15,    19,    16,    19,
      17,    18,     0,     0,    22,     0,    22,     0,     0,     0,
       0,     0,    24,    19,    24,   -15,     0,     0,   -15,    21,
      22,     0,     0,     0,    19,    23,     8,    27,    24,    27,
      25,    22,     0,    26,     0,     0,     0,     0,     0,    24,
       0,     0,     0,    27,     0,    28,     0,    29,    30,     0,
       5,    31,     6,     7,    27,     8,     9,    10,     0,     0,
       0,    11,   457,    12,    13,     0,    19,     0,     0,   117,
       0,     0,   118,   246,     0,     0,    14,     0,    15,     0,
      16,    24,    17,    18,     0,   119,   120,     0,   121,     0,
       0,     0,     0,     0,   122,    19,    27,   123,     0,     0,
     124,    21,    22,     0,     0,     0,     0,    23,     0,     0,
      24,     0,    25,     0,     0,    26,     0,     0,     0,     0,
       0,   125,     0,   126,     0,    27,     0,    28,     0,    29,
      30,     0,     5,    31,     6,     7,     0,     8,     9,    10,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,     0,    16,     0,    17,    18,     0,     0,     5,     0,
       0,     0,     0,     8,     9,     0,     0,    19,     0,    11,
       0,     0,    13,    21,    22,     0,     0,     0,     0,    23,
       0,     0,    24,     0,    25,     0,    15,    26,    16,     0,
       0,    18,     0,     0,     0,     0,     0,    27,     0,    28,
       0,    29,    30,    19,     0,    31,     0,   198,     0,    21,
      22,     0,     0,     0,     0,    23,     5,     0,    24,     0,
      25,     8,     9,    26,     0,     0,     0,    11,     0,     0,
      13,   157,     0,    27,     0,     0,     0,     0,     0,     0,
     158,    31,   159,     0,    15,   160,    16,   161,     0,    18,
       0,   162,     0,     0,     0,   163,     0,     0,     0,   164,
       0,    19,     0,   165,     0,   417,     0,    21,    22,     0,
       0,     0,     0,    23,     0,     0,    24,     0,    25,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    30,    13,    14,    26,    64,   151,    14,
       6,    31,   154,   155,    17,   121,   225,   304,   213,   224,
      10,   285,    25,   218,   192,    19,    29,    30,   298,   135,
      24,     0,    89,    27,    14,    24,   204,    14,    14,    35,
      44,    17,    31,    19,   433,   151,   189,   157,   158,   159,
     160,   161,   162,   163,   164,    22,    12,    50,    19,    33,
      32,    33,    36,    56,   453,    10,    11,    56,    35,    25,
      17,   300,    19,    18,    54,   270,    17,    54,    54,    11,
       6,    61,    12,    87,    10,    61,   356,    13,    81,    69,
      35,    17,    69,    69,   121,    75,    72,    87,   362,    51,
      26,   306,    28,    35,    84,    14,   274,    84,    84,    41,
     113,    67,    92,   308,    75,   135,   119,   120,   121,   348,
     349,    88,   409,    79,    76,    81,    52,   233,    56,    55,
     339,    11,   128,    56,   137,    24,   246,    17,    11,    65,
      56,   251,    68,    56,    70,    54,    56,    75,   151,    54,
      14,    77,    61,   210,    80,    35,    82,   166,    47,     7,
      69,    50,    35,    27,    69,    91,    78,    15,    30,    14,
      32,    56,    17,   316,    41,    84,   179,    19,   187,   182,
      63,   376,   187,    92,   178,    10,   189,   169,   170,    14,
      54,    14,     4,   202,   197,   363,    64,    61,   366,   367,
       5,    14,   211,    11,    27,    69,   171,   172,    16,    54,
      27,    75,    37,   233,    22,   272,    61,    81,    90,   325,
      84,   224,   225,   391,    69,    19,    50,    72,   396,    54,
      30,    54,    32,    58,    50,    19,    61,   405,    61,    84,
     408,    54,    14,    42,    69,    58,    69,    19,    61,    17,
      75,    43,    75,    78,   422,     8,    69,   425,    81,    84,
      37,    84,    87,     8,   267,    78,   269,    17,    22,   437,
      58,    84,    43,    24,   416,    14,    58,   280,     7,   447,
      17,    19,    54,   173,   174,   175,   176,   177,    27,    61,
      56,    19,    44,   296,   295,   352,    17,    69,   301,   441,
      72,   304,   311,   306,    17,   325,   311,   310,    72,    19,
      73,    10,    84,   316,    75,    54,   373,    75,    19,    75,
      56,    32,    61,    56,    19,    17,   329,   354,    75,     3,
      69,    19,   335,   336,    73,     9,   339,    11,    12,   342,
      14,    15,    16,   346,    10,    84,    20,    17,    22,    23,
      17,   354,    56,    56,    17,    17,    14,   414,   359,   359,
      87,    35,    35,    37,    14,    39,    72,    41,    42,    27,
     397,    32,    56,    75,    19,    75,    17,    36,    17,    17,
      54,    17,    19,    43,    58,    17,    60,    61,    17,   390,
      32,    17,    66,    43,   397,    69,    54,    71,    17,    17,
      74,    58,    87,    61,    54,   103,   409,    32,    58,   412,
      84,    69,    86,    44,    88,    89,   376,    75,    92,    69,
     429,   345,   393,    81,   284,    14,    84,   292,    78,     6,
      14,     6,   433,    17,    84,    14,     9,   440,    11,    12,
     301,    14,    15,    16,   445,   445,   298,    20,    21,    22,
      23,   156,   453,    22,   168,   456,   456,    14,   167,   226,
      17,    35,    35,   450,    37,    54,    39,    -1,    41,    42,
      54,   309,    61,    -1,    58,    54,    -1,    61,    -1,    58,
      69,    54,    61,    -1,    -1,    69,    -1,    60,    61,    -1,
      69,    75,    -1,    66,    78,    84,    69,    54,    71,    78,
      84,    74,    -1,    -1,    61,    84,    -1,    14,    -1,    14,
      17,    84,    69,    86,    -1,    88,    89,    -1,     9,    92,
      11,    12,    27,    14,    15,    16,    -1,    84,    -1,    20,
      21,    22,    23,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    54,    39,    54,
      41,    42,    -1,    -1,    61,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    69,    54,    69,    72,    -1,    -1,    73,    60,
      61,    -1,    -1,    -1,    54,    66,    14,    84,    69,    84,
      71,    61,    -1,    74,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,
       9,    92,    11,    12,    84,    14,    15,    16,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    54,    -1,    -1,    31,
      -1,    -1,    34,    61,    -1,    -1,    35,    -1,    37,    -1,
      39,    69,    41,    42,    -1,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    54,    84,    59,    -1,    -1,
      62,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    -1,    84,    -1,    86,    -1,    88,
      89,    -1,     9,    92,    11,    12,    -1,    14,    15,    16,
      -1,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    14,    15,    -1,    -1,    54,    -1,    20,
      -1,    -1,    23,    60,    61,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    71,    -1,    37,    74,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    88,    89,    54,    -1,    92,    -1,    58,    -1,    60,
      61,    -1,    -1,    -1,    -1,    66,     9,    -1,    69,    -1,
      71,    14,    15,    74,    -1,    -1,    -1,    20,    -1,    -1,
      23,    29,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    92,    40,    -1,    37,    43,    39,    45,    -1,    42,
      -1,    49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,
      -1,    54,    -1,    61,    -1,    58,    -1,    60,    61,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    94,   123,   124,     3,     9,    11,    12,    14,    15,
      16,    20,    22,    23,    35,    37,    39,    41,    42,    54,
      58,    60,    61,    66,    69,    71,    74,    84,    86,    88,
      89,    92,    96,   116,   125,   126,   127,   129,   134,   135,
     136,   137,   139,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   173,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   199,   206,
       0,   173,   129,   166,   168,    56,   158,    56,    56,   179,
     194,   194,    24,    31,   152,   158,    56,   172,   173,   155,
     157,   158,   185,    56,   177,   185,   173,   139,   185,    17,
     169,   173,   172,    37,   139,   207,   125,    31,    34,    47,
      48,    50,    56,    59,    62,    83,    85,   188,    11,   128,
     129,   199,    78,   101,     6,    10,    13,    17,    26,    28,
      52,    55,    65,    68,    70,    77,    80,    82,    91,   102,
     138,   140,    19,    99,    41,    63,     4,    29,    38,    40,
      43,    45,    49,    53,    57,    61,    64,    90,     5,    51,
      76,    54,    69,    12,    25,    67,    79,    81,    27,    19,
     109,   107,    50,    95,    95,    50,   130,    19,    99,    43,
      42,   108,    17,   106,     8,   104,   108,    37,    58,   135,
     171,   112,     8,   113,    17,   173,    72,   118,   173,   191,
     192,    27,    73,   173,   196,   197,   198,    75,   172,   173,
     189,   195,   206,    24,    47,    50,   117,   190,   129,    58,
     139,   206,   173,    10,    87,    98,   173,   195,   206,   175,
     175,   176,   178,   178,   178,   178,    61,   178,   178,   178,
     178,    43,   179,   180,   181,   182,   182,   183,   183,   184,
     184,   184,   184,   184,   185,   173,    24,    27,    75,    81,
     173,   200,   201,    58,    17,    56,    75,   131,   132,   133,
       7,    97,   194,   195,    50,    56,    81,   153,   154,   156,
      19,   171,    19,    56,   173,    44,    33,    36,   121,   170,
      17,    19,   179,   171,    17,    72,    19,    99,   179,    11,
      17,    35,   203,   204,    73,   204,    19,    99,    75,    75,
      56,   191,    75,   200,   190,    10,   103,   139,   206,    32,
     178,   178,    56,   173,   173,    10,    18,   204,    75,    19,
      99,   171,    17,   100,    75,    19,    10,   173,    17,    17,
     156,   104,   105,    56,    30,    32,   110,   111,   155,   115,
     134,   114,   173,    17,   111,   170,    17,    98,   169,    32,
     118,   173,   191,   120,   204,   203,   173,   194,   195,    72,
      75,   139,   206,   173,   173,   173,   200,   173,   131,   173,
      98,    98,    75,    19,    99,   172,    17,    30,   111,    21,
     134,   104,   171,    36,   122,    17,   171,   171,    17,    17,
     119,   193,    19,    99,   120,   204,    43,    58,   135,   208,
     171,   154,    17,   171,   172,    17,   171,   171,   118,    27,
     173,    99,   175,    44,    87,    32,   171,    17,   171,   179,
      17,    41,   202,   204,   205,   115,    58,    17,   171,   173,
     174,   175,    21,    44,   171,   202,   115,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   122,   122,   123,   124,   125,   126,
     127,   127,   127,   128,   129,   130,   130,   131,   131,   132,
     132,   133,   134,   134,   135,   136,   136,   136,   136,   136,
     136,   136,   136,   137,   137,   137,   137,   137,   138,   139,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   141,   142,   143,   143,   143,   143,   143,
     144,   145,   146,   146,   147,   148,   148,   148,   149,   149,
     150,   151,   152,   152,   152,   153,   153,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   163,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   169,   170,   171,
     171,   172,   173,   173,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   179,   180,   180,   181,   181,   182,   182,
     182,   183,   183,   183,   184,   184,   184,   184,   184,   184,
     185,   185,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   189,   189,   190,   190,   190,   190,   191,   191,
     192,   192,   193,   194,   194,   195,   195,   196,   196,   197,
     197,   197,   197,   198,   198,   199,   200,   200,   201,   201,
     201,   201,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   208
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     2,     3,     1,     2,
       0,     2,     0,     1,     0,     1,     0,     2,     0,     1,
       2,     2,     3,     3,     0,     2,     2,     0,     2,     0,
       3,     0,     3,     0,     3,     0,     3,     0,     2,     4,
       5,     0,     3,     0,     3,     0,     2,     0,     2,     1,
       2,     0,     1,     1,     2,     0,     1,     0,     1,     0,
       5,     4,     3,     4,     0,     3,     1,     2,     4,     1,
       2,     2,     2,     2,     7,     2,     3,     3,     1,     3,
       1,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     3,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     4,     1,     1,
       2,     4,     1,     1,     1,     1,     3,     1,     2,     2,
       3,     2,     2,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     6,     5,
       7,     4,    10,     7,     6,     6,     6,     2,     2,     1,
       4,     1,     1,     5,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       4,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     1,     1,     3,     3,     2,     2,     3,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     3,     3,     2,     3,     2,
       1,     4,     2,     3,     2,     3,     2,     1,     1,     4,
       5,     3,     4,     2,     1,     5,     3,     2,     1,     2,
       3,     3,     2,     2,     1,     1,     4,     5,     1,     2,
       2,     3,     1,     2,     2,     1,     1,     4,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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
   required.  Return 1 if memory is exhausted.  */
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
          return 1;
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
          return 1;
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
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
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
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
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
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
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
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
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
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
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
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
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

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 63 "parser.y"
                             { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 0); }
#line 2121 "parser.c"
    break;

  case 3:
#line 64 "parser.y"
                                                   { yyval = yyvsp[-1]; }
#line 2127 "parser.c"
    break;

  case 4:
#line 65 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2133 "parser.c"
    break;

  case 20:
#line 97 "parser.y"
                                            { yyval = yyvsp[0]; }
#line 2139 "parser.c"
    break;

  case 21:
#line 98 "parser.y"
                                                    { yyval = yyvsp[0]; }
#line 2145 "parser.c"
    break;

  case 22:
#line 99 "parser.y"
                                                                      { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2151 "parser.c"
    break;

  case 23:
#line 100 "parser.y"
                                                                              { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2157 "parser.c"
    break;

  case 39:
#line 132 "parser.y"
                                                      { yyval = new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2163 "parser.c"
    break;

  case 40:
#line 133 "parser.y"
                                                                           { add_child(yyvsp[-4], new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0])); yyval = yyvsp[-4]; }
#line 2169 "parser.c"
    break;

  case 41:
#line 136 "parser.y"
                       { yyval = new_node(NOOP_NODE, 0, NO_TYPE); }
#line 2175 "parser.c"
    break;

  case 42:
#line 137 "parser.y"
                                 { yyval = new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2181 "parser.c"
    break;

  case 49:
#line 152 "parser.y"
                { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2187 "parser.c"
    break;

  case 50:
#line 153 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); }
#line 2193 "parser.c"
    break;

  case 53:
#line 160 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2199 "parser.c"
    break;

  case 54:
#line 161 "parser.y"
                                               { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2205 "parser.c"
    break;

  case 66:
#line 187 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2211 "parser.c"
    break;

  case 67:
#line 190 "parser.y"
                                           { yyval = yyvsp[-1]; }
#line 2217 "parser.c"
    break;

  case 73:
#line 204 "parser.y"
                             { yyval = yyvsp[0]; }
#line 2223 "parser.c"
    break;

  case 74:
#line 207 "parser.y"
                                                                                   { yyval = new_subtree(FUNCDEF_NODE, NO_TYPE, 3, new_node(FUNCNAME_NODE, 0, NO_TYPE), yyvsp[-4], yyvsp[0]); }
#line 2229 "parser.c"
    break;

  case 75:
#line 210 "parser.y"
                      { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2235 "parser.c"
    break;

  case 76:
#line 211 "parser.y"
                                { yyval = yyvsp[-1]; }
#line 2241 "parser.c"
    break;

  case 77:
#line 214 "parser.y"
                                    { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2247 "parser.c"
    break;

  case 78:
#line 215 "parser.y"
                    { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2253 "parser.c"
    break;

  case 79:
#line 218 "parser.y"
                            { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2259 "parser.c"
    break;

  case 80:
#line 219 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2265 "parser.c"
    break;

  case 81:
#line 222 "parser.y"
                            { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2271 "parser.c"
    break;

  case 82:
#line 227 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2277 "parser.c"
    break;

  case 83:
#line 228 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2283 "parser.c"
    break;

  case 84:
#line 231 "parser.y"
                                         { yyval = yyvsp[-2]; }
#line 2289 "parser.c"
    break;

  case 85:
#line 234 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2295 "parser.c"
    break;

  case 86:
#line 235 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2301 "parser.c"
    break;

  case 87:
#line 236 "parser.y"
                               { yyval = yyvsp[0]; }
#line 2307 "parser.c"
    break;

  case 88:
#line 237 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2313 "parser.c"
    break;

  case 89:
#line 238 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2319 "parser.c"
    break;

  case 90:
#line 239 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2325 "parser.c"
    break;

  case 91:
#line 240 "parser.y"
                                  { yyval = yyvsp[0]; }
#line 2331 "parser.c"
    break;

  case 92:
#line 241 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2337 "parser.c"
    break;

  case 97:
#line 248 "parser.y"
                                                                                 { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2343 "parser.c"
    break;

  case 99:
#line 254 "parser.y"
                                   { yyval = yyvsp[-1]; }
#line 2349 "parser.c"
    break;

  case 113:
#line 272 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2355 "parser.c"
    break;

  case 114:
#line 275 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2361 "parser.c"
    break;

  case 115:
#line 278 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2367 "parser.c"
    break;

  case 116:
#line 279 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2373 "parser.c"
    break;

  case 117:
#line 280 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2379 "parser.c"
    break;

  case 118:
#line 281 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2385 "parser.c"
    break;

  case 119:
#line 282 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2391 "parser.c"
    break;

  case 120:
#line 285 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2397 "parser.c"
    break;

  case 121:
#line 288 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2403 "parser.c"
    break;

  case 122:
#line 291 "parser.y"
                                       { yyval = new_subtree(RETURN_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2409 "parser.c"
    break;

  case 123:
#line 292 "parser.y"
                    { yyval = new_node(RETURN_NODE, 0, NO_TYPE); }
#line 2415 "parser.c"
    break;

  case 130:
#line 307 "parser.y"
                                    {}
#line 2421 "parser.c"
    break;

  case 146:
#line 347 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2427 "parser.c"
    break;

  case 147:
#line 348 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2433 "parser.c"
    break;

  case 148:
#line 349 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2439 "parser.c"
    break;

  case 149:
#line 350 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2445 "parser.c"
    break;

  case 150:
#line 351 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2451 "parser.c"
    break;

  case 151:
#line 352 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2457 "parser.c"
    break;

  case 152:
#line 353 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2463 "parser.c"
    break;

  case 153:
#line 354 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2469 "parser.c"
    break;

  case 154:
#line 355 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2475 "parser.c"
    break;

  case 158:
#line 363 "parser.y"
                                                                           { yyval = new_subtree(IF_NODE, NO_TYPE, 4, yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2481 "parser.c"
    break;

  case 159:
#line 364 "parser.y"
                                                      { yyval = new_subtree(IF_NODE, NO_TYPE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 2487 "parser.c"
    break;

  case 160:
#line 367 "parser.y"
                                                              { yyval = new_subtree(WHILE_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2493 "parser.c"
    break;

  case 161:
#line 368 "parser.y"
                                             { yyval = new_subtree(WHILE_NODE, NO_TYPE, 2, yyvsp[-3], yyvsp[0]); }
#line 2499 "parser.c"
    break;

  case 162:
#line 371 "parser.y"
                                                                                 { yyval = new_subtree(FOR_NODE, NO_TYPE, 4, yyvsp[-8], yyvsp[-6], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2505 "parser.c"
    break;

  case 163:
#line 372 "parser.y"
                                                                { yyval = new_subtree(FOR_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], yyvsp[0]); }
#line 2511 "parser.c"
    break;

  case 169:
#line 388 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2517 "parser.c"
    break;

  case 170:
#line 389 "parser.y"
                                       { yyval = yyvsp[-1]; }
#line 2523 "parser.c"
    break;

  case 171:
#line 392 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2529 "parser.c"
    break;

  case 175:
#line 402 "parser.y"
                             { yyval = new_subtree(OR_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2535 "parser.c"
    break;

  case 176:
#line 403 "parser.y"
                  { yyval = yyvsp[0];}
#line 2541 "parser.c"
    break;

  case 177:
#line 406 "parser.y"
                                { yyval = new_subtree(AND_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2547 "parser.c"
    break;

  case 178:
#line 407 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2553 "parser.c"
    break;

  case 179:
#line 410 "parser.y"
                       { yyval = new_subtree(NOT_NODE, BOOL_TYPE, 1, yyvsp[0]); }
#line 2559 "parser.c"
    break;

  case 180:
#line 411 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2565 "parser.c"
    break;

  case 181:
#line 414 "parser.y"
                                 { yyval = new_subtree(LESS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2571 "parser.c"
    break;

  case 182:
#line 415 "parser.y"
                                    { yyval = new_subtree(GREATER_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2577 "parser.c"
    break;

  case 183:
#line 416 "parser.y"
                                    { yyval = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2583 "parser.c"
    break;

  case 184:
#line 417 "parser.y"
                                         { yyval = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2589 "parser.c"
    break;

  case 185:
#line 418 "parser.y"
                                      { yyval = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2595 "parser.c"
    break;

  case 186:
#line 419 "parser.y"
                                     { yyval = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2601 "parser.c"
    break;

  case 187:
#line 420 "parser.y"
                               { yyval = new_subtree(IN_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2607 "parser.c"
    break;

  case 188:
#line 421 "parser.y"
                                   { yyval = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2613 "parser.c"
    break;

  case 189:
#line 422 "parser.y"
                               { yyval = new_subtree(IS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2619 "parser.c"
    break;

  case 190:
#line 423 "parser.y"
                                   { yyval = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2625 "parser.c"
    break;

  case 191:
#line 424 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2631 "parser.c"
    break;

  case 192:
#line 427 "parser.y"
                         { yyval = new_subtree(BIT_OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2637 "parser.c"
    break;

  case 193:
#line 428 "parser.y"
               { yyval = yyvsp[0]; }
#line 2643 "parser.c"
    break;

  case 194:
#line 431 "parser.y"
                                       { yyval = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2649 "parser.c"
    break;

  case 195:
#line 432 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2655 "parser.c"
    break;

  case 196:
#line 435 "parser.y"
                                    { yyval = new_subtree(BIT_AND_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2661 "parser.c"
    break;

  case 197:
#line 436 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2667 "parser.c"
    break;

  case 198:
#line 439 "parser.y"
                                            { yyval = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2673 "parser.c"
    break;

  case 199:
#line 440 "parser.y"
                                             { yyval = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2679 "parser.c"
    break;

  case 200:
#line 441 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2685 "parser.c"
    break;

  case 201:
#line 444 "parser.y"
                                 { yyval = new_subtree(PLUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2691 "parser.c"
    break;

  case 202:
#line 445 "parser.y"
                                  { yyval = new_subtree(MINUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2697 "parser.c"
    break;

  case 203:
#line 446 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2703 "parser.c"
    break;

  case 204:
#line 449 "parser.y"
                       { yyval = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2709 "parser.c"
    break;

  case 205:
#line 450 "parser.y"
                     { yyval = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2715 "parser.c"
    break;

  case 206:
#line 451 "parser.y"
                        { yyval = new_subtree(DIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2721 "parser.c"
    break;

  case 207:
#line 452 "parser.y"
                          { yyval = new_subtree(MOD_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2727 "parser.c"
    break;

  case 208:
#line 453 "parser.y"
                              { yyval = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2733 "parser.c"
    break;

  case 209:
#line 454 "parser.y"
             { yyval = yyvsp[0]; }
#line 2739 "parser.c"
    break;

  case 210:
#line 457 "parser.y"
                    { yyval = new_subtree(PLUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2745 "parser.c"
    break;

  case 211:
#line 458 "parser.y"
                     { yyval = new_subtree(MINUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2751 "parser.c"
    break;

  case 212:
#line 459 "parser.y"
                     { yyval = new_subtree(TILDE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2757 "parser.c"
    break;

  case 213:
#line 460 "parser.y"
              { yyval = yyvsp[0]; }
#line 2763 "parser.c"
    break;

  case 214:
#line 463 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2769 "parser.c"
    break;

  case 215:
#line 464 "parser.y"
                                   { yyval = new_subtree(POWER_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2775 "parser.c"
    break;

  case 216:
#line 467 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2781 "parser.c"
    break;

  case 217:
#line 468 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2787 "parser.c"
    break;

  case 218:
#line 471 "parser.y"
                { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2793 "parser.c"
    break;

  case 219:
#line 472 "parser.y"
                           { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2799 "parser.c"
    break;

  case 220:
#line 473 "parser.y"
                              { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2805 "parser.c"
    break;

  case 221:
#line 474 "parser.y"
                { yyval = new_node(LIST_NODE, 0, NO_TYPE); }
#line 2811 "parser.c"
    break;

  case 222:
#line 475 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 2817 "parser.c"
    break;

  case 223:
#line 476 "parser.y"
                    { yyval = new_node(DICT_NODE, 0, NO_TYPE); }
#line 2823 "parser.c"
    break;

  case 224:
#line 477 "parser.y"
                                   { yyval = new_subtree(DICT_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2829 "parser.c"
    break;

  case 225:
#line 478 "parser.y"
           { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2835 "parser.c"
    break;

  case 226:
#line 479 "parser.y"
             { yyval = new_node(NUMBER_NODE, 0, NO_TYPE); set_node_string_data(yyval, yytext);}
#line 2841 "parser.c"
    break;

  case 227:
#line 480 "parser.y"
             { yyval = new_node(STRING_NODE, 0, STR_TYPE); }
#line 2847 "parser.c"
    break;

  case 228:
#line 481 "parser.y"
               { yyval = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
#line 2853 "parser.c"
    break;

  case 229:
#line 482 "parser.y"
           { yyval = new_node(NONE_NODE, 0, NO_TYPE); }
#line 2859 "parser.c"
    break;

  case 230:
#line 483 "parser.y"
           { yyval = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
#line 2865 "parser.c"
    break;

  case 231:
#line 484 "parser.y"
            { yyval = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
#line 2871 "parser.c"
    break;

  case 233:
#line 488 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2877 "parser.c"
    break;

  case 234:
#line 491 "parser.y"
                   { yyval = new_node(ARGLIST_NODE, 0, NO_TYPE); }
#line 2883 "parser.c"
    break;

  case 235:
#line 492 "parser.y"
                           { yyval = yyvsp[-1]; }
#line 2889 "parser.c"
    break;

  case 236:
#line 493 "parser.y"
                                 { yyval = yyvsp[-1]; }
#line 2895 "parser.c"
    break;

  case 237:
#line 494 "parser.y"
                  { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2901 "parser.c"
    break;

  case 238:
#line 497 "parser.y"
                                             { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; printf("Adiciona comma subscript\n");}
#line 2907 "parser.c"
    break;

  case 239:
#line 498 "parser.y"
                                   { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2913 "parser.c"
    break;

  case 243:
#line 508 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2919 "parser.c"
    break;

  case 244:
#line 509 "parser.y"
                         { yyval = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2925 "parser.c"
    break;

  case 245:
#line 512 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2931 "parser.c"
    break;

  case 246:
#line 513 "parser.y"
                         { yyval = new_subtree(TESTLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2937 "parser.c"
    break;

  case 256:
#line 533 "parser.y"
                                 { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2943 "parser.c"
    break;

  case 257:
#line 534 "parser.y"
                             { yyval = new_subtree(ARGLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2949 "parser.c"
    break;

  case 276:
#line 569 "parser.y"
                             { yyval = yyvsp[0]; }
#line 2955 "parser.c"
    break;

  case 277:
#line 570 "parser.y"
                                                 { yyval = yyvsp[-1]; }
#line 2961 "parser.c"
    break;

  case 278:
#line 571 "parser.y"
                                                                      { yyval = yyvsp[-1]; }
#line 2967 "parser.c"
    break;


#line 2971 "parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
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
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 574 "parser.y"


// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}

void segunda_passada(AST* root) {
    if(get_kind_node(root) == NAME_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
    }
    
	if(get_kind_node(root) == FUNCDEF_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
        add_var(vt, get_name_node(root), 0, NO_TYPE, 1, get_node_count(get_node_child(root, 1)));
	}

    if(get_kind_node(root) == STRING_NODE){
        set_node_string_data(root, get_string(st,position++));
    }

    if(get_kind_node(root) == NUMBER_NODE){
        set_node_string_data(root, numbers_list.last_text[position_numbers++]);
    }

    if(get_kind_node(root) == BOOL_VAL_NODE){
        set_node_string_data(root, bool_list.last_text[position_boolean++]);
    }

    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		segunda_passada(get_node_child(root, i));
	}
}

char* verify_builtin_func(char* name){
    int i = 0;
    for(i = 0; i < builtin_funcs_n ; i++){
        if(strcmp(builtin_funcs[i],name) == 0)
            return name;
    }
    return NULL;
}
//terceira passada
void verify_func_calls(AST* root) {
    
    // Se é uma função
	if( (get_kind_node(root) == NAME_NODE) && (get_node_count(root) > 0) ){
        if( get_kind_node(get_node_child(root, 0)) == ARGLIST_NODE ){
            if (verify_builtin_func(get_name_node(root)) != NULL){
                set_kind_node(root, FUNC_BUILTIN_NODE);
            }else{
                // Verifica se está na tabela de símbolos (VarTable)
                int pos = lookup_var(vt, get_name_node(root));
                if (pos == -1){
                    printf("ERROR: Function \"%s\" is not defined.\n",get_name_node(root));
                    exit(EXIT_FAILURE);
                }else{
                    if(get_child_count(get_node_child(root,0)) != get_n_args(vt, pos)){
                        printf("ERROR: Wrong number of pars on function \"%s\". Expected %d, but received %d.\n",get_name_node(root),get_n_args(vt, pos),get_child_count(get_node_child(root,0)));
                        exit(EXIT_FAILURE);
                    }
                }
            } 
        }
	}
    
    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		verify_func_calls(get_node_child(root, i));
    }  
}

// para operadores do tipo PLUS e MINUS
Type verifica_precedencia_tipo_1(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == INT_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == REAL_TYPE){
        switch(t2){
            case INT_TYPE:
                return REAL_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return REAL_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == BOOL_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == STR_TYPE){
        if(t2 == STR_TYPE){
            return STR_TYPE;
        }else{
            printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
            exit(EXIT_FAILURE);
        }
    }
    printf("TYPE ERROR: compilation error(1).");
    exit(EXIT_FAILURE);
}

// para operadores do tipo MULTIPLY
Type verifica_precedencia_tipo_2(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == INT_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            case STR_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == REAL_TYPE){
        switch(t2){
            case INT_TYPE:
                return REAL_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return REAL_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == BOOL_TYPE){
        switch(t2){
            case INT_TYPE:
                return INT_TYPE;
            case REAL_TYPE:
                return REAL_TYPE;
            case BOOL_TYPE:
                return INT_TYPE;
            case STR_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    if(t1 == STR_TYPE){
        switch(t2){
            case INT_TYPE:
                return STR_TYPE;
            case BOOL_TYPE:
                return STR_TYPE;
            default:
                printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
                exit(EXIT_FAILURE);
        }
    }
    printf("TYPE ERROR: compilation error(2).");
    exit(EXIT_FAILURE);
}

// para operadores do tipo DIVISION
Type verifica_precedencia_tipo_3(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == STR_TYPE || t2 == STR_TYPE){
        printf("TYPE ERROR: unsupported operand type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    return REAL_TYPE;
}

// para operadores do tipo INTEGERDIVISION
Type verifica_precedencia_tipo_4(Type t1, Type t2){
    if(t1 == NO_TYPE || t2 == NO_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == STR_TYPE || t2 == STR_TYPE){
        printf("TYPE ERROR: unsupported operand // for type(s): '%s' and '%s'\n", get_text(t1), get_text(t2));
        exit(EXIT_FAILURE);
    }
    if(t1 == REAL_TYPE || t2 == REAL_TYPE){
        return REAL_TYPE;
    }
    return INT_TYPE;
}


// Verifica variáveis agora retornará o tipo
Type verifica_variaveis(AST* root) {
    
    NodeKind type_of_root = get_kind_node(root);
    // printf("Verificando tipo: %d - %s\n",type_of_root,kind2str(type_of_root));

    if(type_of_root == ASSIGN_NODE){
        // Infere Tipo do que estiver a direita
        Type t = verifica_variaveis(get_node_child(root,1));

        //Atualiza o name a esquerda
        int aux = lookup_var(vt, get_name_node(get_node_child(root,0)));
        if(aux == -1){
            //Adiciona na tabela
            add_var(vt, get_name_node(get_node_child(root,0)), 0, t, 0, 0);
        }
        else{
            //Verifica se o tipo é igual a t
            if(get_type(vt,aux) != t){
                printf("TYPE ERROR: variable expects type %s but received type %s.\n", get_text(get_type(vt,aux)), get_text(t));
                exit(EXIT_FAILURE);
            }
        }

        return t;
    }   

    if(type_of_root == PLUS_NODE || type_of_root == MINUS_NODE || type_of_root == MULTIPLY_NODE || type_of_root == DIVISION_NODE){
        int count = get_child_count(root);
        if (count == 1){
            Type t1 = verifica_variaveis(get_node_child(root,0));
            return t1;
        }
        else{
            Type t1 = verifica_variaveis(get_node_child(root,0));
            Type t2 = verifica_variaveis(get_node_child(root,1));
            if(type_of_root == PLUS_NODE || type_of_root == MINUS_NODE)
                return verifica_precedencia_tipo_1(t1,t2);
            if(type_of_root == MULTIPLY_NODE)
                return verifica_precedencia_tipo_2(t1,t2);
            if(type_of_root == DIVISION_NODE)
                return verifica_precedencia_tipo_3(t1,t2);
        } 
    }

    if(type_of_root == NUMBER_NODE){
        if(strchr(get_data(root), '.') != NULL){
            return REAL_TYPE;
        }
        return INT_TYPE;
    }

    if(type_of_root == STRING_NODE){
        return STR_TYPE;
    }

    //Se for um NAME (como já tratamos o caso em que está a esquerda de um ASSIGN, agora é só dar lookup sempre que aparecer um NAME)
    if(type_of_root == NAME_NODE){
        int aux = lookup_var(vt, get_name_node(root));
        if(aux == -1){
            printf("ERROR: variable %s not declared\n", get_name_node(root));
            exit(EXIT_FAILURE);
        }
        return get_type(vt,aux);
    }

    if(type_of_root == FOR_NODE){
        AST* exprlist = get_node_child(root,0); 
        int exprlist_count = get_node_count(exprlist);
        for(int i = 0; i < exprlist_count; i++){
            add_var(vt, get_name_node(get_node_child(exprlist, i)), 0, NO_TYPE, 0, 0);
        }
    }

    if(type_of_root == FUNCDEF_NODE){
        AST* arglist = get_node_child(root,1);
        //Adiciona cada um dos filhos na tabela
        int arglist_count = get_node_count(arglist);
        for(int i = 0; i < arglist_count; i++){
            add_var(vt, get_name_node(get_node_child(arglist, i)), 0, NO_TYPE, 0, 0);
        }
    }

    int children_count = get_node_count(root);
    for(int i = 0; i < children_count; i++){
        verifica_variaveis(get_node_child(root, i));
    }
    return NO_TYPE; 
}

int main() {
    vt = create_var_table();
    st = create_str_table();

    lex_init();
    yyparse();
    
    // for(int i = 0; i < names_list.count; i++){
    //     printf("Index:%d, %s\n",i,names_list.last_text[i]);
    // }

	segunda_passada(root);
    verify_func_calls(root);
    verifica_variaveis(root);

    printf("PARSE SUCCESSFUL!\n");

    print_dot(root);

    print_str_table(st);
    print_var_table(vt);
    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}

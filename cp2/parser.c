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

#define CHILDREN_LIMIT 20

void lex_init(void);
int yylex(void);
int yylex_destroy(void);
void yyerror(char const *s);

void check_var(char*);
void new_var(void);

typedef struct {
    char* last_text[100];
    int count;
} mdl;

extern char *yytext;
extern int yylineno;
extern mdl names_list;

int position = 0;
int position_f = 0;

StrTable *st;
VarTable *vt;

AST *root;

#line 106 "parser.c"

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

#line 153 "parser.c"

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
#define YYLAST   849

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  121
/* YYNRULES -- Number of rules.  */
#define YYNRULES  283
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  463

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
       0,    58,    58,    59,    60,    63,    64,    65,    68,    69,
      72,    73,    76,    77,    88,    89,    92,    93,   101,   102,
     105,   106,   107,   108,   111,   112,   113,   126,   127,   130,
     131,   134,   135,   138,   139,   142,   143,   146,   147,   150,
     151,   158,   159,   162,   163,   166,   167,   170,   171,   174,
     175,   224,   225,   228,   229,   249,   250,   253,   254,   266,
     267,   268,   271,   272,   275,   276,   281,   286,   289,   292,
     295,   296,   297,   300,   303,   306,   307,   313,   314,   317,
     318,   324,   329,   330,   333,   336,   337,   338,   339,   340,
     341,   342,   343,   346,   347,   348,   349,   350,   353,   356,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   376,   379,   382,   383,   384,   385,   386,
     389,   392,   395,   396,   399,   402,   403,   404,   407,   408,
     411,   414,   425,   426,   427,   430,   431,   432,   435,   435,
     438,   441,   444,   447,   447,   450,   450,   453,   453,   456,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   470,
     471,   472,   475,   476,   479,   480,   483,   484,   487,   488,
     491,   494,   497,   500,   501,   507,   510,   511,   515,   528,
     529,   537,   538,   542,   543,   546,   547,   548,   549,   550,
     551,   552,   553,   554,   555,   556,   581,   582,   585,   586,
     589,   590,   593,   594,   595,   598,   599,   600,   603,   604,
     605,   606,   607,   608,   611,   612,   613,   614,   617,   618,
     621,   622,   628,   629,   630,   631,   633,   634,   635,   636,
     637,   639,   640,   641,   642,   643,   652,   653,   657,   658,
     659,   660,   665,   666,   669,   670,   673,   679,   680,   686,
     687,   690,   691,   694,   695,   696,   697,   700,   701,   707,
     707,   713,   714,   717,   718,   719,   720,   721,   722,   725,
     726,   729,   730,   733,   734,   737,   738,   741,   742,   745,
     746,   749,   750,   751
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
  "import_as_name", "$@1", "dotted_as_name", "import_as_names",
  "dotted_as_names", "dotted_name", "$@2", "global_stmt", "$@3",
  "nonlocal_stmt", "$@4", "assert_stmt", "compound_stmt", "async_stmt",
  "if_stmt", "while_stmt", "for_stmt", "try_stmt", "with_stmt",
  "with_item", "except_clause", "suite", "namedexpr_test", "test",
  "test_nocond", "or_test", "and_test", "not_test", "comparison", "expr",
  "xor_expr", "and_expr", "shift_expr", "arith_expr", "term", "factor",
  "power", "atom_expr", "atom", "testlist_comp", "trailer",
  "subscriptlist", "subscript", "sliceop", "exprlist", "testlist",
  "dictorsetmaker", "dictorsetmaker1", "dictorsetmaker2", "classdef",
  "$@5", "arglist", "argument1", "comp_iter", "sync_comp_for", "comp_for",
  "comp_if", "yield_expr", "yield_arg", "func_body_suite", YY_NULLPTR
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

#define YYPACT_NINF (-385)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-278)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -385,   393,    70,  -385,  -385,   469,    20,    23,  -385,  -385,
      77,  -385,   106,    22,    22,    10,   119,   469,    23,    22,
    -385,   132,   469,  -385,    22,    29,   464,    22,    58,   469,
     469,   213,   114,   717,  -385,   120,  -385,  -385,  -385,  -385,
      91,  -385,    86,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,   173,    98,   133,   193,  -385,   787,
     131,   117,   194,   -11,     8,    44,  -385,   176,  -385,  -385,
    -385,   185,  -385,  -385,  -385,  -385,   159,  -385,   162,   199,
    -385,   181,  -385,  -385,   183,  -385,  -385,   215,  -385,  -385,
    -385,   231,  -385,  -385,  -385,  -385,   203,  -385,  -385,   191,
    -385,   233,   225,   469,  -385,  -385,  -385,  -385,  -385,   147,
     262,    68,  -385,  -385,  -385,  -385,  -385,    34,   222,  -385,
    -385,  -385,  -385,   189,  -385,    17,  -385,   469,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,     6,
    -385,    17,  -385,  -385,   469,   469,   469,    22,    22,    22,
      22,   623,    22,    22,    22,   205,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,   469,
    -385,  -385,   297,   195,   159,   -12,   247,   543,  -385,   469,
      74,  -385,   191,   236,   200,  -385,  -385,   469,   217,  -385,
     113,    83,    22,  -385,   191,  -385,  -385,   242,   246,   197,
     251,    22,  -385,    50,   206,  -385,  -385,  -385,    53,    14,
     198,  -385,   210,   216,   491,   316,    34,  -385,  -385,  -385,
    -385,  -385,   268,    17,  -385,  -385,   261,  -385,  -385,   249,
    -385,  -385,  -385,  -385,  -385,  -385,    22,  -385,  -385,  -385,
    -385,    22,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,   263,   469,  -385,   469,
     163,   211,   271,  -385,   275,   276,  -385,   230,   293,   305,
     469,   301,  -385,   302,   264,  -385,  -385,  -385,  -385,  -385,
     303,   115,    23,  -385,   303,  -385,   721,   520,   304,    27,
     308,   239,   469,  -385,   300,   404,  -385,   284,  -385,    53,
     294,   469,    22,  -385,  -385,  -385,  -385,   296,  -385,  -385,
    -385,  -385,   267,  -385,   266,  -385,    17,  -385,  -385,  -385,
     469,  -385,  -385,   280,  -385,  -385,   469,   469,  -385,  -385,
     501,  -385,   191,   469,  -385,  -385,   286,   469,  -385,   239,
     239,   272,   231,   329,   299,   469,   332,   135,  -385,  -385,
     475,  -385,  -385,   231,   191,   325,   346,   191,   191,  -385,
     347,   350,  -385,  -385,   354,  -385,  -385,    53,   326,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,   757,   191,  -385,  -385,   264,  -385,  -385,
     359,   191,   469,  -385,  -385,  -385,  -385,  -385,   362,  -385,
     191,  -385,  -385,   191,   610,  -385,  -385,   379,  -385,   354,
    -385,   469,   -19,  -385,  -385,   351,  -385,   191,  -385,   365,
     191,  -385,  -385,  -385,    22,   367,  -385,   109,   721,   328,
     370,  -385,   191,  -385,  -385,   469,   469,  -385,  -385,  -385,
     557,   344,   191,  -385,  -385,   109,  -385,  -385,   721,  -385,
    -385,   639,  -385
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       2,    51,     0,    66,    67,    51,     0,     0,    52,   120,
       0,   121,     0,    51,    51,     0,     0,    51,     0,    51,
       3,     0,    51,   114,    51,    51,    51,    51,     0,    51,
      51,    51,    69,     0,     8,     0,   157,   155,     4,    82,
      18,    85,    96,    86,    87,    88,   115,   116,   117,   119,
     118,    89,   128,   129,    90,    91,    92,    83,   158,   150,
     151,   152,   153,   154,    14,   176,   180,   182,   184,   195,
     197,   199,   201,   204,   207,   213,   217,   218,   156,   124,
       1,    37,   159,   161,   160,   143,     5,   259,     0,    14,
     113,     0,   132,   133,     0,   134,   145,     0,   175,    31,
     130,    27,   215,   147,   183,   214,   126,   122,   216,    51,
      43,    45,     0,    51,   280,   278,     9,   232,   235,    51,
      51,    51,   229,   233,   230,   231,   234,   221,     0,    72,
      71,    70,    19,     0,   106,    51,   103,    51,   112,   111,
     109,   101,   107,   105,   100,   110,   104,   102,   108,    12,
      93,    51,    15,    99,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,     0,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
     149,    33,    51,     0,     5,     0,    10,    51,   248,    51,
       0,    35,    51,   142,     0,   140,    35,    51,     0,   173,
       0,     0,    51,   171,    51,   279,   225,     0,   244,     0,
      14,    51,   227,   258,     0,   251,   252,   222,     0,   175,
       0,   237,     0,     0,    51,    51,   220,    53,    73,    84,
      21,    20,    24,    51,    13,    97,    14,    95,    94,     0,
     179,   181,   187,   188,   186,   191,    51,   193,   189,   185,
     190,    51,   196,   198,   200,   202,   203,   206,   205,   209,
     212,   211,   210,   208,   219,    38,   144,    51,     6,    51,
     263,     0,    14,    68,     0,    16,    75,     0,    78,    80,
      51,     0,   247,     0,     0,   138,   135,   131,    29,   137,
     146,    41,     0,    28,   148,   127,    51,    51,     0,    41,
       0,    12,    51,    46,   165,    51,   226,    51,   243,    59,
       0,    51,    51,   273,   257,   228,   236,    51,   250,   224,
     223,   241,     0,   238,     0,    54,    51,    98,    23,    22,
      51,   194,   192,     0,   267,   268,    51,    51,   264,     7,
      51,   262,    51,    51,    81,    76,     0,    51,    11,    12,
      12,     0,    27,    14,     0,    51,     0,    41,   163,    32,
      51,    49,   172,    27,    51,    64,     0,    51,    51,    44,
       0,    57,    56,   242,    14,   255,   274,    59,     0,   249,
     240,   239,    26,    25,   177,    34,   266,   265,   261,   260,
      17,    77,    79,    51,    51,   136,   139,    15,   141,    36,
       0,    51,    51,   162,   174,    50,    48,   169,     0,   168,
      51,    62,   170,    51,    51,   245,    58,    51,   256,    14,
     253,    51,     0,   281,    74,   167,    30,    51,    42,     0,
      51,    63,   164,   246,    51,     0,   254,   271,    51,     0,
       0,    39,    51,    65,    61,    51,    51,   272,   269,   270,
      51,     0,    51,    40,    60,   275,   178,   282,    51,   166,
     276,    51,   283
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -385,  -385,   214,  -385,  -385,  -277,   -57,  -385,  -385,  -385,
    -385,  -193,  -385,  -385,  -385,   207,  -385,  -385,  -262,  -385,
    -385,  -385,  -384,  -385,  -385,  -293,  -385,    12,  -385,  -385,
    -385,  -385,   358,  -385,  -385,  -385,     4,  -385,    48,  -385,
    -385,     0,    -1,  -385,  -385,  -385,   -20,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,    -2,  -385,   118,   128,  -385,    90,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,   395,  -385,   411,
     122,   121,  -184,   -27,    -3,  -385,  -137,   270,   397,  -111,
      -9,   255,   259,     2,    19,    61,    11,  -385,  -385,  -385,
    -385,   212,  -203,  -385,  -385,    -5,  -132,  -385,  -385,  -385,
     394,  -385,  -212,  -385,   -24,   126,  -190,  -385,  -106,  -385,
    -385
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   183,    32,   281,   235,   318,   344,   133,   149,
     327,   195,   353,   193,   266,   290,   180,   357,   358,   201,
     203,   362,   360,    33,   226,   207,   415,   374,   299,   409,
       2,     3,    34,    35,    36,   129,    37,   186,   277,   278,
     279,   361,   199,    40,    41,   150,    42,   151,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    94,
     287,   288,   352,    99,   289,   100,   101,   181,    54,   191,
      55,   196,    56,    57,    58,    59,    60,    61,    62,    63,
     110,   300,   200,    97,    64,   455,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,   127,
     220,   227,   209,   210,   416,    90,   221,   214,   215,   216,
      78,   184,   271,   272,   447,   313,   448,   449,    79,   115,
     424
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    38,    81,   112,    89,    89,   107,   153,   291,    91,
      82,   114,   371,   324,    98,   222,   233,   239,   240,   237,
     304,   322,   106,   314,   368,   438,   111,    98,   316,   231,
     102,     8,   188,   317,    92,   105,     8,   365,   108,   130,
     169,    93,    12,     8,   275,   238,   242,   243,   244,   245,
     247,   248,   249,   250,   450,    14,   173,   283,   223,   356,
     297,   310,   171,   276,   310,   170,    85,   311,   439,   174,
      80,    19,   393,   394,   461,   109,    19,   172,    22,    85,
     338,   224,     8,    19,   225,   312,    24,  -125,   312,   -14,
      22,    24,   134,   234,   218,   403,   135,    86,    24,   136,
     301,    27,   302,   137,   373,    95,    27,  -125,    29,    31,
     205,   175,   138,    27,   139,   230,   208,   213,   219,   375,
     310,   433,    19,   176,   284,   177,     7,   329,   388,    22,
     285,   128,   228,    87,   232,   331,    10,    24,   140,   154,
     332,   141,    12,   217,   312,   355,   297,   356,   236,   298,
     446,   142,    27,   308,   143,   286,   144,   252,   389,   396,
      31,     8,    88,   145,   -55,   402,   146,   356,   147,   132,
     406,   255,   256,   336,   310,    96,   265,   148,    89,   270,
     407,   337,   282,   411,   412,   379,   236,   420,   103,   264,
     257,   258,   152,   303,   295,   166,   155,   156,   312,   168,
       5,    19,   309,   178,   179,     8,     9,   167,    22,   182,
     425,    11,   185,   328,    13,   341,    24,   428,   187,   206,
     383,   208,   270,  -277,   189,   190,   431,     8,    15,   432,
      16,    27,   192,    18,   259,   260,   261,   262,   263,   194,
     197,   202,   204,   441,    12,    19,   443,   229,   251,   198,
     113,    21,    22,   273,   280,   292,   293,    23,   453,   305,
      24,   296,    25,   -56,   334,    26,   335,    19,   459,   306,
     307,  -277,   321,   319,    22,    27,     8,   348,   326,   315,
     317,   330,    24,    31,   437,   320,   339,   333,  -277,   211,
     340,  -277,   342,   343,   363,    39,   398,    27,     8,   111,
    -277,   -55,   372,    89,   208,   345,   382,   378,   377,   456,
       8,     8,   346,   -15,   236,   347,    19,   418,   349,   350,
     285,   364,   354,    22,   267,   367,   234,   384,   400,   312,
       8,    24,   370,   386,   387,   212,   385,   270,    19,   380,
     390,   381,   275,   267,   392,    22,    27,   395,   397,   401,
      19,    19,    98,    24,   -15,   399,   -15,    22,    22,    39,
     405,   408,   436,   410,   413,    24,    24,   414,    27,   421,
      19,   -15,   268,   417,   -15,   429,   427,    22,   269,   430,
      27,    27,   442,   440,   445,    24,   451,   452,   458,   419,
     116,   323,   423,     8,   391,   426,     4,   269,   274,    98,
      27,    83,     5,   294,     6,     7,   434,     8,     9,    10,
     359,   372,   351,    11,   435,    12,    13,    84,     8,   104,
     366,   -55,   253,   -55,   369,   444,   241,   254,    14,   131,
      15,   460,    16,    19,    17,    18,   376,    39,   325,     0,
      22,     0,   454,     0,     0,     0,     0,    19,    24,    39,
     405,    20,   -15,    21,    22,     0,     0,    39,    19,    23,
      39,   405,    24,    27,    25,    22,     0,    26,     0,     0,
       0,     0,     0,    24,     0,     0,   -55,    27,     8,    28,
       0,    29,    30,     8,     5,    31,     6,     7,    27,     8,
       9,    10,     0,     0,     0,    11,   404,    12,    13,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   -55,     0,
      14,     0,    15,     0,    16,     8,    17,    18,    19,     0,
       0,     0,  -123,    19,     0,    22,     0,     0,   267,    19,
      22,     0,     0,    24,     8,    21,    22,   -47,    24,     0,
       0,    23,  -123,     0,    24,    19,    25,     0,    27,    26,
       0,     0,    22,    27,     0,    19,     0,     8,     0,    27,
      24,    28,    22,    29,    30,     0,     5,    31,     6,     7,
      24,     8,     9,    10,    19,    27,   -15,    11,   457,    12,
      13,    22,   269,     0,     0,    27,   -15,     0,     0,    24,
       0,     0,    14,     0,    15,     0,    16,    19,    17,    18,
       0,   -15,     0,     0,    27,     0,     0,     0,     0,     0,
       0,    19,    24,     0,     0,     0,     0,    21,    22,     0,
       0,   -15,     0,    23,     8,     0,    24,    27,    25,   -55,
       0,    26,     0,     0,     0,     0,     0,     8,     0,     0,
       0,    27,     0,    28,     0,    29,    30,     0,     5,    31,
       6,     7,     0,     8,     9,    10,     0,     0,     0,    11,
     462,    12,    13,     0,    19,     0,     0,     0,     0,     0,
       0,    22,     0,     0,    14,     0,    15,    19,    16,    24,
      17,    18,   -55,     0,   246,     0,     0,     0,     0,     0,
       0,     0,    24,    19,    27,     0,     0,     0,     0,    21,
      22,     0,     0,     0,     0,    23,     0,    27,    24,     0,
      25,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,    28,     0,    29,    30,     0,
       5,    31,     6,     7,     0,     8,     9,    10,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,   117,     0,
       0,   118,     0,     0,     0,     0,    14,     0,    15,     0,
      16,     0,    17,    18,   119,   120,     5,   121,     0,     0,
       0,     8,     9,   122,     0,    19,   123,    11,     0,   124,
      13,    21,    22,     0,     0,     0,     0,    23,     0,     0,
      24,     0,    25,     0,    15,    26,    16,     0,     0,    18,
     125,     0,   126,     0,     0,    27,     0,    28,     0,    29,
      30,    19,     0,    31,     0,   422,   157,    21,    22,     0,
       0,     0,     0,    23,     0,   158,    24,   159,    25,     0,
     160,    26,   161,     0,     0,     0,   162,     0,     0,     0,
     163,    27,     0,     0,   164,     0,     0,     0,   165,    31
};

static const yytype_int16 yycheck[] =
{
       1,     1,     5,    30,    13,    14,    26,    64,   192,    14,
       6,    31,   305,   225,    17,   121,    10,   154,   155,   151,
     204,   224,    25,   213,   301,    44,    29,    30,   218,   135,
      19,    14,    89,    19,    24,    24,    14,   299,    27,    35,
      51,    31,    22,    14,    56,   151,   157,   158,   159,   160,
     161,   162,   163,   164,   438,    35,    12,   189,    24,    32,
      33,    11,    54,    75,    11,    76,    56,    17,    87,    25,
       0,    54,   349,   350,   458,    17,    54,    69,    61,    56,
     270,    47,    14,    54,    50,    35,    69,    58,    35,    75,
      61,    69,     6,    87,   121,   357,    10,     7,    69,    13,
      17,    84,    19,    17,   307,    15,    84,    78,    88,    92,
     113,    67,    26,    84,    28,   135,   119,   120,   121,   309,
      11,   414,    54,    79,    50,    81,    12,   233,   340,    61,
      56,    11,   128,    56,   137,   246,    16,    69,    52,    41,
     251,    55,    22,    75,    35,    30,    33,    32,   151,    36,
      41,    65,    84,   210,    68,    81,    70,   166,   342,   352,
      92,    14,    56,    77,    17,    30,    80,    32,    82,    78,
     363,   169,   170,    10,    11,    56,   179,    91,   187,   182,
     364,    18,   187,   367,   368,   317,   189,   377,    56,   178,
     171,   172,    19,   202,   197,    64,    63,     4,    35,     5,
       9,    54,   211,    27,    19,    14,    15,    90,    61,    50,
     394,    20,    50,   233,    23,   272,    69,   401,    19,    72,
     326,   224,   225,    10,    43,    42,   410,    14,    37,   413,
      39,    84,    17,    42,   173,   174,   175,   176,   177,     8,
      37,     8,    17,   427,    22,    54,   430,    58,    43,    58,
      37,    60,    61,    58,     7,    19,    56,    66,   442,    17,
      69,    44,    71,    17,   267,    74,   269,    54,   452,    72,
      19,    58,    56,    75,    61,    84,    14,   280,    10,    73,
      19,    32,    69,    92,   421,    75,    75,    24,    75,    27,
      19,    78,    17,    17,   297,   296,   353,    84,    14,   302,
      87,    17,   305,   312,   307,    75,   326,   312,   311,   446,
      14,    14,    19,    17,   317,    10,    54,   374,    17,    17,
      56,    17,    19,    61,    27,    17,    87,   330,   355,    35,
      14,    69,    32,   336,   337,    73,    56,   340,    54,    72,
     343,    75,    56,    27,   347,    61,    84,    75,    19,    17,
      54,    54,   355,    69,    58,    56,    72,    61,    61,   360,
     360,    36,   419,    17,    17,    69,    69,    17,    84,    43,
      54,    75,    75,    19,    78,   402,    17,    61,    81,    17,
      84,    84,    17,    32,    17,    69,    58,    17,    44,   377,
      32,    75,   393,    14,   346,   397,     3,    81,   184,   402,
      84,     6,     9,   196,    11,    12,    27,    14,    15,    16,
     292,   414,   284,    20,   417,    22,    23,     6,    14,    22,
     299,    17,   167,    19,   302,   434,   156,   168,    35,    35,
      37,   455,    39,    54,    41,    42,   310,   438,   226,    -1,
      61,    -1,   445,    -1,    -1,    -1,    -1,    54,    69,   450,
     450,    58,    73,    60,    61,    -1,    -1,   458,    54,    66,
     461,   461,    69,    84,    71,    61,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    84,    14,    86,
      -1,    88,    89,    14,     9,    92,    11,    12,    84,    14,
      15,    16,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,
      35,    -1,    37,    -1,    39,    14,    41,    42,    54,    -1,
      -1,    -1,    58,    54,    -1,    61,    -1,    -1,    27,    54,
      61,    -1,    -1,    69,    14,    60,    61,    17,    69,    -1,
      -1,    66,    78,    -1,    69,    54,    71,    -1,    84,    74,
      -1,    -1,    61,    84,    -1,    54,    -1,    14,    -1,    84,
      69,    86,    61,    88,    89,    -1,     9,    92,    11,    12,
      69,    14,    15,    16,    54,    84,    75,    20,    21,    22,
      23,    61,    81,    -1,    -1,    84,    43,    -1,    -1,    69,
      -1,    -1,    35,    -1,    37,    -1,    39,    54,    41,    42,
      -1,    58,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    69,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    78,    -1,    66,    14,    -1,    69,    84,    71,    19,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    84,    -1,    86,    -1,    88,    89,    -1,     9,    92,
      11,    12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    35,    -1,    37,    54,    39,    69,
      41,    42,    72,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    54,    84,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    66,    -1,    84,    69,    -1,
      71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    -1,    88,    89,    -1,
       9,    92,    11,    12,    -1,    14,    15,    16,    -1,    -1,
      -1,    20,    -1,    22,    23,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    35,    -1,    37,    -1,
      39,    -1,    41,    42,    47,    48,     9,    50,    -1,    -1,
      -1,    14,    15,    56,    -1,    54,    59,    20,    -1,    62,
      23,    60,    61,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    71,    -1,    37,    74,    39,    -1,    -1,    42,
      83,    -1,    85,    -1,    -1,    84,    -1,    86,    -1,    88,
      89,    54,    -1,    92,    -1,    58,    29,    60,    61,    -1,
      -1,    -1,    -1,    66,    -1,    38,    69,    40,    71,    -1,
      43,    74,    45,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      53,    84,    -1,    -1,    57,    -1,    -1,    -1,    61,    92
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
     148,   149,   150,   151,   161,   163,   165,   166,   167,   168,
     169,   170,   171,   172,   177,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   203,   211,
       0,   177,   129,   170,   172,    56,   159,    56,    56,   183,
     198,   198,    24,    31,   152,   159,    56,   176,   177,   156,
     158,   159,   189,    56,   181,   189,   177,   139,   189,    17,
     173,   177,   176,    37,   139,   212,   125,    31,    34,    47,
      48,    50,    56,    59,    62,    83,    85,   192,    11,   128,
     129,   203,    78,   101,     6,    10,    13,    17,    26,    28,
      52,    55,    65,    68,    70,    77,    80,    82,    91,   102,
     138,   140,    19,    99,    41,    63,     4,    29,    38,    40,
      43,    45,    49,    53,    57,    61,    64,    90,     5,    51,
      76,    54,    69,    12,    25,    67,    79,    81,    27,    19,
     109,   160,    50,    95,   204,    50,   130,    19,    99,    43,
      42,   162,    17,   106,     8,   104,   164,    37,    58,   135,
     175,   112,     8,   113,    17,   177,    72,   118,   177,   195,
     196,    27,    73,   177,   200,   201,   202,    75,   176,   177,
     193,   199,   211,    24,    47,    50,   117,   194,   129,    58,
     139,   211,   177,    10,    87,    98,   177,   199,   211,   179,
     179,   180,   182,   182,   182,   182,    61,   182,   182,   182,
     182,    43,   183,   184,   185,   186,   186,   187,   187,   188,
     188,   188,   188,   188,   189,   177,   107,    27,    75,    81,
     177,   205,   206,    58,    95,    56,    75,   131,   132,   133,
       7,    97,   198,   199,    50,    56,    81,   153,   154,   157,
     108,   175,    19,    56,   108,   177,    44,    33,    36,   121,
     174,    17,    19,   183,   175,    17,    72,    19,    99,   183,
      11,    17,    35,   208,   209,    73,   209,    19,    99,    75,
      75,    56,   195,    75,   205,   194,    10,   103,   139,   211,
      32,   182,   182,    24,   177,   177,    10,    18,   209,    75,
      19,    99,    17,    17,   100,    75,    19,    10,   177,    17,
      17,   157,   155,   105,    19,    30,    32,   110,   111,   156,
     115,   134,   114,   177,    17,   111,   174,    17,    98,   173,
      32,   118,   177,   195,   120,   209,   208,   177,   198,   199,
      72,    75,   139,   211,   177,    56,   177,   177,   205,   175,
     177,   131,   177,    98,    98,    75,   104,    19,    99,    56,
     176,    17,    30,   111,    21,   134,   104,   175,    36,   122,
      17,   175,   175,    17,    17,   119,   197,    19,    99,   120,
     209,    43,    58,   135,   213,   175,   154,    17,   175,   176,
      17,   175,   175,   118,    27,   177,    99,   179,    44,    87,
      32,   175,    17,   175,   183,    17,    41,   207,   209,   210,
     115,    58,    17,   175,   177,   178,   179,    21,    44,   175,
     207,   115,    21
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
     150,   151,   152,   152,   152,   153,   153,   153,   155,   154,
     156,   157,   158,   160,   159,   162,   161,   164,   163,   165,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   167,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   173,   174,   175,   175,   176,   177,   177,   178,   179,
     179,   180,   180,   181,   181,   182,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   183,   183,   184,   184,
     185,   185,   186,   186,   186,   187,   187,   187,   188,   188,
     188,   188,   188,   188,   189,   189,   189,   189,   190,   190,
     191,   191,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   193,   193,   194,   194,
     194,   194,   195,   195,   196,   196,   197,   198,   198,   199,
     199,   200,   200,   201,   201,   201,   201,   202,   202,   204,
     203,   205,   205,   206,   206,   206,   206,   206,   206,   207,
     207,   208,   208,   209,   209,   210,   210,   211,   211,   212,
     212,   213,   213,   213
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
       2,     4,     1,     1,     1,     1,     3,     1,     0,     3,
       2,     3,     2,     0,     3,     0,     4,     0,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     6,     5,     7,     4,    10,     7,     6,     6,
       6,     2,     2,     1,     4,     1,     1,     5,     1,     3,
       1,     3,     1,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     4,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     1,     1,     3,
       3,     2,     2,     3,     3,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     3,
       3,     2,     3,     2,     1,     4,     2,     3,     2,     3,
       2,     1,     1,     4,     5,     3,     4,     2,     1,     0,
       6,     3,     2,     1,     2,     3,     3,     2,     2,     1,
       1,     4,     5,     1,     2,     2,     3,     1,     2,     2,
       1,     1,     4,     6
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
#line 58 "parser.y"
                             { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 0); }
#line 2122 "parser.c"
    break;

  case 3:
#line 59 "parser.y"
                                                   { yyval = yyvsp[-1]; }
#line 2128 "parser.c"
    break;

  case 4:
#line 60 "parser.y"
                                                { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2134 "parser.c"
    break;

  case 20:
#line 105 "parser.y"
                                            { yyval = yyvsp[0]; }
#line 2140 "parser.c"
    break;

  case 21:
#line 106 "parser.y"
                                                    { yyval = yyvsp[0]; }
#line 2146 "parser.c"
    break;

  case 22:
#line 107 "parser.y"
                                                                      { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2152 "parser.c"
    break;

  case 23:
#line 108 "parser.y"
                                                                              { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2158 "parser.c"
    break;

  case 28:
#line 127 "parser.y"
                     { new_var(); }
#line 2164 "parser.c"
    break;

  case 34:
#line 139 "parser.y"
                                      { new_var(); }
#line 2170 "parser.c"
    break;

  case 36:
#line 143 "parser.y"
                                            { new_var(); }
#line 2176 "parser.c"
    break;

  case 39:
#line 150 "parser.y"
                                                      { yyval = new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2182 "parser.c"
    break;

  case 40:
#line 151 "parser.y"
                                                                           { add_child(yyvsp[-4], new_subtree(ELIF_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0])); yyval = yyvsp[-4]; }
#line 2188 "parser.c"
    break;

  case 41:
#line 158 "parser.y"
                       { yyval = new_node(NOOP_NODE, 0, NO_TYPE); }
#line 2194 "parser.c"
    break;

  case 42:
#line 159 "parser.y"
                                 { yyval = new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2200 "parser.c"
    break;

  case 49:
#line 174 "parser.y"
                { yyval = new_subtree(BLOCK_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2206 "parser.c"
    break;

  case 50:
#line 175 "parser.y"
                          { add_child(yyvsp[-1], yyvsp[0]); }
#line 2212 "parser.c"
    break;

  case 53:
#line 228 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2218 "parser.c"
    break;

  case 54:
#line 229 "parser.y"
                                               { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2224 "parser.c"
    break;

  case 66:
#line 281 "parser.y"
                    { root = new_subtree(PROGRAM_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2230 "parser.c"
    break;

  case 67:
#line 286 "parser.y"
                                           { yyval = yyvsp[-1]; }
#line 2236 "parser.c"
    break;

  case 73:
#line 300 "parser.y"
                             { yyval = yyvsp[0]; }
#line 2242 "parser.c"
    break;

  case 74:
#line 303 "parser.y"
                                                                                   { yyval = new_subtree(FUNCDEF_NODE, NO_TYPE, 3, new_node(FUNCNAME_NODE, 0, NO_TYPE), yyvsp[-4], yyvsp[0]); }
#line 2248 "parser.c"
    break;

  case 75:
#line 306 "parser.y"
                      { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2254 "parser.c"
    break;

  case 76:
#line 307 "parser.y"
                                { yyval = yyvsp[-1]; }
#line 2260 "parser.c"
    break;

  case 77:
#line 313 "parser.y"
                                    { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2266 "parser.c"
    break;

  case 78:
#line 314 "parser.y"
                    { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2272 "parser.c"
    break;

  case 79:
#line 317 "parser.y"
                            { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2278 "parser.c"
    break;

  case 80:
#line 318 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2284 "parser.c"
    break;

  case 81:
#line 324 "parser.y"
                            { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2290 "parser.c"
    break;

  case 82:
#line 329 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2296 "parser.c"
    break;

  case 83:
#line 330 "parser.y"
                    { yyval = yyvsp[0]; }
#line 2302 "parser.c"
    break;

  case 84:
#line 333 "parser.y"
                                         { yyval = yyvsp[-2]; }
#line 2308 "parser.c"
    break;

  case 85:
#line 336 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2314 "parser.c"
    break;

  case 86:
#line 337 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2320 "parser.c"
    break;

  case 87:
#line 338 "parser.y"
                               { yyval = yyvsp[0]; }
#line 2326 "parser.c"
    break;

  case 88:
#line 339 "parser.y"
                              { yyval = yyvsp[0]; }
#line 2332 "parser.c"
    break;

  case 89:
#line 340 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2338 "parser.c"
    break;

  case 90:
#line 341 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2344 "parser.c"
    break;

  case 91:
#line 342 "parser.y"
                                  { yyval = yyvsp[0]; }
#line 2350 "parser.c"
    break;

  case 92:
#line 343 "parser.y"
                                { yyval = yyvsp[0]; }
#line 2356 "parser.c"
    break;

  case 97:
#line 350 "parser.y"
                                                                                 { yyval = new_subtree(ASSIGN_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[-1]); }
#line 2362 "parser.c"
    break;

  case 99:
#line 356 "parser.y"
                                   { yyval = yyvsp[-1]; }
#line 2368 "parser.c"
    break;

  case 113:
#line 376 "parser.y"
                       { yyval = new_subtree(DEL_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2374 "parser.c"
    break;

  case 114:
#line 379 "parser.y"
                { yyval = new_subtree(PASS_NODE, NO_TYPE, 0); }
#line 2380 "parser.c"
    break;

  case 115:
#line 382 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2386 "parser.c"
    break;

  case 116:
#line 383 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2392 "parser.c"
    break;

  case 117:
#line 384 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2398 "parser.c"
    break;

  case 118:
#line 385 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2404 "parser.c"
    break;

  case 119:
#line 386 "parser.y"
                      { yyval = yyvsp[0]; }
#line 2410 "parser.c"
    break;

  case 120:
#line 389 "parser.y"
                  { yyval = new_subtree(BREAK_NODE, NO_TYPE, 0); }
#line 2416 "parser.c"
    break;

  case 121:
#line 392 "parser.y"
                        { yyval = new_node(CONTINUE_NODE, 0, NO_TYPE); }
#line 2422 "parser.c"
    break;

  case 122:
#line 395 "parser.y"
                                       { yyval = new_subtree(RETURN_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2428 "parser.c"
    break;

  case 123:
#line 396 "parser.y"
                    { yyval = new_node(RETURN_NODE, 0, NO_TYPE); }
#line 2434 "parser.c"
    break;

  case 130:
#line 411 "parser.y"
                                    {}
#line 2440 "parser.c"
    break;

  case 138:
#line 435 "parser.y"
                     { new_var(); }
#line 2446 "parser.c"
    break;

  case 143:
#line 447 "parser.y"
                   { new_var(); }
#line 2452 "parser.c"
    break;

  case 145:
#line 450 "parser.y"
                         { new_var(); }
#line 2458 "parser.c"
    break;

  case 147:
#line 453 "parser.y"
                             { new_var(); }
#line 2464 "parser.c"
    break;

  case 150:
#line 459 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2470 "parser.c"
    break;

  case 151:
#line 460 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2476 "parser.c"
    break;

  case 152:
#line 461 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2482 "parser.c"
    break;

  case 153:
#line 462 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2488 "parser.c"
    break;

  case 154:
#line 463 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2494 "parser.c"
    break;

  case 155:
#line 464 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2500 "parser.c"
    break;

  case 156:
#line 465 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2506 "parser.c"
    break;

  case 157:
#line 466 "parser.y"
                         { yyval = yyvsp[0]; }
#line 2512 "parser.c"
    break;

  case 158:
#line 467 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2518 "parser.c"
    break;

  case 162:
#line 475 "parser.y"
                                                                           { yyval = new_subtree(IF_NODE, NO_TYPE, 4, yyvsp[-4], yyvsp[-2], yyvsp[-1], yyvsp[0]); }
#line 2524 "parser.c"
    break;

  case 163:
#line 476 "parser.y"
                                                      { yyval = new_subtree(IF_NODE, NO_TYPE, 3, yyvsp[-3], yyvsp[-1], yyvsp[0]); }
#line 2530 "parser.c"
    break;

  case 164:
#line 479 "parser.y"
                                                              { yyval = new_subtree(WHILE_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2536 "parser.c"
    break;

  case 165:
#line 480 "parser.y"
                                             { yyval = new_subtree(WHILE_NODE, NO_TYPE, 2, yyvsp[-3], yyvsp[0]); }
#line 2542 "parser.c"
    break;

  case 166:
#line 483 "parser.y"
                                                                                 { yyval = new_subtree(FOR_NODE, NO_TYPE, 4, yyvsp[-8], yyvsp[-6], yyvsp[-3], new_subtree(ELSE_NODE, NO_TYPE, 1, yyvsp[0])); }
#line 2548 "parser.c"
    break;

  case 167:
#line 484 "parser.y"
                                                                { yyval = new_subtree(FOR_NODE, NO_TYPE, 3, yyvsp[-5], yyvsp[-3], yyvsp[0]); }
#line 2554 "parser.c"
    break;

  case 173:
#line 500 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2560 "parser.c"
    break;

  case 174:
#line 501 "parser.y"
                                       { yyval = yyvsp[-1]; }
#line 2566 "parser.c"
    break;

  case 175:
#line 507 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2572 "parser.c"
    break;

  case 179:
#line 528 "parser.y"
                             { yyval = new_subtree(OR_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); printf("or_test_1\n"); }
#line 2578 "parser.c"
    break;

  case 180:
#line 529 "parser.y"
                  { yyval = yyvsp[0];}
#line 2584 "parser.c"
    break;

  case 181:
#line 537 "parser.y"
                                { yyval = new_subtree(AND_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2590 "parser.c"
    break;

  case 182:
#line 538 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2596 "parser.c"
    break;

  case 183:
#line 542 "parser.y"
                       { yyval = new_subtree(NOT_NODE, BOOL_TYPE, 1, yyvsp[0]); }
#line 2602 "parser.c"
    break;

  case 184:
#line 543 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2608 "parser.c"
    break;

  case 185:
#line 546 "parser.y"
                                 { yyval = new_subtree(LESS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2614 "parser.c"
    break;

  case 186:
#line 547 "parser.y"
                                    { yyval = new_subtree(GREATER_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2620 "parser.c"
    break;

  case 187:
#line 548 "parser.y"
                                    { yyval = new_subtree(EQEQ_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2626 "parser.c"
    break;

  case 188:
#line 549 "parser.y"
                                         { yyval = new_subtree(GREATEREQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2632 "parser.c"
    break;

  case 189:
#line 550 "parser.y"
                                      { yyval = new_subtree(LESSEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2638 "parser.c"
    break;

  case 190:
#line 551 "parser.y"
                                     { yyval = new_subtree(NOTEQUAL_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2644 "parser.c"
    break;

  case 191:
#line 552 "parser.y"
                               { yyval = new_subtree(IN_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2650 "parser.c"
    break;

  case 192:
#line 553 "parser.y"
                                   { yyval = new_subtree(NOTIN_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2656 "parser.c"
    break;

  case 193:
#line 554 "parser.y"
                               { yyval = new_subtree(IS_NODE, BOOL_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2662 "parser.c"
    break;

  case 194:
#line 555 "parser.y"
                                   { yyval = new_subtree(ISNOT_NODE, BOOL_TYPE, 2, yyvsp[-3], yyvsp[-1]); }
#line 2668 "parser.c"
    break;

  case 195:
#line 556 "parser.y"
                 { yyval = yyvsp[0]; }
#line 2674 "parser.c"
    break;

  case 196:
#line 581 "parser.y"
                         { yyval = new_subtree(BIT_OR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2680 "parser.c"
    break;

  case 197:
#line 582 "parser.y"
               { yyval = yyvsp[0]; }
#line 2686 "parser.c"
    break;

  case 198:
#line 585 "parser.y"
                                       { yyval = new_subtree(BIT_XOR_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2692 "parser.c"
    break;

  case 199:
#line 586 "parser.y"
                   { yyval = yyvsp[0]; }
#line 2698 "parser.c"
    break;

  case 200:
#line 589 "parser.y"
                                    { yyval = new_subtree(BIT_AND_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2704 "parser.c"
    break;

  case 201:
#line 590 "parser.y"
                     { yyval = yyvsp[0]; }
#line 2710 "parser.c"
    break;

  case 202:
#line 593 "parser.y"
                                            { yyval = new_subtree(LEFTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2716 "parser.c"
    break;

  case 203:
#line 594 "parser.y"
                                             { yyval = new_subtree(RIGHTSHIFT_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2722 "parser.c"
    break;

  case 204:
#line 595 "parser.y"
                       { yyval = yyvsp[0]; }
#line 2728 "parser.c"
    break;

  case 205:
#line 598 "parser.y"
                                 { yyval = new_subtree(PLUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2734 "parser.c"
    break;

  case 206:
#line 599 "parser.y"
                                  { yyval = new_subtree(MINUS_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2740 "parser.c"
    break;

  case 207:
#line 600 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2746 "parser.c"
    break;

  case 208:
#line 603 "parser.y"
                       { yyval = new_subtree(MULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2752 "parser.c"
    break;

  case 209:
#line 604 "parser.y"
                     { yyval = new_subtree(MATRIXMULTIPLY_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2758 "parser.c"
    break;

  case 210:
#line 605 "parser.y"
                        { yyval = new_subtree(DIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2764 "parser.c"
    break;

  case 211:
#line 606 "parser.y"
                          { yyval = new_subtree(MOD_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2770 "parser.c"
    break;

  case 212:
#line 607 "parser.y"
                              { yyval = new_subtree(INTEGERDIVISION_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2776 "parser.c"
    break;

  case 213:
#line 608 "parser.y"
             { yyval = yyvsp[0]; }
#line 2782 "parser.c"
    break;

  case 214:
#line 611 "parser.y"
                    { yyval = new_subtree(PLUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2788 "parser.c"
    break;

  case 215:
#line 612 "parser.y"
                     { yyval = new_subtree(MINUS_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2794 "parser.c"
    break;

  case 216:
#line 613 "parser.y"
                     { yyval = new_subtree(TILDE_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2800 "parser.c"
    break;

  case 217:
#line 614 "parser.y"
              { yyval = yyvsp[0]; }
#line 2806 "parser.c"
    break;

  case 218:
#line 617 "parser.y"
                  { yyval = yyvsp[0]; }
#line 2812 "parser.c"
    break;

  case 219:
#line 618 "parser.y"
                                   { yyval = new_subtree(POWER_NODE, NO_TYPE, 2, yyvsp[-2], yyvsp[0]); }
#line 2818 "parser.c"
    break;

  case 220:
#line 621 "parser.y"
                                       { add_child(yyvsp[-1], yyvsp[0]); yyval = yyvsp[-1]; }
#line 2824 "parser.c"
    break;

  case 221:
#line 622 "parser.y"
                          { yyval = yyvsp[0]; }
#line 2830 "parser.c"
    break;

  case 222:
#line 628 "parser.y"
                { yyval = new_node(PARS_NODE, 0, NO_TYPE); }
#line 2836 "parser.c"
    break;

  case 223:
#line 629 "parser.y"
                           { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2842 "parser.c"
    break;

  case 224:
#line 630 "parser.y"
                              { yyval = new_subtree(PARS_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2848 "parser.c"
    break;

  case 225:
#line 631 "parser.y"
                { yyval = new_node(LIST_NODE, 0, NO_TYPE); }
#line 2854 "parser.c"
    break;

  case 226:
#line 633 "parser.y"
                              { yyval = yyvsp[-1]; }
#line 2860 "parser.c"
    break;

  case 227:
#line 634 "parser.y"
                    { yyval = new_node(DICT_NODE, 0, NO_TYPE); }
#line 2866 "parser.c"
    break;

  case 228:
#line 635 "parser.y"
                                   { yyval = new_subtree(DICT_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2872 "parser.c"
    break;

  case 229:
#line 636 "parser.y"
           { yyval = new_node(NAME_NODE, 0, NO_TYPE); }
#line 2878 "parser.c"
    break;

  case 230:
#line 637 "parser.y"
             { yyval = new_node(NUMBER_NODE, 0, NO_TYPE); set_node_data(yyval, yytext);}
#line 2884 "parser.c"
    break;

  case 231:
#line 639 "parser.y"
             { yyval = new_node(STRING_NODE, 0, STR_TYPE); }
#line 2890 "parser.c"
    break;

  case 232:
#line 640 "parser.y"
               { yyval = new_node(ELLIPSIS_NODE, 0, NO_TYPE); }
#line 2896 "parser.c"
    break;

  case 233:
#line 641 "parser.y"
           { yyval = new_node(NONE_NODE, 0, NO_TYPE); }
#line 2902 "parser.c"
    break;

  case 234:
#line 642 "parser.y"
           { yyval = new_node(BOOL_VAL_NODE, 1, BOOL_TYPE); }
#line 2908 "parser.c"
    break;

  case 235:
#line 643 "parser.y"
            { yyval = new_node(BOOL_VAL_NODE, 0, BOOL_TYPE); }
#line 2914 "parser.c"
    break;

  case 237:
#line 653 "parser.y"
                        { yyval = yyvsp[0]; }
#line 2920 "parser.c"
    break;

  case 238:
#line 657 "parser.y"
                   { yyval = new_node(ARGLIST_NODE, 0, NO_TYPE); }
#line 2926 "parser.c"
    break;

  case 239:
#line 658 "parser.y"
                           { yyval = yyvsp[-1]; }
#line 2932 "parser.c"
    break;

  case 240:
#line 659 "parser.y"
                                 { yyval = yyvsp[-1]; }
#line 2938 "parser.c"
    break;

  case 241:
#line 660 "parser.y"
                  { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[0]); }
#line 2944 "parser.c"
    break;

  case 242:
#line 665 "parser.y"
                                             { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; printf("Adiciona comma subscript\n");}
#line 2950 "parser.c"
    break;

  case 243:
#line 666 "parser.y"
                                   { yyval = new_subtree(LIST_NODE, NO_TYPE, 1, yyvsp[-1]); printf("Fecha recursão subscript"); }
#line 2956 "parser.c"
    break;

  case 247:
#line 679 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2962 "parser.c"
    break;

  case 248:
#line 680 "parser.y"
                         { yyval = new_subtree(EXPRLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2968 "parser.c"
    break;

  case 249:
#line 686 "parser.y"
                              { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2974 "parser.c"
    break;

  case 250:
#line 687 "parser.y"
                         { yyval = new_subtree(TESTLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2980 "parser.c"
    break;

  case 259:
#line 707 "parser.y"
                     { new_var(); }
#line 2986 "parser.c"
    break;

  case 261:
#line 713 "parser.y"
                                 { add_child(yyvsp[0], yyvsp[-2]); yyval = yyvsp[0]; }
#line 2992 "parser.c"
    break;

  case 262:
#line 714 "parser.y"
                             { yyval = new_subtree(ARGLIST_NODE, NO_TYPE, 1, yyvsp[-1]); }
#line 2998 "parser.c"
    break;

  case 281:
#line 749 "parser.y"
                             { yyval = yyvsp[0]; }
#line 3004 "parser.c"
    break;

  case 282:
#line 750 "parser.y"
                                                 { yyval = yyvsp[-1]; }
#line 3010 "parser.c"
    break;

  case 283:
#line 751 "parser.y"
                                                                      { yyval = yyvsp[-1]; }
#line 3016 "parser.c"
    break;


#line 3020 "parser.c"

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
#line 754 "parser.y"


void check_var(char* rule_name) {
    // printf("Regra: %s\n", rule_name);
    // printf("variable '%s'\n", yytext);
    // int idx = lookup_var(vt, yytext);
    // if (idx == -1) {
    //     print_str_table(st);
    //     print_var_table(vt);
    //     printf("SEMANTIC ERROR (%d): variable '%s' was not declared.\n",
    //             yylineno, yytext);
    //     exit(EXIT_FAILURE);
    // }
}

void new_var() {
    // int idx = lookup_var(vt, yytext);
    // printf("Chegueeei %s\n",yytext);
    // if (idx != -1) {
    //     printf("SEMANTIC ERROR (%d): variable '%s' already declared at line %d.\n",
    //             yylineno, yytext, get_line(vt, idx));
    //     exit(EXIT_FAILURE);
    // }
    // add_var(vt, yytext, yylineno, NO_TYPE);
}

// Primitive error handling.
void yyerror (char const *s) {
    printf("SYNTAX ERROR (%d): %s\n", yylineno, s);
    exit(EXIT_FAILURE);
}


// Type unify_type(AST* root){
    
// }

void quarta_passada(AST* root) {
    // if(get_kind_node(root) == ASSIGN_NODE){
    //     int pos = lookup_var(get_name_node(get_node_child(root,0))
    //     if(pos == -1){
    //         //Insere na tabela
    //     }
    //     else{
    //         Type aux_type = get_type(vt, pos);
    //         if(unify_type(get_node_child(root,1)) != aux_type){
    //             printf("TypeError, variable %s expects type '%s'", get_name_node(get_node_child(root,0)), aux_type);
    //         }
    //     }
    //     //Unifica os tipos do que estiver a direita
    //     Type aux_type = unify_type(get_node_child(root,0), get_node_child(root,1))    
    // }
    // if(get_kind_node(root) == STRING_NODE){ return STR_TYPE; };
    // if(get_kind_node(root) == LIST_NODE){ return LIST_TYPE; };
    // if(get_kind_node(root) == BOOL_VAL_NODE){ return BOOL_TYPE; };
    // if(get_kind_node(root) == NUMBER_NODE){
    //     float num = atof(get_data(root));
    //     if (num  == floor(num)){
    //         return INT_TYPE;
    //     }
    //     else{
    //         return REAL_TYPE;
    //     }
    // }
    // int children_count = get_node_count(root);
    
	// for(i = 0; i < children_count; i++){
	// 	quarta_passada(get_node_child(root, i));
	// }
    
}

void segunda_passada(AST* root) {
    if(get_kind_node(root) == NAME_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
    }
    // Se estiver na direita e for um NAME e não estiver na tabela, dá erro
    // Se estiver na direita e for string, atribui esse value e o TYPE na tabela
    
	if(get_kind_node(root) == FUNCDEF_NODE){
        set_name_node(root, names_list.last_text[position_f++]);
        //add_var(vt, get_name_node(root), 0, NO_TYPE, 1, get_node_count(get_node_child(root, 1)));
	}

    if(get_kind_node(root) == STRING_NODE){
        set_node_string_data(root, get_string(st,position++));
    }

    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		segunda_passada(get_node_child(root, i));
	}
}

void verify_func_calls(AST* root) {
    
    // Se é uma função
	if( (get_kind_node(root) == NAME_NODE) && (get_node_count(root) > 0) ){
        if( get_kind_node(get_node_child(root, 0)) == ARGLIST_NODE ){
            // Verifica se está na tabela de símbolos (VarTable)
            int pos = lookup_var(vt, get_name_node(root));
            if (pos == -1){
                printf("ERROR: Function \"%s\" is not defined.\n",get_name_node(root));
                exit(EXIT_FAILURE);
            }
        }
	}
    
    int i = 0;
    int children_count = get_node_count(root);
	for(i = 0; i < children_count; i++){
		verify_func_calls(get_node_child(root, i));
    }  
}

// Mas então, testa com mais strings, vê se dá bom
//Nem eu
int main() {
    vt = create_var_table();
    st = create_str_table();

    lex_init();
    yyparse();

    printf("PARSE SUCCESSFUL!\n");

    // Tá bom
    
    printf("Size da st: %d", get_size_st(st));

    for(int i = 0; i < names_list.count; i++){
        printf("Index:%d, %s\n",i,names_list.last_text[i]);
    }

	segunda_passada(root);
    verify_func_calls(root);

    print_dot(root);

    print_str_table(st);
    print_var_table(vt);
    free_str_table(st);
    free_var_table(vt);
    yylex_destroy();    // To avoid memory leaks within flex...

    return 0;
}

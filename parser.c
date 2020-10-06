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
#line 1 "parser.y"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror(char const *s);



#line 81 "parser.c"

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
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   508

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  204
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

#define YYUNDEFTOK  2
#define YYMAXUTOK   346


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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    23,    23,    24,    36,    37,    41,    41,    86,    86,
      88,    88,    90,    90,    92,    92,    94,    94,    96,    97,
     100,   101,   102,   104,   104,   106,   107,   108,   109,   111,
     112,   113,   114,   115,   116,   118,   146,   147,   149,   232,
     233,   235,   236,   238,   239,   241,   242,   244,   244,   246,
     248,   250,   251,   253,   255,   256,   258,   260,   261,   263,
     264,   266,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   281,   282,   283,   285,   287,   288,   290,   292,
     293,   295,   297,   297,   299,   300,   302,   304,   305,   306,
     308,   310,   311,   312,   313,   314,   315,   317,   319,   320,
     321,   322,   324,   324,   326,   328,   328,   330,   330,   332,
     334,   334,   334,   336,   336,   338,   338,   340,   340,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   353,
     354,   356,   357,   359,   360,   362,   363,   365,   366,   367,
     369,   371,   371,   373,   373,   375,   377,   377,   379,   380,
     382,   386,   386,   388,   388,   390,   390,   392,   392,   394,
     395,   397,   398,   400,   401,   405,   406,   408,   410,   410,
     412,   413,   414,   415,   416,   418,   419,   421,   421,   423,
     425,   426,   428,   433,   434,   436,   437,   444,   446,   446,
     448,   450,   451,   454,   454,   456,   456,   458,   459,   460,
     462,   462,   464,   465,   466
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FALSE", "AWAIT", "ELSE", "IMPORT",
  "PASS", "NONE", "BREAK", "EXCEPT", "IN", "RAISE", "TRUE", "CLASS",
  "FINALLY", "IS", "RETURN", "AND", "CONTINUE", "FOR", "LAMBDA", "TRY",
  "AS", "DEF", "FROM", "NONLOCAL", "WHILE", "ASSERT", "DEL", "GLOBAL",
  "NOT", "WITH", "ASYNC", "ELIF", "IF", "YIELD", "EQEQUAL", "NOTEQUAL",
  "LEFTSHIFT", "RIGHTSHIFT", "LESSEQUAL", "GREATEREQUAL", "LESS",
  "GREATER", "TILDE", "PERCENT", "VBAR", "AMPER", "DOUBLESLASH", "SLASH",
  "DOUBLESTAR", "STAR", "MINUS", "PLUS", "CIRCUMFLEX", "EQUAL", "COMMA",
  "COLON", "LPAR", "RPAR", "LSQB", "RSQB", "LBRACE", "RBRACE", "AT", "DOT",
  "ELLIPSIS", "PLUSEQUAL", "MINEQUAL", "COLONEQUAL", "DOUBLESTAREQUAL",
  "STAREQUAL", "DOUBLESLASHEQUAL", "SLASHEQUAL", "ATEQUAL", "PERCENTEQUAL",
  "AMPEREQUAL", "VBAREQUAL", "CIRCUMFLEXEQUAL", "RIGHTSHIFTEQUAL",
  "LEFTSHIFTEQUAL", "STRING", "NAME", "NUMBER", "INDENT", "DEDENT",
  "ARROW", "NEWLINE", "OR", "TYPE_COMMENT", "SEMICOLON", "$accept",
  "start_program", "newline_fecho", "opt_arglist", "opt_equal_test",
  "opt_comma", "opt_vfpdef", "opt_doublestar_vfpdef_comma",
  "opt_comma_e_o_de_cima", "comma_vfpdef_opt_equal_test_kleene",
  "opt_menor_varargslist", "opt_segundo_menor_varargslist",
  "opt_terceiro_menor_varargslist", "comma_slash", "varargslist", "vfpdef",
  "comma_or_test_star_expr_kleene", "testlist_star_expr", "namedexpr_test",
  "opt_if_ortest_else_test", "test", "test_nocond", "opt_varargslist",
  "lambdef", "lambdef_nocond", "or_and_test_kleene", "or_test",
  "and_not_test_kleene", "and_test", "not_test", "comp_op_kleene",
  "comparison", "comp_op", "star_expr", "vbar_xor_expr_kleene", "expr",
  "circumflex_and_expr_kleene", "xor_expr", "amper_shift_expr_kleene",
  "and_expr", "left_shift_or_right_shift",
  "left_shift_or_right_shift_arith_expr_kleene", "shift_expr",
  "plus_or_minus_term_kleene", "arith_expr", "varias_coisas_factor_kleene",
  "term", "factor", "opt_double_star", "power", "opt_await",
  "trailer_kleene", "atom_expr", "opt_yieldex_or_testlist_comp",
  "opt_testlist_comp", "opt_dictorsetmaker", "string_plus", "atom",
  "or_namedaexpr_test_star_expr",
  "comma_opt_namedaexpr_test_star_expr_kleene", "comma_subscript_kleene",
  "testlist_comp", "trailer", "subscriptlist", "opt_sliceop", "subscript",
  "sliceop", "expr_or_star_expr", "comma_expr_or_star_expr_kleene",
  "exprlist", "or_test_star_expr", "comma_e_o_de_cima2_kleene",
  "opt_test_colon_test_doublestar_expr", "comma_e_o_de_cima3_kleene",
  "opt_primeiro_menor_dictorsetmaker", "opt_segundo_menor_dictorsetmaker",
  "dictorsetmaker", "opt_comma_argument_kleene", "arglist", "opt_comp_for",
  "argument", "comp_iter", "opt_comp_iter", "sync_comp_for", "comp_for",
  "comp_if", "yield_expr", "yield_arg", "func_type_input", "opt_typelist",
  "func_type", "comma_test_fecho", "opt_comma_doublestar_test", "opt_test",
  "opt_maluco", "opt_comma_maluco", "typelist", YY_NULLPTR
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
     345,   346
};
# endif

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-200)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -239,    13,  -239,   280,  -239,  -239,  -239,   -22,    53,   194,
     423,   388,   194,   194,  -239,  -239,    25,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    34,   -17,
     -19,  -239,   -30,   -18,   -18,  -239,  -239,    17,    12,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,    20,    53,  -239,    -3,
      61,   464,    42,    41,    57,    60,    49,   178,  -239,  -239,
    -239,   291,   236,    83,  -239,  -239,  -239,  -239,    27,  -239,
     194,  -239,    24,  -239,    68,  -239,  -239,   423,  -239,   423,
      72,   316,  -239,   127,    53,    53,  -239,   114,   138,  -239,
    -239,  -239,  -239,  -239,  -239,   194,   194,   194,   194,  -239,
    -239,   194,   194,   194,   194,   194,   194,   194,   194,   334,
     194,  -239,    82,  -239,    94,    23,  -239,  -239,    97,  -239,
     194,   102,  -239,    98,    23,    23,  -239,  -239,    87,  -239,
     423,  -239,  -239,   106,  -239,   107,  -239,   418,  -239,   423,
     388,  -239,  -239,   423,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
     423,  -239,  -239,  -239,  -239,  -239,   423,  -239,   165,   148,
     113,  -239,  -239,  -239,  -239,   423,  -239,   129,  -239,  -239,
     133,  -239,  -239,   350,   120,    88,  -239,  -239,   -35,  -239,
       0,  -239,   134,   423,  -239,  -239,  -239,  -239,   136,  -239,
    -239,  -239,  -239,   166,  -239,    14,  -239,  -239,   135,  -239,
     151,  -239,   423,   423,   137,    -1,  -239,  -239,   145,   146,
    -239,   154,  -239,   -18,  -239,    17,  -239,   -18,   -18,  -239,
     -12,  -239,    72,   407,  -239,   164,    53,  -239,  -239,   102,
    -239,  -239,  -239,  -239,   423,   423,  -239,  -239,   169,  -239,
     172,   221,    68,  -239,    68,  -239,   -18,   -18,  -239,    17,
    -239,  -239,   254,  -239,    11,  -239,  -239,   354,  -239,   251,
    -239,   173,  -239,  -239,   106,    68,  -239,  -239,  -239,   425,
    -239,  -239,  -239,  -239,  -239,  -239,   240,  -239,  -239,  -239,
    -239,   106,   175,   -22,    11,  -239,  -239,  -239,  -239,    75,
    -239,   179,  -239,   425,  -239
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,   106,     2,     5,   105,    48,   106,   106,
     106,   106,   106,   106,   192,    44,    42,    52,    55,    58,
      60,    74,    77,    80,    85,    89,    96,   101,     0,   103,
       0,   188,   187,     0,    13,    35,    47,     9,     0,    57,
     100,   204,   195,   192,    99,    98,   201,   106,    43,    53,
      56,    61,    75,    78,    81,    86,    90,    97,   128,   126,
     127,   106,   106,   106,   125,   118,   122,   123,   124,   108,
     106,   104,     0,     4,    11,    19,    12,   106,    19,   106,
     194,   106,   202,     0,   106,   106,    68,    70,     0,    64,
      67,    66,    65,    62,    63,   106,   106,   106,   106,    82,
      83,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   129,    40,   130,     0,   132,   111,   110,     0,   113,
     106,   151,   152,     0,   154,   158,   115,   117,   109,   102,
     106,    10,    34,    17,     8,    24,    49,   106,   203,   106,
     106,   191,   200,   106,    51,    54,    71,    69,    59,    73,
      76,    79,    84,    88,    87,    94,    95,    93,    91,    92,
     106,   186,   151,    37,   183,    72,   106,   119,   106,     0,
      11,   181,   135,   120,   156,   106,   121,    11,   164,   161,
      11,   163,   159,   106,   106,     0,   107,   190,    15,    33,
      22,    32,    31,   106,   198,   192,    41,   185,    11,    39,
     147,   146,   149,     0,   180,   106,   136,   155,   106,   162,
     106,   160,   106,   106,     0,   169,     6,   166,   143,     0,
     134,     0,   139,     0,    16,     9,    29,     0,    13,    23,
      28,   193,   194,   106,    38,    11,   106,   131,   153,     0,
     157,   173,   174,   137,   106,   106,   170,   168,    11,   138,
      11,   106,    11,    18,    11,    19,     0,    13,    30,     9,
     197,    36,   106,   150,   178,   172,   171,   106,   167,   106,
     140,   142,    14,    21,    17,    11,    19,    19,   148,   106,
     177,   179,   175,   176,   165,   133,   106,   144,   141,    20,
      27,    17,    24,    48,   178,    46,    45,   145,    26,    22,
      25,     0,   182,   106,    50
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,  -239,  -210,  -160,  -203,  -239,  -238,   -76,
    -239,   -97,  -239,  -239,  -239,    -7,  -239,  -239,  -239,  -239,
       1,   -81,   -60,  -239,  -239,  -239,   -44,  -239,   152,     6,
    -239,  -239,  -239,   -55,  -239,   -87,  -239,   142,  -239,   153,
    -239,  -239,   155,  -239,   150,  -239,    40,    15,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,    51,  -239,
    -239,   192,  -239,  -239,  -239,    -9,  -239,     2,  -239,  -239,
    -100,  -239,    52,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
      -4,  -239,   -25,   104,  -103,  -239,  -239,  -239,  -239,  -239,
    -239,   -38,    45,   -10,  -239,  -239,  -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,   214,    78,   132,    75,   224,   189,   133,
     229,   191,   258,   192,    36,    76,   198,   161,   111,    48,
      42,   294,    38,    15,   295,    49,    16,    50,    17,    18,
      51,    19,    95,   122,    52,    20,    53,    21,    54,    22,
     101,    55,    23,    56,    24,    57,    25,    26,    71,    27,
      28,   128,    29,   114,   118,   123,    68,    69,   115,   170,
     250,   116,   186,   219,   287,   220,   288,   202,   235,   203,
     124,   177,   125,   180,   181,   178,   126,   248,   216,   246,
     217,   280,   281,   171,   282,   283,   117,   164,     4,    30,
       5,    46,   138,   221,   142,    82,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    43,   135,    83,    14,    80,   113,   113,   148,   163,
     206,    41,   172,     2,    39,   253,   223,   209,     6,   168,
     211,   179,   182,   165,    40,   255,    74,    44,    45,    33,
      34,   168,   169,   174,    70,     7,   289,    58,   234,   256,
     257,    72,    59,   168,   169,     8,   279,    60,    35,   277,
     226,   227,   228,   298,   276,   244,   169,     6,    73,     9,
      47,    35,   112,   112,   121,    35,   110,    12,    13,   245,
      79,    35,     3,    77,   -10,   263,   -10,    81,   134,    85,
     136,   201,   141,    35,     8,   129,    84,     6,   268,    96,
     270,   145,   272,    61,   273,    62,    97,    63,     9,    99,
     100,    64,   102,   103,     7,    98,    12,    13,   238,   127,
     162,   130,   247,   200,     8,   290,    65,    66,    67,   155,
     156,   157,   158,   159,     6,   131,   227,   228,     9,   137,
     195,   187,   143,   261,   120,   110,    12,    13,   141,     6,
     194,     7,   153,   154,   196,   146,   183,  -116,   184,   147,
     113,     8,   166,   185,   167,     6,     7,   232,    35,   173,
     175,   197,   176,   188,   190,     9,     8,   199,   168,     6,
     205,   222,     7,    12,    13,   201,   207,   236,  -196,   274,
       9,   225,     8,   225,   215,   218,   208,   110,    12,    13,
     210,   230,   264,   233,   231,   300,     9,   243,     6,   -10,
     291,   292,   120,  -195,    12,    13,   112,   200,   249,   162,
       9,   239,   251,   241,   242,   -10,   252,   110,    12,    13,
     254,   262,   304,   259,   104,     6,   267,   105,   106,   269,
     107,   286,   299,   301,   162,   296,   144,   303,   149,     9,
       6,   271,     7,   108,     6,   265,   266,    12,    13,   275,
     150,   152,     8,   151,   119,     6,   237,     7,     6,   296,
     285,     7,   240,   284,   278,   -10,     9,     8,   215,   302,
     218,     8,     7,   204,    12,    13,   297,   260,  -196,  -196,
       0,     9,     8,  -196,     6,     9,    37,     0,   110,    12,
      13,     0,   225,    12,    13,     6,     9,  -196,  -114,     9,
       0,     7,  -196,     0,    12,    13,   110,    12,    13,  -196,
       0,     8,     7,   -10,     0,     0,     0,     0,     0,     0,
       6,     0,     8,     0,     0,     9,     0,   109,     0,     0,
       0,    10,    11,    12,    13,     0,     9,     7,     6,     0,
    -189,     0,     0,   110,    12,    13,     0,     8,     0,     0,
       0,  -112,     0,     0,     6,     7,     0,     0,     6,   160,
       0,     9,     0,     0,     0,     8,     0,   139,   140,    12,
      13,     7,     0,     0,     0,     7,  -199,     0,     0,     9,
       0,     8,     0,     0,     0,     8,   110,    12,    13,     0,
       0,     0,     6,     0,  -184,     9,     0,     0,     0,     9,
       0,   212,   213,    12,    13,   212,   213,    12,    13,     7,
      -7,     6,     0,     0,   -10,     0,     0,     0,     0,     8,
       0,     0,     6,     0,     0,     0,     0,     6,     7,     6,
       0,     0,     0,     9,     0,     0,     0,     0,     8,     7,
       0,    12,    13,     0,     7,  -196,   293,     0,  -196,     8,
       0,     0,     9,     0,     8,     0,     8,     0,     0,   110,
      12,    13,     0,     9,     0,     0,     0,   -10,     9,   193,
       9,    12,    13,     0,     0,    86,    12,    13,    12,    13,
      87,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,    89,    90,     0,     0,    91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
       7,    11,    78,    47,     3,    43,    61,    62,    95,   109,
     170,    10,   115,     0,     8,   225,    51,   177,     4,    20,
     180,   124,   125,   110,     9,   228,    33,    12,    13,    51,
      52,    20,    33,   120,    51,    21,   274,     3,   198,    51,
      52,    60,     8,    20,    33,    31,    35,    13,    83,   259,
      50,    51,    52,   291,   257,    56,    33,     4,    88,    45,
      35,    83,    61,    62,    63,    83,    52,    53,    54,    70,
      58,    83,    59,    56,    60,   235,    62,    57,    77,    18,
      79,   168,    81,    83,    31,    70,    89,     4,   248,    47,
     250,    85,   252,    59,   254,    61,    55,    63,    45,    39,
      40,    67,    53,    54,    21,    48,    53,    54,   208,    82,
     109,    87,   215,   168,    31,   275,    82,    83,    84,   104,
     105,   106,   107,   108,     4,    57,    51,    52,    45,    57,
     140,   130,     5,   233,    51,    52,    53,    54,   137,     4,
     139,    21,   102,   103,   143,    31,    59,    64,    61,    11,
     205,    31,    70,    66,    60,     4,    21,   195,    83,    62,
      58,   160,    64,    57,    57,    45,    31,   166,    20,     4,
      57,    83,    21,    53,    54,   262,   175,    11,    58,   255,
      45,   188,    31,   190,   183,   184,    57,    52,    53,    54,
      57,    57,   236,    57,   193,   292,    45,    60,     4,    64,
     276,   277,    51,    58,    53,    54,   205,   262,    62,   208,
      45,   210,    58,   212,   213,    64,   223,    52,    53,    54,
     227,    57,   303,   230,    46,     4,    57,    49,    50,    57,
      52,    58,    57,   293,   233,   279,    84,    58,    96,    45,
       4,   251,    21,    65,     4,   244,   245,    53,    54,   256,
      97,   101,    31,    98,    62,     4,   205,    21,     4,   303,
     269,    21,   210,   267,   262,    11,    45,    31,   267,   294,
     269,    31,    21,   169,    53,    54,   286,   232,    57,    58,
      -1,    45,    31,    62,     4,    45,   293,    -1,    52,    53,
      54,    -1,   299,    53,    54,     4,    45,    57,    62,    45,
      -1,    21,    62,    -1,    53,    54,    52,    53,    54,    58,
      -1,    31,    21,    62,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    31,    -1,    -1,    45,    -1,    36,    -1,    -1,
      -1,    51,    52,    53,    54,    -1,    45,    21,     4,    -1,
      60,    -1,    -1,    52,    53,    54,    -1,    31,    -1,    -1,
      -1,    60,    -1,    -1,     4,    21,    -1,    -1,     4,    25,
      -1,    45,    -1,    -1,    -1,    31,    -1,    51,    52,    53,
      54,    21,    -1,    -1,    -1,    21,    60,    -1,    -1,    45,
      -1,    31,    -1,    -1,    -1,    31,    52,    53,    54,    -1,
      -1,    -1,     4,    -1,    60,    45,    -1,    -1,    -1,    45,
      -1,    51,    52,    53,    54,    51,    52,    53,    54,    21,
      60,     4,    -1,    -1,    60,    -1,    -1,    -1,    -1,    31,
      -1,    -1,     4,    -1,    -1,    -1,    -1,     4,    21,     4,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    -1,    31,    21,
      -1,    53,    54,    -1,    21,    57,    21,    -1,    60,    31,
      -1,    -1,    45,    -1,    31,    -1,    31,    -1,    -1,    52,
      53,    54,    -1,    45,    -1,    -1,    -1,    60,    45,    51,
      45,    53,    54,    -1,    -1,    11,    53,    54,    53,    54,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,     0,    59,   180,   182,     4,    21,    31,    45,
      51,    52,    53,    54,   112,   115,   118,   120,   121,   123,
     127,   129,   131,   134,   136,   138,   139,   141,   142,   144,
     181,   188,    94,    51,    52,    83,   106,   107,   114,   121,
     139,   112,   112,   185,   139,   139,   183,    35,   111,   117,
     119,   122,   126,   128,   130,   133,   135,   137,     3,     8,
      13,    59,    61,    63,    67,    82,    83,    84,   148,   149,
      51,   140,    60,    88,   107,    98,   107,    56,    96,    58,
     183,    57,   187,   118,    89,    18,    11,    16,    31,    37,
      38,    41,    42,    43,    44,   124,    47,    55,    48,    39,
      40,   132,    53,    54,    46,    49,    50,    52,    65,    36,
      52,   110,   112,   125,   145,   150,   153,   178,   146,   153,
      51,   112,   125,   147,   162,   164,   168,    82,   143,   139,
      87,    57,    97,   101,   112,   101,   112,    57,   184,    51,
      52,   112,   186,     5,   120,   121,    31,    11,   127,   129,
     131,   134,   136,   138,   138,   139,   139,   139,   139,   139,
      25,   109,   112,   162,   179,   127,    70,    60,    20,    33,
     151,   175,   176,    62,   127,    58,    64,   163,   167,   176,
     165,   166,   176,    59,    61,    66,   154,   112,    57,   100,
      57,   103,   105,    51,   112,   185,   112,   112,   108,   112,
     125,   127,   159,   161,   175,    57,    97,   112,    57,    97,
      57,    97,    51,    52,    95,   112,   170,   172,   112,   155,
     157,   185,    83,    51,    99,   107,    50,    51,    52,   102,
      57,   112,   183,    57,    97,   160,    11,   150,   162,   112,
     164,   112,   112,    60,    56,    70,   171,   176,   169,    62,
     152,    58,   107,    96,   107,    98,    51,    52,   104,   107,
     184,   162,    57,    97,   118,   112,   112,    57,    97,    57,
      97,   185,    97,    97,   101,   107,    98,    96,   159,    35,
     173,   174,   176,   177,   172,   157,    58,   156,   158,   100,
      97,   101,   101,    21,   113,   116,   118,   185,   100,    57,
     103,   114,   174,    58,   113
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   103,   104,   104,   104,   104,   105,
     106,   106,   106,   106,   106,   107,   108,   108,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     116,   117,   117,   118,   119,   119,   120,   121,   121,   122,
     122,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   126,   126,   127,   128,   128,   129,   130,
     130,   131,   132,   132,   133,   133,   134,   135,   135,   135,
     136,   137,   137,   137,   137,   137,   137,   138,   139,   139,
     139,   139,   140,   140,   141,   142,   142,   143,   143,   144,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   154,
     155,   156,   156,   157,   157,   158,   159,   159,   160,   160,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   171,   171,
     172,   172,   172,   172,   172,   173,   173,   174,   174,   175,
     176,   176,   177,   178,   178,   179,   179,   180,   181,   181,
     182,   183,   183,   184,   184,   185,   185,   186,   186,   186,
     187,   187,   188,   188,   188
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     1,     0,     2,     0,
       1,     0,     1,     0,     3,     0,     2,     0,     4,     0,
       4,     3,     0,     2,     0,     4,     4,     3,     0,     2,
       6,     4,     4,     4,     3,     1,     3,     0,     3,     3,
       1,     4,     0,     2,     1,     1,     1,     1,     0,     4,
       4,     3,     0,     2,     3,     0,     2,     2,     1,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     3,     0,     2,     3,     0,     2,     3,
       0,     2,     1,     1,     3,     0,     2,     3,     3,     0,
       2,     3,     3,     3,     3,     3,     0,     2,     2,     2,
       2,     1,     2,     0,     2,     1,     0,     2,     0,     3,
       1,     1,     0,     1,     0,     1,     0,     2,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     3,     0,     2,     3,     3,     3,     2,
       3,     1,     0,     1,     4,     2,     1,     1,     3,     0,
       3,     1,     1,     3,     0,     3,     2,     3,     0,     1,
       2,     1,     2,     2,     2,     3,     0,     3,     1,     0,
       2,     3,     3,     2,     2,     1,     1,     1,     0,     5,
       2,     1,     3,     2,     1,     2,     1,     2,     1,     0,
       5,     3,     0,     3,     0,     1,     0,     4,     2,     0,
       2,     0,     3,     4,     2
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
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
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
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
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

#line 1707 "parser.c"

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
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
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


#if !defined yyoverflow || YYERROR_VERBOSE
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
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}

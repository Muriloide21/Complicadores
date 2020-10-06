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
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  304

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
       0,    23,    23,    24,    36,    37,    86,    86,    88,    88,
      90,    90,    92,    92,    94,    94,    96,    97,   100,   101,
     102,   104,   104,   106,   107,   108,   109,   111,   112,   113,
     114,   115,   116,   118,   146,   147,   149,   232,   233,   235,
     236,   238,   239,   241,   242,   244,   244,   246,   248,   250,
     251,   253,   255,   256,   258,   260,   261,   263,   264,   266,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     281,   282,   283,   285,   287,   288,   290,   292,   293,   295,
     297,   297,   299,   300,   302,   304,   305,   306,   308,   310,
     311,   312,   313,   314,   315,   317,   319,   320,   321,   322,
     324,   324,   326,   328,   328,   330,   330,   332,   334,   334,
     334,   336,   336,   338,   338,   340,   340,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   353,   354,   356,
     357,   359,   360,   362,   363,   365,   366,   367,   369,   371,
     371,   373,   373,   375,   377,   377,   379,   380,   382,   386,
     386,   388,   388,   390,   390,   392,   392,   394,   395,   397,
     398,   400,   401,   405,   406,   408,   410,   410,   412,   413,
     414,   415,   416,   418,   419,   421,   421,   423,   425,   426,
     428,   433,   434,   436,   437,   444,   446,   446,   448,   450,
     451,   454,   454,   456,   456,   458,   459,   460,   462,   462,
     464,   465,   466
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
  "start_program", "newline_fecho", "opt_equal_test", "opt_comma",
  "opt_vfpdef", "opt_doublestar_vfpdef_comma", "opt_comma_e_o_de_cima",
  "comma_vfpdef_opt_equal_test_kleene", "opt_menor_varargslist",
  "opt_segundo_menor_varargslist", "opt_terceiro_menor_varargslist",
  "comma_slash", "varargslist", "vfpdef", "comma_or_test_star_expr_kleene",
  "testlist_star_expr", "namedexpr_test", "opt_if_ortest_else_test",
  "test", "test_nocond", "opt_varargslist", "lambdef", "lambdef_nocond",
  "or_and_test_kleene", "or_test", "and_not_test_kleene", "and_test",
  "not_test", "comp_op_kleene", "comparison", "comp_op", "star_expr",
  "vbar_xor_expr_kleene", "expr", "circumflex_and_expr_kleene", "xor_expr",
  "amper_shift_expr_kleene", "and_expr", "left_shift_or_right_shift",
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

#define YYPACT_NINF (-249)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-198)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -249,    14,  -249,   297,  -249,  -249,  -249,    -4,    12,   173,
     148,    97,   173,   173,  -249,  -249,    -5,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,    33,     8,
      35,  -249,    10,   -11,   -11,  -249,  -249,    43,    49,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,    69,    12,  -249,    20,
     111,   443,    90,    84,    93,     0,    -9,   313,  -249,  -249,
    -249,   301,   261,    82,  -249,  -249,  -249,  -249,    61,  -249,
     173,  -249,    58,  -249,    96,  -249,  -249,   148,  -249,   148,
      98,   335,  -249,   142,    12,    12,  -249,   127,   149,  -249,
    -249,  -249,  -249,  -249,  -249,   173,   173,   173,   173,  -249,
    -249,   173,   173,   173,   173,   173,   173,   173,   173,   354,
     173,  -249,    92,  -249,   103,    -1,  -249,  -249,   102,  -249,
     173,   108,  -249,   104,    -1,    -1,  -249,  -249,    -6,  -249,
     148,  -249,  -249,   113,  -249,   116,  -249,   407,  -249,   148,
      97,  -249,  -249,   148,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
     148,  -249,  -249,  -249,  -249,  -249,   148,  -249,    52,   160,
     125,  -249,  -249,  -249,  -249,   148,  -249,   129,  -249,  -249,
     130,  -249,  -249,   389,    30,   107,  -249,  -249,   -16,  -249,
      19,  -249,   135,   148,  -249,  -249,  -249,  -249,   150,  -249,
    -249,  -249,  -249,   199,  -249,   226,  -249,  -249,   144,  -249,
     200,  -249,   148,   148,    -2,   152,  -249,   158,   155,  -249,
     162,  -249,   -11,  -249,    43,  -249,   -11,   -11,  -249,    73,
    -249,    98,   373,  -249,   166,    12,  -249,  -249,   108,  -249,
    -249,  -249,   148,   148,  -249,  -249,  -249,   167,  -249,   168,
     242,    96,  -249,    96,  -249,   -11,   -11,  -249,    43,  -249,
    -249,   184,  -249,    17,  -249,  -249,   370,  -249,   272,  -249,
     170,  -249,  -249,   113,    96,  -249,  -249,  -249,   425,  -249,
    -249,  -249,  -249,  -249,  -249,   290,  -249,  -249,  -249,  -249,
     113,   175,    -4,    17,  -249,  -249,  -249,  -249,   120,  -249,
     177,  -249,   425,  -249
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,   104,     2,     5,   103,    46,   104,   104,
     104,   104,   104,   104,   190,    42,    40,    50,    53,    56,
      58,    72,    75,    78,    83,    87,    94,    99,     0,   101,
       0,   186,   185,     0,    11,    33,    45,     7,     0,    55,
      98,   202,   193,   190,    97,    96,   199,   104,    41,    51,
      54,    59,    73,    76,    79,    84,    88,    95,   126,   124,
     125,   104,   104,   104,   123,   116,   120,   121,   122,   106,
     104,   102,     0,     4,     9,    17,    10,   104,    17,   104,
     192,   104,   200,     0,   104,   104,    66,    68,     0,    62,
      65,    64,    63,    60,    61,   104,   104,   104,   104,    80,
      81,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   127,    38,   128,     0,   130,   109,   108,     0,   111,
     104,   149,   150,     0,   152,   156,   113,   115,   107,   100,
     104,     8,    32,    15,     6,    22,    47,   104,   201,   104,
     104,   189,   198,   104,    49,    52,    69,    67,    57,    71,
      74,    77,    82,    86,    85,    92,    93,    91,    89,    90,
     104,   184,   149,    35,   181,    70,   104,   117,   104,     0,
       9,   179,   133,   118,   154,   104,   119,     9,   162,   159,
       9,   161,   157,   104,   104,     0,   105,   188,    13,    31,
      20,    30,    29,   104,   196,   190,    39,   183,     9,    37,
     145,   144,   147,     0,   178,   104,   134,   153,   104,   160,
     104,   158,   104,   104,   167,     0,   164,   141,     0,   132,
       0,   137,     0,    14,     7,    27,     0,    11,    21,    26,
     191,   192,   104,    36,     9,   104,   129,   151,     0,   155,
     171,   172,   104,   104,   168,   166,   135,     9,   136,     9,
     104,     9,    16,     9,    17,     0,    11,    28,     7,   195,
      34,   104,   148,   176,   170,   169,   104,   165,   104,   138,
     140,    12,    19,    15,     9,    17,    17,   146,   104,   175,
     177,   173,   174,   163,   131,   104,   142,   139,    18,    25,
      15,    22,    46,   176,    44,    43,   143,    24,    20,    23,
       0,   180,   104,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,  -249,  -249,  -209,  -160,  -198,  -249,  -248,   -76,  -249,
     -52,  -249,  -249,  -249,    -7,  -249,  -249,  -249,  -249,     1,
     -61,   -50,  -249,  -249,  -249,   -44,  -249,   165,     5,  -249,
    -249,  -249,   -56,  -249,   -87,  -249,   154,  -249,   159,  -249,
    -249,   157,  -249,   151,  -249,   -26,    15,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,    54,  -249,  -249,
     198,  -249,  -249,  -249,     2,  -249,     7,  -249,  -249,  -100,
    -249,    51,  -249,  -249,  -249,  -249,  -249,  -249,  -249,     6,
    -249,   -31,   105,  -103,  -249,  -249,  -249,  -249,  -249,  -249,
     -36,    46,   -10,  -249,  -249,  -249
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    32,    78,   132,    75,   223,   189,   133,   228,
     191,   257,   192,    36,    76,   198,   161,   111,    48,    42,
     293,    38,    15,   294,    49,    16,    50,    17,    18,    51,
      19,    95,   122,    52,    20,    53,    21,    54,    22,   101,
      55,    23,    56,    24,    57,    25,    26,    71,    27,    28,
     128,    29,   114,   118,   123,    68,    69,   115,   170,   249,
     116,   186,   218,   286,   219,   287,   202,   234,   203,   124,
     177,   125,   180,   181,   178,   126,   247,   215,   244,   216,
     279,   280,   171,   281,   282,   117,   164,     4,    30,     5,
      46,   138,   220,   142,    82,    31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      37,    43,   135,    83,    14,   113,   113,    80,   148,   163,
     206,    41,   172,    39,     2,   252,     6,   209,   168,   168,
     211,   179,   182,   165,    40,   288,    74,    44,    45,   254,
      47,   169,   169,   174,     6,   222,    58,   168,   233,    99,
     100,    59,   297,     8,   102,   103,    60,    33,    34,   276,
     169,     7,   278,   183,   242,   184,     6,     9,   275,    70,
     185,     8,   112,   112,   121,    12,    13,    35,   243,   225,
     226,   227,    35,     3,   262,     9,   153,   154,   134,    35,
     136,   201,   141,    12,    13,   129,     6,   267,  -194,   269,
     145,   271,    61,   272,    62,    72,    63,     9,    73,    77,
      64,     6,    35,     7,   110,    12,    13,    79,   237,    84,
     162,   245,   200,     8,   289,    65,    66,    67,     7,   155,
     156,   157,   158,   159,   255,   256,    81,     9,     8,    85,
     195,   187,   260,   120,   110,    12,    13,    96,   141,    97,
     194,    98,     9,   127,   196,   130,  -114,   143,     6,   113,
      12,    13,     6,   131,  -194,   137,    35,  -194,   146,   231,
     147,   197,   166,   167,   173,     7,   175,   199,   176,     7,
     188,   226,   227,   190,   201,     8,   207,     6,   273,     8,
     168,   224,   205,   224,   214,   217,   208,   210,     6,     9,
     221,   263,   229,     9,   230,    -8,   110,    12,    13,   290,
     291,    12,    13,    35,     6,   200,   112,   232,    -8,   162,
     235,   238,   246,   240,   241,   251,  -193,   248,     9,   253,
     250,     7,   258,   261,   266,   268,    12,    13,   285,     9,
       6,     8,   298,   162,   295,   302,   110,    12,    13,   299,
     270,   303,   300,   264,   265,     9,     6,     7,   274,   144,
     149,   120,   152,    12,    13,   151,   150,     8,   295,   236,
     119,   239,   301,     7,    -8,     6,     0,   214,   277,   217,
     284,     9,   283,     8,   204,   296,     6,   259,   110,    12,
      13,     0,     7,     0,     0,    37,    -8,     9,    -8,     0,
       0,   224,     8,     7,     6,    12,    13,     0,     0,  -194,
    -194,     6,     0,     8,  -194,     6,     9,     0,     0,     0,
       0,     7,     0,   110,    12,    13,     0,     9,     7,     0,
       0,     8,     7,  -112,     0,    12,    13,     0,     8,     0,
    -194,     0,     8,     0,    -8,     9,     0,   109,     0,     6,
       0,     0,     9,    12,    13,     0,     9,  -194,    10,    11,
      12,    13,  -194,   110,    12,    13,     7,  -187,     6,   104,
       0,  -110,   105,   106,     0,   107,     8,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     6,   108,   160,
       9,     0,     0,     0,     0,     8,   139,   140,    12,    13,
       0,     7,     0,     6,     7,  -197,     0,     0,     0,     9,
       0,     8,     0,     0,     8,     0,   110,    12,    13,     0,
       7,     6,     0,     0,  -182,     9,     0,     0,     9,     0,
       8,   212,   213,    12,    13,   110,    12,    13,     7,     6,
      -8,     0,     0,    -8,     9,     0,     0,     0,     8,     0,
     212,   213,    12,    13,     0,     0,   292,     0,     0,     0,
       0,     0,     9,     0,    86,     0,     8,     0,   193,    87,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,    88,     0,     0,     0,    12,    13,
      89,    90,     0,     0,    91,    92,    93,    94
};

static const yytype_int16 yycheck[] =
{
       7,    11,    78,    47,     3,    61,    62,    43,    95,   109,
     170,    10,   115,     8,     0,   224,     4,   177,    20,    20,
     180,   124,   125,   110,     9,   273,    33,    12,    13,   227,
      35,    33,    33,   120,     4,    51,     3,    20,   198,    39,
      40,     8,   290,    31,    53,    54,    13,    51,    52,   258,
      33,    21,    35,    59,    56,    61,     4,    45,   256,    51,
      66,    31,    61,    62,    63,    53,    54,    83,    70,    50,
      51,    52,    83,    59,   234,    45,   102,   103,    77,    83,
      79,   168,    81,    53,    54,    70,     4,   247,    58,   249,
      85,   251,    59,   253,    61,    60,    63,    45,    88,    56,
      67,     4,    83,    21,    52,    53,    54,    58,   208,    89,
     109,   214,   168,    31,   274,    82,    83,    84,    21,   104,
     105,   106,   107,   108,    51,    52,    57,    45,    31,    18,
     140,   130,   232,    51,    52,    53,    54,    47,   137,    55,
     139,    48,    45,    82,   143,    87,    64,     5,     4,   205,
      53,    54,     4,    57,    57,    57,    83,    60,    31,   195,
      11,   160,    70,    60,    62,    21,    58,   166,    64,    21,
      57,    51,    52,    57,   261,    31,   175,     4,   254,    31,
      20,   188,    57,   190,   183,   184,    57,    57,     4,    45,
      83,   235,    57,    45,   193,    11,    52,    53,    54,   275,
     276,    53,    54,    83,     4,   261,   205,    57,    64,   208,
      11,   210,    60,   212,   213,   222,    58,    62,    45,   226,
      58,    21,   229,    57,    57,    57,    53,    54,    58,    45,
       4,    31,    57,   232,   278,    58,    52,    53,    54,   291,
     250,   302,   292,   242,   243,    45,     4,    21,   255,    84,
      96,    51,   101,    53,    54,    98,    97,    31,   302,   205,
      62,   210,   293,    21,    64,     4,    -1,   266,   261,   268,
     268,    45,   266,    31,   169,   285,     4,   231,    52,    53,
      54,    -1,    21,    -1,    -1,   292,    60,    45,    62,    -1,
      -1,   298,    31,    21,     4,    53,    54,    -1,    -1,    57,
      58,     4,    -1,    31,    62,     4,    45,    -1,    -1,    -1,
      -1,    21,    -1,    52,    53,    54,    -1,    45,    21,    -1,
      -1,    31,    21,    62,    -1,    53,    54,    -1,    31,    -1,
      58,    -1,    31,    -1,    62,    45,    -1,    36,    -1,     4,
      -1,    -1,    45,    53,    54,    -1,    45,    57,    51,    52,
      53,    54,    62,    52,    53,    54,    21,    60,     4,    46,
      -1,    60,    49,    50,    -1,    52,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    21,    -1,     4,    65,    25,
      45,    -1,    -1,    -1,    -1,    31,    51,    52,    53,    54,
      -1,    21,    -1,     4,    21,    60,    -1,    -1,    -1,    45,
      -1,    31,    -1,    -1,    31,    -1,    52,    53,    54,    -1,
      21,     4,    -1,    -1,    60,    45,    -1,    -1,    45,    -1,
      31,    51,    52,    53,    54,    52,    53,    54,    21,     4,
      60,    -1,    -1,    60,    45,    -1,    -1,    -1,    31,    -1,
      51,    52,    53,    54,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    11,    -1,    31,    -1,    51,    16,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    -1,    31,    -1,    -1,    -1,    53,    54,
      37,    38,    -1,    -1,    41,    42,    43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,     0,    59,   179,   181,     4,    21,    31,    45,
      51,    52,    53,    54,   111,   114,   117,   119,   120,   122,
     126,   128,   130,   133,   135,   137,   138,   140,   141,   143,
     180,   187,    94,    51,    52,    83,   105,   106,   113,   120,
     138,   111,   111,   184,   138,   138,   182,    35,   110,   116,
     118,   121,   125,   127,   129,   132,   134,   136,     3,     8,
      13,    59,    61,    63,    67,    82,    83,    84,   147,   148,
      51,   139,    60,    88,   106,    97,   106,    56,    95,    58,
     182,    57,   186,   117,    89,    18,    11,    16,    31,    37,
      38,    41,    42,    43,    44,   123,    47,    55,    48,    39,
      40,   131,    53,    54,    46,    49,    50,    52,    65,    36,
      52,   109,   111,   124,   144,   149,   152,   177,   145,   152,
      51,   111,   124,   146,   161,   163,   167,    82,   142,   138,
      87,    57,    96,   100,   111,   100,   111,    57,   183,    51,
      52,   111,   185,     5,   119,   120,    31,    11,   126,   128,
     130,   133,   135,   137,   137,   138,   138,   138,   138,   138,
      25,   108,   111,   161,   178,   126,    70,    60,    20,    33,
     150,   174,   175,    62,   126,    58,    64,   162,   166,   175,
     164,   165,   175,    59,    61,    66,   153,   111,    57,    99,
      57,   102,   104,    51,   111,   184,   111,   111,   107,   111,
     124,   126,   158,   160,   174,    57,    96,   111,    57,    96,
      57,    96,    51,    52,   111,   169,   171,   111,   154,   156,
     184,    83,    51,    98,   106,    50,    51,    52,   101,    57,
     111,   182,    57,    96,   159,    11,   149,   161,   111,   163,
     111,   111,    56,    70,   170,   175,    60,   168,    62,   151,
      58,   106,    95,   106,    97,    51,    52,   103,   106,   183,
     161,    57,    96,   117,   111,   111,    57,    96,    57,    96,
     184,    96,    96,   100,   106,    97,    95,   158,    35,   172,
     173,   175,   176,   171,   156,    58,   155,   157,    99,    96,
     100,   100,    21,   112,   115,   117,   184,    99,    57,   102,
     113,   173,    58,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     101,   102,   102,   103,   103,   103,   103,   104,   105,   105,
     105,   105,   105,   106,   107,   107,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   114,   115,   116,
     116,   117,   118,   118,   119,   120,   120,   121,   121,   122,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   123,
     124,   125,   125,   126,   127,   127,   128,   129,   129,   130,
     131,   131,   132,   132,   133,   134,   134,   134,   135,   136,
     136,   136,   136,   136,   136,   137,   138,   138,   138,   138,
     139,   139,   140,   141,   141,   142,   142,   143,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   153,   154,   155,
     155,   156,   156,   157,   158,   158,   159,   159,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   170,   170,   171,   171,
     171,   171,   171,   172,   172,   173,   173,   174,   175,   175,
     176,   177,   177,   178,   178,   179,   180,   180,   181,   182,
     182,   183,   183,   184,   184,   185,   185,   185,   186,   186,
     187,   187,   187
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     2,     0,     2,     0,     1,     0,
       1,     0,     3,     0,     2,     0,     4,     0,     4,     3,
       0,     2,     0,     4,     4,     3,     0,     2,     6,     4,
       4,     4,     3,     1,     3,     0,     3,     3,     1,     4,
       0,     2,     1,     1,     1,     1,     0,     4,     4,     3,
       0,     2,     3,     0,     2,     2,     1,     3,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     3,     0,     2,     3,     0,     2,     3,     0,     2,
       1,     1,     3,     0,     2,     3,     3,     0,     2,     3,
       3,     3,     3,     3,     0,     2,     2,     2,     2,     1,
       2,     0,     2,     1,     0,     2,     0,     3,     1,     1,
       0,     1,     0,     1,     0,     2,     1,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     3,     0,     2,     3,     3,     3,     2,     3,     1,
       0,     1,     4,     2,     1,     1,     3,     0,     3,     1,
       1,     3,     0,     3,     2,     3,     0,     1,     2,     1,
       2,     2,     2,     3,     0,     3,     1,     0,     2,     3,
       3,     2,     2,     1,     1,     1,     0,     5,     2,     1,
       3,     2,     1,     2,     1,     2,     1,     0,     5,     3,
       0,     3,     0,     1,     0,     4,     2,     0,     2,     0,
       3,     4,     2
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

#line 1702 "parser.c"

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

/* A Bison parser, made by GNU Bison 3.7.2.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FALSE = 3,                      /* FALSE  */
  YYSYMBOL_AWAIT = 4,                      /* AWAIT  */
  YYSYMBOL_ELSE = 5,                       /* ELSE  */
  YYSYMBOL_IMPORT = 6,                     /* IMPORT  */
  YYSYMBOL_PASS = 7,                       /* PASS  */
  YYSYMBOL_NONE = 8,                       /* NONE  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_EXCEPT = 10,                    /* EXCEPT  */
  YYSYMBOL_IN = 11,                        /* IN  */
  YYSYMBOL_RAISE = 12,                     /* RAISE  */
  YYSYMBOL_TRUE = 13,                      /* TRUE  */
  YYSYMBOL_CLASS = 14,                     /* CLASS  */
  YYSYMBOL_FINALLY = 15,                   /* FINALLY  */
  YYSYMBOL_IS = 16,                        /* IS  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_AND = 18,                       /* AND  */
  YYSYMBOL_CONTINUE = 19,                  /* CONTINUE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_LAMBDA = 21,                    /* LAMBDA  */
  YYSYMBOL_TRY = 22,                       /* TRY  */
  YYSYMBOL_AS = 23,                        /* AS  */
  YYSYMBOL_DEF = 24,                       /* DEF  */
  YYSYMBOL_FROM = 25,                      /* FROM  */
  YYSYMBOL_NONLOCAL = 26,                  /* NONLOCAL  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_ASSERT = 28,                    /* ASSERT  */
  YYSYMBOL_DEL = 29,                       /* DEL  */
  YYSYMBOL_GLOBAL = 30,                    /* GLOBAL  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_WITH = 32,                      /* WITH  */
  YYSYMBOL_ASYNC = 33,                     /* ASYNC  */
  YYSYMBOL_ELIF = 34,                      /* ELIF  */
  YYSYMBOL_IF = 35,                        /* IF  */
  YYSYMBOL_YIELD = 36,                     /* YIELD  */
  YYSYMBOL_EQEQUAL = 37,                   /* EQEQUAL  */
  YYSYMBOL_NOTEQUAL = 38,                  /* NOTEQUAL  */
  YYSYMBOL_LEFTSHIFT = 39,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 40,                /* RIGHTSHIFT  */
  YYSYMBOL_LESSEQUAL = 41,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 42,              /* GREATEREQUAL  */
  YYSYMBOL_LESS = 43,                      /* LESS  */
  YYSYMBOL_GREATER = 44,                   /* GREATER  */
  YYSYMBOL_TILDE = 45,                     /* TILDE  */
  YYSYMBOL_PERCENT = 46,                   /* PERCENT  */
  YYSYMBOL_VBAR = 47,                      /* VBAR  */
  YYSYMBOL_AMPER = 48,                     /* AMPER  */
  YYSYMBOL_DOUBLESLASH = 49,               /* DOUBLESLASH  */
  YYSYMBOL_SLASH = 50,                     /* SLASH  */
  YYSYMBOL_DOUBLESTAR = 51,                /* DOUBLESTAR  */
  YYSYMBOL_STAR = 52,                      /* STAR  */
  YYSYMBOL_MINUS = 53,                     /* MINUS  */
  YYSYMBOL_PLUS = 54,                      /* PLUS  */
  YYSYMBOL_CIRCUMFLEX = 55,                /* CIRCUMFLEX  */
  YYSYMBOL_EQUAL = 56,                     /* EQUAL  */
  YYSYMBOL_COMMA = 57,                     /* COMMA  */
  YYSYMBOL_COLON = 58,                     /* COLON  */
  YYSYMBOL_LPAR = 59,                      /* LPAR  */
  YYSYMBOL_RPAR = 60,                      /* RPAR  */
  YYSYMBOL_LSQB = 61,                      /* LSQB  */
  YYSYMBOL_RSQB = 62,                      /* RSQB  */
  YYSYMBOL_LBRACE = 63,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 64,                    /* RBRACE  */
  YYSYMBOL_AT = 65,                        /* AT  */
  YYSYMBOL_DOT = 66,                       /* DOT  */
  YYSYMBOL_ELLIPSIS = 67,                  /* ELLIPSIS  */
  YYSYMBOL_PLUSEQUAL = 68,                 /* PLUSEQUAL  */
  YYSYMBOL_MINEQUAL = 69,                  /* MINEQUAL  */
  YYSYMBOL_COLONEQUAL = 70,                /* COLONEQUAL  */
  YYSYMBOL_DOUBLESTAREQUAL = 71,           /* DOUBLESTAREQUAL  */
  YYSYMBOL_STAREQUAL = 72,                 /* STAREQUAL  */
  YYSYMBOL_DOUBLESLASHEQUAL = 73,          /* DOUBLESLASHEQUAL  */
  YYSYMBOL_SLASHEQUAL = 74,                /* SLASHEQUAL  */
  YYSYMBOL_ATEQUAL = 75,                   /* ATEQUAL  */
  YYSYMBOL_PERCENTEQUAL = 76,              /* PERCENTEQUAL  */
  YYSYMBOL_AMPEREQUAL = 77,                /* AMPEREQUAL  */
  YYSYMBOL_VBAREQUAL = 78,                 /* VBAREQUAL  */
  YYSYMBOL_CIRCUMFLEXEQUAL = 79,           /* CIRCUMFLEXEQUAL  */
  YYSYMBOL_RIGHTSHIFTEQUAL = 80,           /* RIGHTSHIFTEQUAL  */
  YYSYMBOL_LEFTSHIFTEQUAL = 81,            /* LEFTSHIFTEQUAL  */
  YYSYMBOL_STRING = 82,                    /* STRING  */
  YYSYMBOL_NAME = 83,                      /* NAME  */
  YYSYMBOL_NUMBER = 84,                    /* NUMBER  */
  YYSYMBOL_INDENT = 85,                    /* INDENT  */
  YYSYMBOL_DEDENT = 86,                    /* DEDENT  */
  YYSYMBOL_ARROW = 87,                     /* ARROW  */
  YYSYMBOL_NEWLINE = 88,                   /* NEWLINE  */
  YYSYMBOL_OR = 89,                        /* OR  */
  YYSYMBOL_TYPE_COMMENT = 90,              /* TYPE_COMMENT  */
  YYSYMBOL_SEMICOLON = 91,                 /* SEMICOLON  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_damares = 93,                   /* damares  */
  YYSYMBOL_mourao = 94,                    /* mourao  */
  YYSYMBOL_varargslist = 95,               /* varargslist  */
  YYSYMBOL_vfpdef = 96,                    /* vfpdef  */
  YYSYMBOL_testlist_star_expr = 97,        /* testlist_star_expr  */
  YYSYMBOL_namedexpr_test = 98,            /* namedexpr_test  */
  YYSYMBOL_test = 99,                      /* test  */
  YYSYMBOL_lambda_colon = 100,             /* lambda_colon  */
  YYSYMBOL_lambdef = 101,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 102,           /* lambdef_nocond  */
  YYSYMBOL_or_and_test_kleene = 103,       /* or_and_test_kleene  */
  YYSYMBOL_or_test = 104,                  /* or_test  */
  YYSYMBOL_and_not_test_kleene = 105,      /* and_not_test_kleene  */
  YYSYMBOL_and_test = 106,                 /* and_test  */
  YYSYMBOL_not_test = 107,                 /* not_test  */
  YYSYMBOL_comp_op_expr_kleene = 108,      /* comp_op_expr_kleene  */
  YYSYMBOL_comparison = 109,               /* comparison  */
  YYSYMBOL_comp_op = 110,                  /* comp_op  */
  YYSYMBOL_star_expr = 111,                /* star_expr  */
  YYSYMBOL_vbar_xor_kleene = 112,          /* vbar_xor_kleene  */
  YYSYMBOL_expr = 113,                     /* expr  */
  YYSYMBOL_circumflex_and_expr_kleene = 114, /* circumflex_and_expr_kleene  */
  YYSYMBOL_xor_expr = 115,                 /* xor_expr  */
  YYSYMBOL_amper_shift_kleene = 116,       /* amper_shift_kleene  */
  YYSYMBOL_and_expr = 117,                 /* and_expr  */
  YYSYMBOL_shifts_arith_expr = 118,        /* shifts_arith_expr  */
  YYSYMBOL_shift_expr = 119,               /* shift_expr  */
  YYSYMBOL_plus_minus_term_kleene = 120,   /* plus_minus_term_kleene  */
  YYSYMBOL_arith_expr = 121,               /* arith_expr  */
  YYSYMBOL_varias_coisas_factor_kleene = 122, /* varias_coisas_factor_kleene  */
  YYSYMBOL_term = 123,                     /* term  */
  YYSYMBOL_factor = 124,                   /* factor  */
  YYSYMBOL_power = 125,                    /* power  */
  YYSYMBOL_trailer_kleene = 126,           /* trailer_kleene  */
  YYSYMBOL_atom_expr = 127,                /* atom_expr  */
  YYSYMBOL_string_kleene_plus = 128,       /* string_kleene_plus  */
  YYSYMBOL_atom = 129,                     /* atom  */
  YYSYMBOL_comma_e_o_de_cima_kleene = 130, /* comma_e_o_de_cima_kleene  */
  YYSYMBOL_testlist_comp = 131,            /* testlist_comp  */
  YYSYMBOL_trailer = 132,                  /* trailer  */
  YYSYMBOL_comma_subscript_kleene = 133,   /* comma_subscript_kleene  */
  YYSYMBOL_subscriptlist = 134,            /* subscriptlist  */
  YYSYMBOL_subscript = 135,                /* subscript  */
  YYSYMBOL_sliceop = 136,                  /* sliceop  */
  YYSYMBOL_comma_e_o_de_baixo_kleene = 137, /* comma_e_o_de_baixo_kleene  */
  YYSYMBOL_exprlist = 138,                 /* exprlist  */
  YYSYMBOL_comma_test_colon_test_or_doublestar_expr_kleene = 139, /* comma_test_colon_test_or_doublestar_expr_kleene  */
  YYSYMBOL_comma_test_or_star_expr_kleene = 140, /* comma_test_or_star_expr_kleene  */
  YYSYMBOL_dictorsetmaker = 141,           /* dictorsetmaker  */
  YYSYMBOL_comma_argument_kleene = 142,    /* comma_argument_kleene  */
  YYSYMBOL_arglist = 143,                  /* arglist  */
  YYSYMBOL_argument = 144,                 /* argument  */
  YYSYMBOL_comp_iter = 145,                /* comp_iter  */
  YYSYMBOL_sync_comp_for = 146,            /* sync_comp_for  */
  YYSYMBOL_comp_for = 147,                 /* comp_for  */
  YYSYMBOL_comp_if = 148,                  /* comp_if  */
  YYSYMBOL_yield_expr = 149,               /* yield_expr  */
  YYSYMBOL_yield_arg = 150                 /* yield_arg  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  258
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  370

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    22,   250,   251,   252,   256,   257,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   340,   377,   378,   379,
     380,   540,   541,   543,   544,   545,   551,   553,   554,   555,
     556,   558,   559,   560,   561,   563,   564,   566,   567,   569,
     570,   572,   573,   575,   576,   578,   579,   581,   582,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   595,
     597,   598,   600,   601,   603,   604,   606,   607,   609,   610,
     612,   614,   615,   616,   618,   620,   621,   622,   624,   626,
     627,   628,   629,   630,   631,   633,   635,   636,   637,   638,
     640,   641,   643,   644,   646,   647,   649,   650,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   667,   668,   669,   671,   672,   673,   674,   675,
     676,   679,   680,   681,   682,   684,   685,   687,   688,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   700,   701,
     703,   704,   705,   707,   708,   709,   710,   718,   719,   720,
     722,   723,   724,   726,   727,   728,   729,   730,   731,   732,
     733,   734,   735,   736,   737,   743,   744,   746,   747,   750,
     751,   752,   753,   754,   755,   757,   758,   760,   761,   763,
     764,   766,   767,   768,   769,   771,   772,   774,   775
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "FALSE", "AWAIT",
  "ELSE", "IMPORT", "PASS", "NONE", "BREAK", "EXCEPT", "IN", "RAISE",
  "TRUE", "CLASS", "FINALLY", "IS", "RETURN", "AND", "CONTINUE", "FOR",
  "LAMBDA", "TRY", "AS", "DEF", "FROM", "NONLOCAL", "WHILE", "ASSERT",
  "DEL", "GLOBAL", "NOT", "WITH", "ASYNC", "ELIF", "IF", "YIELD",
  "EQEQUAL", "NOTEQUAL", "LEFTSHIFT", "RIGHTSHIFT", "LESSEQUAL",
  "GREATEREQUAL", "LESS", "GREATER", "TILDE", "PERCENT", "VBAR", "AMPER",
  "DOUBLESLASH", "SLASH", "DOUBLESTAR", "STAR", "MINUS", "PLUS",
  "CIRCUMFLEX", "EQUAL", "COMMA", "COLON", "LPAR", "RPAR", "LSQB", "RSQB",
  "LBRACE", "RBRACE", "AT", "DOT", "ELLIPSIS", "PLUSEQUAL", "MINEQUAL",
  "COLONEQUAL", "DOUBLESTAREQUAL", "STAREQUAL", "DOUBLESLASHEQUAL",
  "SLASHEQUAL", "ATEQUAL", "PERCENTEQUAL", "AMPEREQUAL", "VBAREQUAL",
  "CIRCUMFLEXEQUAL", "RIGHTSHIFTEQUAL", "LEFTSHIFTEQUAL", "STRING", "NAME",
  "NUMBER", "INDENT", "DEDENT", "ARROW", "NEWLINE", "OR", "TYPE_COMMENT",
  "SEMICOLON", "$accept", "damares", "mourao", "varargslist", "vfpdef",
  "testlist_star_expr", "namedexpr_test", "test", "lambda_colon",
  "lambdef", "lambdef_nocond", "or_and_test_kleene", "or_test",
  "and_not_test_kleene", "and_test", "not_test", "comp_op_expr_kleene",
  "comparison", "comp_op", "star_expr", "vbar_xor_kleene", "expr",
  "circumflex_and_expr_kleene", "xor_expr", "amper_shift_kleene",
  "and_expr", "shifts_arith_expr", "shift_expr", "plus_minus_term_kleene",
  "arith_expr", "varias_coisas_factor_kleene", "term", "factor", "power",
  "trailer_kleene", "atom_expr", "string_kleene_plus", "atom",
  "comma_e_o_de_cima_kleene", "testlist_comp", "trailer",
  "comma_subscript_kleene", "subscriptlist", "subscript", "sliceop",
  "comma_e_o_de_baixo_kleene", "exprlist",
  "comma_test_colon_test_or_doublestar_expr_kleene",
  "comma_test_or_star_expr_kleene", "dictorsetmaker",
  "comma_argument_kleene", "arglist", "argument", "comp_iter",
  "sync_comp_for", "comp_for", "comp_if", "yield_expr", "yield_arg", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-280)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     839,  -280,    33,  -280,  -280,   839,   839,   839,   381,   492,
     424,  -280,  -280,  -280,  -280,    25,   -41,   -13,  -280,  -280,
    -280,  -280,  -280,    39,   -20,  -280,  -280,  -280,  -280,  -280,
       3,   806,   535,   839,  -280,    45,   -17,   739,  -280,    41,
      -8,    87,  -280,    45,   136,    47,    54,  -280,    31,   839,
    -280,    -7,    45,    79,  -280,   839,    73,   839,    80,    98,
      86,    19,   149,   839,  -280,    71,    71,    67,    67,  -280,
    -280,  -280,    96,    99,  -280,   739,  -280,  -280,  -280,  -280,
    -280,   285,   138,   103,  -280,  -280,   739,  -280,   126,   806,
     806,    76,   806,   144,   107,  -280,  -280,   141,   158,  -280,
    -280,  -280,  -280,  -280,  -280,   136,   839,  -280,  -280,  -280,
      45,   739,   118,  -280,   124,  -280,  -280,  -280,   839,  -280,
     839,   839,   839,   839,   839,   839,   839,   839,   839,   839,
     839,  -280,   458,   603,   100,  -280,   125,   127,  -280,   739,
     739,   128,  -280,   129,   130,  -280,  -280,   180,  -280,   637,
    -280,   806,   187,  -280,   806,  -280,   806,   637,  -280,  -280,
     839,  -280,   137,  -280,    45,   637,   637,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,   739,
     739,  -280,   -11,   133,  -280,   671,   147,   140,  -280,  -280,
    -280,    -1,   152,  -280,   171,  -280,   -23,   637,   637,   153,
     154,   806,  -280,  -280,   208,   739,  -280,  -280,  -280,   705,
     159,  -280,  -280,  -280,  -280,  -280,   739,   739,  -280,  -280,
     160,   739,   161,  -280,   671,  -280,   163,  -280,   162,    -1,
     806,   164,   165,    67,  -280,   285,   285,    75,   739,  -280,
     839,   166,   705,  -280,  -280,   569,  -280,  -280,   161,  -280,
     603,   739,  -280,   218,    -3,   -31,   169,  -280,  -280,  -280,
     773,  -280,  -280,  -280,  -280,  -280,   739,  -280,  -280,  -280,
    -280,   739,   173,    67,  -280,    67,  -280,   175,    -1,   177,
      16,    75,    75,  -280,  -280,     6,   178,  -280,   182,  -280,
     739,   183,  -280,    -1,   773,   174,  -280,  -280,    67,  -280,
     193,    -1,   194,    -1,   196,  -280,    36,  -280,  -280,  -280,
     773,   197,  -280,   739,   199,  -280,    -1,  -280,    -1,   202,
      67,  -280,  -280,  -280,    -1,   206,  -280,    46,  -280,  -280,
      61,   207,  -280,  -280,    -1,   210,    67,  -280,    67,  -280,
      -1,   215,  -280,    70,   216,  -280,   217,  -280,  -280,    -1,
      67,  -280,    -1,   221,    -1,   222,  -280,   223,  -280,  -280,
      -1,  -280,    -1,    -1,   225,  -280,  -280,  -280,    -1,  -280
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   181,     0,   179,   180,     0,     0,     0,     0,     0,
       0,   178,   167,   175,   176,     0,   133,   137,   139,   143,
     147,   154,   159,   161,   177,   163,   163,   158,   157,   156,
       0,     0,   256,     0,   170,   184,    92,     0,    95,    94,
     108,   112,   114,   184,   118,     0,     0,   172,     0,     0,
     174,   222,   222,     0,     1,     0,   132,     0,   136,   140,
     144,   148,   155,     0,   166,   165,   164,     0,     4,    96,
      86,    85,     0,     4,   113,     0,   258,   222,   222,   255,
     129,     0,     0,   189,   250,   185,     0,   100,     0,     0,
       0,   107,     0,   111,   190,   186,   125,   127,     0,   121,
     124,   123,   122,   119,   120,   117,     0,   169,   168,   171,
     219,     0,   233,   229,   234,   230,   173,   131,     0,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   160,     0,     0,     0,   162,     6,    84,     4,     0,
       0,    78,   257,    89,    90,   212,   212,     0,   249,   187,
      91,     0,     0,   106,     0,   110,     0,   188,   128,   126,
       0,   116,   228,   224,   219,   231,   232,   130,   134,   138,
     141,   142,   146,   145,   152,   153,   151,   149,   150,     0,
       0,   192,   240,     0,   236,   207,   199,     0,   196,   194,
       5,    83,    81,    98,     0,     4,    77,    87,    88,   216,
     215,     0,   182,   183,     0,     0,   105,   109,   115,   226,
     227,   223,   220,   221,   243,   244,     0,     0,   239,   191,
     237,   209,   205,   206,   204,   193,   198,    82,     2,    80,
       0,    69,    60,     4,    76,   214,   213,   247,     0,    93,
       0,     0,   225,   242,   241,   238,   208,   203,   201,   202,
     197,     0,    79,     0,    68,    59,    75,     4,   211,   210,
       0,   248,   245,   246,    99,   218,     0,   235,   200,   195,
       3,     0,    33,     4,    67,     4,    58,     4,    74,    72,
       0,   253,   251,   217,    97,    32,    66,     4,    57,     4,
       0,    50,    73,    71,     0,     0,   254,   252,     4,    31,
       4,    65,    63,    56,    54,     4,    49,    70,   104,   103,
       0,    30,     4,     0,    23,    64,    62,    55,    53,    41,
       4,    51,   102,   101,    29,    27,     4,    22,    61,    52,
      40,    48,     4,    28,    26,    14,     4,    24,     4,    42,
      47,    45,    25,    13,    21,     4,    39,     4,    46,    44,
       4,    15,    20,    18,    38,    36,    43,    12,     4,    19,
      17,    37,    35,    11,     9,    16,    34,    10,     8,     7
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -280,   -29,    56,    -5,   -30,  -280,  -114,    -9,  -280,   -35,
    -279,  -280,   -33,  -280,   -85,   -28,  -280,  -280,   179,     2,
    -280,    30,  -280,   -48,  -280,   -49,  -280,   181,  -280,    11,
    -280,   -40,    12,  -280,   260,  -280,  -280,   290,   244,   286,
    -280,  -280,  -280,    44,  -121,   150,  -280,   135,   -38,  -280,
    -280,  -280,    55,  -133,   219,   -19,  -280,  -280,  -280
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   137,    71,    72,   228,    76,    35,    36,    37,    38,
     281,    91,    39,    93,    40,    41,   105,    42,   106,   213,
      56,    44,    58,    16,    59,    17,    60,    18,    61,    19,
      62,    20,    21,    22,    65,    23,    24,    25,    83,    45,
     135,   226,   187,   188,   223,   199,   147,   162,   112,    53,
     220,   183,   184,   261,    84,   262,   263,    46,    79
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    51,    87,    74,    88,   153,    55,   117,   119,    81,
      43,    43,    52,    81,   114,   308,    85,    27,    28,    29,
      67,   275,    82,    77,    95,    54,    82,   232,    67,   233,
      15,   322,   113,   115,    78,   202,     1,   136,   138,   143,
     144,     3,    57,   202,   141,   216,     4,   272,    67,   273,
      67,   111,    70,    86,    67,    68,   152,    67,   298,   217,
      70,    69,    64,    80,   155,    81,   142,    67,    68,   206,
     167,   168,   124,   125,   294,   131,    89,   150,    82,   110,
      70,    90,    70,   145,   172,   173,    70,    67,   320,    70,
      63,   163,     8,   109,     9,    81,    10,    67,   336,    70,
      11,   247,   164,   249,   193,    92,   194,   107,    82,   192,
     260,   146,    67,   338,   108,    12,    13,    14,   204,    70,
     118,    67,   350,   182,   186,   122,   123,   268,   207,    70,
     132,   195,   133,   170,   171,   120,   161,   134,   174,   175,
     176,   177,   178,   116,    70,   211,   121,    96,   296,   297,
      70,   203,    97,    70,   139,   140,   212,   212,    81,   203,
     149,   151,   156,   218,   157,   154,   231,    98,   237,   159,
     214,   215,   158,    99,   100,   165,   222,   101,   102,   103,
     104,   166,   190,   189,   191,   196,   197,   198,   212,   212,
     208,   201,   205,   219,   209,   126,   239,   253,   127,   128,
     241,   129,   225,   257,   256,   224,   230,   243,   244,   229,
     235,   236,   246,   238,   130,   248,   242,   245,   251,   221,
     250,   254,   255,   271,   266,   277,   278,   282,   279,   264,
     285,   290,   310,   241,   293,   301,   182,   258,   258,   303,
     306,   186,   270,   287,   286,   289,   288,   227,   291,   313,
      73,   316,   234,   318,   324,   300,   327,   283,   302,   330,
     304,   309,   284,   334,   340,   259,   259,   343,   312,   311,
     265,   314,   349,   352,   354,   295,   319,   323,   360,   362,
     363,   305,   368,   325,   160,   252,    66,    94,     1,     2,
     332,   331,    26,     3,   269,    48,   200,   335,     4,   210,
     267,   148,   169,   341,   326,     0,   345,   344,   347,   346,
     274,   276,     0,     0,     0,     0,   353,     0,   355,     0,
     358,   357,     0,     0,     0,     0,     0,     0,     0,   364,
       5,     0,     0,     0,   292,     0,     0,    33,     6,     7,
       0,   299,     0,     0,     8,     0,     9,     0,    10,   307,
       0,     0,    11,     0,     0,     0,     0,   315,     0,   317,
       0,     0,   321,     0,     0,     0,     0,    12,    13,    14,
       0,     0,   328,     0,   329,     0,     0,     0,     0,     0,
     333,     0,     0,   337,     1,     2,   339,     0,     0,     3,
     342,     0,     0,     0,     4,     0,   348,     0,     0,   351,
       0,     0,    30,     0,     0,   356,     0,     0,   359,     0,
     361,     0,    31,     0,     0,     0,   365,    32,   366,   367,
       0,     0,     0,     0,   369,     0,     5,     1,     2,     0,
       0,     0,     3,    33,     6,     7,     0,     4,     0,     0,
       8,    34,     9,     0,    10,    30,     0,     0,    11,     0,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     1,     2,    12,    13,    14,     3,     0,     0,     5,
       0,     4,     0,     0,     0,    49,    33,     6,     7,    30,
       0,     0,     0,     8,     0,     9,     0,    10,    50,    31,
       0,    11,     0,     0,     0,     1,     2,     0,     0,     0,
       3,     0,     0,     5,     0,     4,    12,    13,    14,   179,
     180,     6,     7,    30,     0,     0,     0,     8,   181,     9,
       0,    10,     0,    31,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     1,     2,
      12,    13,    14,     3,    33,     6,     7,     0,     4,     0,
       0,     8,     0,     9,    47,    10,    30,     0,     0,    11,
      75,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     1,     2,    12,    13,    14,     3,     0,     0,
       5,     0,     4,     0,     0,     0,     0,    33,     6,     7,
      30,     0,     0,     0,     8,     0,     9,     0,    10,     0,
      31,     0,    11,     0,     0,     0,     1,     2,     0,     0,
       0,     3,     0,     0,     5,     0,     4,    12,    13,    14,
     179,   180,     6,     7,    30,     0,     0,     0,     8,     0,
       9,     0,    10,     0,    31,     0,    11,     0,     0,     0,
       1,     2,     0,     0,     0,     3,     0,     0,     5,     0,
       4,    12,    13,    14,     0,     0,     6,     7,    30,     0,
       0,   185,     8,     0,     9,     0,    10,     0,    31,     0,
      11,     0,     0,     0,     1,     2,     0,     0,     0,     3,
       0,     0,     5,     0,     4,    12,    13,    14,     0,    33,
       6,     7,    30,     0,     0,     0,     8,     0,     9,     0,
      10,     0,    31,     0,    11,     0,     0,     0,     1,     2,
       0,     0,     0,     3,     0,     0,     5,     0,     4,    12,
      13,    14,     0,     0,     6,     7,    30,     0,     0,   221,
       8,     0,     9,     0,    10,     0,    31,     0,    11,     0,
       0,     0,     1,     2,     0,     0,     0,     3,     0,     0,
       5,     0,     4,    12,    13,    14,   240,     0,     6,     7,
      30,     0,     0,     0,     8,     0,     9,     0,    10,     0,
      31,     0,    11,     0,     0,     0,     1,     2,     0,     0,
       0,     3,     0,     0,     5,     0,     4,    12,    13,    14,
       0,     0,     6,     7,   280,     0,     0,     0,     8,     0,
       9,     0,    10,     0,    31,     0,    11,     0,     0,     1,
       2,     0,     0,     0,     3,     0,     0,     0,     5,     4,
       0,    12,    13,    14,     0,     0,     6,     7,     0,     0,
       0,     0,     8,     0,     9,     0,    10,    31,     0,     0,
      11,     0,     1,     2,     0,     0,     0,     3,     0,     0,
       0,     5,     4,     0,     0,    12,    13,    14,     0,     6,
       7,     0,     0,     0,     0,     8,     0,     9,     0,    10,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,    12,    13,
      14,     0,     6,     7,     0,     0,     0,     0,     8,     0,
       9,     0,    10,     0,     0,     0,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14
};

static const yytype_int16 yycheck[] =
{
      30,    10,    37,    31,    37,    90,    47,    55,    57,    20,
       8,     9,    10,    20,    52,   294,    35,     5,     6,     7,
      51,    52,    33,    32,    43,     0,    33,    50,    51,    52,
       0,   310,    51,    52,    32,   149,     3,    67,    68,    77,
      78,     8,    55,   157,    73,    56,    13,    50,    51,    52,
      51,    58,    83,    70,    51,    52,    89,    51,    52,    70,
      83,    58,    82,    33,    92,    20,    75,    51,    52,   154,
     118,   120,    53,    54,    58,    63,    35,    86,    33,    49,
      83,    89,    83,    81,   124,   125,    83,    51,    52,    83,
      51,   110,    59,    62,    61,    20,    63,    51,    52,    83,
      67,   222,   111,   224,   139,    18,   139,    60,    33,   138,
      35,    81,    51,    52,    60,    82,    83,    84,   151,    83,
      47,    51,    52,   132,   133,    39,    40,   248,   156,    83,
      59,   140,    61,   122,   123,    55,   106,    66,   126,   127,
     128,   129,   130,    64,    83,   164,    48,    11,   281,   282,
      83,   149,    16,    83,    58,    56,   165,   166,    20,   157,
      57,    35,    18,   182,    57,    89,   195,    31,   201,    11,
     179,   180,    31,    37,    38,    57,   185,    41,    42,    43,
      44,    57,    57,    83,    57,    57,    57,    57,   197,   198,
     160,    11,     5,    60,    57,    46,   205,   230,    49,    50,
     209,    52,    62,   233,   233,    58,    35,   216,   217,    57,
      57,    57,   221,     5,    65,   224,    57,    57,    56,    58,
      57,    57,    57,     5,    58,   255,    57,   260,   257,   238,
      57,    56,    58,   242,    57,    57,   245,   235,   236,    57,
      57,   250,   251,   273,   273,   275,   275,   191,   277,    56,
     280,    57,   196,    57,    57,   285,    57,   266,   287,    57,
     289,   294,   271,    57,    57,   235,   236,    57,   298,   298,
     240,   300,    57,    57,    57,   280,   305,   310,    57,    57,
      57,   290,    57,   312,   105,   229,    26,    43,     3,     4,
     320,   320,     2,     8,   250,     9,   146,   326,    13,   164,
     245,    82,   121,   332,   313,    -1,   336,   336,   338,   338,
     254,   255,    -1,    -1,    -1,    -1,   345,    -1,   347,    -1,
     350,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,
      45,    -1,    -1,    -1,   278,    -1,    -1,    52,    53,    54,
      -1,   285,    -1,    -1,    59,    -1,    61,    -1,    63,   293,
      -1,    -1,    67,    -1,    -1,    -1,    -1,   301,    -1,   303,
      -1,    -1,   306,    -1,    -1,    -1,    -1,    82,    83,    84,
      -1,    -1,   316,    -1,   318,    -1,    -1,    -1,    -1,    -1,
     324,    -1,    -1,   327,     3,     4,   330,    -1,    -1,     8,
     334,    -1,    -1,    -1,    13,    -1,   340,    -1,    -1,   343,
      -1,    -1,    21,    -1,    -1,   349,    -1,    -1,   352,    -1,
     354,    -1,    31,    -1,    -1,    -1,   360,    36,   362,   363,
      -1,    -1,    -1,    -1,   368,    -1,    45,     3,     4,    -1,
      -1,    -1,     8,    52,    53,    54,    -1,    13,    -1,    -1,
      59,    60,    61,    -1,    63,    21,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,     3,     4,    82,    83,    84,     8,    -1,    -1,    45,
      -1,    13,    -1,    -1,    -1,    51,    52,    53,    54,    21,
      -1,    -1,    -1,    59,    -1,    61,    -1,    63,    64,    31,
      -1,    67,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
       8,    -1,    -1,    45,    -1,    13,    82,    83,    84,    51,
      52,    53,    54,    21,    -1,    -1,    -1,    59,    60,    61,
      -1,    63,    -1,    31,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,     3,     4,
      82,    83,    84,     8,    52,    53,    54,    -1,    13,    -1,
      -1,    59,    -1,    61,    62,    63,    21,    -1,    -1,    67,
      25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,     3,     4,    82,    83,    84,     8,    -1,    -1,
      45,    -1,    13,    -1,    -1,    -1,    -1,    52,    53,    54,
      21,    -1,    -1,    -1,    59,    -1,    61,    -1,    63,    -1,
      31,    -1,    67,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    45,    -1,    13,    82,    83,    84,
      51,    52,    53,    54,    21,    -1,    -1,    -1,    59,    -1,
      61,    -1,    63,    -1,    31,    -1,    67,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,    -1,    -1,    45,    -1,
      13,    82,    83,    84,    -1,    -1,    53,    54,    21,    -1,
      -1,    58,    59,    -1,    61,    -1,    63,    -1,    31,    -1,
      67,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    45,    -1,    13,    82,    83,    84,    -1,    52,
      53,    54,    21,    -1,    -1,    -1,    59,    -1,    61,    -1,
      63,    -1,    31,    -1,    67,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    45,    -1,    13,    82,
      83,    84,    -1,    -1,    53,    54,    21,    -1,    -1,    58,
      59,    -1,    61,    -1,    63,    -1,    31,    -1,    67,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      45,    -1,    13,    82,    83,    84,    51,    -1,    53,    54,
      21,    -1,    -1,    -1,    59,    -1,    61,    -1,    63,    -1,
      31,    -1,    67,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,    -1,    -1,    45,    -1,    13,    82,    83,    84,
      -1,    -1,    53,    54,    21,    -1,    -1,    -1,    59,    -1,
      61,    -1,    63,    -1,    31,    -1,    67,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,    -1,    -1,    -1,    45,    13,
      -1,    82,    83,    84,    -1,    -1,    53,    54,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    63,    31,    -1,    -1,
      67,    -1,     3,     4,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    45,    13,    -1,    -1,    82,    83,    84,    -1,    53,
      54,    -1,    -1,    -1,    -1,    59,    -1,    61,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,    82,    83,
      84,    -1,    53,    54,    -1,    -1,    -1,    -1,    59,    -1,
      61,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     8,    13,    45,    53,    54,    59,    61,
      63,    67,    82,    83,    84,   113,   115,   117,   119,   121,
     123,   124,   125,   127,   128,   129,   129,   124,   124,   124,
      21,    31,    36,    52,    60,    98,    99,   100,   101,   104,
     106,   107,   109,   111,   113,   131,   149,    62,   131,    51,
      64,    99,   111,   141,     0,    47,   112,    55,   114,   116,
     118,   120,   122,    51,    82,   126,   126,    51,    52,    58,
      83,    94,    95,    96,   107,    25,    97,    99,   111,   150,
     113,    20,    33,   130,   146,   147,    70,   101,   104,    35,
      89,   103,    18,   105,   130,   147,    11,    16,    31,    37,
      38,    41,    42,    43,    44,   108,   110,    60,    60,    62,
     113,    58,   140,   147,   140,   147,    64,   115,    47,   117,
      55,    48,    39,    40,    53,    54,    46,    49,    50,    52,
      65,   124,    59,    61,    66,   132,    96,    93,    96,    58,
      56,    93,    99,   140,   140,   111,   113,   138,   146,    57,
      99,    35,   104,   106,    89,   107,    18,    57,    31,    11,
     110,   113,   139,   147,    99,    57,    57,   115,   117,   119,
     121,   121,   123,   123,   124,   124,   124,   124,   124,    51,
      52,    60,    99,   143,   144,    58,    99,   134,   135,    83,
      57,    57,    93,   101,   104,    99,    57,    57,    57,   137,
     137,    11,    98,   111,   104,     5,   106,   107,   113,    57,
     139,   147,    99,   111,    99,    99,    56,    70,   147,    60,
     142,    58,    99,   136,    58,    62,   133,    94,    96,    57,
      35,    93,    50,    52,    94,    57,    57,   104,     5,    99,
      51,    99,    57,    99,    99,    57,    99,   136,    99,   136,
      57,    56,    94,   104,    57,    57,    93,    96,   111,   113,
      35,   145,   147,   148,    99,   113,    58,   144,   136,   135,
      99,     5,    50,    52,    94,    52,    94,    96,    57,    93,
      21,   102,   104,    99,    99,    57,    93,    96,    93,    96,
      56,    93,    94,    57,    58,    95,   145,   145,    52,    94,
      96,    57,    93,    57,    93,    99,    57,    94,   102,   104,
      58,    93,    96,    56,    93,    94,    57,    94,    57,    93,
      52,    94,   102,   104,    57,    93,    99,    57,    94,    94,
      57,    93,    96,    94,    57,    93,    52,    94,    52,    94,
      57,    93,    94,    57,    93,    96,    93,    96,    94,    57,
      52,    94,    57,    93,    57,    93,    94,    93,    96,    94,
      57,    94,    57,    57,    93,    94,    94,    94,    57,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    96,    97,    97,    97,
      97,    98,    98,    99,    99,    99,   100,   101,   101,   101,
     101,   102,   102,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   118,   118,   118,   119,   120,   120,   120,   121,   122,
     122,   122,   122,   122,   122,   123,   124,   124,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   132,   132,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   137,   137,   138,   138,   138,   138,   139,   139,   139,
     140,   140,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   143,   144,
     144,   144,   144,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   148,   148,   149,   149,   150,   150
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     5,     0,     3,     2,    17,    16,    15,
      16,    15,    14,    12,    11,    13,    15,    14,    13,    14,
      13,    12,    10,     9,    11,    12,    11,    10,    11,    10,
       9,     8,     7,     6,    15,    14,    13,    14,    13,    12,
      10,     9,    11,    13,    12,    11,    12,    11,    10,     8,
       7,     9,    10,     9,     8,     9,     8,     7,     6,     5,
       4,    10,     9,     8,     9,     8,     7,     6,     5,     4,
       8,     7,     6,     7,     6,     5,     4,     3,     2,     5,
       4,     3,     4,     3,     2,     1,     1,     3,     3,     2,
       2,     3,     1,     5,     1,     1,     2,     8,     4,     6,
       2,     4,     4,     3,     3,     3,     2,     2,     1,     3,
       2,     2,     1,     2,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       3,     2,     2,     1,     3,     2,     2,     1,     3,     0,
       2,     3,     3,     0,     2,     3,     3,     0,     2,     3,
       3,     3,     3,     3,     0,     2,     2,     2,     2,     1,
       3,     1,     2,     0,     3,     2,     2,     1,     3,     3,
       2,     3,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     0,     2,     2,     3,     3,     2,
       2,     3,     2,     3,     2,     3,     0,     3,     2,     1,
       4,     3,     3,     3,     2,     2,     2,     1,     2,     1,
       3,     3,     0,     3,     3,     2,     2,     5,     4,     0,
       3,     3,     0,     4,     3,     5,     4,     4,     3,     2,
       2,     3,     3,     2,     2,     3,     0,     2,     3,     2,
       1,     3,     3,     2,     2,     1,     1,     4,     5,     2,
       1,     2,     3,     2,     3,     2,     1,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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

#line 1620 "parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}


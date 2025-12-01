/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "src/asin.y"

#include <stdio.h>
#include "header.h"
#include "libtds.h"


#line 78 "asin.c"

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

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAS_ = 3,                       /* MAS_  */
  YYSYMBOL_MENOS_ = 4,                     /* MENOS_  */
  YYSYMBOL_POR_ = 5,                       /* POR_  */
  YYSYMBOL_DIV_ = 6,                       /* DIV_  */
  YYSYMBOL_PARA_ = 7,                      /* PARA_  */
  YYSYMBOL_PARC_ = 8,                      /* PARC_  */
  YYSYMBOL_AND_ = 9,                       /* AND_  */
  YYSYMBOL_OR_ = 10,                       /* OR_  */
  YYSYMBOL_EQUAL_ = 11,                    /* EQUAL_  */
  YYSYMBOL_NEQUAL_ = 12,                   /* NEQUAL_  */
  YYSYMBOL_MAYOR_ = 13,                    /* MAYOR_  */
  YYSYMBOL_MENOR_ = 14,                    /* MENOR_  */
  YYSYMBOL_MAIG_ = 15,                     /* MAIG_  */
  YYSYMBOL_MEIG_ = 16,                     /* MEIG_  */
  YYSYMBOL_EXCL_ = 17,                     /* EXCL_  */
  YYSYMBOL_ASIG_ = 18,                     /* ASIG_  */
  YYSYMBOL_TRUE_ = 19,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 20,                    /* FALSE_  */
  YYSYMBOL_FOR_ = 21,                      /* FOR_  */
  YYSYMBOL_IF_ = 22,                       /* IF_  */
  YYSYMBOL_ELSE_ = 23,                     /* ELSE_  */
  YYSYMBOL_CORA_ = 24,                     /* CORA_  */
  YYSYMBOL_CORC_ = 25,                     /* CORC_  */
  YYSYMBOL_LLAA_ = 26,                     /* LLAA_  */
  YYSYMBOL_LLAC_ = 27,                     /* LLAC_  */
  YYSYMBOL_READ_ = 28,                     /* READ_  */
  YYSYMBOL_PRINT_ = 29,                    /* PRINT_  */
  YYSYMBOL_RETURN_ = 30,                   /* RETURN_  */
  YYSYMBOL_PYC_ = 31,                      /* PYC_  */
  YYSYMBOL_COMA_ = 32,                     /* COMA_  */
  YYSYMBOL_INT_ = 33,                      /* INT_  */
  YYSYMBOL_BOOL_ = 34,                     /* BOOL_  */
  YYSYMBOL_ID_ = 35,                       /* ID_  */
  YYSYMBOL_CTE_ = 36,                      /* CTE_  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_programa = 38,                  /* programa  */
  YYSYMBOL_39_1 = 39,                      /* $@1  */
  YYSYMBOL_listDecla = 40,                 /* listDecla  */
  YYSYMBOL_decla = 41,                     /* decla  */
  YYSYMBOL_declaVar = 42,                  /* declaVar  */
  YYSYMBOL_const = 43,                     /* const  */
  YYSYMBOL_tipoSimp = 44,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 45,                 /* declaFunc  */
  YYSYMBOL_46_2 = 46,                      /* @2  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_paramForm = 48,                 /* paramForm  */
  YYSYMBOL_listParamForm = 49,             /* listParamForm  */
  YYSYMBOL_bloque = 50,                    /* bloque  */
  YYSYMBOL_declaVarLocal = 51,             /* declaVarLocal  */
  YYSYMBOL_listInt = 52,                   /* listInt  */
  YYSYMBOL_inst = 53,                      /* inst  */
  YYSYMBOL_instExpre = 54,                 /* instExpre  */
  YYSYMBOL_instEntSal = 55,                /* instEntSal  */
  YYSYMBOL_instSelec = 56,                 /* instSelec  */
  YYSYMBOL_57_4 = 57,                      /* $@4  */
  YYSYMBOL_instIter = 58,                  /* instIter  */
  YYSYMBOL_59_5 = 59,                      /* $@5  */
  YYSYMBOL_expreOP = 60,                   /* expreOP  */
  YYSYMBOL_expre = 61,                     /* expre  */
  YYSYMBOL_expreLogic = 62,                /* expreLogic  */
  YYSYMBOL_expreIgual = 63,                /* expreIgual  */
  YYSYMBOL_expreRel = 64,                  /* expreRel  */
  YYSYMBOL_expreAd = 65,                   /* expreAd  */
  YYSYMBOL_expreMul = 66,                  /* expreMul  */
  YYSYMBOL_expreUna = 67,                  /* expreUna  */
  YYSYMBOL_expreSufi = 68,                 /* expreSufi  */
  YYSYMBOL_paramAct = 69,                  /* paramAct  */
  YYSYMBOL_listParamAct = 70,              /* listParamAct  */
  YYSYMBOL_opLogic = 71,                   /* opLogic  */
  YYSYMBOL_opIgual = 72,                   /* opIgual  */
  YYSYMBOL_opRel = 73,                     /* opRel  */
  YYSYMBOL_opAd = 74,                      /* opAd  */
  YYSYMBOL_opMul = 75,                     /* opMul  */
  YYSYMBOL_opUna = 76                      /* opUna  */
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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    45,    52,    53,    55,    56,    58,    67,
      79,    94,    95,    96,    98,    99,   101,   106,   101,   121,
     122,   124,   133,   143,   145,   146,   148,   149,   151,   152,
     153,   154,   155,   157,   158,   160,   166,   172,   172,   178,
     178,   187,   188,   190,   191,   197,   212,   213,   220,   221,
     228,   229,   240,   241,   248,   249,   256,   257,   264,   265,
     266,   270,   283,   294,   295,   297,   298,   300,   301,   303,
     304,   306,   307,   308,   309,   311,   312,   314,   315,   317,
     318,   319
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
  "\"end of file\"", "error", "\"invalid token\"", "MAS_", "MENOS_",
  "POR_", "DIV_", "PARA_", "PARC_", "AND_", "OR_", "EQUAL_", "NEQUAL_",
  "MAYOR_", "MENOR_", "MAIG_", "MEIG_", "EXCL_", "ASIG_", "TRUE_",
  "FALSE_", "FOR_", "IF_", "ELSE_", "CORA_", "CORC_", "LLAA_", "LLAC_",
  "READ_", "PRINT_", "RETURN_", "PYC_", "COMA_", "INT_", "BOOL_", "ID_",
  "CTE_", "$accept", "programa", "$@1", "listDecla", "decla", "declaVar",
  "const", "tipoSimp", "declaFunc", "@2", "$@3", "paramForm",
  "listParamForm", "bloque", "declaVarLocal", "listInt", "inst",
  "instExpre", "instEntSal", "instSelec", "$@4", "instIter", "$@5",
  "expreOP", "expre", "expreLogic", "expreIgual", "expreRel", "expreAd",
  "expreMul", "expreUna", "expreSufi", "paramAct", "listParamAct",
  "opLogic", "opIgual", "opRel", "opAd", "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -86,    10,   -25,   -86,   -86,   -86,   -25,   -86,   -86,   -30,
     -86,   -86,    27,   -17,   -24,   -86,     9,   -86,   -86,   -86,
     -11,     6,   -25,   -86,    -7,     1,    33,   -86,   -86,    11,
     -86,   -25,    24,   -86,   -86,   -86,   -25,   -86,    30,    18,
      27,   -86,   -86,   115,   -86,    63,    64,   -86,    68,    69,
     115,   -86,    -1,   -86,   -86,   -86,   -86,   -86,   -86,    47,
       5,    45,    46,    60,    61,   -86,   -86,   135,    72,   115,
     115,    65,    42,   115,    50,   115,   115,   115,   -86,   -86,
     -86,   135,   -86,   -86,   135,   -86,   -86,   -86,   -86,   135,
     -86,   -86,   135,   -86,   -86,   135,     4,   -86,   -86,    52,
     -86,    81,   -86,    87,    89,    76,    73,    96,   -86,   -86,
      82,    45,    46,    60,    61,   -86,   115,   115,   -86,    75,
      77,   -86,   115,   -86,    91,    85,    80,    95,   -86,   -86,
     -86,   115,   -86,   115,    90,   -86,   112,    95,   -86,   -86,
      95,   -86
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    14,    15,     3,     4,     6,     0,
       7,     5,    16,     0,     0,     8,     0,    12,    13,    11,
       0,     0,    19,     9,     0,     0,     0,    20,    10,    21,
      17,     0,     0,    22,    24,    18,    26,    25,     0,     0,
       0,    79,    80,     0,    81,     0,     0,    26,     0,     0,
       0,    34,    60,    58,    27,    29,    30,    31,    32,     0,
      43,    46,    48,    50,    52,    54,    56,     0,     0,    41,
       0,     0,     0,     0,     0,    63,     0,     0,    33,    67,
      68,     0,    69,    70,     0,    71,    72,    73,    74,     0,
      75,    76,     0,    77,    78,     0,    60,    57,    59,     0,
      42,     0,    28,     0,     0,     0,    65,     0,    64,    44,
       0,    47,    49,    51,    53,    55,     0,     0,    37,     0,
       0,    23,     0,    62,    61,     0,     0,     0,    35,    36,
      66,     0,    61,    41,     0,    45,     0,     0,    39,    38,
       0,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -86,   -86,   -86,   -86,   119,    92,   114,   -18,   -86,   -86,
     -86,   -86,    98,   -86,   -86,    86,   -85,   -86,   -86,   -86,
     -86,   -86,   -86,     3,   -43,   -86,    56,    57,    51,    53,
     -66,   -86,   -86,    21,   -86,   -86,   -86,   -86,   -86,   -86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     6,     7,     8,    53,     9,    10,    16,
      32,    26,    27,    35,    36,    39,    54,    55,    56,    57,
     127,    58,   140,    99,    59,    60,    61,    62,    63,    64,
      65,    66,   107,   108,    81,    84,    89,    92,    95,    67
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    97,    17,    18,    25,    12,    75,    74,     4,     5,
       3,    75,    21,    25,    79,    80,    22,    76,    38,    19,
      23,    41,    42,    77,    28,    43,   100,   101,   116,   115,
     104,    24,   106,   109,   110,    44,    29,    17,    18,    45,
      46,    30,   134,    31,    47,    13,    48,    49,    50,    51,
      34,    14,   139,    52,    19,   141,    82,    83,    15,    85,
      86,    87,    88,    90,    91,    40,    93,    94,    41,    42,
      69,    70,    43,   125,   126,    72,    73,   103,    78,   106,
      98,   105,    44,   117,    17,    18,    45,    46,   135,   118,
     100,    47,   102,    48,    49,   119,    51,   120,    41,    42,
      52,    19,    43,   121,   123,   122,   128,   124,   129,   131,
     132,   133,    44,   137,    17,    18,    45,    46,    41,    42,
     138,    47,    43,    48,    49,    11,    51,    20,    37,    33,
      52,    19,    44,    71,    17,    18,   136,   111,    41,    42,
     113,   112,    43,   130,     0,   114,     0,     0,     0,     0,
      52,    19,    44,     0,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    19
};

static const yytype_int16 yycheck[] =
{
      43,    67,    19,    20,    22,    35,     7,    50,    33,    34,
       0,     7,    36,    31,     9,    10,     7,    18,    36,    36,
      31,     3,     4,    24,    31,     7,    69,    70,    24,    95,
      73,    25,    75,    76,    77,    17,    35,    19,    20,    21,
      22,     8,   127,    32,    26,    18,    28,    29,    30,    31,
      26,    24,   137,    35,    36,   140,    11,    12,    31,    13,
      14,    15,    16,     3,     4,    35,     5,     6,     3,     4,
       7,     7,     7,   116,   117,     7,     7,    35,    31,   122,
       8,    31,    17,    31,    19,    20,    21,    22,   131,     8,
     133,    26,    27,    28,    29,     8,    31,     8,     3,     4,
      35,    36,     7,    27,     8,    32,    31,    25,    31,    18,
      25,    31,    17,    23,    19,    20,    21,    22,     3,     4,
       8,    26,     7,    28,    29,     6,    31,    13,    36,    31,
      35,    36,    17,    47,    19,    20,   133,    81,     3,     4,
      89,    84,     7,   122,    -1,    92,    -1,    -1,    -1,    -1,
      35,    36,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,    33,    34,    40,    41,    42,    44,
      45,    41,    35,    18,    24,    31,    46,    19,    20,    36,
      43,    36,     7,    31,    25,    44,    48,    49,    31,    35,
       8,    32,    47,    49,    26,    50,    51,    42,    44,    52,
      35,     3,     4,     7,    17,    21,    22,    26,    28,    29,
      30,    31,    35,    43,    53,    54,    55,    56,    58,    61,
      62,    63,    64,    65,    66,    67,    68,    76,    61,     7,
       7,    52,     7,     7,    61,     7,    18,    24,    31,     9,
      10,    71,    11,    12,    72,    13,    14,    15,    16,    73,
       3,     4,    74,     5,     6,    75,    35,    67,     8,    60,
      61,    61,    27,    35,    61,    31,    61,    69,    70,    61,
      61,    63,    64,    65,    66,    67,    24,    31,     8,     8,
       8,    27,    32,     8,    25,    61,    61,    57,    31,    31,
      70,    18,    25,    31,    53,    61,    60,    23,     8,    53,
      59,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    39,    38,    40,    40,    41,    41,    42,    42,
      42,    43,    43,    43,    44,    44,    46,    47,    45,    48,
      48,    49,    49,    50,    51,    51,    52,    52,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    57,    56,    59,
      58,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    76,
      76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     5,
       6,     1,     1,     1,     1,     1,     0,     0,     8,     0,
       1,     2,     4,     7,     0,     2,     0,     2,     3,     1,
       1,     1,     1,     2,     1,     5,     5,     0,     8,     0,
      10,     0,     1,     1,     3,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     4,     4,     0,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* $@1: %empty  */
#line 45 "src/asin.y"
                      { niv = 0; dvar = 0; cargaContexto(niv); }
#line 1247 "asin.c"
    break;

  case 3: /* programa: $@1 listDecla  */
#line 45 "src/asin.y"
                                                                           {
                        SIMB simb = obtTdS("main");
                        if (simb.t == T_ERROR) {
                            yyerror("No existe la función main");
                        }
                    }
#line 1258 "asin.c"
    break;

  case 8: /* declaVar: tipoSimp ID_ PYC_  */
#line 59 "src/asin.y"
                    {
                        int refe = -1;
                        if(!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].ent), niv, dvar, refe)) {
                            yyerror("La variable ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1271 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ ASIG_ const PYC_  */
#line 68 "src/asin.y"
                    {
                        if ((yyvsp[-4].ent) != (yyvsp[-1].tCons).tipo) {
                            yyerror("Los tipos no coinciden");
                        }
                        int refe = -1;
                        if(!insTdS((yyvsp[-3].ident), VARIABLE, (yyvsp[-4].ent), niv, dvar, refe)) {
                            yyerror("La variable ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1287 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ CORA_ CTE_ CORC_ PYC_  */
#line 80 "src/asin.y"
                    {
                        if((yyvsp[-2].ent) <= 0) {
                            yyerror("La dimension del vector debe ser mayor que 0");
                        }
                        int refe = insTdA((yyvsp[-5].ent), (yyvsp[-2].ent));
                        if(!insTdS((yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, refe)) {
                            yyerror("El vector ya existe");
                        }
                        else {
                            dvar += (yyvsp[-2].ent) * TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1304 "asin.c"
    break;

  case 11: /* const: CTE_  */
#line 94 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).valor = (yyvsp[0].ent); }
#line 1310 "asin.c"
    break;

  case 12: /* const: TRUE_  */
#line 95 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).valor = 1; }
#line 1316 "asin.c"
    break;

  case 13: /* const: FALSE_  */
#line 96 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).valor = 0; }
#line 1322 "asin.c"
    break;

  case 14: /* tipoSimp: INT_  */
#line 98 "src/asin.y"
                           { (yyval.ent) = T_ENTERO; }
#line 1328 "asin.c"
    break;

  case 15: /* tipoSimp: BOOL_  */
#line 99 "src/asin.y"
                            { (yyval.ent) = T_LOGICO; }
#line 1334 "asin.c"
    break;

  case 16: /* @2: %empty  */
#line 101 "src/asin.y"
                                   { 
                        (yyval.ent) = dvar;
                        niv++; 
                        cargaContexto(niv); 
                        dvar = 0; 
                    }
#line 1345 "asin.c"
    break;

  case 17: /* $@3: %empty  */
#line 106 "src/asin.y"
                                            {
                        int refe = (yyvsp[-1].ent);
                        if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].ent), niv - 1, 0, refe)) {
                            yyerror("La función ya existe");
                        }
                    }
#line 1356 "asin.c"
    break;

  case 18: /* declaFunc: tipoSimp ID_ @2 PARA_ paramForm PARC_ $@3 bloque  */
#line 112 "src/asin.y"
                    {
                        if ((yyvsp[0].tCons).tipo != (yyvsp[-7].ent)) {
                            yyerror("El tipo de retorno no coincide con el de la función");
                        }
                        descargaContexto(niv);
                        niv--;
                        dvar = (yyvsp[-5].ent);
                    }
#line 1369 "asin.c"
    break;

  case 19: /* paramForm: %empty  */
#line 121 "src/asin.y"
                      { (yyval.ent) = insTdD(-1, T_VACIO); }
#line 1375 "asin.c"
    break;

  case 20: /* paramForm: listParamForm  */
#line 122 "src/asin.y"
                                    { (yyval.ent) = (yyvsp[0].ent);}
#line 1381 "asin.c"
    break;

  case 21: /* listParamForm: tipoSimp ID_  */
#line 124 "src/asin.y"
                                   {
                        (yyval.ent) = insTdD(-1, (yyvsp[-1].ent));
                        int refe = -1;
                        if(!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].ent), niv, dvar, refe)) {
                            yyerror("El parámetro ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1395 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 133 "src/asin.y"
                                                       {
                        (yyval.ent) = insTdD((yyvsp[0].ent), (yyvsp[-3].ent));
                        int refe = -1;
                        if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].ent), niv, dvar, refe)) {
                            yyerror("El parámetro ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1409 "asin.c"
    break;

  case 23: /* bloque: LLAA_ declaVarLocal listInt RETURN_ expre PYC_ LLAC_  */
#line 143 "src/asin.y"
                                                                           { (yyval.tCons) = (yyvsp[-2].tCons); }
#line 1415 "asin.c"
    break;

  case 35: /* instEntSal: READ_ PARA_ ID_ PARC_ PYC_  */
#line 160 "src/asin.y"
                                                 {
                        SIMB simb = obtTdS((yyvsp[-2].ident));
                        if (simb.t != T_ENTERO) {
                            yyerror("El argumento del read debe ser de tipo simple");
                        }
                    }
#line 1426 "asin.c"
    break;

  case 36: /* instEntSal: PRINT_ PARA_ expre PARC_ PYC_  */
#line 166 "src/asin.y"
                                                    {
                        if ((yyvsp[-2].tCons).tipo != T_ENTERO) {
                            yyerror("La expresion del print debe ser de tipo simple");
                        }
                    }
#line 1436 "asin.c"
    break;

  case 37: /* $@4: %empty  */
#line 172 "src/asin.y"
                                             {
                        if ((yyvsp[-1].tCons).tipo != T_LOGICO) {
                            yyerror("La expresion del if debe ser logica");
                        }
                    }
#line 1446 "asin.c"
    break;

  case 39: /* $@5: %empty  */
#line 178 "src/asin.y"
                                                                       {
                        if ((yyvsp[-5].tCons).tipo != T_ENTERO || (yyvsp[-1].tCons).tipo != T_ENTERO) {
                            yyerror("La expreOp del for debe ser de tipo simple");
                        }
                        if ((yyvsp[-3].tCons).tipo != T_LOGICO) {
                            yyerror("La expresion del for debe ser logica");
                        }
                    }
#line 1459 "asin.c"
    break;

  case 41: /* expreOP: %empty  */
#line 187 "src/asin.y"
                      { (yyval.tCons).tipo = T_ENTERO; }
#line 1465 "asin.c"
    break;

  case 42: /* expreOP: expre  */
#line 188 "src/asin.y"
                            { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1471 "asin.c"
    break;

  case 43: /* expre: expreLogic  */
#line 190 "src/asin.y"
                                 { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1477 "asin.c"
    break;

  case 44: /* expre: ID_ ASIG_ expre  */
#line 191 "src/asin.y"
                                      {
                        SIMB simb = obtTdS((yyvsp[-2].ident));
                        if (simb.t != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos en la asignación no coinciden");
                        }
                    }
#line 1488 "asin.c"
    break;

  case 45: /* expre: ID_ CORA_ expre CORC_ ASIG_ expre  */
#line 197 "src/asin.y"
                                                        {
                        if ((yyvsp[-3].tCons).tipo != T_ENTERO) {
                            yyerror("El indice del array debe ser entero");
                        }
                        SIMB simb = obtTdS((yyvsp[-5].ident));
                        if (simb.t != T_ARRAY) {
                            yyerror("La variable debe ser de tipo array");
                        } else {
                            DIM dim = obtTdA(simb.ref);
                            if (dim.telem != (yyvsp[0].tCons).tipo) {
                                yyerror("El tipo del array no coincide con el de la variable");
                            }
                        }
                    }
#line 1507 "asin.c"
    break;

  case 46: /* expreLogic: expreIgual  */
#line 212 "src/asin.y"
                                 { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1513 "asin.c"
    break;

  case 47: /* expreLogic: expreLogic opLogic expreIgual  */
#line 213 "src/asin.y"
                                                    {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Logic no coinciden");
                        }
                        (yyval.tCons) = (yyvsp[-1].tCons);
                    }
#line 1524 "asin.c"
    break;

  case 48: /* expreIgual: expreRel  */
#line 220 "src/asin.y"
                               { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1530 "asin.c"
    break;

  case 49: /* expreIgual: expreIgual opIgual expreRel  */
#line 221 "src/asin.y"
                                                  {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Igual no coinciden");
                        }
                        (yyval.tCons) = (yyvsp[-1].tCons);
                    }
#line 1541 "asin.c"
    break;

  case 50: /* expreRel: expreAd  */
#line 228 "src/asin.y"
                              { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1547 "asin.c"
    break;

  case 51: /* expreRel: expreRel opRel expreAd  */
#line 229 "src/asin.y"
                                             {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Rel no coinciden");
                        } else {
                            if ((yyvsp[-2].tCons).tipo != T_ENTERO || (yyvsp[0].tCons).tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Rel deben ser enteros");
                            }
                        }
                        (yyval.tCons) = (yyvsp[-1].tCons);
                    }
#line 1562 "asin.c"
    break;

  case 52: /* expreAd: expreMul  */
#line 240 "src/asin.y"
                               { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1568 "asin.c"
    break;

  case 53: /* expreAd: expreAd opAd expreMul  */
#line 241 "src/asin.y"
                                            {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[-1].tCons).tipo || (yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Ad no coinciden");
                        }
                        (yyval.tCons) = (yyvsp[-1].tCons);
                    }
#line 1579 "asin.c"
    break;

  case 54: /* expreMul: expreUna  */
#line 248 "src/asin.y"
                               { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1585 "asin.c"
    break;

  case 55: /* expreMul: expreMul opMul expreUna  */
#line 249 "src/asin.y"
                                              {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[-1].tCons).tipo || (yyvsp[0].tCons).tipo != (yyvsp[-1].tCons).tipo) {
                            yyerror("Los tipos de la expresión Mul no coinciden");
                        }
                        (yyval.tCons) = (yyvsp[-1].tCons);
                    }
#line 1596 "asin.c"
    break;

  case 56: /* expreUna: expreSufi  */
#line 256 "src/asin.y"
                                { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1602 "asin.c"
    break;

  case 57: /* expreUna: opUna expreUna  */
#line 257 "src/asin.y"
                                     {
                        if ((yyvsp[-1].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Una no coinciden");
                        }
                        (yyval.tCons) = (yyvsp[-1].tCons);
                    }
#line 1613 "asin.c"
    break;

  case 58: /* expreSufi: const  */
#line 264 "src/asin.y"
                            { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1619 "asin.c"
    break;

  case 59: /* expreSufi: PARA_ expre PARC_  */
#line 265 "src/asin.y"
                                        { (yyval.tCons) = (yyvsp[-1].tCons);}
#line 1625 "asin.c"
    break;

  case 60: /* expreSufi: ID_  */
#line 266 "src/asin.y"
                          { 
                        SIMB simb = obtTdS((yyvsp[0].ident));
                        (yyval.tCons).tipo = simb.t;
                    }
#line 1634 "asin.c"
    break;

  case 61: /* expreSufi: ID_ CORA_ expre CORC_  */
#line 270 "src/asin.y"
                                            {
                        if ((yyvsp[-1].tCons).tipo != T_ENTERO) {
                            yyerror("No se puede indexar un array con un booleano");
                        }
                        SIMB simb = obtTdS((yyvsp[-3].ident));
                        if (simb.t != T_ARRAY) {
                            yyerror("La variable debe ser de tipo array");
                            (yyval.tCons).tipo = T_ERROR;
                        } else {
                            DIM dim = obtTdA(simb.ref);
                            (yyval.tCons).tipo = dim.telem;  
                        }
                    }
#line 1652 "asin.c"
    break;

  case 62: /* expreSufi: ID_ PARA_ paramAct PARC_  */
#line 283 "src/asin.y"
                                               {
                        SIMB simb = obtTdS((yyvsp[-3].ident));
                        if (simb.t == T_ERROR) {
                            yyerror("La función no está declarada");
                            (yyval.tCons).tipo = T_ERROR;
                        } else {
                            INF inf = obtTdD(simb.ref);
                            (yyval.tCons).tipo = inf.tipo; 
                        }
                    }
#line 1667 "asin.c"
    break;

  case 67: /* opLogic: AND_  */
#line 300 "src/asin.y"
                           { (yyval.tCons).tipo = T_LOGICO; }
#line 1673 "asin.c"
    break;

  case 68: /* opLogic: OR_  */
#line 301 "src/asin.y"
                          { (yyval.tCons).tipo = T_LOGICO; }
#line 1679 "asin.c"
    break;

  case 69: /* opIgual: EQUAL_  */
#line 303 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; }
#line 1685 "asin.c"
    break;

  case 70: /* opIgual: NEQUAL_  */
#line 304 "src/asin.y"
                              { (yyval.tCons).tipo = T_LOGICO; }
#line 1691 "asin.c"
    break;

  case 71: /* opRel: MAYOR_  */
#line 306 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; }
#line 1697 "asin.c"
    break;

  case 72: /* opRel: MENOR_  */
#line 307 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; }
#line 1703 "asin.c"
    break;

  case 73: /* opRel: MAIG_  */
#line 308 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; }
#line 1709 "asin.c"
    break;

  case 74: /* opRel: MEIG_  */
#line 309 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; }
#line 1715 "asin.c"
    break;

  case 75: /* opAd: MAS_  */
#line 311 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; }
#line 1721 "asin.c"
    break;

  case 76: /* opAd: MENOS_  */
#line 312 "src/asin.y"
                             { (yyval.tCons).tipo = T_ENTERO; }
#line 1727 "asin.c"
    break;

  case 77: /* opMul: POR_  */
#line 314 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; }
#line 1733 "asin.c"
    break;

  case 78: /* opMul: DIV_  */
#line 315 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; }
#line 1739 "asin.c"
    break;

  case 79: /* opUna: MAS_  */
#line 317 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; }
#line 1745 "asin.c"
    break;

  case 80: /* opUna: MENOS_  */
#line 318 "src/asin.y"
                             { (yyval.tCons).tipo = T_ENTERO; }
#line 1751 "asin.c"
    break;

  case 81: /* opUna: EXCL_  */
#line 319 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; }
#line 1757 "asin.c"
    break;


#line 1761 "asin.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 322 "src/asin.y"


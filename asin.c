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
#include "libgci.h"

int esMain = 0; /* Flag para detectar si estamos en la función main */
int despRetorno = 0; /* Nueva variable para guardar la dirección del retorno */


#line 82 "asin.c"

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
  YYSYMBOL_39_1 = 39,                      /* @1  */
  YYSYMBOL_40_2 = 40,                      /* @2  */
  YYSYMBOL_listDecla = 41,                 /* listDecla  */
  YYSYMBOL_decla = 42,                     /* decla  */
  YYSYMBOL_declaVar = 43,                  /* declaVar  */
  YYSYMBOL_const = 44,                     /* const  */
  YYSYMBOL_tipoSimp = 45,                  /* tipoSimp  */
  YYSYMBOL_declaFunc = 46,                 /* declaFunc  */
  YYSYMBOL_47_3 = 47,                      /* @3  */
  YYSYMBOL_48_4 = 48,                      /* @4  */
  YYSYMBOL_paramForm = 49,                 /* paramForm  */
  YYSYMBOL_listParamForm = 50,             /* listParamForm  */
  YYSYMBOL_bloque = 51,                    /* bloque  */
  YYSYMBOL_52_5 = 52,                      /* @5  */
  YYSYMBOL_53_6 = 53,                      /* $@6  */
  YYSYMBOL_declaVarLocal = 54,             /* declaVarLocal  */
  YYSYMBOL_listInt = 55,                   /* listInt  */
  YYSYMBOL_inst = 56,                      /* inst  */
  YYSYMBOL_instExpre = 57,                 /* instExpre  */
  YYSYMBOL_instEntSal = 58,                /* instEntSal  */
  YYSYMBOL_instSelec = 59,                 /* instSelec  */
  YYSYMBOL_60_7 = 60,                      /* @7  */
  YYSYMBOL_61_8 = 61,                      /* @8  */
  YYSYMBOL_instIter = 62,                  /* instIter  */
  YYSYMBOL_63_9 = 63,                      /* @9  */
  YYSYMBOL_64_10 = 64,                     /* @10  */
  YYSYMBOL_65_11 = 65,                     /* @11  */
  YYSYMBOL_66_12 = 66,                     /* @12  */
  YYSYMBOL_67_13 = 67,                     /* $@13  */
  YYSYMBOL_expreOP = 68,                   /* expreOP  */
  YYSYMBOL_expre = 69,                     /* expre  */
  YYSYMBOL_expreLogic = 70,                /* expreLogic  */
  YYSYMBOL_expreIgual = 71,                /* expreIgual  */
  YYSYMBOL_expreRel = 72,                  /* expreRel  */
  YYSYMBOL_expreAd = 73,                   /* expreAd  */
  YYSYMBOL_expreMul = 74,                  /* expreMul  */
  YYSYMBOL_expreUna = 75,                  /* expreUna  */
  YYSYMBOL_expreSufi = 76,                 /* expreSufi  */
  YYSYMBOL_77_14 = 77,                     /* $@14  */
  YYSYMBOL_paramAct = 78,                  /* paramAct  */
  YYSYMBOL_listParamAct = 79,              /* listParamAct  */
  YYSYMBOL_80_15 = 80,                     /* $@15  */
  YYSYMBOL_opLogic = 81,                   /* opLogic  */
  YYSYMBOL_opIgual = 82,                   /* opIgual  */
  YYSYMBOL_opRel = 83,                     /* opRel  */
  YYSYMBOL_opAd = 84,                      /* opAd  */
  YYSYMBOL_opMul = 85,                     /* opMul  */
  YYSYMBOL_opUna = 86                      /* opUna  */
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
#define YYLAST   153

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

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
       0,    52,    52,    59,    52,    76,    77,    79,    80,    82,
      91,   105,   120,   121,   122,   124,   125,   127,   140,   127,
     164,   165,   167,   176,   186,   191,   186,   208,   209,   211,
     212,   214,   215,   216,   217,   218,   220,   221,   223,   231,
     239,   246,   239,   254,   256,   260,   264,   266,   254,   281,
     282,   284,   285,   301,   322,   323,   343,   344,   356,   357,
     373,   374,   388,   389,   403,   404,   422,   423,   424,   430,
     449,   449,   483,   484,   486,   490,   490,   496,   497,   499,
     500,   502,   503,   504,   505,   507,   508,   510,   511,   513,
     514,   515
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
  "CTE_", "$accept", "programa", "@1", "@2", "listDecla", "decla",
  "declaVar", "const", "tipoSimp", "declaFunc", "@3", "@4", "paramForm",
  "listParamForm", "bloque", "@5", "$@6", "declaVarLocal", "listInt",
  "inst", "instExpre", "instEntSal", "instSelec", "@7", "@8", "instIter",
  "@9", "@10", "@11", "@12", "$@13", "expreOP", "expre", "expreLogic",
  "expreIgual", "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi",
  "$@14", "paramAct", "listParamAct", "$@15", "opLogic", "opIgual",
  "opRel", "opAd", "opMul", "opUna", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -127,    16,  -127,  -127,   -21,  -127,  -127,   -21,  -127,  -127,
     -30,  -127,  -127,    54,   -16,   -17,  -127,    25,  -127,  -127,
    -127,    12,    11,   -21,  -127,    21,    35,    48,  -127,  -127,
      47,  -127,   -21,    60,  -127,  -127,  -127,  -127,   -21,  -127,
      52,    18,    54,  -127,  -127,    97,  -127,    81,    83,  -127,
      84,    85,  -127,  -127,    -1,  -127,  -127,  -127,  -127,  -127,
    -127,    64,     5,    39,    -6,    58,    70,  -127,  -127,   117,
      99,    97,    97,    38,    74,    97,    97,  -127,    97,    97,
    -127,  -127,  -127,   117,  -127,  -127,   117,  -127,  -127,  -127,
    -127,   117,  -127,  -127,   117,  -127,  -127,   117,     4,  -127,
    -127,    79,  -127,   103,  -127,   107,   110,    88,    97,  -127,
      98,    39,    -6,    58,    70,  -127,    97,  -127,  -127,    91,
      94,   100,    96,   118,  -127,   111,   105,    97,    77,  -127,
    -127,  -127,   106,  -127,    97,  -127,   104,  -127,    97,  -127,
    -127,   108,  -127,  -127,    77,  -127,  -127,    97,   131,  -127,
      77,  -127
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     3,     1,     0,    15,    16,     4,     5,     7,
       0,     8,     6,    17,     0,     0,     9,     0,    13,    14,
      12,     0,     0,    20,    10,     0,     0,     0,    21,    11,
      22,    18,     0,     0,    23,    24,    19,    27,    29,    28,
       0,     0,     0,    89,    90,     0,    91,     0,     0,    29,
       0,     0,    25,    37,    68,    66,    30,    32,    33,    34,
      35,     0,    51,    54,    56,    58,    60,    62,    64,     0,
       0,    49,     0,     0,     0,     0,     0,    70,     0,     0,
      36,    77,    78,     0,    79,    80,     0,    81,    82,    83,
      84,     0,    85,    86,     0,    87,    88,     0,    68,    65,
      67,     0,    50,     0,    31,     0,     0,     0,    72,    52,
       0,    55,    57,    59,    61,    63,     0,    43,    40,     0,
       0,     0,    74,     0,    73,    69,     0,     0,     0,    38,
      39,    26,     0,    71,     0,    69,     0,    41,     0,    53,
      44,     0,    76,    45,     0,    46,    42,    49,     0,    47,
       0,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -127,  -127,   133,   109,   127,    45,  -127,
    -127,  -127,  -127,   112,  -127,  -127,  -127,  -127,    93,  -126,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,    -4,   -45,  -127,    62,    63,    55,    56,   -68,  -127,
    -127,  -127,    10,  -127,  -127,  -127,  -127,  -127,  -127,  -127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     4,     7,     8,     9,    55,    10,    11,
      17,    33,    27,    28,    36,    37,    76,    38,    41,    56,
      57,    58,    59,   128,   141,    60,   127,   143,   145,   147,
     150,   101,    61,    62,    63,    64,    65,    66,    67,    68,
     108,   123,   124,   132,    83,    86,    91,    94,    97,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      70,    99,   137,    18,    19,    13,    77,    87,    88,    89,
      90,    77,     5,     6,    81,    82,     3,    78,   146,    22,
      20,    43,    44,    79,   151,    45,   102,   103,   116,   115,
     106,   107,    23,   109,   110,    46,    25,    18,    19,    47,
      48,    43,    44,    24,    49,    45,    50,    51,    52,    53,
      84,    85,    29,    54,    20,    46,    31,    18,    19,    47,
      48,    92,    93,   122,    49,   104,    50,    51,    26,    53,
      30,   126,    14,    54,    20,    95,    96,    26,    15,    32,
      43,    44,   136,    40,    45,    16,    35,    42,    71,   139,
      72,    74,    75,   122,    46,    80,    18,    19,    47,    48,
      43,    44,   102,    49,    45,    50,    51,   100,    53,   105,
     117,   118,    54,    20,    46,   119,    18,    19,   120,   121,
      43,    44,   129,   125,    45,   130,   133,   131,   -75,   134,
     135,   144,    54,    20,    46,   140,    18,    19,   138,   149,
      12,    21,    73,   148,    34,   111,   113,    39,   142,   112,
     114,     0,    98,    20
};

static const yytype_int16 yycheck[] =
{
      45,    69,   128,    19,    20,    35,     7,    13,    14,    15,
      16,     7,    33,    34,     9,    10,     0,    18,   144,    36,
      36,     3,     4,    24,   150,     7,    71,    72,    24,    97,
      75,    76,     7,    78,    79,    17,    25,    19,    20,    21,
      22,     3,     4,    31,    26,     7,    28,    29,    30,    31,
      11,    12,    31,    35,    36,    17,     8,    19,    20,    21,
      22,     3,     4,   108,    26,    27,    28,    29,    23,    31,
      35,   116,    18,    35,    36,     5,     6,    32,    24,    32,
       3,     4,   127,    38,     7,    31,    26,    35,     7,   134,
       7,     7,     7,   138,    17,    31,    19,    20,    21,    22,
       3,     4,   147,    26,     7,    28,    29,     8,    31,    35,
      31,     8,    35,    36,    17,     8,    19,    20,     8,    31,
       3,     4,    31,    25,     7,    31,     8,    27,    32,    18,
      25,    23,    35,    36,    17,    31,    19,    20,    32,     8,
       7,    14,    49,   147,    32,    83,    91,    38,   138,    86,
      94,    -1,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,    40,    33,    34,    41,    42,    43,
      45,    46,    42,    35,    18,    24,    31,    47,    19,    20,
      36,    44,    36,     7,    31,    25,    45,    49,    50,    31,
      35,     8,    32,    48,    50,    26,    51,    52,    54,    43,
      45,    55,    35,     3,     4,     7,    17,    21,    22,    26,
      28,    29,    30,    31,    35,    44,    56,    57,    58,    59,
      62,    69,    70,    71,    72,    73,    74,    75,    76,    86,
      69,     7,     7,    55,     7,     7,    53,     7,    18,    24,
      31,     9,    10,    81,    11,    12,    82,    13,    14,    15,
      16,    83,     3,     4,    84,     5,     6,    85,    35,    75,
       8,    68,    69,    69,    27,    35,    69,    69,    77,    69,
      69,    71,    72,    73,    74,    75,    24,    31,     8,     8,
       8,    31,    69,    78,    79,    25,    69,    63,    60,    31,
      31,    27,    80,     8,    18,    25,    69,    56,    32,    69,
      31,    61,    79,    64,    23,    65,    56,    66,    68,     8,
      67,    56
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    39,    40,    38,    41,    41,    42,    42,    43,
      43,    43,    44,    44,    44,    45,    45,    47,    48,    46,
      49,    49,    50,    50,    52,    53,    51,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    57,    57,    58,    58,
      60,    61,    59,    63,    64,    65,    66,    67,    62,    68,
      68,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    75,    76,    76,    76,    76,
      77,    76,    78,    78,    79,    80,    79,    81,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     2,     1,     1,     3,
       5,     6,     1,     1,     1,     1,     1,     0,     0,     8,
       0,     1,     2,     4,     0,     0,     9,     0,     2,     0,
       2,     3,     1,     1,     1,     1,     2,     1,     5,     5,
       0,     0,     9,     0,     0,     0,     0,     0,    14,     0,
       1,     1,     3,     6,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     4,
       0,     5,     0,     1,     1,     0,     4,     1,     1,     1,
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
  case 2: /* @1: %empty  */
#line 52 "src/asin.y"
                      { 
                        niv = 0; dvar = 0; numMain = 0; 
                        cargaContexto(niv);

                        emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
                        (yyval.ent) = creaLans(si - 1);
                    }
#line 1272 "asin.c"
    break;

  case 3: /* @2: %empty  */
#line 59 "src/asin.y"
                    {
                        emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
                        (yyval.ent) = creaLans(si - 1);
                    }
#line 1281 "asin.c"
    break;

  case 4: /* programa: @1 @2 listDecla  */
#line 62 "src/asin.y"
                                {
                        SIMB simb = obtTdS("main");
                        if (simb.t == T_ERROR) {
                            yyerror("No existe la función main");
                        }
                        if (numMain > 1) {
                            yyerror("El programa tiene mas de un main");
                        }
                        
                        completaLans((yyvsp[-2].ent), crArgEnt(dvar));
                        completaLans((yyvsp[-1].ent), crArgEtq(simb.d));
                        emite(FIN, crArgNul(), crArgNul(), crArgNul());
                    }
#line 1299 "asin.c"
    break;

  case 9: /* declaVar: tipoSimp ID_ PYC_  */
#line 83 "src/asin.y"
                    {
                        int refe = -1;
                        if(!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].ent), niv, dvar, refe)) {
                            yyerror("La variable ya existe");
                        } else {
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1312 "asin.c"
    break;

  case 10: /* declaVar: tipoSimp ID_ ASIG_ const PYC_  */
#line 92 "src/asin.y"
                    {
                        if ((yyvsp[-4].ent) != (yyvsp[-1].tCons).tipo) {
                            yyerror("Los tipos no coinciden");
                        }
                        int refe = -1;
                        if(!insTdS((yyvsp[-3].ident), VARIABLE, (yyvsp[-4].ent), niv, dvar, refe)) {
                            yyerror("La variable ya existe");
                        } else {
                            SIMB simb = obtTdS((yyvsp[-3].ident));
                            emite(EASIG, crArgPos((yyvsp[-1].tCons).n, (yyvsp[-1].tCons).d), crArgNul(), crArgPos(simb.n, simb.d));
                            dvar += TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1330 "asin.c"
    break;

  case 11: /* declaVar: tipoSimp ID_ CORA_ CTE_ CORC_ PYC_  */
#line 106 "src/asin.y"
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
#line 1347 "asin.c"
    break;

  case 12: /* const: CTE_  */
#line 120 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).valor = (yyvsp[0].ent); (yyval.tCons).n = niv; (yyval.tCons).d = creaVarTemp(); emite(EASIG, crArgEnt((yyvsp[0].ent)), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d)); }
#line 1353 "asin.c"
    break;

  case 13: /* const: TRUE_  */
#line 121 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).valor = 1; (yyval.tCons).n = niv; (yyval.tCons).d = creaVarTemp(); emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d)); }
#line 1359 "asin.c"
    break;

  case 14: /* const: FALSE_  */
#line 122 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).valor = 0; (yyval.tCons).n = niv; (yyval.tCons).d = creaVarTemp(); emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d)); }
#line 1365 "asin.c"
    break;

  case 15: /* tipoSimp: INT_  */
#line 124 "src/asin.y"
                           { (yyval.ent) = T_ENTERO; }
#line 1371 "asin.c"
    break;

  case 16: /* tipoSimp: BOOL_  */
#line 125 "src/asin.y"
                            { (yyval.ent) = T_LOGICO; }
#line 1377 "asin.c"
    break;

  case 17: /* @3: %empty  */
#line 127 "src/asin.y"
                                   { 
                        (yyval.ent) = dvar;
                        niv++; 
                        cargaContexto(niv); 
                        dvar = -(TALLA_SEG_ENLACES + TALLA_TIPO_SIMPLE);
                        if ((yyvsp[0].ident)[0] == 'm' && (yyvsp[0].ident)[1] == 'a' &&
                            (yyvsp[0].ident)[2] == 'i' && (yyvsp[0].ident)[3] == 'n' &&
                            (yyvsp[0].ident)[4] == '\0') {
                            numMain++;
                            esMain = 1; 
                        } else {
                            esMain = 0;
                        }
                    }
#line 1396 "asin.c"
    break;

  case 18: /* @4: %empty  */
#line 140 "src/asin.y"
                                            {
                        (yyval.ent) = 1;
                        int refe = (yyvsp[-1].ent);
                        if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].ent), niv - 1, si, refe)) {
                            yyerror("La función ya existe");
                            (yyval.ent) = 0;
                        }
                        despRetorno = dvar;
                        dvar = 0;
                    }
#line 1411 "asin.c"
    break;

  case 19: /* declaFunc: tipoSimp ID_ @3 PARA_ paramForm PARC_ @4 bloque  */
#line 150 "src/asin.y"
                    {
                        if ((yyvsp[0].tCons).tipo != (yyvsp[-7].ent)) {
                            printf("\nError en %d: El tipo de retorno no coincide con el de la función\n", numLinea);
                            numErrores++;
                        }
                        if (!(yyvsp[-1].ent)) {
                            printf("\nError en %d: Error en la declaración de la función\n", numLinea);
                            numErrores++;
                        }
                        descargaContexto(niv);
                        niv--;
                        dvar = (yyvsp[-5].ent);
                    }
#line 1429 "asin.c"
    break;

  case 20: /* paramForm: %empty  */
#line 164 "src/asin.y"
                      { (yyval.ent) = insTdD(-1, T_VACIO); }
#line 1435 "asin.c"
    break;

  case 21: /* paramForm: listParamForm  */
#line 165 "src/asin.y"
                                    { (yyval.ent) = (yyvsp[0].ent);}
#line 1441 "asin.c"
    break;

  case 22: /* listParamForm: tipoSimp ID_  */
#line 167 "src/asin.y"
                                   {
                        (yyval.ent) = insTdD(-1, (yyvsp[-1].ent));
                        int refe = -1;
                        if(!insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].ent), niv, dvar, refe)) {
                            yyerror("El parámetro ya existe");
                        } else {
                            dvar -= TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1455 "asin.c"
    break;

  case 23: /* listParamForm: tipoSimp ID_ COMA_ listParamForm  */
#line 176 "src/asin.y"
                                                       {
                        (yyval.ent) = insTdD((yyvsp[0].ent), (yyvsp[-3].ent));
                        int refe = -1;
                        if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].ent), niv, dvar, refe)) {
                            yyerror("El parámetro ya existe");
                        } else {
                            dvar -= TALLA_TIPO_SIMPLE;
                        }
                    }
#line 1469 "asin.c"
    break;

  case 24: /* @5: %empty  */
#line 186 "src/asin.y"
                            {
                        emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
                        emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
                        emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
                        (yyval.ent) = creaLans(si - 1);
                    }
#line 1480 "asin.c"
    break;

  case 25: /* $@6: %empty  */
#line 191 "src/asin.y"
                                                    { numLinea = yylineno; }
#line 1486 "asin.c"
    break;

  case 26: /* bloque: LLAA_ @5 declaVarLocal listInt RETURN_ $@6 expre PYC_ LLAC_  */
#line 191 "src/asin.y"
                                                                                              {
                        (yyval.tCons) = (yyvsp[-2].tCons);
                        
                        completaLans((yyvsp[-7].ent), crArgEnt(dvar));

                        if (!esMain) {
                            emite(EASIG, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgNul(), crArgPos(niv, despRetorno));
                        }

                        emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(dvar));
                        emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
                        
                        if (!esMain) {
                            emite(RET, crArgNul(), crArgNul(), crArgNul());
                        }
                    }
#line 1507 "asin.c"
    break;

  case 38: /* instEntSal: READ_ PARA_ ID_ PARC_ PYC_  */
#line 223 "src/asin.y"
                                                 {
                        SIMB simb = obtTdS((yyvsp[-2].ident));
                        if (simb.t != T_ENTERO) {
                            yyerror("El argumento del read debe ser de tipo simple");
                        }

                        emite(EREAD, crArgNul(), crArgNul(), crArgPos(simb.n, simb.d));
                    }
#line 1520 "asin.c"
    break;

  case 39: /* instEntSal: PRINT_ PARA_ expre PARC_ PYC_  */
#line 231 "src/asin.y"
                                                    {
                        if ((yyvsp[-2].tCons).tipo != T_ENTERO) {
                            yyerror("La expresion del print debe ser de tipo simple");
                        }

                        emite(EWRITE, crArgNul(), crArgNul(), crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d));
                    }
#line 1532 "asin.c"
    break;

  case 40: /* @7: %empty  */
#line 239 "src/asin.y"
                                            {
                        if ((yyvsp[-1].tCons).tipo != T_LOGICO) {
                            yyerror("La expresion del if debe ser logica");
                        }

                        (yyval.ent) = creaLans(si); 
                        emite(EIGUAL, crArgPos((yyvsp[-1].tCons).n, (yyvsp[-1].tCons).d), crArgEnt(0), crArgNul());
                    }
#line 1545 "asin.c"
    break;

  case 41: /* @8: %empty  */
#line 246 "src/asin.y"
                           {
                        (yyval.ent) = creaLans(si);
                        emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
                        completaLans((yyvsp[-1].ent), crArgEtq(si));
                    }
#line 1555 "asin.c"
    break;

  case 42: /* instSelec: IF_ PARA_ expre PARC_ @7 inst @8 ELSE_ inst  */
#line 250 "src/asin.y"
                                 {
                        completaLans((yyvsp[-2].ent), crArgEtq(si));
                    }
#line 1563 "asin.c"
    break;

  case 43: /* @9: %empty  */
#line 254 "src/asin.y"
                                              {
                        (yyval.ent) = si;
                    }
#line 1571 "asin.c"
    break;

  case 44: /* @10: %empty  */
#line 256 "src/asin.y"
                                 {
                        (yyval.ent) = creaLans(si);
                        emite(EIGUAL, crArgPos((yyvsp[-1].tCons).n, (yyvsp[-1].tCons).d), crArgEnt(0), crArgNul());
                    }
#line 1580 "asin.c"
    break;

  case 45: /* @11: %empty  */
#line 260 "src/asin.y"
                    {  
                        (yyval.ent) = creaLans(si);
                        emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
                    }
#line 1589 "asin.c"
    break;

  case 46: /* @12: %empty  */
#line 264 "src/asin.y"
                    {    
                        (yyval.ent) = si;
                    }
#line 1597 "asin.c"
    break;

  case 47: /* $@13: %empty  */
#line 266 "src/asin.y"
                                    {
                        if (((yyvsp[-9].tCons).tipo != T_ENTERO && (yyvsp[-9].tCons).tipo != T_LOGICO) || ((yyvsp[-1].tCons).tipo != T_ENTERO && (yyvsp[-1].tCons).tipo != T_LOGICO)) {
                            yyerror("La expreOp del for debe ser de tipo simple");
                        }
                        if ((yyvsp[-6].tCons).tipo != T_LOGICO) {
                            yyerror("La expresion del for debe ser logica");
                        }

                        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-7].ent)));
                        completaLans((yyvsp[-3].ent), crArgEtq(si));
                    }
#line 1613 "asin.c"
    break;

  case 48: /* instIter: FOR_ PARA_ expreOP PYC_ @9 expre PYC_ @10 @11 @12 expreOP PARC_ $@13 inst  */
#line 276 "src/asin.y"
                           {
                        emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-4].ent)));
                        completaLans((yyvsp[-6].ent), crArgEtq(si));
                    }
#line 1622 "asin.c"
    break;

  case 49: /* expreOP: %empty  */
#line 281 "src/asin.y"
                      { (yyval.tCons).tipo = T_ENTERO; }
#line 1628 "asin.c"
    break;

  case 50: /* expreOP: expre  */
#line 282 "src/asin.y"
                            { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1634 "asin.c"
    break;

  case 51: /* expre: expreLogic  */
#line 284 "src/asin.y"
                                 { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1640 "asin.c"
    break;

  case 52: /* expre: ID_ ASIG_ expre  */
#line 285 "src/asin.y"
                                      {
                        SIMB simb = obtTdS((yyvsp[-2].ident));
                        if (simb.t == T_ERROR) {
                            yyerror("El objeto no existe");
                        } else {
                            if (simb.t != (yyvsp[0].tCons).tipo) {
                                yyerror("Los tipos en la asignación no coinciden");
                            }
                        }
                        (yyval.tCons).tipo = T_ENTERO;

                        emite(EASIG, crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgNul(), crArgPos(simb.n, simb.d));
                        (yyval.tCons).tipo = simb.t;
                        (yyval.tCons).d = (yyvsp[0].tCons).d;
                        (yyval.tCons).n = (yyvsp[0].tCons).n;
                    }
#line 1661 "asin.c"
    break;

  case 53: /* expre: ID_ CORA_ expre CORC_ ASIG_ expre  */
#line 301 "src/asin.y"
                                                        {
                        if ((yyvsp[-3].tCons).tipo != T_ENTERO) {
                            yyerror("El indice del array debe ser entero");
                        } else {
                            SIMB simb = obtTdS((yyvsp[-5].ident));
                            if (simb.t != T_ARRAY) {
                                yyerror("La variable debe ser de tipo array");
                            } else {
                                DIM dim = obtTdA(simb.ref);
                                if (dim.telem != (yyvsp[0].tCons).tipo) {
                                    yyerror("El tipo del array no coincide con el de la variable");
                                } else {
                                    emite(EVA, crArgPos(simb.n, simb.d), crArgPos((yyvsp[-3].tCons).n, (yyvsp[-3].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d));
                                    (yyval.tCons).n = (yyvsp[0].tCons).n;
                                    (yyval.tCons).d = (yyvsp[0].tCons).d;
                                }
                            }
                        }
                        (yyval.tCons).tipo = T_ENTERO; 
                    }
#line 1686 "asin.c"
    break;

  case 54: /* expreLogic: expreIgual  */
#line 322 "src/asin.y"
                                 { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1692 "asin.c"
    break;

  case 55: /* expreLogic: expreLogic opLogic expreIgual  */
#line 323 "src/asin.y"
                                                    {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Logic no coinciden");
                        } else {
                            if ((yyvsp[-2].tCons).tipo != T_LOGICO || (yyvsp[0].tCons).tipo != T_LOGICO) {
                                yyerror("Los tipos de la expresión Rel deben ser enteros");
                            }
                        }
                        (yyval.tCons).tipo = (yyvsp[-1].tCons).tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        if ((yyvsp[-1].tCons).cod == EAND) {  // &&
                            emite(EMULT, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        } else {    // ||
                            emite(ESUM, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                            emite(EMEN, crArgPos((yyval.tCons).n, (yyval.tCons).d), crArgEnt(1), crArgEtq(si + 2));
                            emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        }
                    }
#line 1716 "asin.c"
    break;

  case 56: /* expreIgual: expreRel  */
#line 343 "src/asin.y"
                               { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1722 "asin.c"
    break;

  case 57: /* expreIgual: expreIgual opIgual expreRel  */
#line 344 "src/asin.y"
                                                  {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Igual no coinciden");
                        }
                        (yyval.tCons).tipo = (yyvsp[-1].tCons).tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        emite((yyvsp[-1].tCons).cod, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgEtq(si + 2));
                        emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                    }
#line 1738 "asin.c"
    break;

  case 58: /* expreRel: expreAd  */
#line 356 "src/asin.y"
                              { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1744 "asin.c"
    break;

  case 59: /* expreRel: expreRel opRel expreAd  */
#line 357 "src/asin.y"
                                             {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Rel no coinciden");
                        } else {
                            if ((yyvsp[-2].tCons).tipo != T_ENTERO || (yyvsp[0].tCons).tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Rel deben ser enteros");
                            }
                        }
                        (yyval.tCons).tipo = (yyvsp[-1].tCons).tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        emite((yyvsp[-1].tCons).cod, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgEtq(si + 2));
                        emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                    }
#line 1764 "asin.c"
    break;

  case 60: /* expreAd: expreMul  */
#line 373 "src/asin.y"
                               { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1770 "asin.c"
    break;

  case 61: /* expreAd: expreAd opAd expreMul  */
#line 374 "src/asin.y"
                                            {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Ad no coinciden");
                        } else {
                            if ((yyvsp[-2].tCons).tipo != T_ENTERO || (yyvsp[0].tCons).tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Ad deben ser enteros");
                            }
                        }
                        (yyval.tCons).tipo = (yyvsp[-1].tCons).tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        emite((yyvsp[-1].tCons).cod, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                    }
#line 1788 "asin.c"
    break;

  case 62: /* expreMul: expreUna  */
#line 388 "src/asin.y"
                               { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1794 "asin.c"
    break;

  case 63: /* expreMul: expreMul opMul expreUna  */
#line 389 "src/asin.y"
                                              {
                        if ((yyvsp[-2].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Mul no coinciden");
                        } else {
                            if ((yyvsp[-2].tCons).tipo != T_ENTERO || (yyvsp[0].tCons).tipo != T_ENTERO) {
                                yyerror("Los tipos de la expresión Mul deben ser enteros");
                            }
                        }
                        (yyval.tCons).tipo = (yyvsp[-1].tCons).tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        emite((yyvsp[-1].tCons).cod, crArgPos((yyvsp[-2].tCons).n, (yyvsp[-2].tCons).d), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                    }
#line 1812 "asin.c"
    break;

  case 64: /* expreUna: expreSufi  */
#line 403 "src/asin.y"
                                { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1818 "asin.c"
    break;

  case 65: /* expreUna: opUna expreUna  */
#line 404 "src/asin.y"
                                     {
                        if ((yyvsp[-1].tCons).tipo != (yyvsp[0].tCons).tipo) {
                            yyerror("Los tipos de la expresión Una no coinciden");
                        } 
                        (yyval.tCons).tipo = (yyvsp[-1].tCons).tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        if ((yyvsp[-1].tCons).cod == ENOT) {  // !
                            emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                            emite(EDIST, crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgEnt(0), crArgEtq(si + 2));
                            emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        } else if ((yyvsp[-1].tCons).cod == ESIG) {  // -
                            emite((yyvsp[-1].tCons).cod, crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        } else {    // +
                            emite((yyvsp[-1].tCons).cod, crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d), crArgEnt(0), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                        }
                    }
#line 1840 "asin.c"
    break;

  case 66: /* expreSufi: const  */
#line 422 "src/asin.y"
                            { (yyval.tCons) = (yyvsp[0].tCons); }
#line 1846 "asin.c"
    break;

  case 67: /* expreSufi: PARA_ expre PARC_  */
#line 423 "src/asin.y"
                                        { (yyval.tCons) = (yyvsp[-1].tCons);}
#line 1852 "asin.c"
    break;

  case 68: /* expreSufi: ID_  */
#line 424 "src/asin.y"
                          { 
                        SIMB simb = obtTdS((yyvsp[0].ident));
                        (yyval.tCons).tipo = simb.t;
                        (yyval.tCons).d = simb.d;
                        (yyval.tCons).n = simb.n;
                    }
#line 1863 "asin.c"
    break;

  case 69: /* expreSufi: ID_ CORA_ expre CORC_  */
#line 430 "src/asin.y"
                                            {
                        int tipo = T_ENTERO;
                        if ((yyvsp[-1].tCons).tipo != T_ENTERO) {
                            yyerror("El índice del array debe ser un entero");
                        } else {
                            SIMB simb = obtTdS((yyvsp[-3].ident));
                            if (simb.t != T_ARRAY) {
                                yyerror("La variable debe ser de tipo array");
                            } else {
                                DIM dim = obtTdA(simb.ref);
                                tipo = dim.telem;
                                
                                (yyval.tCons).d = creaVarTemp();
                                (yyval.tCons).n = niv;
                                emite(EAV, crArgPos(simb.n, simb.d), crArgPos((yyvsp[-1].tCons).n, (yyvsp[-1].tCons).d), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                            }
                        }
                        (yyval.tCons).tipo = tipo;
                    }
#line 1887 "asin.c"
    break;

  case 70: /* $@14: %empty  */
#line 449 "src/asin.y"
                                {
                        SIMB simb = obtTdS((yyvsp[-1].ident));
                        if (simb.t != T_ERROR) {
                            emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(TALLA_TIPO_SIMPLE));
                        }
                    }
#line 1898 "asin.c"
    break;

  case 71: /* expreSufi: ID_ PARA_ $@14 paramAct PARC_  */
#line 454 "src/asin.y"
                                     {
                        int tipo = T_ENTERO;
                        SIMB simb = obtTdS((yyvsp[-4].ident));
                        INF inf = obtTdD(simb.ref);

                        if (simb.t != T_ENTERO && simb.t != T_LOGICO) {
                            yyerror("La función no está declarada");
                        } else {
                            if (inf.tipo == T_ERROR) {
                                yyerror("El objeto no es una función");
                            } else {
                                if(!cmpDom(simb.ref, (yyvsp[-1].ent))) {
                                    yyerror("El tipo de los parámetros no coincide");
                                } else {
                                    tipo = inf.tipo;
                                }
                            }
                        }
                        
                        emite(CALL, crArgNul(), crArgNul(), crArgEtq(simb.d));
                        
                        emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(inf.tsp));
                        
                        (yyval.tCons).tipo = tipo;
                        (yyval.tCons).n = niv;
                        (yyval.tCons).d = creaVarTemp();
                        emite(EPOP, crArgNul(), crArgNul(), crArgPos((yyval.tCons).n, (yyval.tCons).d));
                    }
#line 1931 "asin.c"
    break;

  case 72: /* paramAct: %empty  */
#line 483 "src/asin.y"
                      { (yyval.ent) = insTdD(-1, T_VACIO); }
#line 1937 "asin.c"
    break;

  case 73: /* paramAct: listParamAct  */
#line 484 "src/asin.y"
                                   { (yyval.ent) = (yyvsp[0].ent); }
#line 1943 "asin.c"
    break;

  case 74: /* listParamAct: expre  */
#line 486 "src/asin.y"
                            {
                        (yyval.ent) = insTdD(-1, (yyvsp[0].tCons).tipo);
                        emite(EPUSH, crArgNul(), crArgNul(), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d));
                    }
#line 1952 "asin.c"
    break;

  case 75: /* $@15: %empty  */
#line 490 "src/asin.y"
                            {
                        emite(EPUSH, crArgNul(), crArgNul(), crArgPos((yyvsp[0].tCons).n, (yyvsp[0].tCons).d));
                    }
#line 1960 "asin.c"
    break;

  case 76: /* listParamAct: expre $@15 COMA_ listParamAct  */
#line 492 "src/asin.y"
                                         {
                        (yyval.ent) = insTdD((yyvsp[0].ent), (yyvsp[-3].tCons).tipo); 
                    }
#line 1968 "asin.c"
    break;

  case 77: /* opLogic: AND_  */
#line 496 "src/asin.y"
                           { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EAND; }
#line 1974 "asin.c"
    break;

  case 78: /* opLogic: OR_  */
#line 497 "src/asin.y"
                          { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EOR; }
#line 1980 "asin.c"
    break;

  case 79: /* opIgual: EQUAL_  */
#line 499 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EIGUAL; }
#line 1986 "asin.c"
    break;

  case 80: /* opIgual: NEQUAL_  */
#line 500 "src/asin.y"
                              { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EDIST; }
#line 1992 "asin.c"
    break;

  case 81: /* opRel: MAYOR_  */
#line 502 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EMAY; }
#line 1998 "asin.c"
    break;

  case 82: /* opRel: MENOR_  */
#line 503 "src/asin.y"
                             { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EMEN; }
#line 2004 "asin.c"
    break;

  case 83: /* opRel: MAIG_  */
#line 504 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EMAYEQ; }
#line 2010 "asin.c"
    break;

  case 84: /* opRel: MEIG_  */
#line 505 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = EMENEQ; }
#line 2016 "asin.c"
    break;

  case 85: /* opAd: MAS_  */
#line 507 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).cod = ESUM; }
#line 2022 "asin.c"
    break;

  case 86: /* opAd: MENOS_  */
#line 508 "src/asin.y"
                             { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).cod = EDIF; }
#line 2028 "asin.c"
    break;

  case 87: /* opMul: POR_  */
#line 510 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).cod = EMULT; }
#line 2034 "asin.c"
    break;

  case 88: /* opMul: DIV_  */
#line 511 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).cod = EDIVI; }
#line 2040 "asin.c"
    break;

  case 89: /* opUna: MAS_  */
#line 513 "src/asin.y"
                           { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).cod = ESUM; }
#line 2046 "asin.c"
    break;

  case 90: /* opUna: MENOS_  */
#line 514 "src/asin.y"
                             { (yyval.tCons).tipo = T_ENTERO; (yyval.tCons).cod = ESIG; }
#line 2052 "asin.c"
    break;

  case 91: /* opUna: EXCL_  */
#line 515 "src/asin.y"
                            { (yyval.tCons).tipo = T_LOGICO; (yyval.tCons).cod = ENOT; }
#line 2058 "asin.c"
    break;


#line 2062 "asin.c"

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

#line 518 "src/asin.y"


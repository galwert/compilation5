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
#line 1 "parser.ypp"

#include <iostream>
#include "llvm.h"
#include "parser.hpp"
#include "hw3_output.hpp"
#include "bp.hpp"
#include <climits>
extern int yylineno;
using namespace std;
int yyerror(const char * const s);
int yylex(void);
Stacks* semantic_stacks;
#define YYDEBUG 1
#pragma GCC diagnostic ignored "-Wfree-nonheap-object"
#define gen_code (CodeBuffer::instance())

TokenType convert_table[5][5]={
        {/*UNDIF TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*INT TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_INT,
                /*TOKEN_B*/TOKEN_INT,
                /*TOKEN_BOOL*/TOKEN_UNDIF,/*not sure*/
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*B TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_INT,
                /*TOKEN_B*/TOKEN_B,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*BOOL TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_BOOL,
                /*TOKEN_STRING*/TOKEN_UNDIF
        },
        {/*STRING TO*/
                /*TOKEN_UNDIF*/TOKEN_UNDIF,
                /*TOKEN_INT*/TOKEN_UNDIF,
                /*TOKEN_B*/TOKEN_UNDIF,
                /*TOKEN_BOOL*/TOKEN_UNDIF,
                /*TOKEN_STRING*/TOKEN_STRING
        }
};



#line 128 "parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VOID = 3,                       /* VOID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_BYTE = 5,                       /* BYTE  */
  YYSYMBOL_B = 6,                          /* B  */
  YYSYMBOL_BOOL = 7,                       /* BOOL  */
  YYSYMBOL_TRUE = 8,                       /* TRUE  */
  YYSYMBOL_FALSE = 9,                      /* FALSE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_BREAK = 12,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 13,                  /* CONTINUE  */
  YYSYMBOL_SC = 14,                        /* SC  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_LBRACE = 16,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 17,                    /* RBRACE  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_NUM = 19,                       /* NUM  */
  YYSYMBOL_STRING = 20,                    /* STRING  */
  YYSYMBOL_ASSIGN = 21,                    /* ASSIGN  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MULTI = 25,                     /* MULTI  */
  YYSYMBOL_NOT = 26,                       /* NOT  */
  YYSYMBOL_RPAREN = 27,                    /* RPAREN  */
  YYSYMBOL_LPAREN = 28,                    /* LPAREN  */
  YYSYMBOL_NOELSE = 29,                    /* NOELSE  */
  YYSYMBOL_ELSE = 30,                      /* ELSE  */
  YYSYMBOL_IF = 31,                        /* IF  */
  YYSYMBOL_RELOP = 32,                     /* RELOP  */
  YYSYMBOL_CAST = 33,                      /* CAST  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_Program = 35,                   /* Program  */
  YYSYMBOL_36_1 = 36,                      /* $@1  */
  YYSYMBOL_37_2 = 37,                      /* $@2  */
  YYSYMBOL_Funcs = 38,                     /* Funcs  */
  YYSYMBOL_FuncDecl = 39,                  /* FuncDecl  */
  YYSYMBOL_40_3 = 40,                      /* $@3  */
  YYSYMBOL_RetType = 41,                   /* RetType  */
  YYSYMBOL_Formals = 42,                   /* Formals  */
  YYSYMBOL_FormalsList = 43,               /* FormalsList  */
  YYSYMBOL_FormalDecl = 44,                /* FormalDecl  */
  YYSYMBOL_Statements = 45,                /* Statements  */
  YYSYMBOL_M = 46,                         /* M  */
  YYSYMBOL_N = 47,                         /* N  */
  YYSYMBOL_Statement = 48,                 /* Statement  */
  YYSYMBOL_49_4 = 49,                      /* @4  */
  YYSYMBOL_50_5 = 50,                      /* @5  */
  YYSYMBOL_51_6 = 51,                      /* $@6  */
  YYSYMBOL_52_7 = 52,                      /* @7  */
  YYSYMBOL_IfExp = 53,                     /* IfExp  */
  YYSYMBOL_Call = 54,                      /* Call  */
  YYSYMBOL_ExpList = 55,                   /* ExpList  */
  YYSYMBOL_Type = 56,                      /* Type  */
  YYSYMBOL_Exp = 57                        /* Exp  */
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
typedef yytype_int8 yy_state_t;

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
#define YYLAST   240

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    80,    79,    91,    92,    96,    96,   130,
     131,   135,   136,   139,   140,   160,   163,   168,   180,   189,
     199,   199,   213,   225,   283,   337,   338,   348,   376,   386,
     386,   386,   398,   398,   424,   433,   444,   454,   524,   568,
     596,   626,   629,   632,   637,   645,   694,   763,   850,   903,
     904,   908,   917,   920,   925,   930,   943,   963,   983,  1054
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
  "\"end of file\"", "error", "\"invalid token\"", "VOID", "INT", "BYTE",
  "B", "BOOL", "TRUE", "FALSE", "RETURN", "WHILE", "BREAK", "CONTINUE",
  "SC", "COMMA", "LBRACE", "RBRACE", "ID", "NUM", "STRING", "ASSIGN", "OR",
  "AND", "PLUS", "MULTI", "NOT", "RPAREN", "LPAREN", "NOELSE", "ELSE",
  "IF", "RELOP", "CAST", "$accept", "Program", "$@1", "$@2", "Funcs",
  "FuncDecl", "$@3", "RetType", "Formals", "FormalsList", "FormalDecl",
  "Statements", "M", "N", "Statement", "@4", "@5", "$@6", "@7", "IfExp",
  "Call", "ExpList", "Type", "Exp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-68)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -68,    15,    43,   -68,   -68,   -68,   -68,   -68,    25,    43,
      14,   -68,   -68,   -68,    10,   -68,    64,    12,   -68,    29,
      31,   -68,    64,   -68,    35,   -68,    98,   116,   -68,    38,
      46,   -68,    -7,    34,    70,   -68,   -68,    49,    75,   -68,
     -68,   -68,    60,    90,   -68,   142,   113,   -68,   208,    71,
     -68,   -68,    98,   142,   129,   142,   -68,    98,    98,   -68,
       9,   -68,   -30,    79,   164,   -68,   -68,   142,   142,   -68,
     142,   -68,   142,   -68,   149,   -68,   -68,    50,   175,   -68,
      68,   -68,   142,   142,   -68,   142,   142,   -20,   -30,    84,
      81,   -68,   186,    73,   -68,    80,   142,   -68,   -68,   153,
     -68,   -15,   121,   142,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   197,   -68,   -68,   -68,    85,   105,    98,    98,   142,
     -68,   -68,   -68,   -30,   -68
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     5,     1,    10,    41,    42,    43,     0,     5,
       0,     9,     3,     6,     0,     4,    11,     0,    12,    13,
       0,     7,     0,    15,     0,    14,     0,     0,    18,     0,
       0,    20,     0,     0,    18,    16,    18,     0,     0,    53,
      54,    26,    48,    50,    52,     0,     0,    49,    18,     0,
      34,    35,     0,     0,     0,     0,     8,     0,     0,    25,
       0,    51,    55,     0,     0,    18,    18,     0,     0,    19,
       0,    19,     0,    18,     0,    38,    18,    39,     0,    17,
      28,    22,     0,     0,    44,     0,     0,    46,    47,     0,
      58,    18,     0,     0,    24,     0,     0,    36,    19,     0,
      59,    57,    56,     0,    19,    32,    21,    37,    40,    18,
      23,     0,    18,    18,    29,     0,     0,     0,     0,     0,
      27,    33,    30,    45,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -68,   -68,   -68,   -68,   114,   -68,   -68,   -68,   -68,   104,
     -68,    76,   -12,   -67,   -51,   -68,   -68,   -68,   -68,   -68,
     -23,    44,    11,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    15,     8,     9,    24,    10,    17,    18,
      19,    34,    49,    89,    35,    52,   118,   124,   113,    36,
      47,    76,    38,    77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      48,    69,    70,    37,    91,    68,    79,    80,    66,    67,
      68,    69,    70,    11,    53,     3,    69,    70,    62,    64,
      11,    54,    57,    81,    58,    12,    74,    20,    78,    37,
      82,   109,    14,    20,    37,    37,    71,   112,    16,    21,
      87,    88,    79,    90,    22,    92,     4,     5,     6,    23,
       7,    26,    50,    85,    86,    99,   100,    63,   101,   102,
      51,    93,    55,    59,    95,    96,   121,   122,     5,     6,
      37,     7,    65,    66,    67,    68,   111,     5,     6,   104,
       7,    69,    70,    27,    28,    29,    30,    56,    54,    31,
     106,    32,   123,    60,    37,    37,    61,   114,    98,    72,
     116,   117,     5,     6,    33,     7,    83,   107,    27,    28,
      29,    30,   103,    -1,    31,   119,    32,     5,     6,   120,
       7,    39,    40,    13,    39,    40,    25,     0,    73,    33,
      41,    42,    43,    44,    42,    43,    44,    39,    40,    45,
     108,    46,    45,     0,    46,    67,    68,    42,    43,    44,
      39,    40,    69,    70,     0,    45,    75,    46,     0,     0,
      42,    43,    44,    94,     0,     0,     0,   110,    45,     0,
      46,    65,    66,    67,    68,    65,    66,    67,    68,     0,
      69,    70,     0,     0,    69,    70,    65,    66,    67,    68,
       0,    84,     0,     0,     0,    69,    70,    65,    66,    67,
      68,     0,    97,     0,     0,     0,    69,    70,    65,    66,
      67,    68,     0,   105,     0,     0,     0,    69,    70,    65,
      66,    67,    68,     0,   115,     0,     0,     0,    69,    70,
      65,    66,    67,    68,     0,     0,     0,     0,     0,    69,
      70
};

static const yytype_int8 yycheck[] =
{
      27,    31,    32,    26,    71,    25,    57,    58,    23,    24,
      25,    31,    32,     2,    21,     0,    31,    32,    45,    46,
       9,    28,    34,    14,    36,     0,    53,    16,    55,    52,
      21,    98,    18,    22,    57,    58,    48,   104,    28,    27,
      67,    68,    93,    70,    15,    72,     3,     4,     5,    18,
       7,    16,    14,    65,    66,    82,    83,    46,    85,    86,
      14,    73,    28,    14,    76,    15,   117,   118,     4,     5,
      93,     7,    22,    23,    24,    25,   103,     4,     5,    91,
       7,    31,    32,    10,    11,    12,    13,    17,    28,    16,
      17,    18,   119,    18,   117,   118,     6,   109,    30,    28,
     112,   113,     4,     5,    31,     7,    27,    27,    10,    11,
      12,    13,    28,    32,    16,    30,    18,     4,     5,    14,
       7,     8,     9,     9,     8,     9,    22,    -1,    52,    31,
      14,    18,    19,    20,    18,    19,    20,     8,     9,    26,
      96,    28,    26,    -1,    28,    24,    25,    18,    19,    20,
       8,     9,    31,    32,    -1,    26,    27,    28,    -1,    -1,
      18,    19,    20,    14,    -1,    -1,    -1,    14,    26,    -1,
      28,    22,    23,    24,    25,    22,    23,    24,    25,    -1,
      31,    32,    -1,    -1,    31,    32,    22,    23,    24,    25,
      -1,    27,    -1,    -1,    -1,    31,    32,    22,    23,    24,
      25,    -1,    27,    -1,    -1,    -1,    31,    32,    22,    23,
      24,    25,    -1,    27,    -1,    -1,    -1,    31,    32,    22,
      23,    24,    25,    -1,    27,    -1,    -1,    -1,    31,    32,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    35,    36,     0,     3,     4,     5,     7,    38,    39,
      41,    56,     0,    38,    18,    37,    28,    42,    43,    44,
      56,    27,    15,    18,    40,    43,    16,    10,    11,    12,
      13,    16,    18,    31,    45,    48,    53,    54,    56,     8,
       9,    14,    18,    19,    20,    26,    28,    54,    57,    46,
      14,    14,    49,    21,    28,    28,    17,    46,    46,    14,
      18,     6,    57,    56,    57,    22,    23,    24,    25,    31,
      32,    46,    28,    45,    57,    27,    55,    57,    57,    48,
      48,    14,    21,    27,    27,    46,    46,    57,    57,    47,
      57,    47,    57,    46,    14,    46,    15,    27,    30,    57,
      57,    57,    57,    28,    46,    27,    17,    27,    55,    47,
      14,    57,    47,    52,    46,    27,    46,    46,    50,    30,
      14,    48,    48,    57,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    36,    37,    35,    38,    38,    40,    39,    41,
      41,    42,    42,    43,    43,    44,    45,    45,    46,    47,
      49,    48,    48,    48,    48,    48,    48,    48,    48,    50,
      51,    48,    52,    48,    48,    48,    53,    54,    54,    55,
      55,    56,    56,    56,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     4,     0,     2,     0,     9,     1,
       1,     0,     1,     1,     3,     2,     1,     3,     0,     0,
       0,     5,     3,     5,     4,     2,     2,     8,     3,     0,
       0,     9,     0,     8,     2,     2,     4,     5,     3,     1,
       3,     1,     1,     1,     3,     8,     3,     3,     1,     1,
       1,     2,     1,     1,     1,     2,     4,     4,     3,     4
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
#line 79 "parser.ypp"
                { semantic_stacks=new Stacks();}
#line 1270 "parser.tab.cpp"
    break;

  case 3: /* $@2: %empty  */
#line 80 "parser.ypp"
                            {
			if(!semantic_stacks->is_exsists("main") || !semantic_stacks->is_func("main") || semantic_stacks->get_type("main") != TokenType::TOKEN_UNDIF || semantic_stacks->get_args("main")->size()!=0)
			{
				output::errorMainMissing();
				exit(2);
			}
		}
#line 1282 "parser.tab.cpp"
    break;

  case 4: /* Program: $@1 Funcs $end $@2  */
#line 87 "parser.ypp"
                { semantic_stacks->exit_scope(); }
#line 1288 "parser.tab.cpp"
    break;

  case 6: /* Funcs: FuncDecl Funcs  */
#line 92 "parser.ypp"
                         {}
#line 1294 "parser.tab.cpp"
    break;

  case 7: /* $@3: %empty  */
#line 96 "parser.ypp"
                                                  {
			if(semantic_stacks->is_exsists(yyvsp[-3]->name))
			{
				output::errorDef(yylineno,yyvsp[-3]->name);
				exit(2);
			}

			for(int i=0; i<yyvsp[-1]->get_args()->size();i++)
			{
				if(yyvsp[-1]->get_args()->at(i).second == yyvsp[-3]->name)
				{
					output::errorDef(yylineno,yyvsp[-3]->name);
					exit(2);
				}
			}

			semantic_stacks->new_func(yyvsp[-3]->name,yyvsp[-4]->type,yyvsp[-1]->get_args());
			string type_in_str = yyvsp[-4]->type==TokenType::TOKEN_UNDIF ? "void" : "i32";
            string args = "";
            for (auto i = 0; i < yyvsp[-1]->get_args()->size(); i++)
            {
                args = args + "i32 ,";
            }
            args = args.substr(0, args.length() - 1);
			gen_code.emit("define " + type_in_str + " @" + yyvsp[-3]->name + "(" + args + ") {");
			gen_code.emit("entry:");
			gen_code.emit("%fp = alloca [50 x i32]");
		}
#line 1327 "parser.tab.cpp"
    break;

  case 8: /* FuncDecl: RetType ID LPAREN Formals RPAREN $@3 LBRACE Statements RBRACE  */
#line 124 "parser.ypp"
                                     {
            semantic_stacks->exit_scope();gen_code.emit("}");
             }
#line 1335 "parser.tab.cpp"
    break;

  case 9: /* RetType: Type  */
#line 130 "parser.ypp"
                     { yyval = yyvsp[0]; }
#line 1341 "parser.tab.cpp"
    break;

  case 10: /* RetType: VOID  */
#line 131 "parser.ypp"
                       { yyval = new Node(TokenType::TOKEN_UNDIF,"",0); }
#line 1347 "parser.tab.cpp"
    break;

  case 11: /* Formals: %empty  */
#line 135 "parser.ypp"
                       { yyval = new FormalList(); }
#line 1353 "parser.tab.cpp"
    break;

  case 12: /* Formals: FormalsList  */
#line 136 "parser.ypp"
                              { yyval = yyvsp[0]; }
#line 1359 "parser.tab.cpp"
    break;

  case 13: /* FormalsList: FormalDecl  */
#line 139 "parser.ypp"
                                   {if(semantic_stacks->is_exsists(yyvsp[0]->name)){output::errorDef(yylineno,yyvsp[0]->name); exit(2);}yyval = new FormalList(); yyval->get_args()->insert(yyval->get_args()->begin(),pair<TokenType,string>(yyvsp[0]->type,yyvsp[0]->name));}
#line 1365 "parser.tab.cpp"
    break;

  case 14: /* FormalsList: FormalDecl COMMA FormalsList  */
#line 141 "parser.ypp"
                        {
				vector<pair<TokenType,string>>* args = yyvsp[0]->get_args();
				for(int i=0;i<args->size();i++)
					if(args->at(i).second == yyvsp[-2]->name)
					{
						output::errorDef(yylineno,yyvsp[-2]->name);
						exit(2);
					}
				if(semantic_stacks->is_exsists(yyvsp[-2]->name))
				{
					output::errorDef(yylineno,yyvsp[-2]->name);
					exit(2);
				}
				yyvsp[0]->get_args()->insert(yyvsp[0]->get_args()->begin(),pair<TokenType,string>(yyvsp[-2]->type,yyvsp[-2]->name));
				yyval = yyvsp[0];
			}
#line 1386 "parser.tab.cpp"
    break;

  case 15: /* FormalDecl: Type ID  */
#line 160 "parser.ypp"
                                { yyval = new Node(yyvsp[-1]->type,yyvsp[0]->name,0); }
#line 1392 "parser.tab.cpp"
    break;

  case 16: /* Statements: Statement  */
#line 163 "parser.ypp"
                                  {
			yyval->next_list = yyvsp[0]->next_list;
                  yyval->break_list = yyvsp[0]->break_list;
                  yyval->continue_list = yyvsp[0]->continue_list;
            }
#line 1402 "parser.tab.cpp"
    break;

  case 17: /* Statements: Statements M Statement  */
#line 168 "parser.ypp"
                                                  {
			        if (yyvsp[0]->return_statement == false)
                    {
                        gen_code.bpatch(yyvsp[-2]->next_list, yyvsp[-1]->quad);
                    }
                    yyval->next_list = yyvsp[0]->next_list;
                    yyval->break_list = gen_code.merge(yyvsp[-2]->break_list,yyvsp[0]->break_list);
                    yyval->continue_list = gen_code.merge(yyvsp[-2]->continue_list,yyvsp[0]->continue_list);
            }
#line 1416 "parser.tab.cpp"
    break;

  case 18: /* M: %empty  */
#line 181 "parser.ypp"
        {
          int buffer_index = gen_code.emit("br label @");
          string label = gen_code.genLabel();
          gen_code.bpatch(gen_code.makelist({buffer_index, FIRST}), label);
          yyval->quad = label;
    }
#line 1427 "parser.tab.cpp"
    break;

  case 19: /* N: %empty  */
#line 190 "parser.ypp"
        {
          int buffer_index = gen_code.emit("br label @");
          string label = gen_code.genLabel();
          gen_code.bpatch(gen_code.makelist({buffer_index, FIRST}), label);
          yyval->quad = label;
       yyval->next_list = gen_code.makelist({gen_code.emit("br label @"), FIRST});
    }
#line 1439 "parser.tab.cpp"
    break;

  case 20: /* @4: %empty  */
#line 199 "parser.ypp"
                       {

		    semantic_stacks->new_scope();
		}
#line 1448 "parser.tab.cpp"
    break;

  case 21: /* Statement: LBRACE @4 Statements M RBRACE  */
#line 204 "parser.ypp"
                {
             yyval = new Node();
             yyval->next_list = yyvsp[-3]->next_list;
             yyval->break_list = yyvsp[-3]->break_list;
             yyval->continue_list = yyvsp[-3]->continue_list;
             gen_code.bpatch(yyvsp[-2]->next_list,yyvsp[-2]->quad);
            semantic_stacks->exit_scope();
		}
#line 1461 "parser.tab.cpp"
    break;

  case 22: /* Statement: Type ID SC  */
#line 213 "parser.ypp"
                             {
			if(semantic_stacks->is_exsists(yyvsp[-1]->name))
			{
				output::errorDef(yylineno,yyvsp[-1]->name);
				exit(2);
			}
			yyval = new Node(yyvsp[-2]->type, yyvsp[-1]->name, 0);
			semantic_stacks->new_entry(yyvsp[-1]->name,yyvsp[-2]->type,0);
			string name = "%var"+ to_string(gen_code.current_var++);
            gen_code.emit("store i32 0 , i32* "+name);
            gen_code.emit(name + " = getelementptr [50 x i32], [50 x i32]* %fp, i32 0 , i32 " + to_string(semantic_stacks->get_entry(yyvsp[-1]->name)->offset));
		}
#line 1478 "parser.tab.cpp"
    break;

  case 23: /* Statement: Type ID ASSIGN Exp SC  */
#line 225 "parser.ypp"
                                        {
			if(semantic_stacks->is_exsists(yyvsp[-3]->name))
			{
				output::errorDef(yylineno,yyvsp[-3]->name);
				exit(2);
			}

			if(convert_table[yyvsp[-4]->type][yyvsp[-1]->type] == false || (yyvsp[-4]->type == TokenType::TOKEN_B && yyvsp[-1]->type == TokenType::TOKEN_INT))
			{
				output::errorMismatch(yylineno);
				exit(2);
			}
			
			if(yyvsp[-3]->type == TokenType::TOKEN_B && yyvsp[-1]->value > 255)
			{
				output::errorByteTooLarge(yylineno, std::to_string(yyvsp[-2]->value));
				exit(2);
			}
			
			yyval = new Node(yyvsp[-4]->type,yyvsp[-3]->name,yyvsp[-1]->value);
			semantic_stacks->new_entry(yyvsp[-3]->name,yyvsp[-4]->type,yyvsp[-1]->value);

			string place = yyvsp[-1]->place== ""? to_string(yyvsp[-1]->value) : yyvsp[-1]->place;


            if (yyvsp[-4]->type != TokenType::TOKEN_BOOL)
            {
                string target = "%var"+to_string(gen_code.current_var++);
                string name = "%var"+ to_string(gen_code.current_var++);
                gen_code.emit(name + " = getelementptr [50 x i32], [50 x i32]* %fp, i32 0 , i32 " + to_string(semantic_stacks->get_entry(yyvsp[-3]->name)->offset));
                gen_code.emit("store i32 " + to_string(yyvsp[-1]->value) + " , i32* "+name);
                 yyval->next_list = yyvsp[-1]->next_list;
            }
            else
            {
               string true_temp = "%var"+ to_string(gen_code.current_var++);
               string false_temp = "%var"+ to_string(gen_code.current_var++);

               int unused_index = gen_code.emit("br label @");
               string true_label = gen_code.genLabel();
               gen_code.bpatch(gen_code.makelist({unused_index, FIRST}), true_label);

               gen_code.emit(declare_var_llvm(true_temp, "0", semantic_stacks->get_entry(yyvsp[-3]->name)->offset));
               gen_code.emit("store i32 1 , i32* " + true_temp);

               int true_index_patch = gen_code.emit("br label @");
               gen_code.bpatch(yyvsp[-1]->true_list, true_label);

               string false_label = gen_code.genLabel();
               gen_code.emit(declare_var_llvm(false_temp, "0", semantic_stacks->get_entry(yyvsp[-3]->name)->offset));
               gen_code.emit("store i32 0 , i32* " + true_temp);

               int false_index_patch = gen_code.emit("br label @");
               gen_code.bpatch(yyvsp[-1]->false_list, false_label);

               yyval->next_list = gen_code.merge(gen_code.makelist({true_index_patch, FIRST}), gen_code.makelist({false_index_patch, FIRST}));
             }
        }
#line 1541 "parser.tab.cpp"
    break;

  case 24: /* Statement: ID ASSIGN Exp SC  */
#line 283 "parser.ypp"
                                   {
			if(!semantic_stacks->is_exsists(yyvsp[-3]->name) || semantic_stacks->is_func(yyvsp[-3]->name))
			{
				output::errorUndef(yylineno,yyvsp[-3]->name);
				exit(2);
			}

			if(convert_table[semantic_stacks->get_type(yyvsp[-3]->name)][yyvsp[-1]->type] == false || (semantic_stacks->get_type(yyvsp[-3]->name) == TokenType::TOKEN_B && yyvsp[-1]->type == TokenType::TOKEN_INT))
			{
				output::errorMismatch(yylineno);
				exit(2);
			}
			
			if(yyvsp[-3]->type == TokenType::TOKEN_B && yyvsp[-1]->value > 255)
			{
				output::errorByteTooLarge(yylineno, std::to_string(yyvsp[-1]->value));
				exit(2);
			}

			semantic_stacks->set_value(yyvsp[-3]->name,yyvsp[-1]->value);
			string place = yyvsp[-1]->place== ""? to_string(yyvsp[-1]->value) : yyvsp[-1]->place;
			 if (yyvsp[-3]->type != TokenType::TOKEN_BOOL)
            {
                string target = "%var"+to_string(gen_code.current_var++);
                string name = "%var"+ to_string(gen_code.current_var++);
                gen_code.emit("store i32 "+place+" , i32* "+name);
                gen_code.emit(name + " = getelementptr [50 x i32], [50 x i32]* %fp, i32 0 , i32 " + to_string(semantic_stacks->get_entry(yyvsp[-3]->name)->offset));
                yyval->next_list = yyvsp[-1]->next_list;
            }
            else
            {
               string true_temp = "%var"+ to_string(gen_code.current_var++);
               string false_temp = "%var"+ to_string(gen_code.current_var++);

               int unused_index = gen_code.emit("br label @");
               string true_label = gen_code.genLabel();
               gen_code.bpatch(gen_code.makelist({unused_index, FIRST}), true_label);

               gen_code.emit(declare_var_llvm(true_temp, to_string(semantic_stacks->get_args_last_func()->size()), semantic_stacks->get_entry(yyvsp[-3]->name)->offset));
               gen_code.emit("store i32 1 , i32* " + true_temp);

               int true_index_patch = gen_code.emit("br label @");
               gen_code.bpatch(yyvsp[0]->true_list, true_label);

               string false_label = gen_code.genLabel();
               gen_code.emit(declare_var_llvm(false_temp, to_string(semantic_stacks->get_args_last_func()->size()), semantic_stacks->get_entry(yyvsp[-3]->name)->offset));
               gen_code.emit("store i32 0 , i32* " + true_temp);

               int false_index_patch = gen_code.emit("br label @");
               gen_code.bpatch(yyvsp[-1]->false_list, false_label);

               yyval->next_list = gen_code.merge(gen_code.makelist({true_index_patch, FIRST}), gen_code.makelist({false_index_patch, FIRST}));
             }
		}
#line 1600 "parser.tab.cpp"
    break;

  case 25: /* Statement: Call SC  */
#line 337 "parser.ypp"
                          {}
#line 1606 "parser.tab.cpp"
    break;

  case 26: /* Statement: RETURN SC  */
#line 338 "parser.ypp"
                            {
			if(semantic_stacks->get_func_type() != TokenType::TOKEN_UNDIF)
			{
				output::errorMismatch(yylineno);
				exit(2);
			}
			gen_code.emit("ret void");
			yyval->return_statement=true;
		}
#line 1620 "parser.tab.cpp"
    break;

  case 27: /* Statement: RETURN Exp M N M N M SC  */
#line 348 "parser.ypp"
                                          {
			if(convert_table[yyvsp[-6]->type][semantic_stacks->get_func_type()] == TokenType::TOKEN_UNDIF || (semantic_stacks->get_func_type() == TokenType::TOKEN_B && yyvsp[-6]->type == TokenType::TOKEN_INT))
			{
				output::errorMismatch(yylineno);
				exit(2);
			}
			semantic_stacks->update_last_func(yyvsp[-6]->value);
			yyval->return_statement=true;
            if(yyvsp[-6]->type==TokenType::TOKEN_BOOL)
            {
                gen_code.bpatch(yyvsp[-6]->true_list,yyvsp[-5]->quad);
                gen_code.bpatch(yyvsp[-6]->false_list,yyvsp[-3]->quad);
                int buffer_index = gen_code.emit("br label @");
                string trueLabel = gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({buffer_index, FIRST}), trueLabel);
                int trueJump= gen_code.emit("ret i32 1");
                string falseLabel = gen_code.genLabel();
                int falseJump= gen_code.emit("ret i32 0");
                gen_code.bpatch(yyvsp[-4]->next_list,trueLabel);
                gen_code.bpatch(yyvsp[-2]->next_list,falseLabel);
            }
            else
            {
                gen_code.bpatch(gen_code.merge(yyvsp[-4]->next_list,yyvsp[-2]->next_list),yyvsp[-1]->quad);
                gen_code.emit("ret i32 " + to_string(yyvsp[-6]->value));
                yyval->next_list = yyvsp[-6]->next_list;
            }
		}
#line 1653 "parser.tab.cpp"
    break;

  case 28: /* Statement: IfExp M Statement  */
#line 376 "parser.ypp"
                                    {
               	        yyval->quad=yyvsp[-1]->quad;
               	        semantic_stacks->exit_scope();
               	        gen_code.bpatch(yyvsp[-2]->true_list, yyval->quad);

                       yyval->next_list = gen_code.merge(yyvsp[-2]->false_list, yyvsp[0]->next_list);
                       yyval->continue_list = yyvsp[0]->continue_list;
                       yyval->break_list = yyvsp[0]->break_list;
                       gen_code.bpatch(yyvsp[-2]->start_list, yyvsp[-2]->start_label);
               	    }
#line 1668 "parser.tab.cpp"
    break;

  case 29: /* @5: %empty  */
#line 386 "parser.ypp"
                                             { semantic_stacks->new_scope(); }
#line 1674 "parser.tab.cpp"
    break;

  case 30: /* $@6: %empty  */
#line 386 "parser.ypp"
                                                                                         { semantic_stacks->exit_scope(); }
#line 1680 "parser.tab.cpp"
    break;

  case 31: /* Statement: IfExp M Statement ELSE N M @5 Statement $@6  */
#line 387 "parser.ypp"
                        {
		            gen_code.bpatch(yyvsp[-8]->true_list,yyvsp[-7]->quad);
                    gen_code.bpatch(yyvsp[-8]->false_list,yyvsp[-3]->quad);


                    yyval->next_list = gen_code.merge(yyvsp[-6]->next_list, yyvsp[-2]->next_list);
                    yyval->next_list = gen_code.merge(yyval->next_list, yyvsp[-4]->next_list);
                    yyval->break_list = gen_code.merge(yyvsp[-6]->break_list, yyvsp[-2]->break_list);
                    yyval->continue_list = gen_code.merge(yyvsp[-6]->continue_list, yyvsp[-2]->continue_list);
                    gen_code.bpatch(yyvsp[-8]->start_list, yyvsp[-8]->start_label);
		        }
#line 1696 "parser.tab.cpp"
    break;

  case 32: /* @7: %empty  */
#line 398 "parser.ypp"
                                            {
			if(yyvsp[-2]->type != TokenType::TOKEN_BOOL)
			{
				output::errorMismatch(yylineno);
				exit(2);
			}
			yyval->true_list = yyvsp[-1]->true_list;
            yyval->false_list = yyvsp[-1]->false_list;
            yyval->quad = yyvsp[-3]->quad;
			semantic_stacks->whilecounter++;
			semantic_stacks->new_scope();
			}
#line 1713 "parser.tab.cpp"
    break;

  case 33: /* Statement: WHILE M LPAREN Exp RPAREN @7 M Statement  */
#line 409 "parser.ypp"
                                      {
			      gen_code.bpatch(yyvsp[-4]->true_list,yyvsp[-2]->quad);


			      gen_code.bpatch(yyvsp[-1]->next_list, yyvsp[-6]->quad);
                  gen_code.bpatch(yyvsp[-1]->continue_list, yyvsp[-6]->quad);

                  yyval->next_list = gen_code.merge(yyvsp[-4]->false_list, yyvsp[-1]->break_list);

                  int label_index = gen_code.emit(br_loop_llvm(yyvsp[-1]->quad));
                  gen_code.bpatch(gen_code.makelist({label_index, FIRST}), yyvsp[-1]->quad);
				semantic_stacks->whilecounter--;
				semantic_stacks->exit_scope();
				//not sure if we need to update start label. think not
			}
#line 1733 "parser.tab.cpp"
    break;

  case 34: /* Statement: BREAK SC  */
#line 424 "parser.ypp"
                           {
			if(semantic_stacks->whilecounter == 0)
			{
				output::errorUnexpectedBreak(yylineno);
				exit(2);
			}
			int label_index = gen_code.emit("br label @");
            yyval->break_list = gen_code.makelist({label_index, FIRST});
		}
#line 1747 "parser.tab.cpp"
    break;

  case 35: /* Statement: CONTINUE SC  */
#line 433 "parser.ypp"
                              {
			if(semantic_stacks->whilecounter == 0)
			{
				output::errorUnexpectedContinue(yylineno);
				exit(2);
			}
			int label_index = gen_code.emit("br label @");

            yyval->continue_list = gen_code.makelist({label_index, FIRST});
		}
#line 1762 "parser.tab.cpp"
    break;

  case 36: /* IfExp: IF LPAREN Exp RPAREN  */
#line 444 "parser.ypp"
                             {
		if(yyvsp[-1]->type != TokenType::TOKEN_BOOL)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}
		semantic_stacks->new_scope();
        gen_code.bpatch(yyvsp[-1]->start_list, yyvsp[-1]->start_label);
        yyval=yyvsp[-1];
	}
#line 1777 "parser.tab.cpp"
    break;

  case 37: /* Call: ID LPAREN ExpList M RPAREN  */
#line 454 "parser.ypp"
                                   {
			if(!semantic_stacks->is_exsists(yyvsp[-4]->name) || !semantic_stacks->is_func(yyvsp[-4]->name))
			{
				output::errorUndefFunc(yylineno,yyvsp[-4]->name);
				exit(2);
			}

			vector<pair<TokenType,string>>* func_args = semantic_stacks->get_args(yyvsp[-4]->name);
			if(func_args->size() != yyvsp[-2]->get_vars()->size())
			{
				output::errorPrototypeMismatch(yylineno,yyvsp[-4]->name, *(semantic_stacks->get_string_args(yyvsp[-4]->name)));
				exit(2);
			}
			
			for(int i = 0; i < func_args->size(); i++)
			{
				if(convert_table[func_args->at(i).first][yyvsp[-2]->get_vars()->at(i).type] == TokenType::TOKEN_UNDIF || (func_args->at(i).first == TokenType::TOKEN_B && yyvsp[-2]->get_vars()->at(i).type == TokenType::TOKEN_INT))
				{
					output::errorPrototypeMismatch(yylineno, yyvsp[-4]->name, *(semantic_stacks->get_string_args(yyvsp[-4]->name)));
					exit(2);
				}
			}

			yyval = new Call(semantic_stacks->get_type(yyvsp[-4]->name), yyvsp[-4]->name,semantic_stacks->get_value(yyvsp[-4]->name));
			gen_code.bpatch(yyvsp[-2]->true_list,yyvsp[-1]->quad);
              gen_code.bpatch(yyvsp[-2]->false_list,yyvsp[-1]->quad);
            if (yyvsp[-4]->name == "print")
            {
                string str = yyvsp[-2]->get_vars()->front().name;
                string str_len = to_string(str.length() - 1);
                gen_code.emit("call void @print (i8* getelementptr ([" + str_len + " x i8], [" + str_len + " x i8]* " + str + ", i32 0, i32 0))");
            }
            else
            {
                TokenType ret_type = semantic_stacks->get_func_type(yyvsp[-4]->name);
                string args_llvm = "";
                for(int i=0; i<yyvsp[-2]->get_vars()->size();i++)
                {
                    args_llvm = args_llvm + "i32 " + to_string(yyvsp[-2]->get_vars()->at(i).value) + ",";
                }
                /* Cut the last "," */
                args_llvm = args_llvm.substr(0, args_llvm.length() - 1);
                if(ret_type==TokenType::TOKEN_UNDIF)
                {
                    int index=gen_code.emit("call void @" + yyvsp[-4]->name + "(" + args_llvm + ")");
                    gen_code.bpatch(yyvsp[-2]->false_list,to_string(index));
                    gen_code.bpatch(yyvsp[-2]->true_list,to_string(index));
                    gen_code.bpatch(yyvsp[-2]->next_list,to_string(index));
                }
                else
                {
                    gen_code.emit("call i32 @" + yyvsp[-4]->name + "(" + args_llvm + ")");
                    string target = "%var"+to_string(gen_code.current_var++);
                    string return_type_llvm = ret_type==TokenType::TOKEN_UNDIF ? "void" : "i32";
                    gen_code.emit(target + " = call " + return_type_llvm + " @" + yyvsp[-4]->name + "(" + args_llvm + ")");
                    yyval->place=target;
                    if (ret_type == TokenType::TOKEN_BOOL)
                    {
                        string target_boolean = "%var"+to_string(gen_code.current_var++);
                        gen_code.emit(target_boolean + " = icmp ne i32 0, " + yyval->place);
                        int label_index = gen_code.emit("br i1 " + target_boolean + " , label @ , label @");
                        yyval->true_list = gen_code.makelist({label_index, FIRST});
                        yyval->false_list = gen_code.makelist({label_index, SECOND});
                    }
                }
            }
        yyval->start_label = yyvsp[-2]->start_label;
         gen_code.bpatch(yyval->start_list, yyval->start_label);

		}
#line 1852 "parser.tab.cpp"
    break;

  case 38: /* Call: ID LPAREN RPAREN  */
#line 524 "parser.ypp"
                                   {
			if(!semantic_stacks->is_exsists(yyvsp[-2]->name) || !semantic_stacks->is_func(yyvsp[-2]->name))
			{
				output::errorUndefFunc(yylineno,yyvsp[-2]->name);
				exit(2);
			}
			vector<pair<TokenType,string>>* args=semantic_stacks->get_args(yyvsp[-2]->name);
			if(args->size()!=0)
			{
				output::errorPrototypeMismatch(yylineno,yyvsp[-2]->name, *(semantic_stacks->get_string_args(yyvsp[-2]->name)));
				exit(2);
			}
			yyval = new Call(semantic_stacks->get_type(yyvsp[-2]->name), yyvsp[-2]->name,semantic_stacks->get_value(yyvsp[-2]->name));

            TokenType ret_type = semantic_stacks->get_func_type(yyvsp[-2]->name);
            string args_llvm = "";
                if(ret_type==TokenType::TOKEN_UNDIF)
                {
                    int index=gen_code.emit("call void @" + yyvsp[-2]->name + "()");
                }
                  else
                {
                    gen_code.emit("call i32 @" + yyvsp[-2]->name + "()");
                    string target = "%var"+to_string(gen_code.current_var++);
                    string return_type_llvm = ret_type==TokenType::TOKEN_UNDIF ? "void" : "i32";
                    gen_code.emit(target + " = call " + return_type_llvm + " @" + yyvsp[-2]->name + "()");
                    yyval->place=target;
                    if (ret_type == TokenType::TOKEN_BOOL)
                {
                    string target_boolean = "%var"+to_string(gen_code.current_var++);
                    gen_code.emit(target_boolean + " = icmp ne i32 0, " + yyval->place);
                    int label_index = gen_code.emit("br i1 " + target_boolean + " , label @ , label @");
                    yyval->true_list = gen_code.makelist({label_index, FIRST});
                    yyval->false_list = gen_code.makelist({label_index, SECOND});
                 }
            }
            int x = gen_code.emit("br label @");
            std::string call_label = gen_code.genLabel();
            gen_code.bpatch(gen_code.makelist({x, FIRST}), call_label);
            yyval->start_label = call_label;
            gen_code.bpatch(yyval->start_list, yyval->start_label);
		}
#line 1899 "parser.tab.cpp"
    break;

  case 39: /* ExpList: Exp  */
#line 568 "parser.ypp"
             {
			ExpList *explist = new ExpList(); 
			explist->vars->push_back(Exp(*yyvsp[0]));
			yyval = explist;
            if (yyvsp[0]->type == TokenType::TOKEN_BOOL)
            {
                string target = "%var"+to_string(gen_code.current_var++);
                int unused_index = gen_code.emit("br label @");

                string true_label = gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({unused_index, FIRST}), true_label);
                int true_index = gen_code.emit("br label @");
                gen_code.bpatch(yyvsp[0]->true_list, true_label);

                string false_label =gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({unused_index, FIRST}), false_label);
                int false_index = gen_code.emit("br label @");
                gen_code.bpatch(yyvsp[0]->false_list, false_label);

                string next_label = gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({true_index, FIRST}), next_label);
                gen_code.bpatch(gen_code.makelist({false_index, FIRST}), next_label);
                gen_code.emit(target + " = phi i32 [ 1, %" + true_label + " ] , [ 0, %" + false_label + "]");
                yyval->place = target;
            }
            yyval->true_list=yyvsp[0]->true_list;
            yyval->false_list=yyvsp[0]->false_list;
		}
#line 1932 "parser.tab.cpp"
    break;

  case 40: /* ExpList: Exp COMMA ExpList  */
#line 596 "parser.ypp"
                                    {
			Exp* exp = new Exp(yyvsp[-2]->type, yyvsp[-2]->name, yyvsp[-2]->value);
			yyvsp[0]->get_vars()->insert(yyvsp[0]->get_vars()->begin(), Exp(*exp));
			yyval = yyvsp[0];
			if (yyvsp[-2]->type == TokenType::TOKEN_BOOL)
            {
                string target = "%var"+to_string(gen_code.current_var++);
                int unused_index = gen_code.emit("br label @");

                string true_label = gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({unused_index, FIRST}), true_label);
                int true_index = gen_code.emit("br label @");
                gen_code.bpatch(yyvsp[-2]->true_list, true_label);

                string false_label =gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({unused_index, FIRST}), false_label);
                int false_index = gen_code.emit("br label @");
                gen_code.bpatch(yyvsp[-2]->false_list, false_label);

                string next_label = gen_code.genLabel();
                gen_code.bpatch(gen_code.makelist({true_index, FIRST}), next_label);
                gen_code.bpatch(gen_code.makelist({false_index, FIRST}), next_label);
                gen_code.emit(target + " = phi i32 [ 1, %" + true_label + " ] , [ 0, %" + false_label + "]");
                yyval->place = target;
            }
            yyval->true_list = gen_code.merge(yyvsp[-2]->true_list, yyvsp[0]->true_list);
            yyval->false_list = gen_code.merge(yyvsp[-2]->false_list, yyvsp[0]->false_list);
		}
#line 1965 "parser.tab.cpp"
    break;

  case 41: /* Type: INT  */
#line 626 "parser.ypp"
          {
		yyval = new Node(TokenType::TOKEN_INT, "", 0);
	}
#line 1973 "parser.tab.cpp"
    break;

  case 42: /* Type: BYTE  */
#line 629 "parser.ypp"
               {
		yyval = new Node(TokenType::TOKEN_B, "", 0);
	}
#line 1981 "parser.tab.cpp"
    break;

  case 43: /* Type: BOOL  */
#line 632 "parser.ypp"
               {
		yyval = new Node(TokenType::TOKEN_BOOL, "", 0);
	}
#line 1989 "parser.tab.cpp"
    break;

  case 44: /* Exp: LPAREN Exp RPAREN  */
#line 637 "parser.ypp"
                       {
		yyval = new Exp(yyvsp[-1]->type, yyvsp[-1]->name, yyvsp[-1]->value);
		yyval->true_list = yyvsp[-1]->true_list;
		yyval->false_list = yyvsp[-1]->false_list;
		yyval->break_list = yyvsp[-1]->break_list;
		yyval->continue_list = yyvsp[-1]->continue_list;
		yyval->next_list = yyvsp[-1]->next_list;
	}
#line 2002 "parser.tab.cpp"
    break;

  case 45: /* Exp: Exp IF N LPAREN Exp RPAREN ELSE Exp  */
#line 645 "parser.ypp"
                                              {
		if(yyvsp[-4]->type != TokenType::TOKEN_BOOL)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}
		if(convert_table[yyvsp[-7]->type][yyvsp[0]->type] == TokenType::TOKEN_UNDIF)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}
		
		if(yyvsp[-3]->value == 1)
			yyval = new Exp(yyvsp[-7]->type, yyvsp[-7]->name, yyvsp[-7]->value);
		else
			yyval = new Exp(yyvsp[0]->type, yyvsp[0]->name, yyvsp[0]->value);


            NMarkerNode* jmp_to_end_label = new NMarkerNode();
            std::string to_start_label = gen_code.genLabel();

            NMarkerNode* middle_jmp = new NMarkerNode();
            std::string middle_label = gen_code.genLabel();

            NMarkerNode* jmp_to_bool_exp = new NMarkerNode();
            std::string end_label = gen_code.genLabelPhi();

            gen_code.bpatch(yyvsp[-7]->start_list, to_start_label);
            gen_code.bpatch(yyvsp[0]->start_list, yyvsp[0]->start_label);
            gen_code.bpatch(yyvsp[-3]->true_list, yyvsp[-7]->start_label);
            gen_code.bpatch(yyvsp[-3]->false_list, yyvsp[0]->start_label);
            gen_code.bpatch(yyvsp[-3]->start_list, yyvsp[-3]->start_label);


            std::vector<pair<int, BranchLabelIndex>> all_jumps_to_end = gen_code.merge(yyvsp[-5]->next_list, jmp_to_end_label->next_list);
            gen_code.bpatch(all_jumps_to_end, end_label);
            gen_code.bpatch(jmp_to_bool_exp->next_list, yyvsp[-3]->start_label);
            yyval->place = "%var"+to_string(gen_code.current_var++);
            gen_code.bpatch(yyvsp[-7]->start_list, to_start_label);
            std::string phi_true_label = yyvsp[-7]->trinary ? yyvsp[-7]->start_label_trinary: yyvsp[-7]->start_label;
            std::string phi_false_label = yyvsp[0]->trinary ? yyvsp[0]->start_label_trinary: yyvsp[0]->start_label;
            gen_code.emit(yyval->place +" = phi i32 [" + yyvsp[-7]->place +", %" + phi_true_label + "] , [" + yyvsp[0]->place +  " , %" + phi_false_label+"]");
            yyval->start_label_trinary = end_label;
            yyval->start_label = middle_label;
            yyval->start_list = middle_jmp->next_list;
            yyval->trinary = true;
	}
#line 2054 "parser.tab.cpp"
    break;

  case 46: /* Exp: Exp PLUS Exp  */
#line 694 "parser.ypp"
                       {
		TokenType new_type;
		int new_val;
		if(yyvsp[-2]->type==TokenType::TOKEN_STRING||yyvsp[-2]->type==TokenType::TOKEN_BOOL||yyvsp[0]->type==TokenType::TOKEN_STRING||yyvsp[0]->type==TokenType::TOKEN_BOOL)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}
		
		if(yyvsp[-2]->type == TokenType::TOKEN_INT || yyvsp[0]->type == TokenType::TOKEN_INT)
			new_type = TokenType::TOKEN_INT;
		else
			new_type = TokenType::TOKEN_B;
		
		if(yyvsp[-1]->name == "+")
			new_val = yyvsp[-2]->value + yyvsp[0]->value;
		else if(yyvsp[-1]->name == "-")
			new_val = yyvsp[-2]->value - yyvsp[0]->value;
		yyval = new Exp(new_type, std::to_string(new_val), new_val);


		string target = "%var"+to_string(gen_code.current_var++);

        string right_place = yyvsp[0]->place;
        string left_place = yyvsp[-2]->place;

        /* The values to use */
        string right = right_place == "" ? to_string(yyvsp[0]->value) : right_place;
        string left = left_place == "" ? to_string(yyvsp[-2]->value) : left_place;

        bool can_overflow = false;
        /* Byte overflow */
        if (yyvsp[-2]->type == TokenType::TOKEN_B && yyvsp[0]->type == TokenType::TOKEN_B)
		{

			string left_var = "%var"+to_string(gen_code.current_var++);
			gen_code.emit(left_var + " = trunc i32 " + to_string(yyvsp[-2]->value) + " to i8");

			string right_var = "%var"+to_string(gen_code.current_var++);
			gen_code.emit(right_var + " = trunc i32 " + to_string(yyvsp[-2]->value) + " to i8");

			/* Bubble the updates */
			left = left_var;
			right = right_var;

			can_overflow = true;
		}

		string op_type_llvm = can_overflow ? "i8" : "i32";
	    if (yyvsp[-1]->name == "+")
		{
		gen_code.emit(target + " = add " + op_type_llvm + " " + left + ", " +right);
		}
		else if (yyvsp[-1]->name == "-")
		{
			gen_code.emit(target + " = sub " + op_type_llvm + " " + left + ", " +right);
		}

		if (can_overflow)
		{
			string next_var = "%var"+to_string(gen_code.current_var++);
			gen_code.emit(next_var + " = zext i8 " + target + " to i32");
			target = next_var;
		}
		yyval->place = target;
		gen_code.bpatch(yyvsp[0]->start_list, yyvsp[0]->start_label);
        yyval->start_label = yyvsp[-2]->start_label;
        yyval->start_list = yyvsp[-2]->start_list;
	}
#line 2128 "parser.tab.cpp"
    break;

  case 47: /* Exp: Exp MULTI Exp  */
#line 763 "parser.ypp"
                         {
		TokenType new_type;
		int new_val;
		if(yyvsp[-2]->type == TokenType::TOKEN_STRING || yyvsp[-2]->type == TokenType::TOKEN_BOOL || yyvsp[0]->type == TokenType::TOKEN_STRING || yyvsp[0]->type == TokenType::TOKEN_BOOL)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}
		
		if(yyvsp[-2]->type == TokenType::TOKEN_INT || yyvsp[0]->type == TokenType::TOKEN_INT)
			new_type = TokenType::TOKEN_INT;
		else
			new_type = TokenType::TOKEN_B;
		
		if(yyvsp[-1]->name == "*")
			new_val = yyvsp[-2]->value * yyvsp[0]->value;
		else if(yyvsp[-1]->name == "/")
		{
			new_val = yyvsp[-2]->value / yyvsp[0]->value;
		}
		yyval = new Exp(new_type, std::to_string(new_val), new_val);


          string target = "%var"+to_string(gen_code.current_var++);

          string right_place = yyvsp[0]->place;
          string left_place = yyvsp[-2]->place;

          string right = right_place == "" ? to_string(yyvsp[0]->value) : right_place;
          string left = left_place == "" ? to_string(yyvsp[-2]->value): left_place;

          bool can_overflow = false;
          if (yyvsp[-1]->name != "/" && yyvsp[-2]->type == TokenType::TOKEN_B && yyvsp[0]->type == TokenType::TOKEN_B)
          {

            string left_var = "%var"+to_string(gen_code.current_var++);
            gen_code.emit(left_var + " = trunc i32 " + to_string(yyvsp[-2]->value) + " to i8");

            string right_var = "%var"+to_string(gen_code.current_var++);
            gen_code.emit(right_var + " = trunc i32 " + to_string(yyvsp[-2]->value) + " to i8");

            /* Bubble the updates */
            left = left_var;
            right = right_var;

            can_overflow = true;
          }

          string op_type_llvm = can_overflow ? "i8" : "i32";

          if (yyvsp[-1]->name == "/")
          {
            string zero_var_llvm = "%var"+to_string(gen_code.current_var++);
            string zero_source = right_place == "" ? to_string(yyvsp[0]->value) : right_place;

            gen_code.emit(zero_var_llvm + " = icmp eq i32 " + zero_source + ", 0");
            int zero_bp = gen_code.emit("br i1 " + zero_var_llvm + " , label @ , label @");

            string error_label = gen_code.genLabel();
            gen_code.emit("call i32 (i8*, ...) @printf(i8* getelementptr([24 x i8], [24 x i8]* @.zero_div, i32 0, i32 0))");
            gen_code.emit("call void @exit(i32 0)");

            int unused_bp = gen_code.emit("br label @");

            string success_label = gen_code.genLabel();
            gen_code.emit(target + " = sdiv " + op_type_llvm+ " "+ left+ ", "+ right);
            gen_code.bpatch(gen_code.makelist({zero_bp, SECOND}), success_label);
            gen_code.bpatch(gen_code.makelist({zero_bp, FIRST}), error_label);
            gen_code.bpatch(gen_code.makelist({unused_bp, FIRST}), success_label);
          }
          else if (yyvsp[-1]->name == "*")
          {
            gen_code.emit(target + " = mul " + op_type_llvm+ " "+ left+ ", " +right);
          }

          /* Handle overflow / sign */
          if (can_overflow)
          {
            string next_var = "%var"+to_string(gen_code.current_var++);
            gen_code.emit(next_var + " = zext i8 " + target + " to i32");
            target = next_var;
          }
          yyval->place = target;
          gen_code.bpatch(yyvsp[0]->start_list, yyvsp[0]->start_label);
          yyval->start_label = yyvsp[-2]->start_label;
          yyval->start_list = yyvsp[-2]->start_list;
        }
#line 2220 "parser.tab.cpp"
    break;

  case 48: /* Exp: ID  */
#line 850 "parser.ypp"
              {

		if(semantic_stacks->is_func(yyvsp[0]->name))
		{
			output::errorUndef(yylineno,yyvsp[0]->name);
			exit(2);
		}

		TokenType type = semantic_stacks->get_type(yyvsp[0]->name);
		
		if(TOKEN_UNDIF==type)
		{
			output::errorUndef(yylineno, yyvsp[0]->name);
			exit(2);
		}

		yyval = new Exp(type, yyvsp[0]->name, semantic_stacks->get_value(yyvsp[0]->name));
        string source = "%var"+to_string(gen_code.current_var++);
        string target = "%var"+to_string(gen_code.current_var++);

        int size_of_args = semantic_stacks->get_args_last_func()->size();

        table_entry * entry=semantic_stacks->get_entry(yyvsp[0]->name);

          gen_code.emit(declare_var_llvm(source, to_string(size_of_args), entry->offset));
          gen_code.emit(target + " = load i32, i32* " + source);
          yyval->place = target;
          if(entry->offset>=0)
          {
              int loc = gen_code.emit("br label @");
              yyvsp[0]->start_label = gen_code.genLabel();
              yyvsp[0]->start_list = gen_code.makelist({loc, FIRST});
          }
          if (entry->type == TokenType::TOKEN_BOOL)
          {
              if (entry->offset<0)
              {
                  int loc = gen_code.emit("br label @");
                  yyvsp[0]->start_label = gen_code.genLabel();
                  yyvsp[0]->start_list = gen_code.makelist({loc, FIRST});
              }
            string target_boolean = "%var"+to_string(gen_code.current_var++);
            gen_code.emit(target_boolean + " = icmp ne i32 0, " + source);
            int branch_index = gen_code.emit("br i1 " + target_boolean + " , label @ , label @");
            auto unconditional_list = gen_code.makelist({branch_index, FIRST});
            auto conditional_list = gen_code.makelist({branch_index, SECOND});

            yyval->true_list = unconditional_list;
            yyval->false_list = conditional_list;
          }


	}
#line 2278 "parser.tab.cpp"
    break;

  case 49: /* Exp: Call  */
#line 903 "parser.ypp"
               {}
#line 2284 "parser.tab.cpp"
    break;

  case 50: /* Exp: NUM  */
#line 904 "parser.ypp"
              {
		yyval->type = yyvsp[0]->type;
        yyval->value = yyvsp[0]->value;
	}
#line 2293 "parser.tab.cpp"
    break;

  case 51: /* Exp: NUM B  */
#line 908 "parser.ypp"
                {
		yyval->type = TokenType::TOKEN_B;
      	yyval->value = yyvsp[-1]->value;
      	if (yyvsp[-1]->value > 255)
		{
        	output::errorByteTooLarge(yylineno, std::to_string(yyvsp[-1]->value)); 
			exit(2);
		}
	}
#line 2307 "parser.tab.cpp"
    break;

  case 52: /* Exp: STRING  */
#line 917 "parser.ypp"
                 {
		yyval = new Exp(yyvsp[0]->type, yyvsp[0]->name, yyvsp[0]->value);
	}
#line 2315 "parser.tab.cpp"
    break;

  case 53: /* Exp: TRUE  */
#line 920 "parser.ypp"
                {
		yyval = new Exp(TokenType::TOKEN_BOOL, "TRUE",1);
		int label_index = gen_code.emit("br label @");
        yyval->true_list = gen_code.makelist({label_index, FIRST});
	}
#line 2325 "parser.tab.cpp"
    break;

  case 54: /* Exp: FALSE  */
#line 925 "parser.ypp"
                 {
		yyval = new Exp(TokenType::TOKEN_BOOL, "FALSE",0);
		int label_index = gen_code.emit("br label @");
        yyval->false_list = gen_code.makelist({label_index, FIRST});
	}
#line 2335 "parser.tab.cpp"
    break;

  case 55: /* Exp: NOT Exp  */
#line 930 "parser.ypp"
                   {
		if(yyvsp[0]->value == 0) 
			yyval = new Exp(yyvsp[0]->type, "TRUE", 1);
		else 
			yyval = new Exp(yyvsp[0]->type, "FALSE", 0);
		string flippedBool = "%var"+to_string(gen_code.current_var++);
        string newPlace = "%var"+to_string(gen_code.current_var++);
        gen_code.emit(flippedBool + " = icmp ne i32 1, " + yyvsp[0]->place);
        gen_code.emit(newPlace + "= zext " + flippedBool +" i1 to i32");
        yyval->place=newPlace;
        yyval->true_list=yyvsp[0]->false_list;
        yyval->false_list=yyvsp[0]->true_list;
	}
#line 2353 "parser.tab.cpp"
    break;

  case 56: /* Exp: Exp AND M Exp  */
#line 943 "parser.ypp"
                         {
		if(yyvsp[-3]->type != TokenType::TOKEN_BOOL || yyvsp[0]->type != TokenType::TOKEN_BOOL)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}

		int new_val = yyvsp[-3]->value & yyvsp[0]->value;
		if(new_val == 0)
			yyval = new Exp(yyvsp[-3]->type, "FALSE", new_val);
		else 
			yyval = new Exp(yyvsp[-3]->type, "TRUE", new_val);
		yyval->quad=yyvsp[-1]->quad;
		gen_code.bpatch(yyvsp[-3]->true_list, yyval->quad);
        yyval->true_list = yyvsp[0]->true_list;
        yyval->false_list = gen_code.merge(yyvsp[-3]->false_list, yyvsp[0]->false_list);
        gen_code.bpatch(yyvsp[0]->start_list, yyvsp[0]->start_label);
        yyval->start_label = yyvsp[-3]->start_label;
        yyval->start_list = yyvsp[-3]->start_list;
		}
#line 2378 "parser.tab.cpp"
    break;

  case 57: /* Exp: Exp OR M Exp  */
#line 963 "parser.ypp"
                                {
			if(yyvsp[-3]->type != TokenType::TOKEN_BOOL || yyvsp[0]->type != TokenType::TOKEN_BOOL)
			{
				output::errorMismatch(yylineno);
				exit(2);
			}
			
			int new_val = yyvsp[-3]->value | yyvsp[0]->value;
			if(new_val == 0) 
				yyval = new Exp(yyvsp[-3]->type, "FALSE", new_val);
			else 
				yyval = new Exp(yyvsp[-3]->type, "TRUE", new_val);

			gen_code.bpatch(yyvsp[-3]->false_list, yyval->quad);
            yyval->false_list = yyvsp[0]->false_list;
            yyval->true_list = gen_code.merge(yyvsp[-3]->true_list, yyvsp[0]->true_list);
            gen_code.bpatch(yyvsp[0]->start_list, yyvsp[0]->start_label);
            yyval->start_label = yyvsp[-3]->start_label;
            yyval->start_list = yyvsp[-3]->start_list;
		}
#line 2403 "parser.tab.cpp"
    break;

  case 58: /* Exp: Exp RELOP Exp  */
#line 983 "parser.ypp"
                                 {
			//Mismatch check
			if(yyvsp[-2]->type == TokenType::TOKEN_UNDIF || yyvsp[-2]->type == TokenType::TOKEN_BOOL || yyvsp[-2]->type == TokenType::TOKEN_STRING ||
				yyvsp[0]->type == TokenType::TOKEN_UNDIF || yyvsp[0]->type == TokenType::TOKEN_STRING || yyvsp[0]->type == TokenType::TOKEN_BOOL)
			{
				output::errorMismatch(yylineno);
				exit(2);
			}

			//Value update
			int new_val;
			if(yyvsp[-1]->name == "==")
				new_val = yyvsp[-2]->value == yyvsp[0]->value;
			if(yyvsp[-1]->name == "!=")
				new_val = yyvsp[-2]->value != yyvsp[0]->value;
			if(yyvsp[-1]->name == "<")
				new_val = yyvsp[-2]->value < yyvsp[0]->value;
			if(yyvsp[-1]->name == ">")
				new_val = yyvsp[-2]->value > yyvsp[0]->value;
			if(yyvsp[-1]->name == "<=")
				new_val = yyvsp[-2]->value <= yyvsp[0]->value;
			if(yyvsp[-1]->name == ">=")
				new_val = yyvsp[-2]->value >= yyvsp[0]->value;

			if(new_val == 1) 
				yyval = new Exp(TokenType::TOKEN_BOOL, "TRUE", new_val);
			else 
				yyval = new Exp(TokenType::TOKEN_BOOL, "FALSE", new_val);

			string right_value = to_string(yyvsp[0]->value);
            string left_value = to_string(yyvsp[-2]->value);

            /* The values to use */
    		string right = yyvsp[0]->place == "" ? right_value : yyvsp[0]->place;
            string left = yyvsp[-2]->place == "" ? left_value : yyvsp[-2]->place;
            string op_llvm = "eq"; /* == */

            if (yyvsp[-1]->name == ">")
            {
            	op_llvm = "sgt";
            }
            else if (yyvsp[-1]->name == ">=")
            {
                op_llvm = "sge";
            }
            else if (yyvsp[-1]->name == "<")
            {
                op_llvm = "slt";
            }
            else if (yyvsp[-1]->name == "<=")
            {
                op_llvm = "sle";
            }
            else if (yyvsp[-1]->name == "!=")
            {
                op_llvm = "ne";
            }
            string target = "%var"+to_string(gen_code.current_var++);
            string finalRes = "%var"+to_string(gen_code.current_var++);
            gen_code.emit(target + " = icmp " + op_llvm + " i32 " + left + ", " + right);

            int label_index = gen_code.emit("br i1 " + target + " , label @ , label @");
            gen_code.emit(finalRes + " = zext i8 " + target + " to i32");

            yyval->true_list = gen_code.makelist({label_index, FIRST});
            yyval->false_list = gen_code.makelist({label_index, SECOND});
            yyval->place = finalRes;
            gen_code.bpatch(yyvsp[0]->start_list, yyvsp[0]->start_label);
            yyval->start_label = yyvsp[-2]->start_label;
            yyval->start_list = yyvsp[-2]->start_list;
	}
#line 2479 "parser.tab.cpp"
    break;

  case 59: /* Exp: LPAREN Type RPAREN Exp  */
#line 1054 "parser.ypp"
                                              {
		if(convert_table[yyvsp[-2]->type][yyvsp[0]->type] == TokenType::TOKEN_UNDIF)
		{
			output::errorMismatch(yylineno);
			exit(2);
		}
		if(yyvsp[-2]->type == TokenType::TOKEN_BOOL) 
			{
			    yyval = yyvsp[0];
			}
		if(yyvsp[-2]->type == TokenType::TOKEN_INT)
			{
			    yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			    if(yyvsp[0]->type==TokenType::TOKEN_B)
			    {
			         string next_var = "%var"+to_string(gen_code.current_var++);
					 auto target = yyvsp[0]->place == "" ? to_string(yyvsp[0]->value) : yyvsp[0]->place;
                     gen_code.emit(next_var + " = zext i8 " + target + " to i32");
                     yyval->place = next_var;
			    }
			}
		if(yyvsp[-2]->type == TokenType::TOKEN_B)
		{
			if(yyvsp[0]->type == TokenType::TOKEN_INT && yyvsp[0]->value > 255) 
			{
				output::errorByteTooLarge(yylineno, std::to_string(yyvsp[0]->value));
				exit(2);
			}
			yyval = new Exp(yyvsp[-2]->type,yyvsp[0]->name,yyvsp[0]->value);
			string next_var = "%var"+to_string(gen_code.current_var++);
			auto target = yyvsp[0]->place == "" ? to_string(yyvsp[0]->value) : yyvsp[0]->place;
			gen_code.emit(next_var + " = trunc i32 " + target + " to i8");
			yyval->place = next_var;
		}
	}
#line 2519 "parser.tab.cpp"
    break;


#line 2523 "parser.tab.cpp"

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

#line 1092 "parser.ypp"


int yyerror(const char* const s)
{
  extern int yylineno;
  output::errorSyn(yylineno);
  exit(2);
}

int main(){
//yydebug=1;
     int ret= yyparse();
	gen_code.emitGlobal(printf_llvm);
    gen_code.emitGlobal(zero_div_llvm);
    gen_code.emitGlobal(printi_llvm);

    gen_code.emitGlobal(print_llvm);
    gen_code.emitGlobal(exit_llvm);

    gen_code.printGlobalBuffer();
    gen_code.printCodeBuffer();
    return ret;
}


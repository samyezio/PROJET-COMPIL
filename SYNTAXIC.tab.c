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
#line 1 "SYNTAXIC.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TABLES_SYMBOLE.h"
void yyerror(const char *s);
char save_type[100];

int temp_count = 0;
int qc = 0;
char temp[20];
char str1[20];
char str2[20];

void new_temp(char *temp) {
    sprintf(temp, "t%d", temp_count++);
}

#line 90 "SYNTAXIC.tab.c"

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
    VAR = 258,                     /* VAR  */
    DECLARATION = 259,             /* DECLARATION  */
    INSTRUCTION = 260,             /* INSTRUCTION  */
    FOR = 261,                     /* FOR  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    CONST = 264,                   /* CONST  */
    READ = 265,                    /* READ  */
    WRITE = 266,                   /* WRITE  */
    EOL = 267,                     /* EOL  */
    IDF = 268,                     /* IDF  */
    STRING_LITTERAL = 269,         /* STRING_LITTERAL  */
    INT_TYPE = 270,                /* INT_TYPE  */
    FLOAT_TYPE = 271,              /* FLOAT_TYPE  */
    CHAR_TYPE = 272,               /* CHAR_TYPE  */
    FLOAT_CONST = 273,             /* FLOAT_CONST  */
    INTEGR_CONST = 274,            /* INTEGR_CONST  */
    INLINE_COMMENT = 275,          /* INLINE_COMMENT  */
    BLOCK_COMMENT = 276,           /* BLOCK_COMMENT  */
    PLUS = 277,                    /* PLUS  */
    SUB = 278,                     /* SUB  */
    EQUAL = 279,                   /* EQUAL  */
    MUL = 280,                     /* MUL  */
    DIVIDE = 281,                  /* DIVIDE  */
    MODULO = 282,                  /* MODULO  */
    EQ_COMP = 283,                 /* EQ_COMP  */
    NEQ_COMP = 284,                /* NEQ_COMP  */
    AND = 285,                     /* AND  */
    OR = 286,                      /* OR  */
    NEG = 287,                     /* NEG  */
    SUP = 288,                     /* SUP  */
    INF = 289,                     /* INF  */
    SUP_EQ = 290,                  /* SUP_EQ  */
    INF_EQ = 291,                  /* INF_EQ  */
    ABS = 292,                     /* ABS  */
    VIRGULE = 293,                 /* VIRGULE  */
    SC = 294,                      /* SC  */
    ACC_G = 295,                   /* ACC_G  */
    ACC_D = 296,                   /* ACC_D  */
    PAR_G = 297,                   /* PAR_G  */
    PAR_D = 298,                   /* PAR_D  */
    BRA_G = 299,                   /* BRA_G  */
    BRA_D = 300,                   /* BRA_D  */
    SEP_FOR = 301                  /* SEP_FOR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "SYNTAXIC.y"

 int int_val;
 char* str_val;
 float float_val;

#line 189 "SYNTAXIC.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VAR = 3,                        /* VAR  */
  YYSYMBOL_DECLARATION = 4,                /* DECLARATION  */
  YYSYMBOL_INSTRUCTION = 5,                /* INSTRUCTION  */
  YYSYMBOL_FOR = 6,                        /* FOR  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_CONST = 9,                      /* CONST  */
  YYSYMBOL_READ = 10,                      /* READ  */
  YYSYMBOL_WRITE = 11,                     /* WRITE  */
  YYSYMBOL_EOL = 12,                       /* EOL  */
  YYSYMBOL_IDF = 13,                       /* IDF  */
  YYSYMBOL_STRING_LITTERAL = 14,           /* STRING_LITTERAL  */
  YYSYMBOL_INT_TYPE = 15,                  /* INT_TYPE  */
  YYSYMBOL_FLOAT_TYPE = 16,                /* FLOAT_TYPE  */
  YYSYMBOL_CHAR_TYPE = 17,                 /* CHAR_TYPE  */
  YYSYMBOL_FLOAT_CONST = 18,               /* FLOAT_CONST  */
  YYSYMBOL_INTEGR_CONST = 19,              /* INTEGR_CONST  */
  YYSYMBOL_INLINE_COMMENT = 20,            /* INLINE_COMMENT  */
  YYSYMBOL_BLOCK_COMMENT = 21,             /* BLOCK_COMMENT  */
  YYSYMBOL_PLUS = 22,                      /* PLUS  */
  YYSYMBOL_SUB = 23,                       /* SUB  */
  YYSYMBOL_EQUAL = 24,                     /* EQUAL  */
  YYSYMBOL_MUL = 25,                       /* MUL  */
  YYSYMBOL_DIVIDE = 26,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 27,                    /* MODULO  */
  YYSYMBOL_EQ_COMP = 28,                   /* EQ_COMP  */
  YYSYMBOL_NEQ_COMP = 29,                  /* NEQ_COMP  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_OR = 31,                        /* OR  */
  YYSYMBOL_NEG = 32,                       /* NEG  */
  YYSYMBOL_SUP = 33,                       /* SUP  */
  YYSYMBOL_INF = 34,                       /* INF  */
  YYSYMBOL_SUP_EQ = 35,                    /* SUP_EQ  */
  YYSYMBOL_INF_EQ = 36,                    /* INF_EQ  */
  YYSYMBOL_ABS = 37,                       /* ABS  */
  YYSYMBOL_VIRGULE = 38,                   /* VIRGULE  */
  YYSYMBOL_SC = 39,                        /* SC  */
  YYSYMBOL_ACC_G = 40,                     /* ACC_G  */
  YYSYMBOL_ACC_D = 41,                     /* ACC_D  */
  YYSYMBOL_PAR_G = 42,                     /* PAR_G  */
  YYSYMBOL_PAR_D = 43,                     /* PAR_D  */
  YYSYMBOL_BRA_G = 44,                     /* BRA_G  */
  YYSYMBOL_BRA_D = 45,                     /* BRA_D  */
  YYSYMBOL_SEP_FOR = 46,                   /* SEP_FOR  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_S = 48,                         /* S  */
  YYSYMBOL_loopstatement = 49,             /* loopstatement  */
  YYSYMBOL_IfStatement = 50,               /* IfStatement  */
  YYSYMBOL_condition = 51,                 /* condition  */
  YYSYMBOL_thing = 52,                     /* thing  */
  YYSYMBOL_NUMBER = 53,                    /* NUMBER  */
  YYSYMBOL_thing4 = 54,                    /* thing4  */
  YYSYMBOL_thing2 = 55,                    /* thing2  */
  YYSYMBOL_EXP2 = 56,                      /* EXP2  */
  YYSYMBOL_instruction = 57,               /* instruction  */
  YYSYMBOL_instruction2 = 58,              /* instruction2  */
  YYSYMBOL_statement = 59,                 /* statement  */
  YYSYMBOL_thing3 = 60,                    /* thing3  */
  YYSYMBOL_types = 61,                     /* types  */
  YYSYMBOL_EXP = 62,                       /* EXP  */
  YYSYMBOL_FACTOR = 63,                    /* FACTOR  */
  YYSYMBOL_TERM = 64                       /* TERM  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   171

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    57,    59,    60,    63,    69,    75,    80,    87,    92,
      98,   103,   110,   111,   112,   113,   114,   115,   116,   118,
     119,   119,   121,   121,   122,   122,   123,   124,   125,   126,
     127,   129,   130,   131,   132,   133,   134,   136,   137,   138,
     139,   141,   142,   144,   150,   151,   152,   153,   154,   155,
     157,   167,   179,   179,   179,   181,   182,   188,   196,   197,
     204,   217,   226,   227,   228
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
  "\"end of file\"", "error", "\"invalid token\"", "VAR", "DECLARATION",
  "INSTRUCTION", "FOR", "IF", "ELSE", "CONST", "READ", "WRITE", "EOL",
  "IDF", "STRING_LITTERAL", "INT_TYPE", "FLOAT_TYPE", "CHAR_TYPE",
  "FLOAT_CONST", "INTEGR_CONST", "INLINE_COMMENT", "BLOCK_COMMENT", "PLUS",
  "SUB", "EQUAL", "MUL", "DIVIDE", "MODULO", "EQ_COMP", "NEQ_COMP", "AND",
  "OR", "NEG", "SUP", "INF", "SUP_EQ", "INF_EQ", "ABS", "VIRGULE", "SC",
  "ACC_G", "ACC_D", "PAR_G", "PAR_D", "BRA_G", "BRA_D", "SEP_FOR",
  "$accept", "S", "loopstatement", "IfStatement", "condition", "thing",
  "NUMBER", "thing4", "thing2", "EXP2", "instruction", "instruction2",
  "statement", "thing3", "types", "EXP", "FACTOR", "TERM", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       7,   -91,   -91,     7,     0,    12,    94,   -91,   -91,   -91,
     -91,   -91,   -91,   -30,   -18,   107,    10,    25,    52,   -91,
     -91,   -91,   -91,   -91,   -91,    64,    65,    16,     7,     7,
     -91,     7,     7,     7,    71,     1,    72,    89,    91,     7,
     -91,    15,    90,   -91,    94,    94,   -91,   -91,   -91,    70,
      54,    98,    17,   -91,    92,    93,    11,    19,   117,   113,
     -91,    37,     9,   120,    27,    73,    80,    82,   -91,     1,
       1,    95,   -91,   100,   121,   101,   -91,   103,   -91,    97,
      81,   -91,   102,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,    66,    66,    55,
     -91,   105,   -91,   106,   118,   119,   125,   127,   128,   130,
      55,    55,   109,    55,   137,   -91,   -91,   -91,   -91,   -91,
     -91,   108,   -91,   -91,   144,   -91,   110,    50,   115,   122,
      87,   -91,   114,    55,   -91,   139,   140,   141,   143,   145,
     116,   124,   -91,   -91,   -91,   -91,   -91,    55,   -91,   126,
     -91
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      10,    73,    72,     0,     0,     0,    65,    68,    74,     1,
       7,     8,     9,     0,     0,     0,     0,     0,     0,    62,
      63,    64,     3,     4,     5,    52,     0,     0,     0,     0,
       6,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    60,     0,     2,    66,    67,    69,    70,    71,     0,
      32,     0,     0,    28,     0,     0,     0,     0,     0,     0,
      58,     0,     0,    25,     0,     0,     0,     0,    33,     0,
       0,     0,    59,     0,     0,     0,    53,    60,    61,     0,
       0,    41,     0,    22,    31,    30,    23,    24,    15,    14,
      16,    17,    18,    19,    29,    20,    21,    26,    27,    50,
      54,     0,    55,     0,     0,     0,     0,     0,     0,     0,
      50,    50,     0,    50,     0,    57,    42,    43,    46,    44,
      45,     0,    48,    49,    12,    47,     0,     0,     0,     0,
      34,    35,     0,    50,    56,     0,     0,     0,     0,     0,
       0,     0,    36,    37,    40,    38,    39,    50,    13,     0,
      11
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   159,   162,    56,   -91,    51,   -91,   -91,   -91,
     -90,   146,     4,   111,   153,    -3,    99,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,   110,   111,    52,    95,    86,    53,   132,    82,
     112,    24,   113,    42,    26,     5,     6,     7
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       9,    27,     8,    10,    11,    12,    13,    14,    25,    15,
      16,    17,    34,    18,    50,    19,    20,    21,     1,     2,
     122,   123,    83,   125,    35,     1,     2,    84,    85,    25,
      46,    47,    48,    51,    28,    29,    57,     3,    28,    29,
      88,    28,    29,   141,     3,    84,    85,    69,    70,    74,
      80,    30,    37,    58,    75,    43,    81,   149,    76,    59,
      71,    13,    14,   130,    15,    16,    17,    38,    18,   131,
      19,    20,    21,    15,    16,    17,    39,    18,    41,    19,
      20,    21,    62,    63,    49,    54,    90,    64,    65,    66,
      67,    84,    85,    92,    61,    94,    69,    70,    84,    85,
      84,    85,    55,   104,   105,    56,   106,   107,   108,   135,
     136,    68,   137,   138,   139,    89,    91,    93,    96,    31,
      32,    33,    19,    20,    21,    97,    98,    44,    45,    60,
      77,    72,    79,    87,   101,    99,    73,   116,   117,   100,
     102,    58,   103,   114,   118,   115,   119,   120,   109,   121,
     124,   126,   128,   129,   127,   133,   147,   140,   142,   143,
     144,   134,   145,    22,   146,   148,    23,   150,    36,    78,
       0,    40
};

static const yytype_int16 yycheck[] =
{
       0,     4,     3,     3,     4,     5,     6,     7,     4,     9,
      10,    11,    42,    13,    13,    15,    16,    17,    18,    19,
     110,   111,    13,   113,    42,    18,    19,    18,    19,    25,
      31,    32,    33,    32,    22,    23,    39,    37,    22,    23,
      13,    22,    23,   133,    37,    18,    19,    30,    31,    38,
      13,    39,    42,    38,    43,    39,    19,   147,    39,    44,
      43,     6,     7,    13,     9,    10,    11,    42,    13,    19,
      15,    16,    17,     9,    10,    11,    24,    13,    13,    15,
      16,    17,    28,    29,    13,    13,    13,    33,    34,    35,
      36,    18,    19,    13,    24,    13,    30,    31,    18,    19,
      18,    19,    13,    22,    23,    14,    25,    26,    27,    22,
      23,    13,    25,    26,    27,    64,    65,    66,    67,    25,
      26,    27,    15,    16,    17,    69,    70,    28,    29,    39,
      13,    39,    19,    13,    13,    40,    43,    19,    19,    39,
      39,    38,    45,    38,    19,    39,    19,    19,    46,    19,
      41,    14,     8,    43,    46,    40,    40,    43,    19,    19,
      19,    39,    19,     4,    19,    41,     4,    41,    15,    58,
      -1,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    19,    37,    48,    62,    63,    64,    64,     0,
       3,     4,     5,     6,     7,     9,    10,    11,    13,    15,
      16,    17,    49,    50,    58,    59,    61,    62,    22,    23,
      39,    25,    26,    27,    42,    42,    61,    42,    42,    24,
      58,    13,    60,    39,    63,    63,    64,    64,    64,    13,
      13,    32,    51,    54,    13,    13,    14,    62,    38,    44,
      39,    24,    28,    29,    33,    34,    35,    36,    13,    30,
      31,    43,    39,    43,    38,    43,    39,    13,    60,    19,
      13,    19,    56,    13,    18,    19,    53,    13,    13,    53,
      13,    53,    13,    53,    13,    52,    53,    51,    51,    40,
      39,    13,    39,    45,    22,    23,    25,    26,    27,    46,
      49,    50,    57,    59,    38,    39,    19,    19,    19,    19,
      19,    19,    57,    57,    41,    57,    14,    46,     8,    43,
      13,    19,    55,    40,    39,    22,    23,    25,    26,    27,
      43,    57,    19,    19,    19,    19,    19,    40,    41,    57,
      41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    52,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    56,    56,    56,    56,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      60,    60,    61,    61,    61,    62,    62,    62,    63,    63,
      63,    63,    64,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     2,     2,     2,     2,     2,     2,
       0,    13,     7,    11,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     1,     1,
       1,     1,     1,     2,     1,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     2,     2,     2,
       0,     2,     0,     4,     5,     5,     9,     6,     3,     4,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     1,     1,     2
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
  case 2: /* S: S EXP SC  */
#line 46 "SYNTAXIC.y"
                             { printf("Result = %d\n", (yyvsp[-1].float_val)); }
#line 1333 "SYNTAXIC.tab.c"
    break;

  case 6: /* S: EXP SC  */
#line 50 "SYNTAXIC.y"
                             { printf("Result = %d\n", (yyvsp[-1].float_val)); }
#line 1339 "SYNTAXIC.tab.c"
    break;

  case 7: /* S: S VAR  */
#line 51 "SYNTAXIC.y"
          {printf("partie pour les variables globales .\n");}
#line 1345 "SYNTAXIC.tab.c"
    break;

  case 8: /* S: S DECLARATION  */
#line 52 "SYNTAXIC.y"
                  {printf("partie pour LA DECLARATION .\n");}
#line 1351 "SYNTAXIC.tab.c"
    break;

  case 9: /* S: S INSTRUCTION  */
#line 53 "SYNTAXIC.y"
                  {printf("partie pour LES INSTRUCTION .\n");}
#line 1357 "SYNTAXIC.tab.c"
    break;

  case 11: /* loopstatement: FOR PAR_G IDF EQUAL EXP2 SEP_FOR INTEGR_CONST SEP_FOR thing2 PAR_D ACC_G instruction ACC_D  */
#line 57 "SYNTAXIC.y"
                                                                                                           { printf("Valid FOR loop.\n"); }
#line 1363 "SYNTAXIC.tab.c"
    break;

  case 12: /* IfStatement: IF PAR_G condition PAR_D ACC_G instruction ACC_D  */
#line 59 "SYNTAXIC.y"
                                                               { printf("Valid IF statement\n"); }
#line 1369 "SYNTAXIC.tab.c"
    break;

  case 13: /* IfStatement: IF PAR_G condition PAR_D ACC_G instruction ACC_D ELSE ACC_G instruction ACC_D  */
#line 60 "SYNTAXIC.y"
                                                                                            { printf("Valid IF statement\n"); }
#line 1375 "SYNTAXIC.tab.c"
    break;

  case 14: /* condition: IDF SUP NUMBER  */
#line 63 "SYNTAXIC.y"
                          {
   new_temp(temp);
   sprintf(str1, "%2.f", (yyvsp[0].float_val));
   quadr(">", (yyvsp[-2].str_val), str1, temp);
   (yyval.str_val) = temp;
}
#line 1386 "SYNTAXIC.tab.c"
    break;

  case 15: /* condition: IDF SUP IDF  */
#line 69 "SYNTAXIC.y"
            {
   new_temp(temp);
   quadr(">", (yyvsp[-2].str_val), (yyvsp[0].str_val), temp);
   (yyval.str_val) = temp;
}
#line 1396 "SYNTAXIC.tab.c"
    break;

  case 16: /* condition: IDF INF IDF  */
#line 75 "SYNTAXIC.y"
               {
  new_temp(temp);
   quadr("<", (yyvsp[-2].str_val), (yyvsp[0].str_val), temp);
   (yyval.str_val) = temp;
}
#line 1406 "SYNTAXIC.tab.c"
    break;

  case 17: /* condition: IDF INF NUMBER  */
#line 80 "SYNTAXIC.y"
                 {
   new_temp(temp);
   sprintf(str1, "%2.f", (yyvsp[0].float_val));
   quadr("<", (yyvsp[-2].str_val), str1, temp);
   (yyval.str_val) = temp;
}
#line 1417 "SYNTAXIC.tab.c"
    break;

  case 18: /* condition: IDF SUP_EQ IDF  */
#line 87 "SYNTAXIC.y"
                 {
   new_temp(temp);
   quadr(">=", (yyvsp[-2].str_val), (yyvsp[0].str_val), temp);
   (yyval.str_val) = temp;
}
#line 1427 "SYNTAXIC.tab.c"
    break;

  case 19: /* condition: IDF SUP_EQ NUMBER  */
#line 92 "SYNTAXIC.y"
                    {
    new_temp(temp);
   sprintf(str1, "%2.f", (yyvsp[0].float_val));
   quadr(">=", (yyvsp[-2].str_val), str1, temp);
   (yyval.str_val) = temp;
}
#line 1438 "SYNTAXIC.tab.c"
    break;

  case 20: /* condition: IDF INF_EQ thing  */
#line 98 "SYNTAXIC.y"
                  {
  new_temp(temp);
   quadr("<=", (yyvsp[-2].str_val), (yyvsp[0].str_val), temp);
   (yyval.str_val) = temp;
}
#line 1448 "SYNTAXIC.tab.c"
    break;

  case 21: /* condition: IDF INF_EQ NUMBER  */
#line 103 "SYNTAXIC.y"
                   {
   new_temp(temp);
   sprintf(str1, "%2.f", (yyvsp[0].float_val));
   quadr("<=", (yyvsp[-2].str_val), str1, temp);
   (yyval.str_val) = temp;
}
#line 1459 "SYNTAXIC.tab.c"
    break;

  case 30: /* NUMBER: INTEGR_CONST  */
#line 119 "SYNTAXIC.y"
                     { (yyval.float_val) = (yyvsp[0].int_val); }
#line 1465 "SYNTAXIC.tab.c"
    break;

  case 31: /* NUMBER: FLOAT_CONST  */
#line 119 "SYNTAXIC.y"
                                                { (yyval.float_val) = (yyvsp[0].float_val); }
#line 1471 "SYNTAXIC.tab.c"
    break;

  case 53: /* statement: IDF EQUAL EXP SC  */
#line 144 "SYNTAXIC.y"
                             { 
    printf("Assignment: %s = %g\n", (yyvsp[-3].str_val), (yyvsp[-1].float_val)); 
    if (check_declaration((yyvsp[-3].str_val))==0){
      printf("semantic error idf %s not declared \n",(yyvsp[-3].str_val));
    }
    }
#line 1482 "SYNTAXIC.tab.c"
    break;

  case 54: /* statement: READ PAR_G IDF PAR_D SC  */
#line 150 "SYNTAXIC.y"
                                    { printf("Read variable: %s\n", (yyvsp[-2].str_val)); }
#line 1488 "SYNTAXIC.tab.c"
    break;

  case 55: /* statement: WRITE PAR_G STRING_LITTERAL PAR_D SC  */
#line 151 "SYNTAXIC.y"
                                                 { printf("Write: %s\n", (yyvsp[-2].str_val)); }
#line 1494 "SYNTAXIC.tab.c"
    break;

  case 56: /* statement: WRITE PAR_G STRING_LITTERAL VIRGULE IDF VIRGULE STRING_LITTERAL PAR_D SC  */
#line 152 "SYNTAXIC.y"
                                                                                     { printf("Write: %s\n", (yyvsp[-6].str_val)); printf("Write: %s\n", (yyvsp[-2].str_val)); }
#line 1500 "SYNTAXIC.tab.c"
    break;

  case 57: /* statement: types IDF BRA_G INTEGR_CONST BRA_D SC  */
#line 153 "SYNTAXIC.y"
                                                  { printf("Array of size: %d\n", (yyvsp[-2].int_val)); }
#line 1506 "SYNTAXIC.tab.c"
    break;

  case 58: /* statement: types thing3 SC  */
#line 154 "SYNTAXIC.y"
                            { printf("Declaration of variable of type: %s\n", (yyvsp[-2].str_val)); }
#line 1512 "SYNTAXIC.tab.c"
    break;

  case 59: /* statement: CONST types IDF SC  */
#line 155 "SYNTAXIC.y"
                               { printf("Declaration of CONST of type: %s\n", (yyvsp[-2].str_val)); }
#line 1518 "SYNTAXIC.tab.c"
    break;

  case 60: /* thing3: IDF  */
#line 157 "SYNTAXIC.y"
               {
    if(check_declaration((yyvsp[0].str_val))==0)
      {
         insere_types ((yyvsp[0].str_val),save_type);
      }
    else {
        printf("semantic Error: variable %s double declared\n", (yyvsp[0].str_val));
        YYABORT;
    }
    }
#line 1533 "SYNTAXIC.tab.c"
    break;

  case 61: /* thing3: IDF VIRGULE thing3  */
#line 167 "SYNTAXIC.y"
                      {
    if(check_declaration((yyvsp[-2].str_val))==0)
      {
         insere_types ((yyvsp[-2].str_val),save_type);
      }
    else {
        printf("semantic Error: variable %s double declared\n", (yyvsp[-2].str_val));
        YYABORT;
    }
    }
#line 1548 "SYNTAXIC.tab.c"
    break;

  case 62: /* types: INT_TYPE  */
#line 179 "SYNTAXIC.y"
                 {strcpy(save_type,(yyvsp[0].str_val));}
#line 1554 "SYNTAXIC.tab.c"
    break;

  case 63: /* types: FLOAT_TYPE  */
#line 179 "SYNTAXIC.y"
                                                      {strcpy(save_type,(yyvsp[0].str_val));}
#line 1560 "SYNTAXIC.tab.c"
    break;

  case 64: /* types: CHAR_TYPE  */
#line 179 "SYNTAXIC.y"
                                                                                          {strcpy(save_type,(yyvsp[0].str_val));}
#line 1566 "SYNTAXIC.tab.c"
    break;

  case 65: /* EXP: FACTOR  */
#line 181 "SYNTAXIC.y"
             { (yyval.float_val) = (yyvsp[0].float_val); }
#line 1572 "SYNTAXIC.tab.c"
    break;

  case 66: /* EXP: EXP PLUS FACTOR  */
#line 182 "SYNTAXIC.y"
                      { (yyval.float_val) = (yyvsp[-2].float_val) + (yyvsp[0].float_val);
           new_temp(temp);
           sprintf(str1, "%.2f", (yyvsp[-2].float_val));
           sprintf(str2, "%.2f", (yyvsp[0].float_val));
           quadr("+", str1, str2, temp);
           (yyval.float_val) = atof(strdup(temp)); }
#line 1583 "SYNTAXIC.tab.c"
    break;

  case 67: /* EXP: EXP SUB FACTOR  */
#line 188 "SYNTAXIC.y"
                     { (yyval.float_val) = (yyvsp[-2].float_val) - (yyvsp[0].float_val);
           new_temp(temp);
           sprintf(str1, "%.2f", (yyvsp[-2].float_val));
           sprintf(str2, "%.2f", (yyvsp[0].float_val));
           quadr("-", str1, str2, temp);
           (yyval.float_val) = atof(strdup(temp)); 
     }
#line 1595 "SYNTAXIC.tab.c"
    break;

  case 68: /* FACTOR: TERM  */
#line 196 "SYNTAXIC.y"
              { (yyval.float_val) = (yyvsp[0].float_val); }
#line 1601 "SYNTAXIC.tab.c"
    break;

  case 69: /* FACTOR: FACTOR MUL TERM  */
#line 197 "SYNTAXIC.y"
                         { (yyval.float_val) = (yyvsp[-2].float_val) * (yyvsp[0].float_val);
           new_temp(temp);
           sprintf(str1, "%.2f", (yyvsp[-2].float_val));
           sprintf(str2, "%.2f", (yyvsp[0].float_val));
           quadr("*", str1, str2, temp);
           (yyval.float_val) = atof(strdup(temp)); 
           }
#line 1613 "SYNTAXIC.tab.c"
    break;

  case 70: /* FACTOR: FACTOR DIVIDE TERM  */
#line 204 "SYNTAXIC.y"
                            {
           if ((yyvsp[0].float_val) == 0) { 
               yyerror("DIVISION by zero");
               YYABORT;
           } else {
               (yyval.float_val) = (yyvsp[-2].float_val) / (yyvsp[0].float_val);
           new_temp(temp);
           sprintf(str1, "%.2f", (yyvsp[-2].float_val));
           sprintf(str2, "%.2f", (yyvsp[0].float_val));
           quadr("/", str1, str2, temp);
           (yyval.float_val) = atof(strdup(temp)); 
           }
         }
#line 1631 "SYNTAXIC.tab.c"
    break;

  case 71: /* FACTOR: FACTOR MODULO TERM  */
#line 217 "SYNTAXIC.y"
                            {
           if ((yyvsp[0].float_val) == 0) { 
               yyerror("MODULO by zero");
               YYABORT;
           } else {
               (yyval.float_val) = (int)(yyvsp[-2].float_val) % (int)(yyvsp[0].float_val);
           }
         }
#line 1644 "SYNTAXIC.tab.c"
    break;

  case 72: /* TERM: INTEGR_CONST  */
#line 226 "SYNTAXIC.y"
                    { (yyval.float_val) = (float) (yyvsp[0].int_val); }
#line 1650 "SYNTAXIC.tab.c"
    break;

  case 73: /* TERM: FLOAT_CONST  */
#line 227 "SYNTAXIC.y"
                   {(yyval.float_val)=(yyvsp[0].float_val);}
#line 1656 "SYNTAXIC.tab.c"
    break;

  case 74: /* TERM: ABS TERM  */
#line 228 "SYNTAXIC.y"
                { (yyval.float_val) = (yyvsp[0].float_val) >= 0 ? (yyvsp[0].float_val) : -(yyvsp[0].float_val); }
#line 1662 "SYNTAXIC.tab.c"
    break;


#line 1666 "SYNTAXIC.tab.c"

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

#line 230 "SYNTAXIC.y"

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main() {
    yyparse();
    print_quad();
    return 0;
}

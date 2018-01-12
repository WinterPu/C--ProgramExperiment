/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "MiniJ_parse.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "MiniJ_tree.h"
	#include "MiniJ_lex.h"
	#include "MiniJ_parse.h"

#line 75 "MiniJ_parse.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "MiniJ_parse.h".  */
#ifndef YY_YY_MINIJ_PARSE_H_INCLUDED
# define YY_YY_MINIJ_PARSE_H_INCLUDED
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
    CLASS = 258,
    PUB = 259,
    STATIC = 260,
    AND = 261,
    LT = 262,
    ADD = 263,
    MINUS = 264,
    TIMES = 265,
    LBP = 266,
    RBP = 267,
    LSP = 268,
    RSP = 269,
    LP = 270,
    RP = 271,
    INT = 272,
    IF = 273,
    ELSE = 274,
    WHILE = 275,
    PRINT = 276,
    ASSIGN = 277,
    VOID = 278,
    MAIN = 279,
    STR = 280,
    RETURN = 281,
    SEMI = 282,
    COMMA = 283,
    THIS = 284,
    NEW = 285,
    DOT = 286,
    ID = 287,
    LIT = 288,
    COMMENT = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 27 "MiniJ_parse.y" /* yacc.c:355  */
 
		jSTM* sm;
		jEXP* ex;
		int   nu;
		char* sr;
	

#line 158 "MiniJ_parse.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINIJ_PARSE_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "MiniJ_parse.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    65,    72,    86,    94,    99,   110,   117,
     121,   130,   138,   143,   157,   165,   170,   179,   184,   189,
     194,   202,   210,   215,   221,   229,   236,   242,   251,   261,
     268,   275,   282,   289,   296,   303,   310,   316,   323,   329,
     335,   340,   346,   354,   362,   367,   375
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUB", "STATIC", "AND", "LT",
  "ADD", "MINUS", "TIMES", "LBP", "RBP", "LSP", "RSP", "LP", "RP", "INT",
  "IF", "ELSE", "WHILE", "PRINT", "ASSIGN", "VOID", "MAIN", "STR",
  "RETURN", "SEMI", "COMMA", "THIS", "NEW", "DOT", "ID", "LIT", "COMMENT",
  "$accept", "prog", "mainc", "cdcls", "cdcl", "vdcls", "vdcl", "mdcls",
  "mdcl", "formals", "frest", "type", "stmts", "stmt", "exp", "exps",
  "erest", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289
};
# endif

#define YYPACT_NINF -86

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-86)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,   -16,    18,    32,    37,   -86,    17,   -86,    32,    48,
      46,   -86,    53,     2,    42,    63,   -86,    74,     2,    45,
      43,    67,     2,    70,    74,   -86,    56,    77,   -86,    71,
     -86,   -86,   -86,    79,    94,   104,     2,   105,   112,    97,
      98,   120,   107,   118,     2,     2,   -86,   125,    73,   111,
       2,    73,   129,   130,   131,    33,   128,    73,   107,    73,
     144,   178,   178,   178,   178,   178,   178,   -86,   -86,   147,
     -86,   178,   -86,    36,   142,   -86,     5,    35,    54,    65,
      80,    91,   149,   117,   156,   155,   178,   178,   178,   178,
     178,   178,   178,    73,   178,    73,   135,   150,   -86,   159,
     -86,   -86,   178,   170,   106,   173,   182,     7,     7,    -8,
     132,   171,   175,   169,   -86,   -86,   178,   -86,   143,   -86,
     -86,   178,   -86,   -86,    73,   158,   -86,   132,   -86,   -86,
     -86
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     6,     0,     1,     0,     2,     6,     0,
       0,     5,     0,     9,     0,    19,    20,    12,     9,     0,
       0,     0,     0,     0,    12,     8,     0,     0,    18,     0,
       7,    11,    10,     0,     0,     0,    15,     0,     0,     0,
       0,     0,    17,     0,     9,     0,    14,     0,    22,     0,
       9,    22,     0,     0,     0,     0,     0,    22,    17,    22,
       0,     0,     0,     0,     0,     0,     0,    21,    16,     0,
      23,     0,    40,     0,    39,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,     0,     0,     0,    27,     0,
       4,    36,     0,     0,     0,    32,    33,    29,    30,    31,
      46,     0,     0,    37,    25,    26,     0,    13,     0,    42,
      34,     0,    43,    35,     0,     0,    41,    46,    24,    28,
      45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   187,   -86,   -13,   -86,   172,   -86,   -86,
     140,    11,    51,   -85,   -62,   -86,    72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,     8,    17,    18,    23,    24,    38,
      46,    19,    56,    57,    76,   111,   122
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      77,    78,    79,    80,    81,    25,     1,    92,   112,    83,
     114,    87,    88,    89,    90,    91,     4,    91,     5,    15,
      92,    93,    92,    94,   104,   105,   106,   107,   108,   109,
     110,    48,   113,    29,    16,     6,    94,    59,    94,   128,
     118,    87,    88,    89,    90,    91,    64,    39,     9,    10,
      92,    95,    12,    84,   125,    65,    49,    13,    14,   127,
      87,    88,    89,    90,    91,    20,    94,    27,    85,    92,
      96,    87,    88,    89,    90,    91,    21,    26,    22,    97,
      92,    28,    30,    32,    51,    94,    87,    88,    89,    90,
      91,    52,    33,    53,    54,    92,    94,    87,    88,    89,
      90,    91,    60,    34,    35,    55,    92,    98,    67,    36,
      69,    94,    87,    88,    89,    90,    91,    37,    99,    40,
     120,    92,    94,    87,    88,    89,    90,    91,    41,    42,
      43,    44,    92,   101,    47,    45,    50,    94,    87,    88,
      89,    90,    91,    58,    61,    62,    63,    92,    94,    87,
      88,    89,    90,    91,    66,    86,    70,   126,    92,    82,
     121,   100,   115,    94,    87,    88,    89,    90,    91,   102,
     103,   117,   116,    92,    94,    87,    88,    89,    90,    91,
      88,    89,    90,    91,    92,   129,   119,   123,    92,    94,
      89,    90,    91,    71,   124,    11,    31,    92,    68,   130,
      94,     0,     0,     0,    94,     0,     0,    72,    73,     0,
      74,    75,     0,    94
};

static const yytype_int8 yycheck[] =
{
      62,    63,    64,    65,    66,    18,     3,    15,    93,    71,
      95,     6,     7,     8,     9,    10,    32,    10,     0,    17,
      15,    16,    15,    31,    86,    87,    88,    89,    90,    91,
      92,    44,    94,    22,    32,     3,    31,    50,    31,   124,
     102,     6,     7,     8,     9,    10,    13,    36,    11,    32,
      15,    16,     4,    17,   116,    22,    45,    11,     5,   121,
       6,     7,     8,     9,    10,    23,    31,    24,    32,    15,
      16,     6,     7,     8,     9,    10,    13,    32,     4,    14,
      15,    14,    12,    27,    11,    31,     6,     7,     8,     9,
      10,    18,    15,    20,    21,    15,    31,     6,     7,     8,
       9,    10,    51,    32,    25,    32,    15,    27,    57,    15,
      59,    31,     6,     7,     8,     9,    10,    13,    27,    14,
      14,    15,    31,     6,     7,     8,     9,    10,    16,    32,
      32,    11,    15,    16,    16,    28,    11,    31,     6,     7,
       8,     9,    10,    32,    15,    15,    15,    15,    31,     6,
       7,     8,     9,    10,    26,    13,    12,    14,    15,    12,
      28,    12,    27,    31,     6,     7,     8,     9,    10,    13,
      15,    12,    22,    15,    31,     6,     7,     8,     9,    10,
       7,     8,     9,    10,    15,    27,    16,    16,    15,    31,
       8,     9,    10,    15,    19,     8,    24,    15,    58,   127,
      31,    -1,    -1,    -1,    31,    -1,    -1,    29,    30,    -1,
      32,    33,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    36,    37,    32,     0,     3,    38,    39,    11,
      32,    38,     4,    11,     5,    17,    32,    40,    41,    46,
      23,    13,     4,    42,    43,    40,    32,    24,    14,    46,
      12,    42,    27,    15,    32,    25,    15,    13,    44,    46,
      14,    16,    32,    32,    11,    28,    45,    16,    40,    46,
      11,    11,    18,    20,    21,    32,    47,    48,    32,    40,
      47,    15,    15,    15,    13,    22,    26,    47,    45,    47,
      12,    15,    29,    30,    32,    33,    49,    49,    49,    49,
      49,    49,    12,    49,    17,    32,    13,     6,     7,     8,
       9,    10,    15,    16,    31,    16,    16,    14,    27,    27,
      12,    16,    13,    15,    49,    49,    49,    49,    49,    49,
      49,    50,    48,    49,    48,    27,    22,    12,    49,    16,
      14,    28,    51,    16,    19,    49,    14,    49,    48,    27,
      51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    38,    38,    39,    40,    40,
      41,    42,    42,    43,    44,    44,    45,    45,    46,    46,
      46,    47,    47,    48,    48,    48,    48,    48,    48,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    50,    50,    51,    51
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,    18,     2,     0,     6,     2,     0,
       3,     2,     0,    13,     3,     0,     4,     0,     3,     1,
       1,     2,     0,     3,     7,     5,     5,     4,     7,     3,
       3,     3,     3,     3,     4,     4,     3,     3,     1,     1,
       1,     5,     4,     2,     0,     3,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 57 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
		  program = create_stm();
		  program->stm_id = sPROG;
		  program->stm1 = (yyvsp[-1].sm);
		  program->stm2 = (yyvsp[0].sm);
		  (yyval.sm) = program;
		}
#line 1350 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 3:
#line 65 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
		  program = NULL;
		  (yyval.sm) = program;
		  fprintf(stderr, "****** Parsing failed!\n");
		}
#line 1360 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "MiniJ_parse.y" /* yacc.c:1646  */
    { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sMAINC;
		  (yyval.sm)->exp1 = create_exp();
		  (yyval.sm)->exp1->exp_id = eID;
		  strcpy((yyval.sm)->exp1->name, (yyvsp[-16].sr));
		  (yyval.sm)->exp2 = create_exp();
		  (yyval.sm)->exp2->exp_id = eID;
		  strcpy((yyval.sm)->exp2->name, (yyvsp[-6].sr));
		  (yyval.sm)->stm1 = (yyvsp[-3].sm);
		  (yyval.sm)->stm2 = (yyvsp[-2].sm);
		}
#line 1376 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 5:
#line 87 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sCDCLS;
		  (yyval.sm)->stm1 = (yyvsp[-1].sm);
		  (yyval.sm)->stm2 = (yyvsp[0].sm);
		}
#line 1387 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 6:
#line 94 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
			(yyval.sm) = NULL;
		}
#line 1395 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 7:
#line 100 "MiniJ_parse.y" /* yacc.c:1646  */
    { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sCDCL;
		  (yyval.sm)->exp1 = create_exp();
		  (yyval.sm)->exp1->exp_id = eID;
		  strcpy((yyval.sm)->exp1->name, (yyvsp[-4].sr));
		  (yyval.sm)->stm1 = (yyvsp[-2].sm);
		  (yyval.sm)->stm2 = (yyvsp[-1].sm);
		}
#line 1408 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 8:
#line 111 "MiniJ_parse.y" /* yacc.c:1646  */
    { (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sVDCLS;
		  (yyval.sm)->stm1 = (yyvsp[-1].sm);
		  (yyval.sm)->stm2 = (yyvsp[0].sm);
		}
#line 1418 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 9:
#line 117 "MiniJ_parse.y" /* yacc.c:1646  */
    { (yyval.sm) = NULL;
		}
#line 1425 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 10:
#line 122 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sVDCL;
		  (yyval.sm)->exp1 = (yyvsp[-2].ex);
		  strcpy((yyval.sm)->exp1->name, (yyvsp[-1].sr));
		}
#line 1436 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 11:
#line 131 "MiniJ_parse.y" /* yacc.c:1646  */
    {	
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sMDCLS;
		  (yyval.sm)->stm1 = (yyvsp[-1].sm);
		  (yyval.sm)->stm2 = (yyvsp[0].sm);
		}
#line 1447 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "MiniJ_parse.y" /* yacc.c:1646  */
    {
			(yyval.sm) = NULL;
		}
#line 1455 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sMDCL;
		  (yyval.sm)->exp1 = (yyvsp[-11].ex);
		  strcpy((yyval.sm)->exp1->name, (yyvsp[-10].sr));
		  (yyval.sm)->exp2 = (yyvsp[-8].ex);
		  (yyval.sm)->stm1 = (yyvsp[-5].sm);
		  (yyval.sm)->stm2 = (yyvsp[-4].sm);
 		  (yyval.sm)->stm3 = create_stm();
		  (yyval.sm)->stm3->exp1 = (yyvsp[-2].ex);
		}
#line 1471 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 14:
#line 158 "MiniJ_parse.y" /* yacc.c:1646  */
    { (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eFORMALS;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  strcpy((yyval.ex)->exp1->name, (yyvsp[-1].sr));
		  (yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1482 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 15:
#line 165 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
			(yyval.ex) = NULL;
		}
#line 1490 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 16:
#line 171 "MiniJ_parse.y" /* yacc.c:1646  */
    { 
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eFREST;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  strcpy((yyval.ex)->exp1->name, (yyvsp[-1].sr));
		  (yyval.ex)->next = (yyvsp[0].ex);
		}
#line 1502 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 17:
#line 179 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = NULL;
		}
#line 1510 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 18:
#line 185 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = tINTARR;		
		}
#line 1519 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 19:
#line 190 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = tINT;	
		}
#line 1528 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 20:
#line 195 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = tID;
		  strcpy((yyval.ex)->name, (yyvsp[0].sr));
		}
#line 1538 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 21:
#line 203 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = sSTMTS;
		  (yyval.sm)->stm1 = (yyvsp[-1].sm);
		  (yyval.sm)->stm2 = (yyvsp[0].sm);
		}
#line 1549 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "MiniJ_parse.y" /* yacc.c:1646  */
    {
			(yyval.sm) = NULL;
		}
#line 1557 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 23:
#line 216 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = mBSTMT;
		  (yyval.sm)->stm1 = (yyvsp[-1].sm);
		}
#line 1567 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 24:
#line 222 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = mIF;
 		  (yyval.sm)->exp1 = (yyvsp[-4].ex);
		  (yyval.sm)->stm1 = (yyvsp[-2].sm);
 		  (yyval.sm)->stm2 = (yyvsp[0].sm);
		}
#line 1579 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = mWHILE ;
 		  (yyval.sm)->exp1 = (yyvsp[-2].ex);
		  (yyval.sm)->stm1 = (yyvsp[0].sm);	
		}
#line 1590 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 26:
#line 237 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = mPRINT ;
 		  (yyval.sm)->exp1 = (yyvsp[-2].ex);
		}
#line 1600 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 27:
#line 243 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = mASSIGN ;
 		  (yyval.sm)->exp1 = create_exp();
		  (yyval.sm)->exp1->exp_id = eID;	  
		  strcpy((yyval.sm)->exp1->name, (yyvsp[-3].sr));		  
 		  (yyval.sm)->exp2 = (yyvsp[-1].ex);
		}
#line 1613 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 28:
#line 252 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.sm) = create_stm();
		  (yyval.sm)->stm_id = mARRASS ;
		  strcpy((yyval.sm)->exp1->name, (yyvsp[-6].sr));
		  (yyval.sm)->exp1->exp1 = (yyvsp[-4].ex);
		  (yyval.sm)->exp2 = (yyvsp[-1].ex);
		}
#line 1625 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 29:
#line 262 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eADD;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);
		}
#line 1636 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 30:
#line 269 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eMINUS;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);
		}
#line 1647 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 31:
#line 276 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eTIMES;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);
		}
#line 1658 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 32:
#line 283 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eAND;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);
		}
#line 1669 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 33:
#line 290 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eLT;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);
		}
#line 1680 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 34:
#line 297 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eARRELE;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  strcpy((yyval.ex)->name, (yyvsp[-3].sr));	
		}
#line 1691 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 35:
#line 304 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eFCALL ;
		  (yyval.ex)->exp1 = (yyvsp[-3].ex);
		  (yyval.ex)->exp2 = (yyvsp[-1].ex);		
		}
#line 1702 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 36:
#line 311 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = ePAREN;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		}
#line 1712 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 37:
#line 317 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id = eDOTOBJ ;
		  (yyval.ex)->exp1 = (yyvsp[-2].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);		
		}
#line 1723 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 38:
#line 324 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id =eLIT;
 		  (yyval.ex)->val = (yyvsp[0].nu);	
		}
#line 1733 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 39:
#line 330 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id =eID;
		  strcpy((yyval.ex)->name, (yyvsp[0].sr));		  
		}
#line 1743 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 40:
#line 336 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id =eTHIS;
		}
#line 1752 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 41:
#line 341 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id =eNEWARR;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		}
#line 1762 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 42:
#line 347 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		  (yyval.ex) = create_exp();
		  (yyval.ex)->exp_id =eNEW;
		  strcpy((yyval.ex)->name, (yyvsp[-2].sr));
		}
#line 1772 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 43:
#line 355 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		 (yyval.ex) = create_exp();
		 (yyval.ex)->exp_id =eEXPS;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);			
		}
#line 1783 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 44:
#line 362 "MiniJ_parse.y" /* yacc.c:1646  */
    {
			(yyval.ex) = NULL;
		}
#line 1791 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 45:
#line 368 "MiniJ_parse.y" /* yacc.c:1646  */
    {
		 (yyval.ex) = create_exp();
		 (yyval.ex)->exp_id =eEREST;
		  (yyval.ex)->exp1 = (yyvsp[-1].ex);
		  (yyval.ex)->exp2 = (yyvsp[0].ex);	
		}
#line 1802 "MiniJ_parse.c" /* yacc.c:1646  */
    break;

  case 46:
#line 375 "MiniJ_parse.y" /* yacc.c:1646  */
    {
			(yyval.ex) = NULL;		
		}
#line 1810 "MiniJ_parse.c" /* yacc.c:1646  */
    break;


#line 1814 "MiniJ_parse.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 380 "MiniJ_parse.y" /* yacc.c:1906  */


int yyerror(char *s)
{
	printf("%s\n",s);
}


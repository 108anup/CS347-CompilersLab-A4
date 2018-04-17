/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 12 "grammar.ypp" /* yacc.c:339  */

  extern int yylex();
  extern int yyerror(char *);

#line 71 "grammar.tab.cpp" /* yacc.c:339  */

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
   by #include "grammar.tab.hpp".  */
#ifndef YY_YY_GRAMMAR_TAB_HPP_INCLUDED
# define YY_YY_GRAMMAR_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CHAR = 258,
    ELSE = 259,
    FLOAT = 260,
    FOR = 261,
    IF = 262,
    INT = 263,
    RETURN = 264,
    VOID = 265,
    WHILE = 266,
    PTR_OP = 267,
    INC_OP = 268,
    DEC_OP = 269,
    AND_OP = 270,
    OR_OP = 271,
    LT = 272,
    GT = 273,
    LE_OP = 274,
    GE_OP = 275,
    EQ_OP = 276,
    NE_OP = 277,
    BOOL = 278,
    DO = 279,
    NOT = 280,
    AMP = 281,
    TILDE = 282,
    STAR = 283,
    ASSIGN = 284,
    PROCESSOR = 285,
    LINK = 286,
    CLUSTER = 287,
    JOB = 288,
    MEMORY = 289,
    JOB_ID = 290,
    FLOPS_REQUIRED = 291,
    DEADLINE = 292,
    AFFINITY = 293,
    ALGO = 294,
    ISA = 295,
    CLOCK_SPEED = 296,
    MEM_REQUIRED = 297,
    ID = 298,
    MEMORY_TYPE = 299,
    SCHEDULER = 300,
    NUM = 301,
    REAL = 302,
    STRING_LITERAL = 303,
    L1_MEMORY = 304,
    L2_MEMORY = 305,
    MEM_SIZE = 306,
    NAME = 307,
    START_POINT = 308,
    END_POINT = 309,
    BANDWIDTH = 310,
    CHANNEL_CAPACITY = 311,
    TOPOLOGY = 312,
    LINK_CAPACITY = 313,
    LINK_BANDWIDTH = 314,
    GET_AVAILABLE_MEMORY = 315,
    GET_MEMORY = 316,
    IS_RUNNING = 317,
    SUBMIT_JOBS = 318,
    GET_CLOCK_SPEED = 319,
    DISCARD_JOB = 320,
    RUN = 321,
    OPEN_BRACKET = 322,
    CLOSED_BRACKET = 323,
    OPEN_CURLY = 324,
    CLOSED_CURLY = 325,
    OPEN_SQUARE = 326,
    CLOSED_SQUARE = 327,
    SEMI = 328,
    COMMA = 329,
    DOT = 330,
    PLUS = 331,
    MINUS = 332,
    DIVIDE = 333,
    MODULUS = 334,
    PIPE = 335,
    XOR = 336,
    QUES = 337,
    COLON = 338,
    SCHED = 339
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

#endif /* !YY_YY_GRAMMAR_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 207 "grammar.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  59
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   485

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    20,    20,    21,    25,    26,    27,    28,    29,    33,
      37,    38,    39,    43,    44,    45,    46,    47,    51,    52,
      53,    54,    55,    56,    60,    61,    62,    63,    64,    65,
      66,    67,    71,    72,    76,    77,    78,    79,    83,    84,
      85,    86,    87,    88,    92,    93,    94,    95,    99,   100,
     101,   105,   106,   107,   108,   109,   113,   114,   115,   119,
     120,   124,   125,   129,   130,   134,   135,   139,   140,   144,
     145,   149,   150,   154,   155,   159,   160,   161,   162,   163,
     164,   168,   169,   173,   174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "ELSE", "FLOAT", "FOR", "IF",
  "INT", "RETURN", "VOID", "WHILE", "PTR_OP", "INC_OP", "DEC_OP", "AND_OP",
  "OR_OP", "LT", "GT", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "BOOL", "DO",
  "NOT", "AMP", "TILDE", "STAR", "ASSIGN", "PROCESSOR", "LINK", "CLUSTER",
  "JOB", "MEMORY", "JOB_ID", "FLOPS_REQUIRED", "DEADLINE", "AFFINITY",
  "ALGO", "ISA", "CLOCK_SPEED", "MEM_REQUIRED", "ID", "MEMORY_TYPE",
  "SCHEDULER", "NUM", "REAL", "STRING_LITERAL", "L1_MEMORY", "L2_MEMORY",
  "MEM_SIZE", "NAME", "START_POINT", "END_POINT", "BANDWIDTH",
  "CHANNEL_CAPACITY", "TOPOLOGY", "LINK_CAPACITY", "LINK_BANDWIDTH",
  "GET_AVAILABLE_MEMORY", "GET_MEMORY", "IS_RUNNING", "SUBMIT_JOBS",
  "GET_CLOCK_SPEED", "DISCARD_JOB", "RUN", "OPEN_BRACKET",
  "CLOSED_BRACKET", "OPEN_CURLY", "CLOSED_CURLY", "OPEN_SQUARE",
  "CLOSED_SQUARE", "SEMI", "COMMA", "DOT", "PLUS", "MINUS", "DIVIDE",
  "MODULUS", "PIPE", "XOR", "QUES", "COLON", "SCHED", "\"UIF\"", "$accept",
  "statement_list", "statement", "declaration", "declarator",
  "type_specifier", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "expression",
  "iteration_statement", "selection_statement", "expression_statement", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,   -67,   -67,   -60,   -18,   -67,   -67,   -12,   408,   408,
     -67,   139,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     408,   139,   408,   -67,   -67,   -67,    11,   139,   -67,     8,
     -67,    17,    30,   408,   -25,   -53,    23,    41,    57,   -61,
       5,    82,     0,   -67,   -67,    13,   -67,   -67,   -67,   214,
     408,   408,   -67,   -67,    87,   -64,    29,   -22,   -67,   -67,
     -67,   -67,   -23,    58,   -67,   -67,   207,   408,    59,   408,
     -67,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   -67,   408,
     275,   275,   -59,   -56,    33,   -67,   -67,   -67,   408,   408,
     282,   -67,   -67,   -49,   -16,   -67,   -67,   -67,   -67,   -67,
     -67,   -25,   -25,   -53,   -53,   -53,   -53,    23,    23,    41,
      57,   -61,     5,    82,   -66,   -67,   342,   349,   139,   139,
     408,   -67,    31,   -67,    34,   -67,   -67,   408,   139,   -47,
     139,   -46,    99,   -67,   -36,   -67,   -67,   -67,   -67,   139,
     -67,   139,   139,    32,   -67,   -67,   -67,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    14,    16,     0,     0,    15,    13,     0,     0,     0,
      17,     0,    43,    38,    42,    39,    18,    19,    20,    21,
       0,     3,     0,    83,    40,    41,     0,     3,     8,     0,
      24,    34,    44,     0,    48,    51,    56,    59,    61,    63,
      65,    67,    69,    71,    73,     0,     6,     5,     4,     0,
       0,     0,    35,    36,     0,     0,     0,     0,    32,     1,
       2,    10,     0,     0,    30,    31,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,     0,    22,     7,    23,     0,     0,
       0,    29,    26,     0,     0,    28,    72,    45,    46,    47,
      44,    49,    50,    52,    53,    54,    55,    57,    58,    60,
      62,    64,    66,    68,     0,    74,     0,     0,     0,     0,
       0,    33,     0,    12,     0,    27,    25,     0,     0,     0,
       0,     0,    82,    75,     0,     9,    11,    70,    79,     0,
      77,     0,     0,     0,    80,    78,    81,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -67,    12,   -11,    60,   -67,   -67,   -67,   -67,    42,    -7,
     -67,    19,   -42,    15,    25,    27,    28,    26,    36,   -67,
     -24,    -9,    -6,   -67,   -67,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    26,    27,    28,    62,    29,    30,    31,    57,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      54,    52,    53,    71,    95,    91,    99,    49,    89,   128,
      89,    59,   129,    58,    55,    89,    86,   137,    89,   135,
      83,   149,   151,    74,    75,    98,    70,    89,    89,    63,
      64,    65,   153,    56,   113,   114,   115,   116,    89,    60,
      76,    77,    78,    79,    92,    93,   126,   127,   100,    50,
      97,    61,    98,    72,    73,    51,   136,    58,    89,    69,
     106,   104,    80,    81,   107,   108,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     125,   124,    87,    82,    66,    84,    88,    89,    67,   131,
     132,   134,    68,   111,   112,   117,   118,    85,    94,    96,
     130,   101,   105,   152,   145,   157,   146,   119,   103,    90,
     120,   122,   121,   147,     0,     0,     0,   142,   143,     0,
     139,   141,   123,     0,   144,     0,     0,   148,     0,   150,
     110,     0,     0,     0,     0,     0,     0,     0,   154,     0,
     155,   156,     1,     0,     2,     3,     4,     5,     0,     6,
       7,     0,     8,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,    12,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    16,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,     0,    21,     0,
      22,     0,    23,     0,     0,    24,    25,     1,     0,     2,
       8,     9,     5,     0,     6,     0,     0,     8,     9,     0,
       0,     0,    12,    13,    14,    15,     0,    10,     0,    12,
      13,    14,    15,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,    17,    18,    19,     0,    16,     0,     0,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,   102,     0,     0,    22,     0,
       0,    20,     0,    24,    25,    22,     0,    23,     8,     9,
      24,    25,     0,     0,     0,     8,     9,     0,     0,     0,
      12,    13,    14,    15,     0,     0,     0,    12,    13,    14,
      15,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,    17,    18,    19,     0,    16,     0,     0,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,    22,     0,    23,    20,
       0,    24,    25,    22,   133,     8,     9,     0,    24,    25,
       0,     0,     8,     9,     0,     0,     0,    12,    13,    14,
      15,     0,     0,     0,    12,    13,    14,    15,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,    17,    18,
      19,     0,    16,     0,     0,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    20,
     138,     0,     0,    22,     0,     0,    20,   140,    24,    25,
      22,     8,     9,     0,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    22,
       0,     0,     0,     0,    24,    25
};

static const yytype_int16 yycheck[] =
{
      11,     8,     9,    28,    68,    49,    29,    67,    74,    68,
      74,     0,    68,    22,    20,    74,    16,    83,    74,    68,
      81,    68,    68,    76,    77,    74,    33,    74,    74,    12,
      13,    14,    68,    21,    76,    77,    78,    79,    74,    27,
      17,    18,    19,    20,    50,    51,    90,    91,    71,    67,
      72,    43,    74,    78,    79,    67,    72,    66,    74,    29,
      69,    67,    21,    22,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      89,    87,    82,    26,    67,    80,    73,    74,    71,    98,
      99,   100,    75,    74,    75,    80,    81,    15,    11,    70,
      67,    43,    43,     4,    73,    73,    72,    82,    66,    49,
      83,    85,    84,   137,    -1,    -1,    -1,   128,   129,    -1,
     126,   127,    86,    -1,   130,    -1,    -1,   138,    -1,   140,
     137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,
     151,   152,     3,    -1,     5,     6,     7,     8,    -1,    10,
      11,    -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    69,    -1,
      71,    -1,    73,    -1,    -1,    76,    77,     3,    -1,     5,
      13,    14,     8,    -1,    10,    -1,    -1,    13,    14,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    47,    48,    -1,    43,    -1,    -1,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    71,    -1,
      -1,    67,    -1,    76,    77,    71,    -1,    73,    13,    14,
      76,    77,    -1,    -1,    -1,    13,    14,    -1,    -1,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    47,    48,    -1,    43,    -1,    -1,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    71,    -1,    73,    67,
      -1,    76,    77,    71,    72,    13,    14,    -1,    76,    77,
      -1,    -1,    13,    14,    -1,    -1,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    47,
      48,    -1,    43,    -1,    -1,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    71,    -1,    -1,    67,    68,    76,    77,
      71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,    10,    11,    13,    14,
      23,    24,    25,    26,    27,    28,    43,    46,    47,    48,
      67,    69,    71,    73,    76,    77,    87,    88,    89,    91,
      92,    93,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    67,
      67,    67,    95,    95,    88,   108,    87,    94,   107,     0,
      87,    43,    90,    12,    13,    14,    67,    71,    75,    29,
      95,    28,    78,    79,    76,    77,    17,    18,    19,    20,
      21,    22,    26,    81,    80,    15,    16,    82,    73,    74,
      89,   111,   108,   108,    11,    68,    70,    72,    74,    29,
      71,    43,    68,    94,   108,    43,   107,    95,    95,    95,
      95,    97,    97,    98,    98,    98,    98,    99,    99,   100,
     101,   102,   103,   104,   108,   107,   111,   111,    68,    68,
      67,   107,   107,    72,   107,    68,    72,    83,    68,   108,
      68,   108,    88,    88,   108,    73,    72,   106,    88,    68,
      88,    68,     4,    68,    88,    88,    88,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    88,    88,    88,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    97,    97,    97,    97,    98,    98,
      98,    99,    99,    99,    99,    99,   100,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   110,   110,   111,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     3,     1,     5,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     4,     3,     4,     3,     3,
       2,     2,     1,     3,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     3,     5,     7,     6,     7,     6,
       7,     7,     5,     1,     2
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
#line 20 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement_list: statement statement_list\n"); }
#line 1479 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement_list: EPSILON\n"); }
#line 1485 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 25 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement: expression_statement\n\n\n"); }
#line 1491 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 26 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement: selection_statement\n\n\n"); }
#line 1497 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 27 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement: iteration_statement\n\n\n"); }
#line 1503 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 28 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement: OPEN_CURLY statement_list CLOSED_CURLY\n\n\n"); }
#line 1509 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 29 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement: declaration\n\n\n"); }
#line 1515 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 33 "grammar.ypp" /* yacc.c:1646  */
    { printf("declaration: type_specifier declarator ASSIGN assignment_expression SEMI\n"); }
#line 1521 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 37 "grammar.ypp" /* yacc.c:1646  */
    { printf("declarator: ID\n"); }
#line 1527 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 38 "grammar.ypp" /* yacc.c:1646  */
    { printf("declarator: declarator OPEN_SQUARE assignment_expression CLOSED_SQUARE\n"); }
#line 1533 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 39 "grammar.ypp" /* yacc.c:1646  */
    { printf("declarator: declarator OPEN_SQUARE CLOSED_SQUARE\n"); }
#line 1539 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 43 "grammar.ypp" /* yacc.c:1646  */
    { printf("type_specifier: VOID\n"); }
#line 1545 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 44 "grammar.ypp" /* yacc.c:1646  */
    { printf("type_specifier: CHAR\n"); }
#line 1551 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 45 "grammar.ypp" /* yacc.c:1646  */
    { printf("type_specifier: INT\n"); }
#line 1557 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 46 "grammar.ypp" /* yacc.c:1646  */
    { printf("type_specifier: FLOAT\n"); }
#line 1563 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 47 "grammar.ypp" /* yacc.c:1646  */
    { printf("type_specifier: BOOL\n"); }
#line 1569 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 51 "grammar.ypp" /* yacc.c:1646  */
    { printf("primary_expression: ID\n"); }
#line 1575 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 52 "grammar.ypp" /* yacc.c:1646  */
    { printf("primary_expression: NUM\n"); }
#line 1581 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 53 "grammar.ypp" /* yacc.c:1646  */
    { printf("primary_expression: REAL\n"); }
#line 1587 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 54 "grammar.ypp" /* yacc.c:1646  */
    { printf("primary_expression: STRING_LITERAL\n"); }
#line 1593 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 55 "grammar.ypp" /* yacc.c:1646  */
    { printf("primary_expression: OPEN_BRACKET expression CLOSED_BRACKET\n"); }
#line 1599 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 56 "grammar.ypp" /* yacc.c:1646  */
    { printf("primary_expression: OPEN_SQUARE argument_expression_list CLOSED_SQUARE\n"); }
#line 1605 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 60 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: primary_expression\n"); }
#line 1611 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 61 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression OPEN_SQUARE expression CLOSED_SQUARE\n"); }
#line 1617 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 62 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression OPEN_BRACKET CLOSED_BRACKET\n"); }
#line 1623 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 63 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression OPEN_BRACKET argument_expression_list CLOSED_BRACKET\n"); }
#line 1629 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 64 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression DOT ID\n"); }
#line 1635 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 65 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression PTR_OP ID\n"); }
#line 1641 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 66 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression INC_OP\n"); }
#line 1647 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 67 "grammar.ypp" /* yacc.c:1646  */
    { printf("postfix_expression: postfix_expression DEC_OP\n"); }
#line 1653 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 71 "grammar.ypp" /* yacc.c:1646  */
    { printf("argument_expression_list: assignment_expression\n"); }
#line 1659 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 72 "grammar.ypp" /* yacc.c:1646  */
    { printf("argument_expression_list: argument_expression_list COMMA assignment_expression\n"); }
#line 1665 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 76 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_expression: postfix_expression\n"); }
#line 1671 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 77 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_expression: INC_OP unary_expression\n"); }
#line 1677 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 78 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_expression: DEC_OP unary_expression\n"); }
#line 1683 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 79 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_expression: unary_operator unary_expression\n"); }
#line 1689 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 83 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_operator: AMP\n"); }
#line 1695 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 84 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_operator: STAR\n"); }
#line 1701 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 85 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_operator: PLUS\n"); }
#line 1707 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 86 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_operator: MINUS\n"); }
#line 1713 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 87 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_operator: TILDE\n"); }
#line 1719 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 88 "grammar.ypp" /* yacc.c:1646  */
    { printf("unary_operator: NOT\n"); }
#line 1725 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 92 "grammar.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression: unary_expression\n"); }
#line 1731 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 93 "grammar.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression: multiplicative_expression STAR unary_expression\n"); }
#line 1737 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 94 "grammar.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression: multiplicative_expression DIVIDE unary_expression\n"); }
#line 1743 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 95 "grammar.ypp" /* yacc.c:1646  */
    { printf("multiplicative_expression: multiplicative_expression MODULUS unary_expression\n"); }
#line 1749 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 99 "grammar.ypp" /* yacc.c:1646  */
    { printf("additive_expression: multiplicative_expression\n"); }
#line 1755 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 100 "grammar.ypp" /* yacc.c:1646  */
    { printf("additive_expression: additive_expression PLUS multiplicative_expression\n"); }
#line 1761 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 101 "grammar.ypp" /* yacc.c:1646  */
    { printf("additive_expression: additive_expression MINUS multiplicative_expression\n"); }
#line 1767 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 105 "grammar.ypp" /* yacc.c:1646  */
    { printf("relational_expression: additive_expression\n"); }
#line 1773 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 106 "grammar.ypp" /* yacc.c:1646  */
    { printf("relational_expression: relational_expression LT additive_expression\n"); }
#line 1779 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 107 "grammar.ypp" /* yacc.c:1646  */
    { printf("relational_expression: relational_expression GT additive_expression\n"); }
#line 1785 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 108 "grammar.ypp" /* yacc.c:1646  */
    { printf("relational_expression: relational_expression LE_OP additive_expression\n"); }
#line 1791 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 109 "grammar.ypp" /* yacc.c:1646  */
    { printf("relational_expression: relational_expression GE_OP additive_expression\n"); }
#line 1797 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 113 "grammar.ypp" /* yacc.c:1646  */
    { printf("equality_expression: relational_expression\n"); }
#line 1803 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 114 "grammar.ypp" /* yacc.c:1646  */
    { printf("equality_expression: equality_expression EQ_OP relational_expression\n"); }
#line 1809 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 115 "grammar.ypp" /* yacc.c:1646  */
    { printf("equality_expression: equality_expression EQ_OP relational_expression\n"); }
#line 1815 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 119 "grammar.ypp" /* yacc.c:1646  */
    { printf("and_expression: equality_expression\n"); }
#line 1821 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 120 "grammar.ypp" /* yacc.c:1646  */
    { printf("and_expression: and_expression AMP equality_expression\n"); }
#line 1827 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 124 "grammar.ypp" /* yacc.c:1646  */
    { printf("exclusive_or_expression: and_expression\n"); }
#line 1833 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 125 "grammar.ypp" /* yacc.c:1646  */
    { printf("exclusive_or_expression: exclusive_or_expression XOR and_expression\n"); }
#line 1839 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 129 "grammar.ypp" /* yacc.c:1646  */
    { printf("inclusive_or_expression: exclusive_or_expression\n"); }
#line 1845 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 130 "grammar.ypp" /* yacc.c:1646  */
    { printf("inclusive_or_expression: inclusive_or_expression PIPE exclusive_or_expression\n"); }
#line 1851 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 134 "grammar.ypp" /* yacc.c:1646  */
    { printf("logical_and_expression: inclusive_or_expression\n"); }
#line 1857 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 135 "grammar.ypp" /* yacc.c:1646  */
    { printf("logical_and_expression: logical_and_expression AND_OP inclusive_or_expression\n"); }
#line 1863 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 139 "grammar.ypp" /* yacc.c:1646  */
    { printf("logical_or_expression: logical_and_expression\n"); }
#line 1869 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 140 "grammar.ypp" /* yacc.c:1646  */
    { printf("logical_or_expression: logical_or_expression OR_OP logical_and_expression\n"); }
#line 1875 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 144 "grammar.ypp" /* yacc.c:1646  */
    { printf("conditional_expression: logical_or_expression\n"); }
#line 1881 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 145 "grammar.ypp" /* yacc.c:1646  */
    { printf("conditional_expression: logical_or_expression QUES expression COLON conditional_expressionn"); }
#line 1887 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 149 "grammar.ypp" /* yacc.c:1646  */
    { printf("assignment_expression: conditional_expression\n\n"); }
#line 1893 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 150 "grammar.ypp" /* yacc.c:1646  */
    { printf("assignment_expression: unary_expression ASSIGN assignment_expression\n\n"); }
#line 1899 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 154 "grammar.ypp" /* yacc.c:1646  */
    { printf("expression: assignement_expression\n"); }
#line 1905 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 155 "grammar.ypp" /* yacc.c:1646  */
    { printf("expression: expression COMMA assignment_expression\n"); }
#line 1911 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 159 "grammar.ypp" /* yacc.c:1646  */
    { printf("iteration_statement: WHILE OPEN_BRACKET expression CLOSED_BRACKET statement\n"); }
#line 1917 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 160 "grammar.ypp" /* yacc.c:1646  */
    { printf("iteration_statement: DO statement WHILE OPEN_BRACKET expression CLOSED_BRACKET SEMI\n"); }
#line 1923 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 161 "grammar.ypp" /* yacc.c:1646  */
    { printf("iteration_statement: FOR OPEN_BRACKET expression_statement expression_statement CLOSED_BRACKET statement\n"); }
#line 1929 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "grammar.ypp" /* yacc.c:1646  */
    { printf("iteration_statement: FOR OPEN_BRACKET expression_statement expression_statement expression CLOSED_BRACKET statement\n"); }
#line 1935 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "grammar.ypp" /* yacc.c:1646  */
    { printf("iteration_statement: FOR OPEN_BRACKET declaration expression_statement CLOSED_BRACKET statement\n"); }
#line 1941 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 164 "grammar.ypp" /* yacc.c:1646  */
    { printf("iteration_statement: FOR OPEN_BRACKET declaration expression_statement expression CLOSED_BRACKET statement\n"); }
#line 1947 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 168 "grammar.ypp" /* yacc.c:1646  */
    { printf("selection_statement: IF OPEN_BRACKET expression CLOSED_BRACKET statement ELSE statement\n"); }
#line 1953 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 169 "grammar.ypp" /* yacc.c:1646  */
    { printf("IF OPEN_BRACKET expression CLOSED_BRACKET statement\n"); }
#line 1959 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 173 "grammar.ypp" /* yacc.c:1646  */
    { printf("expression_statement: SEMI\n"); }
#line 1965 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 174 "grammar.ypp" /* yacc.c:1646  */
    { printf("expression_statement: expression SEMI\n"); }
#line 1971 "grammar.tab.cpp" /* yacc.c:1646  */
    break;


#line 1975 "grammar.tab.cpp" /* yacc.c:1646  */
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
#line 177 "grammar.ypp" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];

int yyerror(char *s){
	fflush(stdout);
	printf("%s\n", s);
}

int main(){
  //yydebug = 1;
  return yyparse();
}



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
#define YYFINAL  92
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  189
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

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
static const yytype_uint16 yyrline[] =
{
       0,    20,    20,    21,    25,    26,    27,    28,    29,    33,
      37,    38,    39,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    56,    57,    58,    59,    60,    61,    62,
      63,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      79,    80,    84,    85,    86,    87,    91,    92,    93,    94,
      95,    96,   100,   101,   102,   103,   107,   108,   109,   113,
     114,   115,   116,   117,   121,   122,   123,   127,   128,   132,
     133,   137,   138,   142,   143,   147,   148,   152,   153,   157,
     158,   162,   163,   167,   168,   169,   170,   171,   172,   176,
     177,   181,   182,   186,   187,   191,   192,   193,   194,   195,
     196,   200,   204,   205,   209,   210,   214,   215,   219,   220,
     224,   225,   229,   234,   235,   239,   240,   244,   245,   246,
     247,   251,   252,   253,   254,   255,   259,   260,   261,   262,
     263,   267,   268,   269,   273,   277,   278,   282,   283,   284,
     285,   289,   290,   291,   295,   299,   300,   304,   305,   309,
     310,   314,   315,   316,   317,   321,   322,   323,   327,   331,
     334,   335,   339,   340,   344,   345,   346,   347,   351,   352,
     353,   354,   355,   359,   360,   364,   368,   369,   370,   371,
     375,   376,   377,   381,   382,   383,   384,   385,   386,   387
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
  "iteration_statement", "selection_statement", "expression_statement",
  "assign_colon", "constructor", "param_list_job", "job_param1",
  "job_param2", "job_param3", "job_param4", "job_param5",
  "param_list_proc", "proc_param1", "proc_param2", "proc_param3",
  "opt_proc_param4", "opt_proc_param5", "opt_proc_param6",
  "param_list_mem", "mem_param1", "mem_param2", "opt_mem_param3",
  "param_list_link", "link_param1", "link_param2", "link_param3",
  "link_param4", "opt_link_param5", "param_list_cluster", "cluster_param1",
  "cluster_param2", "cluster_param3", "cluster_param4",
  "opt_cluster_param5", "opt_cluster_param6", "param_list_scheduler",
  "schedule_param1", "opt_schedule_param2", "mem_func", YY_NULLPTR
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

#define YYPACT_NINF -349

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-349)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     383,  -349,  -349,   -54,   -50,  -349,  -349,   -29,  2166,  2166,
    -349,   383,  -349,  -349,  -349,  -349,   -17,    -4,     1,    18,
      34,  -349,    37,  -349,  -349,  -349,    38,    39,    40,    42,
      43,    44,    45,  2166,   383,  2166,  -349,  -349,  -349,    59,
     383,  -349,    70,  -349,    -5,    51,  2166,   -23,   -46,    72,
      13,    88,    35,    41,   102,   -13,  -349,  -349,    24,  -349,
    -349,  -349,  -349,  -349,   458,  2166,  2166,   -17,    -4,     1,
      18,    34,  -349,  -349,   107,   678,   733,  2166,   788,   843,
     898,    52,    54,    56,  2166,    57,  2166,  2166,   -56,    49,
     -52,  -349,  -349,  -349,  -349,   -14,    80,  -349,  -349,   953,
    2166,   -37,  2166,  -349,  2166,  2166,  2166,  2166,  2166,  2166,
    2166,  2166,  2166,  2166,  2166,  2166,  2166,  2166,  2166,  2166,
    2166,  -349,  2166,  1009,  1009,    -3,     4,    62,   -25,  -349,
      63,    74,   -25,  -349,    81,    76,  -349,    83,    78,   -25,
    -349,    85,    82,   -25,  -349,    86,    84,   -25,    87,    89,
    1064,  -349,  -349,  -349,    91,  -349,    92,    95,  -349,  -349,
    -349,  2166,  2166,  1119,  -349,  -349,     5,    12,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,   -23,   -23,   -46,   -46,   -46,
     -46,    72,    72,    13,    88,    35,    41,   102,   -64,  -349,
    1174,  1230,   383,   383,  2166,  -349,  -349,  2166,  -349,  1286,
    2166,  -349,  1341,  -349,  1396,  2166,  -349,  1451,  2166,  -349,
    1506,  2166,  -349,  -349,   -25,  -349,  -349,  -349,  -349,  -349,
    -349,    93,  -349,    58,  -349,  -349,  2166,   383,     7,   383,
       8,   151,  -349,     9,  -349,   -25,  -349,    94,  -349,   -25,
    -349,    97,   -25,  -349,   100,  -349,   -25,  -349,   103,  -349,
     -25,   106,  1561,   111,  2166,  -349,  -349,  -349,  -349,   383,
    -349,   383,   383,   108,  2166,  1616,  2166,  1671,  2166,  1726,
    2166,  1781,  2166,  -349,   -25,  -349,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,   -25,   112,   513,  -349,   -25,  -349,
     114,  -349,   -25,  -349,   115,  -349,   -25,  -349,   116,   117,
    2166,  2166,  -349,   -25,   -25,   -25,   118,  -349,  -349,  -349,
    2166,  1836,  2166,  1891,  2166,  1946,  -349,  -349,   119,  2166,
    2166,  2166,   568,  -349,   -25,   121,  2001,  -349,   -25,   122,
     623,  -349,   -25,  -349,   123,  -349,   125,  -349,   126,   127,
    -349,  -349,  2166,  -349,   -25,  -349,  -349,  2166,  -349,   -25,
     -25,   129,  -349,  -349,  2166,  2056,   568,  2111,  2111,   130,
    2166,   131,  2166,  2166,   154,  -349,   -25,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,   133,  -349,  2166,
     154,  -349,  -349
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    14,    16,     0,     0,    15,    13,     0,     0,     0,
      17,     0,    51,    46,    50,    47,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,    91,    48,    49,     0,
       3,     8,     0,    31,    42,    52,     0,    56,    59,    64,
      67,    69,    71,    73,    75,    77,    79,    81,     0,     6,
       5,     4,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     1,     2,    10,     0,     0,    38,    39,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,   114,
       0,     0,     0,   146,     0,     0,   159,     0,     0,     0,
     103,     0,     0,     0,   136,     0,     0,     0,   177,     0,
     182,   183,   184,   185,     0,   187,     0,     0,    27,     7,
      30,     0,     0,     0,    37,    33,     0,     0,    35,    36,
      80,    53,    54,    55,    52,    57,    58,    60,    61,    62,
      63,    65,    66,    68,    70,    72,    74,    76,     0,    82,
       0,     0,     0,     0,     0,    93,    94,     0,    95,     0,
       0,    98,     0,    99,     0,     0,    97,     0,     0,    96,
       0,     0,   179,   100,     0,   181,   175,   186,   189,   188,
      41,     0,    12,     0,    34,    32,     0,     0,     0,     0,
       0,    90,    83,     0,   113,     0,   116,     0,   145,     0,
     148,     0,     0,   161,     0,   102,     0,   105,     0,   135,
       0,   138,   143,   176,     0,     9,    11,    78,    87,     0,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   140,     0,   142,   134,   178,   180,    88,
      86,    89,    84,   115,     0,   118,   133,   147,     0,   150,
       0,   160,     0,   163,     0,   104,     0,   107,     0,   137,
       0,     0,   120,     0,     0,     0,   123,   112,   125,   130,
       0,     0,     0,     0,     0,     0,   139,   141,   117,     0,
       0,     0,   133,   149,     0,   152,   157,   162,     0,   165,
     174,   106,     0,   109,     0,   119,   121,   131,   126,   127,
     124,   129,     0,   154,     0,   156,   144,     0,   167,     0,
       0,   169,   158,   172,     0,     0,   133,   133,   133,   151,
       0,   164,     0,     0,   174,   108,     0,   111,   101,   122,
     132,   128,   129,   153,   155,   166,   173,   168,   171,     0,
     174,   110,   170
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -349,    -1,    -9,   144,  -349,  -349,  -349,  -349,   110,    28,
    -349,    -8,   -16,   -11,    96,    98,    99,   104,   105,  -349,
       0,   -35,   -12,  -349,  -349,   -63,    55,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -308,
    -311,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,  -349,
    -349,  -349,  -349,  -349,  -349,  -349,  -349,  -348,  -349,  -349,
    -349,   109
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,    40,    41,    95,    42,    43,    44,    90,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,   197,    62,   141,   142,
     248,   298,   334,   368,   130,   131,   237,   286,   307,   308,
     309,   145,   146,   252,   276,   134,   135,   241,   290,   326,
     346,   137,   138,   244,   294,   330,   352,   353,   149,   150,
     216,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      91,   124,    74,   119,   195,   104,   168,    96,    97,    98,
     122,   341,   158,    64,   340,   162,   378,    65,   122,   226,
     160,    88,   161,    26,    27,    28,    29,    30,    31,    32,
     107,   108,   382,    89,   113,   114,    72,    73,    66,    93,
     129,   133,   136,   140,   144,   148,   371,   372,   369,   154,
      75,   156,   157,   125,   126,   105,   106,   163,   196,    92,
     190,   191,    99,    76,    91,   192,   100,   170,    77,   120,
     101,   122,   193,   224,   103,   259,   261,   263,   122,   161,
     102,   122,   122,   122,   225,    78,   122,   189,   167,   109,
     110,   111,   112,   177,   178,   179,   180,   121,   122,   175,
     176,    79,   181,   182,    80,    81,    82,    83,   188,    84,
      85,    86,    87,    94,   115,   215,   116,   118,   127,   159,
     151,   117,   152,   164,   153,   155,   220,   221,   223,   194,
     256,   198,   171,   172,   173,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   199,   201,
     202,   203,   204,   206,   209,   262,   207,   213,   210,   217,
     218,   212,   234,   219,   236,   238,   255,   240,   265,   243,
     245,   267,   247,   249,   269,   251,   253,   271,   228,   230,
     273,   282,   233,   231,   232,   277,   302,   200,   311,   313,
     315,   316,   322,   335,   205,   343,   348,   355,   208,   356,
     357,   358,   211,   364,   373,   375,   349,   380,   123,   166,
     169,   183,     0,     0,   184,     0,   185,   275,   258,   278,
     260,     0,   186,     0,   187,     0,   257,     0,     0,   283,
     285,   287,   289,   291,   293,   295,   297,   299,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     279,   306,   280,   281,   174,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   317,   318,     0,     0,   254,
       0,     0,     0,     0,     0,   323,   325,   327,   329,   331,
     333,     0,     0,     0,   336,   337,   338,   339,     0,     0,
     264,   345,     0,     0,   266,   351,     0,   268,     0,     0,
       0,   270,     0,     0,     0,   272,     0,   359,     0,     0,
       0,     0,   361,     0,     0,     0,     0,     0,     0,   365,
     367,   339,   370,   370,     0,   374,     0,   376,   377,   300,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   301,
       0,     0,     0,   310,   381,     0,     0,   312,     0,     0,
       0,   314,     0,     0,     0,     0,     0,     0,   319,   320,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   342,
       0,     0,     0,   347,     0,     0,     1,   354,     2,     3,
       4,     5,     0,     6,     7,     0,     8,     9,     0,   360,
       0,     0,     0,     0,   362,   363,    10,    11,    12,    13,
      14,    15,     0,    16,    17,    18,    19,    20,     0,     0,
       0,   379,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     0,    34,     0,    35,     0,    36,     0,     0,    37,
      38,     1,     0,     2,     0,     0,     5,     0,     6,     0,
       0,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    12,    13,    14,    15,     0,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     8,     9,     0,    35,
       0,    36,     0,     0,    37,    38,     0,     0,    12,    13,
      14,    15,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,   303,     0,   304,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     8,     9,     0,    35,     0,     0,     0,     0,    37,
      38,     0,     0,    12,    13,    14,    15,   305,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
     304,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     8,     9,     0,    35,
       0,     0,     0,     0,    37,    38,     0,     0,    12,    13,
      14,    15,   305,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,     0,     0,   349,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     8,     9,     0,    35,     0,     0,     0,     0,    37,
      38,     0,     0,    12,    13,    14,    15,   350,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,   128,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     8,     9,     0,    35,
       0,     0,     0,     0,    37,    38,     0,     0,    12,    13,
      14,    15,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,     0,     0,     0,   132,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     8,     9,     0,    35,     0,     0,     0,     0,    37,
      38,     0,     0,    12,    13,    14,    15,     0,    67,    68,
      69,    70,    71,   139,     0,     0,     0,     0,     0,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     8,     9,     0,    35,
       0,     0,     0,     0,    37,    38,     0,     0,    12,    13,
      14,    15,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,   143,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     8,     9,     0,    35,     0,     0,     0,     0,    37,
      38,     0,     0,    12,    13,    14,    15,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,   147,     0,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     8,     9,     0,    35,
       0,     0,     0,     0,    37,    38,     0,     0,    12,    13,
      14,    15,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,   165,     8,     9,    35,     0,     0,     0,     0,    37,
      38,     0,     0,     0,    12,    13,    14,    15,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,     8,     9,     0,
      35,     0,    36,     0,     0,    37,    38,     0,     0,    12,
      13,    14,    15,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
      23,    24,    25,     0,     0,     0,   214,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,     8,     9,     0,    35,     0,     0,     0,     0,
      37,    38,     0,     0,    12,    13,    14,    15,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,     8,     9,     0,
      35,   222,     0,     0,     0,    37,    38,     0,     0,    12,
      13,    14,    15,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,   227,     8,     9,    35,     0,     0,     0,     0,
      37,    38,     0,     0,     0,    12,    13,    14,    15,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,   229,     8,
       9,    35,     0,     0,     0,     0,    37,    38,     0,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,   235,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   242,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,   246,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,   250,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,   284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,   288,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,   296,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,   324,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   328,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,   332,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,   366,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     8,     9,     0,    35,     0,     0,
       0,     0,    37,    38,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,   304,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     8,
       9,     0,    35,     0,     0,     0,     0,    37,    38,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,     0,     0,    35,     0,     0,
       0,     0,    37,    38
};

static const yytype_int16 yycheck[] =
{
      35,    64,    11,    16,    29,    28,    43,    12,    13,    14,
      74,   322,    68,    67,   322,    29,   364,    67,    74,    83,
      72,    33,    74,    60,    61,    62,    63,    64,    65,    66,
      76,    77,   380,    34,    21,    22,     8,     9,    67,    40,
      75,    76,    77,    78,    79,    80,   357,   358,   356,    84,
      67,    86,    87,    65,    66,    78,    79,    71,    83,     0,
     123,   124,    67,    67,    99,    68,    71,   102,    67,    82,
      75,    74,    68,    68,    46,    68,    68,    68,    74,    74,
      29,    74,    74,    74,    72,    67,    74,   122,   100,    17,
      18,    19,    20,   109,   110,   111,   112,    73,    74,   107,
     108,    67,   113,   114,    67,    67,    67,    67,   120,    67,
      67,    67,    67,    43,    26,   150,    81,    15,    11,    70,
      68,    80,    68,    43,    68,    68,   161,   162,   163,    67,
      72,    68,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    74,    68,
      74,    68,    74,    68,    68,     4,    74,    68,    74,    68,
      68,    74,   197,    68,   199,   200,    73,   202,    74,   204,
     205,    74,   207,   208,    74,   210,   211,    74,   190,   191,
      74,    73,   194,   192,   193,    74,    74,   132,    74,    74,
      74,    74,    74,    74,   139,    74,    74,    74,   143,    74,
      74,    74,   147,    74,    74,    74,    52,    74,    64,    99,
     101,   115,    -1,    -1,   116,    -1,   117,   252,   227,   254,
     229,    -1,   118,    -1,   119,    -1,   226,    -1,    -1,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     259,   286,   261,   262,   226,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   300,   301,    -1,    -1,   214,
      -1,    -1,    -1,    -1,    -1,   310,   311,   312,   313,   314,
     315,    -1,    -1,    -1,   319,   320,   321,   322,    -1,    -1,
     235,   326,    -1,    -1,   239,   330,    -1,   242,    -1,    -1,
      -1,   246,    -1,    -1,    -1,   250,    -1,   342,    -1,    -1,
      -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,   354,
     355,   356,   357,   358,    -1,   360,    -1,   362,   363,   274,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,    -1,    -1,   288,   379,    -1,    -1,   292,    -1,    -1,
      -1,   296,    -1,    -1,    -1,    -1,    -1,    -1,   303,   304,
     305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      -1,    -1,    -1,   328,    -1,    -1,     3,   332,     5,     6,
       7,     8,    -1,    10,    11,    -1,    13,    14,    -1,   344,
      -1,    -1,    -1,    -1,   349,   350,    23,    24,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,   366,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    -1,    71,    -1,    73,    -1,    -1,    76,
      77,     3,    -1,     5,    -1,    -1,     8,    -1,    10,    -1,
      -1,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    13,    14,    -1,    71,
      -1,    73,    -1,    -1,    76,    77,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    50,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    13,    14,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    25,    26,    27,    28,    84,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    13,    14,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    25,    26,
      27,    28,    84,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    13,    14,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    25,    26,    27,    28,    84,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    13,    14,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    13,    14,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    13,    14,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    13,    14,    -1,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    13,    14,    -1,    71,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    13,    14,    71,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    13,    14,    -1,
      71,    -1,    73,    -1,    -1,    76,    77,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    13,    14,    -1,    71,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    13,    14,    -1,
      71,    72,    -1,    -1,    -1,    76,    77,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    13,    14,    71,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    13,
      14,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    13,    14,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    13,
      14,    -1,    71,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,    10,    11,    13,    14,
      23,    24,    25,    26,    27,    28,    30,    31,    32,    33,
      34,    43,    45,    46,    47,    48,    60,    61,    62,    63,
      64,    65,    66,    67,    69,    71,    73,    76,    77,    87,
      88,    89,    91,    92,    93,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   113,   147,    67,    67,    67,    30,    31,    32,
      33,    34,    95,    95,    88,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,   108,    87,
      94,   107,     0,    87,    43,    90,    12,    13,    14,    67,
      71,    75,    29,    95,    28,    78,    79,    76,    77,    17,
      18,    19,    20,    21,    22,    26,    81,    80,    15,    16,
      82,    73,    74,    89,   111,   108,   108,    11,    40,   107,
     120,   121,    53,   107,   131,   132,   107,   137,   138,    35,
     107,   114,   115,    44,   107,   127,   128,    39,   107,   144,
     145,    68,    68,    68,   107,    68,   107,   107,    68,    70,
      72,    74,    29,    71,    43,    68,    94,   108,    43,   147,
     107,    95,    95,    95,    95,    97,    97,    98,    98,    98,
      98,    99,    99,   100,   101,   102,   103,   104,   108,   107,
     111,   111,    68,    68,    67,    29,    83,   112,    68,    74,
     112,    68,    74,    68,    74,   112,    68,    74,   112,    68,
      74,   112,    74,    68,    52,   107,   146,    68,    68,    68,
     107,   107,    72,   107,    68,    72,    83,    68,   108,    68,
     108,    88,    88,   108,   107,    41,   107,   122,   107,    54,
     107,   133,    57,   107,   139,   107,    36,   107,   116,   107,
      51,   107,   129,   107,   112,    73,    72,   106,    88,    68,
      88,    68,     4,    68,   112,    74,   112,    74,   112,    74,
     112,    74,   112,    74,    52,   107,   130,    74,   107,    88,
      88,    88,    73,   107,    49,   107,   123,   107,    55,   107,
     134,   107,    59,   107,   140,   107,    37,   107,   117,   107,
     112,   112,    74,    50,    52,    84,   107,   124,   125,   126,
     112,    74,   112,    74,   112,    74,    74,   107,   107,   112,
     112,   112,    74,   107,    56,   107,   135,   107,    58,   107,
     141,   107,    42,   107,   118,    74,   107,   107,   107,   107,
     125,   126,   112,    74,    52,   107,   136,   112,    74,    52,
      84,   107,   142,   143,   112,    74,    74,    74,    74,   107,
     112,   107,   112,   112,    74,   107,    38,   107,   119,   125,
     107,   126,   126,    74,   107,    74,   107,   107,   143,   112,
      74,   107,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    88,    88,    88,    89,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    97,    97,    97,    98,    98,    98,    99,
      99,    99,    99,    99,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   112,   112,   113,   113,   113,   113,   113,
     113,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   121,   121,   122,   122,   123,   123,   123,
     123,   124,   124,   124,   124,   124,   125,   125,   125,   125,
     125,   126,   126,   126,   127,   128,   128,   129,   129,   129,
     129,   130,   130,   130,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   135,   135,   136,   136,   136,   137,   138,
     139,   139,   140,   140,   141,   141,   141,   141,   142,   142,
     142,   142,   142,   143,   143,   144,   145,   145,   145,   145,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   147
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     3,     1,     5,
       1,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     1,     4,     3,     4,     3,     3,     3,     2,     2,
       1,     3,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     3,     5,     7,     6,     7,     6,     7,     7,
       5,     1,     2,     1,     1,     4,     4,     4,     4,     4,
       4,     9,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     6,     3,     1,     3,     1,     3,     1,     4,
       2,     3,     5,     1,     3,     1,     3,     1,     5,     3,
       1,     3,     1,     0,     4,     3,     1,     3,     1,     4,
       2,     3,     1,     0,     8,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     2,     3,     1,     0,     8,     1,
       3,     1,     3,     1,     3,     1,     4,     2,     3,     1,
       5,     3,     1,     3,     0,     2,     3,     1,     4,     2,
       3,     1,     0,     3,     3,     3,     4,     3,     4,     4
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
    { printf("statement_list: statement statement_list"); }
#line 1948 "grammar.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 21 "grammar.ypp" /* yacc.c:1646  */
    { printf("statement_list: EPSILON"); }
#line 1954 "grammar.tab.cpp" /* yacc.c:1646  */
    break;


#line 1958 "grammar.tab.cpp" /* yacc.c:1646  */
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
#line 390 "grammar.ypp" /* yacc.c:1906  */

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

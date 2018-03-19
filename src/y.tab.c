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
#line 10 "grammar.y" /* yacc.c:339  */

  extern int yylex();
  extern int yyerror(char *);
  int yydebug=1;

#line 72 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
/* Tokens.  */
#define CHAR 258
#define ELSE 259
#define FLOAT 260
#define FOR 261
#define IF 262
#define INT 263
#define RETURN 264
#define VOID 265
#define WHILE 266
#define PTR_OP 267
#define INC_OP 268
#define DEC_OP 269
#define AND_OP 270
#define OR_OP 271
#define LT 272
#define GT 273
#define LE_OP 274
#define GE_OP 275
#define EQ_OP 276
#define NE_OP 277
#define BOOL 278
#define DO 279
#define NOT 280
#define AMP 281
#define TILDE 282
#define STAR 283
#define ASSIGN 284
#define PROCESSOR 285
#define LINK 286
#define CLUSTER 287
#define JOB 288
#define MEMORY 289
#define JOB_ID 290
#define FLOPS_REQUIRED 291
#define DEADLINE 292
#define AFFINITY 293
#define ALGO 294
#define ISA 295
#define CLOCK_SPEED 296
#define MEM_REQUIRED 297
#define ID 298
#define MEMORY_TYPE 299
#define SCHEDULER 300
#define NUM 301
#define REAL 302
#define STRING_LITERAL 303
#define L1_MEMORY 304
#define L2_MEMORY 305
#define MEM_SIZE 306
#define NAME 307
#define START_POINT 308
#define END_POINT 309
#define BANDWIDTH 310
#define CHANNEL_CAPACITY 311
#define TOPOLOGY 312
#define LINK_CAPACITY 313
#define LINK_BANDWIDTH 314
#define GET_AVAILABLE_MEMORY 315
#define GET_MEMORY 316
#define IS_RUNNING 317
#define SUBMIT_JOBS 318
#define GET_CLOCK_SPEED 319
#define DISCARD_JOB 320
#define RUN 321
#define OPEN_BRACKET 322
#define CLOSED_BRACKET 323
#define OPEN_CURLY 324
#define CLOSED_CURLY 325
#define OPEN_SQUARE 326
#define CLOSED_SQUARE 327
#define SEMI 328
#define COMMA 329
#define DOT 330
#define PLUS 331
#define MINUS 332
#define DIVIDE 333
#define MODULUS 334
#define PIPE 335
#define XOR 336
#define QUES 337
#define COLON 338
#define SCHED 339

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 291 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2433

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  390

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   339

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    19,    19,    20,    24,    25,    26,    27,    28,    32,
      36,    37,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    54,    55,    56,    57,    58,    59,    60,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      78,    79,    80,    84,    85,    89,    90,    94,    95,    96,
      97,   101,   102,   103,   104,   105,   106,   110,   111,   112,
     113,   117,   118,   119,   123,   124,   125,   126,   127,   131,
     132,   133,   137,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   162,   163,   167,   168,   172,   173,   177,   178,
     179,   180,   181,   182,   186,   187,   191,   192,   196,   197,
     201,   202,   203,   204,   205,   206,   210,   214,   215,   219,
     220,   224,   225,   229,   230,   234,   235,   239,   244,   245,
     249,   250,   254,   255,   256,   257,   261,   262,   263,   264,
     265,   269,   270,   271,   272,   273,   277,   278,   279,   283,
     287,   288,   292,   293,   294,   295,   299,   300,   301,   305,
     309,   310,   314,   315,   319,   320,   324,   325,   326,   327,
     331,   332,   333,   337,   341,   344,   345,   349,   350,   354,
     355,   356,   357,   361,   362,   363,   364,   365,   369,   370,
     374,   378,   379,   380,   381,   385,   386,   387,   391,   392,
     393,   394,   395,   396,   397
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
  "MODULUS", "PIPE", "XOR", "QUES", "COLON", "SCHED", "$accept",
  "statement_list", "statement", "declaration", "declarator",
  "type_specifier", "primary_expression", "postfix_expression",
  "initializer", "initializer_list", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
     335,   336,   337,   338,   339
};
# endif

#define YYPACT_NINF -137

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-137)))

#define YYTABLE_NINF -87

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     371,  -137,  -137,   -41,   -33,  -137,  -137,   -20,  2297,  2297,
    -137,   371,  -137,  -137,  -137,  -137,    -5,    16,    28,    45,
      49,   -19,    51,  -137,  -137,  -137,    52,    54,    55,    56,
      59,    62,    63,  2297,   446,  2356,  -137,  -137,  -137,     9,
     371,  -137,    25,  -137,    10,    75,  2297,     0,   -36,    74,
      29,   105,    53,    57,    65,   -11,  -137,  -137,     1,  -137,
    -137,  -137,  -137,  -137,   521,  2297,  2297,    -5,    16,    28,
      45,    49,  2356,  -137,  -137,   121,   702,   761,  2297,   820,
     879,    37,   938,    67,    68,    71,  2297,    73,  2297,  2297,
     -56,   446,  2356,    72,  -137,    12,    60,  2356,   -58,  -137,
    -137,  -137,  -137,   -22,   100,  -137,  -137,   997,  2297,   101,
    2297,  -137,  2297,  2297,  2297,  2297,  2297,  2297,  2297,  2297,
    2297,  2297,  2297,  2297,  2297,  2297,  2297,  2297,  2297,  -137,
    2297,  1056,  1056,   -49,   -47,    78,   -23,  -137,    79,    76,
     -23,  -137,    80,    77,  -137,    81,    82,   -23,  -137,    85,
      83,   -23,  -137,    86,    84,  -137,   -23,    87,    91,  1117,
    -137,  -137,  -137,    92,  -137,    95,    96,  -137,    14,   -13,
    -137,  -137,  2356,  -137,  2297,    93,  -137,  -137,   -39,  -137,
      15,  -137,  -137,  -137,  -137,  -137,  -137,     0,     0,   -36,
     -36,   -36,   -36,    74,    74,    29,   105,    53,    57,    65,
     -66,  -137,  1176,  1235,   371,   371,  2297,  -137,  -137,  2297,
    -137,  1294,  2297,  -137,  1353,  -137,  1412,  2297,  -137,  1471,
    2297,  -137,  1530,  2297,  -137,  -137,   -23,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,    94,  -137,  -137,  2297,  -137,
    2297,   371,   -38,   371,   -37,   142,  -137,   -35,  -137,   -23,
    -137,    97,  -137,   -23,  -137,    98,   -23,  -137,    99,  -137,
     -23,  -137,   102,  -137,   -23,   110,  1589,   113,  2297,  -137,
    -137,  -137,  -137,   371,  -137,   371,   371,   106,  2297,  1648,
    2297,  1707,  2297,  1766,  2297,  1825,  2297,  -137,   -23,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,   -23,   116,
    1884,  -137,   -23,  -137,   117,  -137,   -23,  -137,   118,  -137,
     -23,  -137,   119,   120,  2297,  2297,  -137,   -23,   124,   582,
    2297,  1943,  2297,  2002,  2297,  2061,  -137,  -137,   126,  2297,
    -137,   -23,   132,  2120,  -137,   -23,   134,  2179,  -137,   -23,
     135,   642,  -137,   -23,  -137,   136,  -137,   137,  2297,  -137,
     -23,  -137,  -137,  2297,  -137,   -23,  -137,  -137,  2297,  -137,
     -23,   138,   103,  2297,  2238,  -137,   139,  2297,   141,  2297,
     143,  2297,  -137,   -23,  -137,  -137,   -23,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,   144,  2297,  2297,  -137,  -137,  -137
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    13,    15,     0,     0,    14,    12,     0,     0,     0,
      16,     0,    56,    51,    55,    52,    17,    18,    19,    20,
      21,    22,     0,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,    96,    53,    54,     0,
       3,     8,     0,    29,    47,    57,     0,    61,    64,    69,
      72,    74,    76,    78,    80,    82,    84,    86,     0,     6,
       5,     4,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,    43,     0,    42,     0,     0,    42,
       1,     2,    10,     0,     0,    36,    37,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,   119,     0,     0,
       0,   151,     0,     0,   164,     0,     0,     0,   108,     0,
       0,     0,   141,     0,     0,    34,     0,   182,     0,   187,
     188,   189,   190,     0,   192,     0,     0,    26,     0,     0,
       7,    38,     0,    39,     0,     0,    35,    31,     0,    45,
       0,    33,    85,    58,    59,    60,    57,    62,    63,    65,
      66,    67,    68,    70,    71,    73,    75,    77,    79,    81,
       0,    87,     0,     0,     0,     0,     0,    98,    99,     0,
     100,     0,     0,   103,     0,   104,     0,     0,   102,     0,
       0,   101,     0,     0,   184,   105,     0,   186,   180,   191,
     194,   193,    38,    39,    44,     0,    11,    32,     0,    30,
       0,     0,     0,     0,     0,    95,    88,     0,   118,     0,
     121,     0,   150,     0,   153,     0,     0,   166,     0,   107,
       0,   110,     0,   140,     0,   143,   148,   181,     0,     9,
      46,    83,    92,     0,    90,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   145,     0,   147,
     139,   183,   185,    93,    91,    94,    89,   120,     0,   123,
     130,   152,     0,   155,     0,   165,     0,   168,     0,   109,
       0,   112,     0,   142,     0,     0,   125,     0,   128,   135,
       0,     0,     0,     0,     0,     0,   144,   146,   122,     0,
     129,     0,   132,   138,   154,     0,   157,   162,   167,     0,
     170,   177,   111,     0,   114,     0,   124,   126,     0,   134,
       0,   137,   117,     0,   159,     0,   161,   149,     0,   172,
       0,   174,   179,     0,     0,   127,   131,     0,   156,     0,
     169,     0,   176,     0,   163,   113,     0,   116,   106,   133,
     136,   158,   160,   171,   173,     0,     0,   175,   178,   115
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -137,    13,    -8,   104,  -137,  -137,  -137,  -137,    -3,   -25,
    -137,   246,  -137,   -10,    -9,    -7,   107,   112,   114,    90,
     111,  -137,   -18,   -34,    -1,  -137,  -137,   -62,  -136,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,  -137,
    -137,  -137,  -137,   140
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    93,    40,    41,   103,    42,    43,    44,    94,    95,
     178,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,   209,    62,
     149,   150,   262,   312,   345,   378,   138,   139,   251,   300,
     319,   333,   352,   153,   154,   266,   290,   142,   143,   255,
     304,   337,   357,   145,   146,   258,   308,   341,   362,   374,
     158,   159,   228,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,    99,   132,    75,   212,   127,   207,   174,   130,   100,
      98,   217,   167,    39,   173,   220,   172,   240,   130,   204,
     223,   205,   104,   105,   106,   130,    64,   130,   112,   237,
     273,   275,    90,   277,    65,   238,   130,   130,    99,   130,
     115,   116,   137,   141,   144,   148,   152,    66,   157,   175,
     121,   122,   163,   101,   165,   166,    81,    96,    99,   233,
     208,   172,    76,    99,   133,   134,   168,   169,   102,   202,
     203,   128,   168,   179,   129,   130,   182,   107,   113,   114,
     126,   108,   171,    77,   232,   109,   172,   239,   172,   130,
     268,   117,   118,   119,   120,    78,   201,    26,    27,    28,
      29,    30,    31,    32,   110,   187,   188,   180,   189,   190,
     191,   192,    79,   278,   193,   194,    80,   280,    82,    83,
     282,    84,    85,    86,   284,   227,    87,   200,   286,    88,
      89,   123,   135,   -86,   124,   160,   161,   125,    99,   162,
     235,   164,   170,   176,   181,   206,   276,   210,   213,   215,
     211,   214,   314,   218,   221,   373,   216,   219,   222,   225,
     229,   224,   315,   230,   231,   236,   320,   269,   131,   234,
     322,   279,   281,   283,   324,   248,   285,   250,   252,   296,
     254,   329,   257,   259,   287,   261,   263,   291,   265,   267,
     316,   321,   323,   325,   326,   348,   245,   246,   330,   353,
     346,   242,   244,   358,   270,   247,   349,   363,   354,   359,
     364,   365,   372,   379,   367,   381,   198,   383,   387,   369,
       0,   155,   271,     0,   371,     0,     0,     0,     0,     0,
     195,     0,   289,   272,   292,   274,   196,   385,   199,   197,
     386,     0,     0,     0,   297,   299,   301,   303,   305,   307,
     309,   311,   313,     0,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   293,   318,   294,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,   328,     0,     0,     0,   332,   334,   336,   338,   340,
     342,   344,   111,     0,     0,   347,     0,     0,     0,   351,
       0,     0,     0,   356,     0,     0,     0,   361,     0,     0,
       0,     0,     0,     0,   366,     0,     0,     0,     0,   368,
       0,     0,     0,     0,   370,     0,     0,     0,     0,   375,
     377,     0,     0,   380,     0,   382,     0,   384,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   388,   389,     0,     0,     0,     0,     0,   183,   184,
     185,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,     1,     0,     2,     3,     4,     5,
       0,     6,     7,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,    12,    13,    14,    15,
       0,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      34,     0,    35,     0,    36,     0,     0,    37,    38,     1,
       0,     2,     3,     4,     5,     0,     6,     7,     0,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,    12,    13,    14,    15,     0,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,   186,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,    91,     0,    92,     0,    36,
       0,     0,    37,    38,     1,     0,     2,     0,     0,     5,
       0,     6,     0,     0,     8,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    12,    13,    14,    15,
       0,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      72,     0,    35,     0,    36,     8,     9,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
       0,    72,     0,    35,     0,     8,     9,     0,    37,    38,
       0,     0,     0,     0,     0,     0,   331,    12,    13,    14,
      15,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
       0,    72,     0,    35,     0,     8,     9,     0,    37,    38,
       0,     0,     0,     0,     0,     0,   360,    12,    13,    14,
      15,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,   136,     0,     0,    21,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
       0,    72,     0,    35,     8,     9,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,   140,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      72,     0,    35,     8,     9,     0,     0,    37,    38,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,     0,
      67,    68,    69,    70,    71,   147,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    22,    23,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,     0,    72,
       0,    35,     8,     9,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,    12,    13,    14,    15,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    21,   151,    22,    23,    24,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,     0,    72,     0,
      35,     8,     9,     0,     0,    37,    38,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,   156,     0,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     0,    72,     0,    35,
       8,     9,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,    33,   177,    72,     0,    35,     8,
       9,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,    72,     0,    35,     0,    36,
       8,     9,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    22,    23,    24,    25,     0,     0,     0,   226,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,    33,     0,    72,     0,    35,     8,
       9,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,   241,    72,     0,    35,     8,     9,
       0,     0,    37,    38,     0,     0,     0,     0,     0,     0,
      12,    13,    14,    15,     0,    67,    68,    69,    70,    71,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,    33,   243,    72,     0,    35,     8,     9,     0,
       0,    37,    38,     0,     0,     0,     0,     0,     0,    12,
      13,    14,    15,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,   249,     0,    21,     0,    22,
      23,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,     0,    72,     0,    35,     8,     9,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,   253,     0,     0,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     0,    72,     0,    35,     8,     9,     0,     0,    37,
      38,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   256,
       0,     0,    26,    27,    28,    29,    30,    31,    32,    33,
       0,    72,     0,    35,     8,     9,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,   260,     0,     0,
       0,     0,     0,     0,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      72,     0,    35,     8,     9,     0,     0,    37,    38,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    22,    23,    24,    25,     0,
       0,   264,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,     0,    72,
       0,    35,     8,     9,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,    12,    13,    14,    15,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    22,    23,    24,    25,     0,     0,
       0,   288,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,     0,    72,     0,
      35,     8,     9,     0,     0,    37,    38,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,     0,    67,    68,
      69,    70,    71,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,    22,    23,    24,    25,   298,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     0,    72,     0,    35,
       8,     9,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,   302,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,    33,     0,    72,     0,    35,     8,
       9,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,    26,    27,    28,    29,
      30,    31,    32,    33,     0,    72,     0,    35,     8,     9,
       0,     0,    37,    38,     0,     0,     0,     0,     0,     0,
      12,    13,    14,    15,     0,    67,    68,    69,    70,    71,
       0,     0,   310,     0,     0,     0,     0,     0,    21,     0,
      22,    23,    24,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,    30,
      31,    32,    33,     0,    72,     0,    35,     8,     9,     0,
       0,    37,    38,     0,     0,     0,     0,     0,     0,    12,
      13,    14,    15,     0,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,    21,     0,    22,
      23,    24,    25,     0,   317,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,    30,    31,
      32,    33,     0,    72,     0,    35,     8,     9,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,     0,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     0,    22,    23,
      24,    25,     0,     0,     0,     0,     0,     0,     0,   335,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
      33,     0,    72,     0,    35,     8,     9,     0,     0,    37,
      38,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,     0,    67,    68,    69,    70,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    21,     0,    22,    23,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     339,     0,    26,    27,    28,    29,    30,    31,    32,    33,
       0,    72,     0,    35,     8,     9,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
       0,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,   343,    21,     0,    22,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      72,     0,    35,     8,     9,     0,     0,    37,    38,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,     0,
      67,    68,    69,    70,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    22,    23,    24,    25,     0,
       0,     0,   350,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,    33,     0,    72,
       0,    35,     8,     9,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,    12,    13,    14,    15,     0,    67,
      68,    69,    70,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    22,    23,    24,    25,     0,     0,
       0,   355,     0,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,    30,    31,    32,    33,     0,    72,     0,
      35,     8,     9,     0,     0,    37,    38,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,     0,    67,    68,
      69,    70,    71,     0,     0,     0,   376,     0,     0,     0,
       0,    21,     0,    22,    23,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,    30,    31,    32,    33,     0,    72,     0,    35,
       8,     9,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,     0,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    22,    23,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,    30,    31,    32,    33,     0,    72,     0,    35,     8,
       9,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,    67,    68,    69,    70,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
      30,    31,    32,    33,     0,    97,     0,    92,     0,     0,
       0,     0,    37,    38
};

static const yytype_int16 yycheck[] =
{
      34,    35,    64,    11,   140,    16,    29,    29,    74,     0,
      35,   147,    68,     0,    72,   151,    74,    83,    74,    68,
     156,    68,    12,    13,    14,    74,    67,    74,    28,    68,
      68,    68,    33,    68,    67,    74,    74,    74,    72,    74,
      76,    77,    76,    77,    78,    79,    80,    67,    82,    71,
      21,    22,    86,    40,    88,    89,    75,    91,    92,    72,
      83,    74,    67,    97,    65,    66,    91,    92,    43,   131,
     132,    82,    97,   107,    73,    74,   110,    67,    78,    79,
      15,    71,    70,    67,    70,    75,    74,    72,    74,    74,
     226,    17,    18,    19,    20,    67,   130,    60,    61,    62,
      63,    64,    65,    66,    29,   115,   116,   108,   117,   118,
     119,   120,    67,   249,   121,   122,    67,   253,    67,    67,
     256,    67,    67,    67,   260,   159,    67,   128,   264,    67,
      67,    26,    11,    73,    81,    68,    68,    80,   172,    68,
     174,    68,    70,    43,    43,    67,     4,    68,    68,    68,
      74,    74,   288,    68,    68,    52,    74,    74,    74,    68,
      68,    74,   298,    68,    68,    72,   302,    73,    64,   172,
     306,    74,    74,    74,   310,   209,    74,   211,   212,    73,
     214,   317,   216,   217,    74,   219,   220,    74,   222,   223,
      74,    74,    74,    74,    74,   331,   204,   205,    74,   335,
      74,   202,   203,   339,   238,   206,    74,   343,    74,    74,
      74,    74,    74,    74,   350,    74,   126,    74,    74,   355,
      -1,    81,   240,    -1,   360,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   266,   241,   268,   243,   124,   373,   127,   125,
     376,    -1,    -1,    -1,   278,   279,   280,   281,   282,   283,
     284,   285,   286,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   273,   300,   275,   276,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     314,   315,    -1,    -1,    -1,   319,   320,   321,   322,   323,
     324,   325,    46,    -1,    -1,   329,    -1,    -1,    -1,   333,
      -1,    -1,    -1,   337,    -1,    -1,    -1,   341,    -1,    -1,
      -1,    -1,    -1,    -1,   348,    -1,    -1,    -1,    -1,   353,
      -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,    -1,   363,
     364,    -1,    -1,   367,    -1,   369,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   385,   386,    -1,    -1,    -1,    -1,    -1,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     3,    -1,     5,     6,     7,     8,
      -1,    10,    11,    -1,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    71,    -1,    73,    -1,    -1,    76,    77,     3,
      -1,     5,     6,     7,     8,    -1,    10,    11,    -1,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,   240,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    -1,    76,    77,     3,    -1,     5,    -1,    -1,     8,
      -1,    10,    -1,    -1,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    71,    -1,    73,    13,    14,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    -1,    13,    14,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    -1,    13,    14,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    13,    14,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    71,    13,    14,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    -1,
      71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    13,
      14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    -1,    73,
      13,    14,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    -1,    71,    13,
      14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    13,    14,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    13,    14,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    43,    -1,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    71,    13,    14,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    -1,    71,    13,    14,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    13,    14,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    71,    13,    14,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    -1,
      71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    -1,    71,    13,
      14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    13,    14,
      -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    26,    27,    28,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    -1,    71,    13,    14,    -1,
      -1,    76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    69,    -1,    71,    13,    14,    -1,    -1,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    -1,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    -1,    69,    -1,    71,    13,    14,    -1,    -1,    76,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    69,    -1,    71,    13,    14,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      -1,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    -1,
      69,    -1,    71,    13,    14,    -1,    -1,    76,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    69,
      -1,    71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,    69,    -1,
      71,    13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    69,    -1,    71,
      13,    14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    -1,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    -1,    69,    -1,    71,    13,
      14,    -1,    -1,    76,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    26,    27,    28,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    -1,    71,    -1,    -1,
      -1,    -1,    76,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     6,     7,     8,    10,    11,    13,    14,
      23,    24,    25,    26,    27,    28,    30,    31,    32,    33,
      34,    43,    45,    46,    47,    48,    60,    61,    62,    63,
      64,    65,    66,    67,    69,    71,    73,    76,    77,    86,
      87,    88,    90,    91,    92,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   114,   148,    67,    67,    67,    30,    31,    32,
      33,    34,    69,    96,    96,    87,    67,    67,    67,    67,
      67,    75,    67,    67,    67,    67,    67,    67,    67,    67,
     109,    69,    71,    86,    93,    94,   108,    69,    94,   108,
       0,    86,    43,    89,    12,    13,    14,    67,    71,    75,
      29,    96,    28,    78,    79,    76,    77,    17,    18,    19,
      20,    21,    22,    26,    81,    80,    15,    16,    82,    73,
      74,    88,   112,   109,   109,    11,    40,   108,   121,   122,
      53,   108,   132,   133,   108,   138,   139,    35,   108,   115,
     116,    44,   108,   128,   129,   148,    39,   108,   145,   146,
      68,    68,    68,   108,    68,   108,   108,    68,    94,    94,
      70,    70,    74,    72,    29,    71,    43,    68,    95,   108,
     109,    43,   108,    96,    96,    96,    96,    98,    98,    99,
      99,    99,    99,   100,   100,   101,   102,   103,   104,   105,
     109,   108,   112,   112,    68,    68,    67,    29,    83,   113,
      68,    74,   113,    68,    74,    68,    74,   113,    68,    74,
     113,    68,    74,   113,    74,    68,    52,   108,   147,    68,
      68,    68,    70,    72,    93,   108,    72,    68,    74,    72,
      83,    68,   109,    68,   109,    87,    87,   109,   108,    41,
     108,   123,   108,    54,   108,   134,    57,   108,   140,   108,
      36,   108,   117,   108,    51,   108,   130,   108,   113,    73,
     108,   107,    87,    68,    87,    68,     4,    68,   113,    74,
     113,    74,   113,    74,   113,    74,   113,    74,    52,   108,
     131,    74,   108,    87,    87,    87,    73,   108,    49,   108,
     124,   108,    55,   108,   135,   108,    59,   108,   141,   108,
      37,   108,   118,   108,   113,   113,    74,    50,   108,   125,
     113,    74,   113,    74,   113,    74,    74,   108,   108,   113,
      74,    84,   108,   126,   108,    56,   108,   136,   108,    58,
     108,   142,   108,    42,   108,   119,    74,   108,   113,    74,
      52,   108,   127,   113,    74,    52,   108,   137,   113,    74,
      84,   108,   143,   113,    74,    74,   108,   113,   108,   113,
     108,   113,    74,    52,   144,   108,    38,   108,   120,    74,
     108,    74,   108,    74,   108,   113,   113,    74,   108,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    87,    87,    87,    87,    87,    88,
      89,    89,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    99,    99,    99,   100,   100,   100,   100,   100,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   110,   110,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   115,   116,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   122,   122,
     123,   123,   124,   124,   124,   124,   125,   125,   125,   125,
     125,   126,   126,   126,   126,   126,   127,   127,   127,   128,
     129,   129,   130,   130,   130,   130,   131,   131,   131,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   136,
     137,   137,   137,   138,   139,   140,   140,   141,   141,   142,
     142,   142,   142,   143,   143,   143,   143,   143,   144,   144,
     145,   146,   146,   146,   146,   147,   147,   147,   148,   148,
     148,   148,   148,   148,   148
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       4,     3,     4,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     1,     1,     3,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     3,     5,     7,
       6,     7,     6,     7,     7,     5,     1,     2,     1,     1,
       4,     4,     4,     4,     4,     4,     9,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     8,     3,     1,
       3,     1,     3,     1,     4,     2,     3,     4,     1,     2,
       0,     3,     1,     4,     2,     0,     3,     1,     0,     4,
       3,     1,     3,     1,     4,     2,     3,     1,     0,     8,
       3,     1,     3,     1,     3,     1,     3,     1,     4,     2,
       3,     1,     0,     9,     1,     3,     1,     3,     1,     3,
       1,     4,     2,     3,     1,     4,     2,     0,     3,     0,
       2,     3,     1,     4,     2,     3,     1,     0,     3,     3,
       3,     4,     3,     4,     4
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
      
#line 2070 "y.tab.c" /* yacc.c:1646  */
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
#line 400 "grammar.y" /* yacc.c:1906  */

#include <stdio.h>

extern char yytext[];

int yyerror(char *s){
	fflush(stdout);
	printf("%s\n", s);
}

int main(){
	return yyparse();
}

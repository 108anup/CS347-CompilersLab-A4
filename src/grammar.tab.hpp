/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

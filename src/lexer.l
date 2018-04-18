D                               [0-9]
L                               [a-zA-Z_]
BEG_COMMENT       ("/*")
END_COMMENT       ("*/")
SINGLE_COMMENT    ("//"[^\n]*)

%{
#ifndef YYBISON
#include "grammar.tab.hpp"          
#endif
#include "errors.h" 
#include <vector>
using namespace std;

static int curLineNum, curColNum;
vector<const char*> savedLines;

static void DoBeforeEachAction(); 
#define YY_USER_ACTION DoBeforeEachAction();

#define TAB_SIZE 8

%}

%s N
%x COPY COMM
%option stack

%%

<COPY>.*               { char curLine[512];
                         savedLines.push_back(strdup(yytext));
                         curColNum = 1; yy_pop_state(); yyless(0); }
<COPY><<EOF>>          { yy_pop_state(); }
<*>\n                  { curLineNum++; curColNum = 1;
                         if (YYSTATE == COPY) savedLines.push_back("");
                         else yy_push_state(COPY); }

[ ]+                   { /* ignore all spaces */  }
<*>[\t]                { curColNum += TAB_SIZE - curColNum%TAB_SIZE + 1; }

 /* -------------------- Comments ----------------------------- */
{BEG_COMMENT}          { BEGIN(COMM); }
<COMM>{END_COMMENT}    { BEGIN(N); }
 /*<COMM><<EOF>>          { //ReportError::UntermComment();
                         return 0; }*/
<COMM>.                { /* ignore everything else that doesn't match */ }
{SINGLE_COMMENT}       { /* skip to end of line for // comment */ }

 /* -------------------- Tokens ------------------------------- */
char                            { yylval.type = T_CHAR; return(CHAR); }
else                            { return(ELSE); }
float                           { yylval.type = T_FLOAT; return(FLOAT); }
for                             { return(FOR); }
if                              { return(IF); }
int                             { yylval.type = T_INT; return(INT); }
return                          { return(RETURN); }
void                            { yylval.type = T_VOID; return(VOID); }
while                           { return(WHILE); }
do                              { return(DO); }
bool                            { yylval.type = T_BOOL; return(BOOL); }
"->"                            { return(PTR_OP); }
"&"                             { return(AMP); }
"~"                             { return(TILDE); }
"+"                             { return(PLUS); }
"-"                             { return(MINUS); }
"*"                             { return(STAR); }
"/"                             { return(DIVIDE); }
"%"                             { return(MODULUS); }
"++"                            { return(INC_OP); }
"--"                            { return(DEC_OP); }
"&&"                            { return(AND_OP); }
"||"                            { return(OR_OP); }
"<"                             { return(LT); }
">"                             { return(GT); }
"<="                            { return(LE_OP); }
">="                            { return(GE_OP); }
"=="                            { return(EQ_OP); }
"!="                            { return(NE_OP); }
"!"                             { return(NOT); }
"="                             { return(ASSIGN); }
":"                             { return(COLON); }
"("                             { return(OPEN_BRACKET); }
")"                             { return(CLOSED_BRACKET); }
"{"                             { return(OPEN_CURLY); }
"}"                             { return(CLOSED_CURLY); }
L?\"(\\.|[^\\"])*\"             { yylval.stringConst_t = strdup(yytext); return(STRING_LITERAL); }
L?\'(\\.|[^\\'])*\'             { yylval.stringConst_t = strdup(yytext); return(STRING_LITERAL); }
"]"                             { return(CLOSED_SQUARE); }
"["                             { return(OPEN_SQUARE); }
[0-9]*"."[0-9]+                 { yylval.doubleConst_t = atof(yytext); return(REAL); } 
[0-9]+                          { yylval.intConst_t = atoi(yytext); return(NUM);}
true                            { yylval.boolConst_t = true; return(BOOLEAN);}
false                           { yylval.boolConst_t = false; return(BOOLEAN);}
{L}({L}|{D})*                   { 	
									if(yyleng > MAX_ID_LEN){
										OutputError(&yylloc, "Identifier too Long");
									}
									yylval.name = strdup(yytext);
									return(ID); }
";"                             { return(SEMI);}
","                             { return(COMMA); }
"."                             { return(DOT); }
"^"                             { return(XOR); }
"|"                             { return(PIPE); }
"?"                             { return(QUES); }
                                  
%%

void InitScanner()
{
    yy_flex_debug = false;
    BEGIN(N);
    yy_push_state(COPY); // copy first line at start
    curLineNum = 1;
    curColNum = 1;
}

static void DoBeforeEachAction()
{
   yylloc.first_line = curLineNum;
   yylloc.first_column = curColNum;
   yylloc.last_column = curColNum + yyleng - 1;
   curColNum += yyleng;
}

const char *GetLineNumbered(int num) {
   if (num <= 0 || num > savedLines.size()) return NULL;
   return savedLines[num-1]; 
}

int yywrap(void) 
{ 
    return(1);
}





D                               [0-9]
L                               [a-zA-Z_]
WS                              [ \t\n\v\f]

%{
#include "grammar.tab.hpp"
%}

%% 
char                            { return(CHAR); }
else                            { return(ELSE); }
float                           { return(FLOAT); }
for                             { return(FOR); }
if                              { return(IF); }
int                             { return(INT); }
return                          { return(RETURN); }
void                            { return(VOID); }
while                           { return(WHILE); }
do                              { return(DO); }
bool                            { return(BOOL); }
mem_size                        { return(MEM_SIZE); }
memory_type                     { return(MEMORY_TYPE); }
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
L?\"(\\.|[^\\"])*\"             { return(STRING_LITERAL); }
L?\'(\\.|[^\\'])*\'             { return(STRING_LITERAL); }
"]"                             { return(CLOSED_SQUARE); }
"["                             { return(OPEN_SQUARE); }
[0-9]*"."[0-9]+                 { return(REAL); } 
[0-9]+                          { return(NUM);}
{L}({L}|{D})*                   { return(ID); }
";"                             { return(SEMI);}
","                             { return(COMMA); }
"."                             { return(DOT); }
"^"                             { return(XOR); }
"|"                             { return(PIPE); }
"?"                             { return(QUES); }
{WS}+                           {}                                      


%%

int yywrap(void) 
{ 
    return(1);
}





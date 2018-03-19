D                               [0-9]
L                               [a-zA-Z_]
WS                              [ \t\n\v\f]

%{
#include "y.tab.h"
%}

%% 
Processor                       { return(PROCESSOR); }
Link                            { return(LINK); }
Cluster                         { return(CLUSTER); }
Job                             { return(JOB); }
Memory                          { return(MEMORY); }
Scheduler                       { return(SCHEDULER); }
sched                           { return(SCHED); }
job_id                          { return(JOB_ID); }
flops_required                  { return(FLOPS_REQUIRED); }
deadline                        { return(DEADLINE); }
affinity                        { return(AFFINITY); }
algo                            { return(ALGO); }
isa                             { return(ISA); }
clock_speed                     { return(CLOCK_SPEED); }        
mem_required                    { return(MEM_REQUIRED); }
l1_memory                       { return(L1_MEMORY); } 
l2_memory                       { return(L2_MEMORY); }
memory_size                     { return(MEM_SIZE); }
name                            { return(NAME); }
start_point                     { return(START_POINT); }
end_point                       { return(END_POINT); }
bandwidth                       { return(BANDWIDTH); }
channel_capacity                { return(CHANNEL_CAPACITY); }
topology                        { return(TOPOLOGY); }
link_capacity                   { return(LINK_CAPACITY); }
link_bandwidth                  { return(LINK_BANDWIDTH); }
get_available_memory            { return(GET_AVAILABLE_MEMORY); }
get_memory                      { return(GET_MEMORY); }
is_running                      { return(IS_RUNNING); }
submit_jobs                     { return(SUBMIT_JOBS); }
get_clock_speed                 { return(GET_CLOCK_SPEED); }
discard_job                     { return(DISCARD_JOB); }
run                             { return(RUN); }
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





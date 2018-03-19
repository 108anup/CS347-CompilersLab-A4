#include <stdio.h>
#include "y.tab.h"

extern int yylex();
extern int yylineno;
extern char *yytext;
extern int yyleng;

int main(void)
{
	FILE *fp = fopen("token.txt" ,"w");
	int ntoken, vtoken ,i = 0;

	ntoken = yylex();
	while(ntoken)
	{
		fprintf(fp, "%s", yytext);
		for(i = 0;i<18-yyleng; i++)
			fprintf(fp, "%c", ' ');
		fprintf(fp, "%d\n", ntoken);
		ntoken = yylex();
	}
	return 0;
}

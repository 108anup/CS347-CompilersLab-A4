#ifndef ERRORS_H
#define ERRORS_H

#define MAX_ID_LEN 255
#include "location.h"
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void UnderlineErrorInLine(const char *line, YYLTYPE *pos);
void OutputError(YYLTYPE *loc, string msg);
void Formatted(YYLTYPE *loc, const char *format, ...);
void yyerror(const char *msg);

extern int numErrors;

#endif

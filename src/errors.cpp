#include "errors.h"
#include "lexer.h"
#include "location.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include <stdarg.h>

using namespace std;

void UnderlineErrorInLine(const char *line, YYLTYPE *pos) {
    if (!line) return;
    cerr << line << endl;
    for (int i = 1; i <= pos->last_column; i++)
        cerr << (i >= pos->first_column ? '^' : ' ');
    cerr << endl;
}

void OutputError(YYLTYPE *loc, string msg) {
    numErrors++;
    fflush(stdout); // make sure any buffered text has been output
    if (loc) {
        cerr << endl << "*** Error line " << loc->first_line << "." << endl;
        UnderlineErrorInLine(GetLineNumbered(loc->first_line), loc);
    } else
        cerr << endl << "*** Error." << endl;
    cerr << "*** " << msg << endl << endl;
}

void Formatted(YYLTYPE *loc, const char *format, ...) {
    va_list args;
    char errbuf[2048];
    
    va_start(args, format);
    vsprintf(errbuf,format, args);
    va_end(args);
    OutputError(loc, errbuf);
}

void yyerror(const char *msg) {
    Formatted(&yylloc, "%s", msg);
}

int numErrors = 0;
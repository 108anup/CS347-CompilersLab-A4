#ifndef LOCATION_H
#define LOCATION_H

#ifndef YYLTYPE

typedef struct YYLTYPE
{
	int first_line, first_column;
	int last_line, last_column;      
	//char *text;
} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1

extern YYLTYPE yylloc;

#endif
#endif
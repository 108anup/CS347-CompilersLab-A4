parser: lexer.l grammar.ypp
	flex lexer.l
	bison -d --debug --verbose grammar.ypp
	g++ lex.yy.c grammar.tab.cpp -ll -ly -o parser

clean:
	rm parser grammar.tab.* lex.yy.c
	rm *~

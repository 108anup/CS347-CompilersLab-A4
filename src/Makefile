parser: lexer.l grammar.y
	lex lexer.l
	yacc -dy --debug --verbose grammar.y
	gcc lex.yy.c y.tab.c -ll -ly -o parser

clean:
	rm parser y.tab.* lex.yy.c
	rm *~

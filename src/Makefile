CC := g++ -g

parser: lex.yy.c grammar.tab.cpp errors.o ast.o lexer.h location.h
	$(CC) lex.yy.c grammar.tab.cpp errors.o ast.o -ll -ly -o parser

lex.yy.c: lexer.l
	flex -d lexer.l

grammar.tab.cpp: grammar.ypp
	bison -d --debug --verbose grammar.ypp

ast.o: ast.cpp ast.h
	$(CC) -c ast.cpp

errors.o: errors.cpp errors.h
	$(CC) -c errors.cpp

clean:
	rm parser grammar.tab.* lex.yy.c out.txt grammar.output *.o
	rm *~

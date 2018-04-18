parser: lexer.l grammar.ypp errors.o ast.o lexer.h
	flex -d lexer.l
	bison -d --debug --verbose grammar.ypp
	g++ lex.yy.c grammar.tab.cpp errors.o -ll -ly -o parser

ast.o: ast.cpp ast.h
	g++ -c ast.cpp

errors.o: errors.cpp errors.h
	g++ -c errors.cpp

clean:
	rm parser grammar.tab.* lex.yy.c out.txt grammar.output *.o
	rm *~

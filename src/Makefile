CC := g++ -g

parser: lex.yy.c grammar.tab.cpp errors.o ast.o mips.o lexer.h location.h
	$(CC) lex.yy.c grammar.tab.cpp errors.o ast.o mips.o -ll -ly -o parser

lex.yy.c: lexer.l
	flex -d lexer.l

grammar.tab.cpp: grammar.ypp
	bison -d --debug --verbose grammar.ypp

ast.o: ast.cpp ast.h errors.h location.h grammar.ypp
	$(CC) -c ast.cpp

mips.o: mips.cpp mips.h ast.h
	$(CC) -c mips.cpp

errors.o: errors.cpp errors.h lexer.h location.h ast.h
	$(CC) -c errors.cpp

TAGS:
	find . -maxdepth 1 -type f -regex ".*\.\(cpp\|h\|ypp\|l\)" | xargs etags -a

cscope:
	find . -maxdepth 1 -type f -regex ".*\.\(cpp\|h\|ypp\|l\)" > cscope.files
	cscope -b -q -k 

clean:
	$(RM) -v parser grammar.tab.* lex.yy.c out.txt grammar.output *.o
	$(RM) -v *~

cleanall: clean
	$(RM) -v cscope.*
	$(RM) -v TAGS
make
./parser < ../tests/c{$i}.c


cd tmp
lex lexer.l
gcc lex.yy.c scanner.c -o scanner
./scanner < ../../tests/c{$i}.c

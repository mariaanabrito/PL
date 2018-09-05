linguagem: lex.yy.o y.tab.o
		gcc -o linguagem y.tab.o lex.yy.o -ll

y.tab.o: y.tab.c
		gcc -c y.tab.c

y.tab.c y.tab.h: linguagem.y variavel.c variavel.h
		yacc -d linguagem.y

lex.yy.o: lex.yy.c
		gcc -c lex.yy.c

lex.yy.c: linguagem.l y.tab.h
		flex linguagem.l

clean:
	@rm *.o
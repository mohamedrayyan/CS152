all: file1 lexer
file1: mini_l.lex
	flex mini_l.lex
lexer: lex.yy.c
	g++ -o lexer lex.yy.c -ll

parser: mini_l.lex mini_l.yy
		bison -v -d --file-prefix=parser mini_l.y
		flex mini_l.lex
		g++ -std=c++11 -o parser parser.tab.cc lex.yy.c -lfl
		rm -f lex.yy.c parser.tab.* parser.output *.o location.hh position.hh stack.hh
clean:
		rm -f lex.yy.c y.tab.* y.output *.o parser
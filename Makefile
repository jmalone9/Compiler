# Makefile
#
THING1=lexer.cpp parser.tab.cpp lexer_lex.cpp nodes.cpp
THING2=parser.tab.hpp nodes.hpp

parser: $(THING1) $(THING2)
	g++ -ggdb -Wno-sign-compare $(THING1) -o parser

parser.tab.cpp: parser.ypp
	bison -d parser.ypp

lexer_lex.cpp: lexer.lpp
	flex++ --warn lexer.lpp

test1: parser
	./parser < test1.f23
test2: parser
	./parser < test2.f23

clean:
	rm lexer_lex.cpp parser parser.tab.cpp parser.tab.hpp


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

testJM9: parser
	./parser < jmalone9.f23 > jmalone9OUT.f23
testCM18: parser
	./parser < cmyers18.f23 > cmyers18OUT.f23
testMG: parser
	./parser < mg.f23 > mgOUT.f23

clean:
	rm lexer_lex.cpp parser parser.tab.cpp parser.tab.hpp testout.f23 jmalone9OUT.f23 cmyers18OUT.f23 mgOUT.f23


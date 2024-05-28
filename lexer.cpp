#include <iostream>
#include<FlexLexer.h>
#include<string>
#include<iostream>
#include<fstream>
#include<string>
#include"nodes.hpp"
#include"parser.tab.hpp"
#include<FlexLexer.h>
#include <stack>

using namespace std;


Node *tree;

yyFlexLexer scanner;
int main(){

printf("\nTESTTESTTEST\n");
	/*FlexLexer *scanner = new yyFlexLexer;
	int rval = 0;
	while((rval = scanner->yylex())){

	}
	return 0;*/

	/*while(yyparse() == 0){

	}*/
  yyparse();
  cout << "PRINTING TREE\n" << endl;
  tree->print(&cout);
  cout << endl;
	return 0;
}

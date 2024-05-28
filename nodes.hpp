#ifndef NODES_HPP
#define NODES_HPP
#include<iostream>
#include<string>


using std::string;
using std::endl;
using std::ostream;

class Node
{
	public:
	Node(Node *ln = 0, Node *rn = 0) ;
	Node *left, *right;
	Node *next;
	Node *prev;
	void setval(const char *v);
	void setval(const string s);
	void setval(int i);
	void setval(double d);
	void setleft(Node *p);
	void setright(Node *p);
	void setnext(Node *p);
	void setprev(Node *p);
	int ID;
	double dval;
	string sval;
	int ival;
	virtual void print(ostream *out = 0);

};

#endif

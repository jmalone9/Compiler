#include"nodes.hpp"

Node::Node(Node *ln, Node *rn) : ival(0), dval(0.0), left(ln), right(rn), next(0), prev(0), ID(0) {
sval.clear();
}

void Node::setval(const char *v){
 sval = v;
}

void Node::setval(const string s){
 sval = s;
}

void Node::setval(int i){
 ival = i;
}

void Node::setval(double d){
 dval = d;

}

void Node::setleft(Node *p){
 left = p;
}

void Node::setright(Node *p){
 right = p;
}

void Node::setnext(Node *p){
	if(next == 0){
		next = p;	
	}
	else{
		next->setnext(p);
	}
	return;
}

void Node::setprev(Node *p){
	if(prev == 0){
		prev = p;	
	}
	else{
		prev->setprev(p);
	}
	return;
}

void Node::print(ostream *out)
{
  if(left) left->print(out);
  *out << sval ;
  if(right) right->print(out);
  //*out << endl;
  if(next) {
    *out << endl;
    next->print(out);
  }
  return;
}

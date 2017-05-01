#pragma once
class Node
{
public:
	Node();
	Node(void * v, Node * p, Node * n);
	void setValue(void * v);
	void * getValue();
	void setPrevious(Node * p);
	Node * getPrevious();
	void setNext(Node * n);
	Node * getNext();
	~Node();
private:
	void * value;
	Node * previous;
	Node * next;
};


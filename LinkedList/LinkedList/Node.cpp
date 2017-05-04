#include "Node.h"

using namespace csc195::hannegrefsdahlen;

Node::Node()
{

}

Node::Node(void* v, Node * p, Node * n)
{
	this->setValue(v);
	this->setPrevious(p);
	this->setNext(n);
}

void Node::setValue(void* v)
{
	this->value = v;
}

void * Node::getValue()
{
	return this->value;
}

void Node::setPrevious(Node * p)
{
	this->previous = p;
}

Node * Node::getPrevious()
{
	return this->previous;
}

void Node::setNext(Node * n)
{
	this->next = n;
}

Node * Node::getNext()
{
	return this->next;
}

Node::~Node()
{
	if (next != 0)
	{
		delete next;
		next = 0;
	}
}
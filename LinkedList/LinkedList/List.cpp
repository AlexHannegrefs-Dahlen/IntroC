#include "List.h"
#include "Node.h"
#include <iostream>
#include <exception>

List::List()
{
	sizeOfList = 0;
	startNode = 0;
}

void List::add(void * value)
{
	if (sizeOfList == 0)
	{
		startNode = new Node(value, 0, 0);
	}
	else
	{
		Node * currentNode = startNode;
		while (currentNode->getNext() != 0)
		{
			currentNode = currentNode->getNext();
		}

		currentNode->setNext(new Node(value, currentNode, 0));
	}
	sizeOfList++;
}

void List::insert(void * value, int space)
{	
	if (space > size())
		throw std::exception("cannot insert past the size of the list");
	Node * current = startNode;
	for (int i = 0; i < space; i++)
	{
		current = current->getNext();
		if (i == space)
			break;
	}
	Node * insert = new Node(value, current->getPrevious(), current);
	current->getPrevious()->setNext(insert);
	sizeOfList++;
}

void List::remove(int space)
{
	if (space > size())
		throw std::exception("cannot remove past the size of the list");
	Node * current = startNode;
	for (int i = 0; i <= space; i++)
	{
		if (i == space)
		{

			current->getPrevious()->setNext(current->getNext());
			current->getNext()->setPrevious(current->getPrevious());
			current->setNext(0);
			current->setPrevious(0);
			delete current;
			sizeOfList--;
		}else
			current = current->getNext();
	}
}

void List::removeAll(void * value)
{
	Node * current = startNode;
	for (int i = 0; i < size(); i++)
	{
		if (current->getValue() == value)
		{
			remove(i);
			removeAll(value);
		}
		else
		{
			current = current->getNext();
		}
	}
}

void List::clear() 
{
	sizeOfList = 0;
}

void List::traverse(void f(void *))
{
	if (sizeOfList != 0)
	{
		Node * current = startNode;
		while (current != 0)
		{
			f(current->getValue());
			current = current->getNext();
		}
	}
}

void List::sort(int cmp(void *, void *))
{
	Node * current;
	bool changed = true;
	while (changed)
	{
		changed = false;
		current = startNode;
		while (current->getNext() != 0)
		{
			int result = cmp(current->getValue(), current->getNext()->getValue());
			if (result < 0)
			{
				void * tmp = current->getValue();
				current->setValue(current->getNext()->getValue());
				current->getNext()->setValue(tmp);
				changed = true;
			}
			current = current->getNext();
		}
	}
}

int List::size()
{
	return sizeOfList;
}

List::~List()
{
	if (startNode != 0)
	{
		delete startNode;
		startNode = 0;
	}
}

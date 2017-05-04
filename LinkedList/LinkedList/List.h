#pragma once
class Node;
namespace csc195
{
	namespace hannegrefsdahlen
	{
		template<class T>
		class List
		{
		public:
			List();
			~List();
			void add(T*);
			void insert(T*, int);
			void remove(int);
			void removeAll(T*);
			void clear();
			void traverse(void f(void*));
			void sort(int cmp(void*, void*));
			int size();
		private:
			int sizeOfList;
			Node * startNode;
		};
	}
}


#include "List.h"
#include "Node.h"
#include <iostream>
#include <exception>

using namespace csc195::hannegrefsdahlen;

template <class T>
List<T>::List()
{
	sizeOfList = 0;
	startNode = 0;
}

template <class T>
void List<T>::add(T* value)
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

template <class T>
void List<T>::insert(T* value, int space)
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

template <class T>
void List<T>::remove(int space)
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
		}
		else
			current = current->getNext();
	}
}

template <class T>
void List<T>::removeAll(T* value)
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

template <class T>
void List<T>::clear()
{
	sizeOfList = 0;
}

template <class T>
void List<T>::traverse(void f(void *))
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

template <class T>
void List<T>::sort(int cmp(void *, void *))
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

template <class T>
int List<T>::size()
{
	return sizeOfList;
}

template <class T>
List<T>::~List()
{
	if (startNode != 0)
	{
		delete startNode;
		startNode = 0;
	}
}

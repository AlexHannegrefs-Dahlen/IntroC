#pragma once
class Node;

class List
{
public:
	List();
	~List();
	void add(void *);
	void insert(void *, int);
	void remove(int);
	void removeAll(void *);
	void clear();
	void traverse(void f(void *));
	void sort(int cmp(void *, void *));
	int size();
private:
	int sizeOfList;
	Node * startNode;
};


#include "ArrayList.h"
#include <iostream>

void printEntry(int &v)
{
	std::cout << v << std::endl;
}

int main()
{
	ArrayList<int> list(20);
	int a = 1, b = 2, c = 3, d = 4, e = 5;
	list.add(a);
	list.add(b);
	list.add(c);
	list.add(d);
	list.add(e);
	list.traverse(printEntry);
	list.remove(1);
	list.traverse(printEntry);
}
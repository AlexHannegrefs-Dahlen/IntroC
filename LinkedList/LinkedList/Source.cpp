#include "MemTester.h"
#include "List.h"
#include "Node.h"
#include <iostream>

void printValue(void * n)
{
	std::cout << *(int*)n <<std::endl;
}

int cmp(void * p1, void * p2)
{
	if (p1 < p2)
		return -1;
	else if (p1 > p2)
		return 1;
	else return 0;
}

int main()
{
	List mylist;
	int first = 0, second = 2, third = 6, fourth = 14, fifth = 30, sixth = 62, seveth = 126;

	mylist.add(&seveth);
	mylist.add(&fifth);
	mylist.add(&third);
	mylist.add(&second);
	mylist.add(&first);

	mylist.insert(&sixth, 4);

	mylist.traverse(printValue);

	mylist.sort(cmp);

	mylist.traverse(printValue);
}
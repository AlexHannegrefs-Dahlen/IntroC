#include <iostream>
#include "Sheriff.h"
#include "Flying.h"
#include "Vig.h"
#include "Jester.h"
#include "MemTester.h"
#include "List.h"

void print(void* hero)
{
	std::cout << *(SuperPerson*)hero << std::endl;
}
int cmp(void* h1, void* h2)
{
	if (*(SuperPerson*)h1 < *(SuperPerson*)h2)
		return -1;
	else if (*(SuperPerson*)h1 > *(SuperPerson*)h2)
		return 1;
	else
		return 0;
}

int main()
{
	List<SuperPerson> list;
	Sheriff hero("Sheriff", 90, true, 10, 2);
	Flying hero2("Flying", 92, false, 5, 20);
	Vig hero3("Vig", 54, true, 16, 2);
	Jester hero4("Jester", 15, true, 2, 4);
	list.add(&hero);
	list.add(&hero2);
	list.add(&hero3);
	list.add(&hero4);

	list.traverse(print);

	list.sort(cmp);

	std::cout << std::endl;

	list.traverse(print);
}
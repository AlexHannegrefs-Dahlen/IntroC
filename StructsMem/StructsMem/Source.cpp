#include <string.h>
#include <iostream>

struct Person
{
	char * name;
	int age;
};

void function(Person  p2)
{
	std::cout << p2.name[7] << std::endl;
	strcpy(p2.name, "fredrick");
	std::cout << p2.name[7] << std::endl;
}

int main()
{
	Person p;
	p.name = new char[10];
	strcpy(p.name, "fred");
	p.age = 10;
	function(p);
	std::cout << p.name[7] << std::endl;
}
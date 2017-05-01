#include "MemTester.h"
#include <iostream>
#include <string.h>

struct Animal
{
	char* name = 0;
	int age;
};

Animal * zoo[10];
int index = 0;

int PopulateAnimal(Animal * animal)
{
	std::cout << "Enter name" << std::endl;
	char tempName[255] = { 0 };
	std::cin >> tempName;
	std::cout << "Enter age" << std::endl;
	int tempAge = 0;
	std::cin >> tempAge;

	animal->age = tempAge;
	int len = strlen(tempName);
	animal->name = new char[len + 1];
	strcpy(animal->name, tempName);

	zoo[index] = animal;
	index++;
	return 0;
}

void FreeAnimalMembers(Animal * myAnimal)
{
	if (!myAnimal->name)
	{
		delete[] myAnimal->name;
		myAnimal->name = 0;
	}
}

void FreeZoo()
{
	for(int i = 0; i < 10; i++)
	{
		if (!zoo[i])
		{
			FreeAnimalMembers(zoo[i]);
			delete zoo[i];
			zoo[i] = 0;
		}
	}
}

int main()
{
	int keepGoing = 1;
	while (keepGoing)
	{
		std::cout << "Question? [1/0]" << std::endl;
		std::cin >> keepGoing;
		if (keepGoing)
		{
			Animal * animal = new Animal;
			PopulateAnimal(animal);
			std::cout << animal->name << std::endl;
		}
	}
	FreeZoo();
	return 0;
}
#include "MemTester.h"
#include <iostream>
#include <string.h>

struct Address
{
	char* street1;
	char* city;
	char* state;
	int zip;
};

struct Person
{
	char* name;
	char* email;
	Address* address;
};

void initPerson(Person* p);
void printPeople();
void FreePeopleArray();
void FreePeopleMem();

Person* people[10000];

int* PnumOfPeople = 0;

int main()
{
	int numOfPeople;
	std::cout << "How many contacts?" << std::endl;
	std::cin >> numOfPeople;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Encoutered error" << std::endl;
		std::cout << "Renter number of contacts" << std::endl;
		std::cin >> numOfPeople;
	}

	PnumOfPeople = &numOfPeople;

	Person * pPeople = new Person[*PnumOfPeople];
	for (int i = 0; i < *PnumOfPeople; i++)
	{
		people[i] = &pPeople[i];
	}

	int keepGoing = 1;
	while (keepGoing)
	{
		Address * a = new Address;
		Person * p = new Person;
		p->address = a;
		initPerson(p);
		keepGoing++;
		if (numOfPeople <= keepGoing-1)
		{
			keepGoing = 0;
		}
	}
	printPeople();
	FreePeopleArray();
	delete[] pPeople;
	return 0;
}

void FreePeopleArray()
{
	FreePeopleMem();
	for (int i = 0; i < *PnumOfPeople; i++)
	{
		delete people[i];
	}
}

void FreePeopleMem()
{
	for (int i = 0; i < *PnumOfPeople; i++)
	{
		delete[] people[i]->name;
		delete[] people[i]->email;
		delete[] people[i]->address->city;
		delete[] people[i]->address->state;
		delete[] people[i]->address->street1;
		delete people[i]->address;
	}
}

void printPeople()
{
	for (int i = 0; i < *PnumOfPeople; i++)
	{
		std::cout << "Person " << i + 1 << std::endl;
		std::cout << "Name: " << people[i]->name << std::endl;
		std::cout << "Email: " << people[i]->email << std::endl;
		std::cout << "Street: " << people[i]->address->street1 << std::endl;
		std::cout << "City: " << people[i]->address->city << std::endl;
		std::cout << "State: " << people[i]->address->state << std::endl;
		std::cout << "Zip: " << people[i]->address->zip << std::endl;
	}
}

int index = 0;

void initPerson(Person* p)
{
	std::cout << "Enter name" << std::endl;
	char tempName[255] = { 0 };
	std::cin >> tempName;

	int len = strlen(tempName);
	p->name = new char[len + 1];
	strcpy(p->name, tempName);

	std::cout << "Enter email" << std::endl;
	char tempEmail[255] = { 0 };
	std::cin >> tempEmail;

	len = strlen(tempEmail);
	p->email = new char[len+1];
	strcpy(p->email, tempEmail);

	std::cout << "Enter street" << std::endl;
	char tempStreet[255] = { 0 };
	std::cin >> tempStreet;

	len = strlen(tempStreet);
	p->address->street1 = new char[len + 1];
	strcpy(p->address->street1, tempStreet);

	std::cout << "Enter city" << std::endl;
	char tempCity[255] = { 0 };
	std::cin >> tempCity;

	len = strlen(tempCity);
	p->address->city = new char[len + 1];
	strcpy(p->address->city, tempCity);

	std::cout << "Enter state" << std::endl;
	char tempState[255] = { 0 };
	std::cin >> tempState;

	len = strlen(tempState);
	p->address->state = new char[len + 1];
	strcpy(p->address->state, tempState);

	std::cout << "Enter zip" << std::endl;
	int tempZip = 0;
	std::cin >> tempZip;

	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Encoutered error" << std::endl;
		std::cout << "Renter zip" << std::endl;
		std::cin >> tempZip;
	}

	p->address->zip = tempZip;

	people[index] = p;
	index++;
}
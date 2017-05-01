#pragma once
#include "SuperPerson.h"
class SuperHero :
	public SuperPerson
{
public:
	SuperHero();
	SuperHero(std::string name, int power, bool secret, int saves);
	friend std::ostream& operator<<(std::ostream& out, SuperHero& p);
	int GetNumberOfSaves();
	void SetNumberOfSaves(int);
	~SuperHero();
private:
	int numberOfSaves;
};


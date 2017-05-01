#include <iostream>
#include "SuperHero.h"

using namespace std;

SuperHero::SuperHero()
{
}

SuperHero::SuperHero(std::string name, int power, bool secret, int saves)
	:SuperPerson(name, power, secret)
{

}

ostream& operator<<(ostream& out, SuperHero & p)
{
	
}

int SuperHero::GetNumberOfSaves()
{
	return this->numberOfSaves;
}

void SuperHero::SetNumberOfSaves(int saves)
{
	this->numberOfSaves = saves;
}

SuperHero::~SuperHero()
{
}

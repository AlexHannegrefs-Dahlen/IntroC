#include <iostream>
#include <string>
#include "SuperHero.h"

using namespace std;

SuperHero::SuperHero()
{
}

SuperHero::SuperHero(std::string name, int power, bool secret, int saves)
	:SuperPerson(name, power, secret)
{
	this->SetNumberOfSaves(saves);
}

ostream& csc195::hannegrefsdahlen::operator<<(ostream& out, SuperHero& hero)
{
	std::string inden;
	if (hero.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << hero.GetName() << " " << hero.GetPowerLvl() << " " << inden << " " << hero.GetNumberOfSaves();
	return out;
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

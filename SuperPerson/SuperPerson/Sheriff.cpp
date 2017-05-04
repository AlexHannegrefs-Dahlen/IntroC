#include "Sheriff.h"
#include <string>


Sheriff::Sheriff()
{
}

Sheriff::Sheriff(std::string name, int power, bool secret, int saves, int deputies)
	:SuperHero(name, power, secret, saves)
{
	this->SetDeputies(deputies);
}

std::ostream& csc195::hannegrefsdahlen::operator<<(std::ostream& out, Sheriff& hero)
{
	std::string inden;
	if (hero.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << hero.GetName() << " " << hero.GetPowerLvl() << " " << inden << " " << hero.GetNumberOfSaves() << " " << hero.GetDeputies();
	return out;
}

void Sheriff::SetDeputies(int dep)
{
	this->Deputies = dep;
}

int Sheriff::GetDeputies()
{
	return this->Deputies;
}

void Sheriff::TrashTalk()
{
	std::cout << "I'm a sheriff" << std::endl;
}

Sheriff::~Sheriff()
{
}

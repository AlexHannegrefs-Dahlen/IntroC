#include <ostream>
#include "SuperHero.h"
using namespace csc195;
using namespace hannegrefsdahlen;
using namespace std;

ostream& csc195::hannegrefsdahlen::operator<<(ostream& out, SuperHero & p)
{
	string inden;
	if (p.SecretIdentity == 0)
	
		inden = "false";
	
	else 
		inden = "true";
	out << p.name << " " << p.PowerLevel << " " << inden;
	return out;
}

SuperHero::SuperHero()
{

}

SuperHero::SuperHero(std::string name, int PowerLvl, bool secIdent)
{
	this->name = name;
	this->SecretIdentity = secIdent;
	this->PowerLevel = PowerLvl;
}

bool SuperHero::operator==(SuperHero& hero)
{
	return this->PowerLevel == hero.PowerLevel;
}
bool SuperHero::operator!=(SuperHero&hero)
{
	return !((*this) == hero);
}
bool SuperHero::operator<(SuperHero&hero)
{
	return this->PowerLevel < hero.PowerLevel;
}
bool SuperHero::operator>(SuperHero&hero)
{
	return this->PowerLevel > hero.PowerLevel;
}
bool SuperHero::operator<=(SuperHero&hero)
{
	return this->PowerLevel <= hero.PowerLevel;
}
bool SuperHero::operator>=(SuperHero&hero)
{
	return this->PowerLevel >= hero.PowerLevel;
}
SuperHero& SuperHero::operator=(SuperHero hero)
{
	this->name = hero.name;
	this->PowerLevel = hero.PowerLevel;
	this->SecretIdentity = hero.SecretIdentity;
	return *this;
}

SuperHero::~SuperHero()
{
}

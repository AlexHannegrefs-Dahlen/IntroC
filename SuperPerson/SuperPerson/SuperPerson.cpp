#include <ostream>
#include <string>
#include "SuperPerson.h"
using namespace std;
using namespace csc195;
using namespace hannegrefsdahlen;

SuperPerson::SuperPerson()
{

}

ostream& csc195::hannegrefsdahlen::operator<<(ostream& out, SuperPerson& p)
{
	string inden;
	if (p.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << p.GetName() << " " << p.GetPowerLvl() << " " << inden;
	return out;
}

SuperPerson::SuperPerson(std::string name, int PowerLvl, bool secIdent)
{
	this->SetName(name);
	this->SecretIdentity = secIdent;
	this->PowerLevel = PowerLvl;
}

std::string SuperPerson::GetName()
{
	return this->name;
}

void SuperPerson::SetName(std::string name)
{
	this->name = name;
}

int SuperPerson::GetPowerLvl()
{
	return this->PowerLevel;
}

void SuperPerson::SetPowerLvl(int pLvl)
{
	this->PowerLevel = pLvl;
}

bool SuperPerson::IsSecretIdentity()
{
	return this->SecretIdentity;
}

void SuperPerson::SetSecretIdentity(bool iden)
{
	this->SecretIdentity = iden;
}

bool SuperPerson::operator==(SuperPerson& test)
{
	return this->GetPowerLvl() == test.GetPowerLvl();
}
bool SuperPerson::operator!=(SuperPerson& test)
{
	return !(*this == test);
}
bool SuperPerson::operator<(SuperPerson& test)
{
	if (this->GetPowerLvl() < test.GetPowerLvl())
		return true;
	else
		return false;
}
bool SuperPerson::operator>(SuperPerson& test)
{
	return !(*this < test);
}
bool SuperPerson::operator<=(SuperPerson& test)
{
	if (*this != test)
		return *this < test;
	else
		return true;
}
bool SuperPerson::operator>=(SuperPerson& test)
{
	if (*this != test)
		return *this > test;
	else
		return true;
}
void SuperPerson::operator=(SuperPerson&  test)
{
	this->SetPowerLvl(test.GetPowerLvl());
	this->SetName(test.GetName());
	this->SetSecretIdentity(test.IsSecretIdentity());
}

SuperPerson::~SuperPerson()
{
}

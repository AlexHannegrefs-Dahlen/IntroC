#include <ostream>
#include "SuperPerson.h"
using namespace std;

SuperPerson::SuperPerson()
{

}

ostream& operator<<(ostream& out, SuperPerson & p)
{
	string inden;
	if (p.SecretIdentity == 0)

		inden = "false";

	else
		inden = "true";
	out << p.name << " " << p.PowerLevel << " " << inden;
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

void SuperPerson::SetSecretIdenty(bool iden)
{
	this->SecretIdentity = iden;
}

SuperPerson::~SuperPerson()
{
}

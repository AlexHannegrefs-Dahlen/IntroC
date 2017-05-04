#include "SuperVillian.h"
#include <string>
using namespace csc195::hannegrefsdahlen;


SuperVillian::SuperVillian()
{
}

SuperVillian::SuperVillian(std::string name, int power, bool secret, int kills)
	:SuperPerson(name, power, secret)
{
	this->SetNumberOfKills(kills);
}

std::ostream& csc195::hannegrefsdahlen::operator<<(std::ostream& out, SuperVillian& hero)
{
	std::string inden;
	if (hero.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << hero.GetName() << " " << hero.GetPowerLvl() << " " << inden << " " << hero.GetNumberOfKills();
	return out;
}

int SuperVillian::GetNumberOfKills()
{
	return this->numberOfKills;
}

void SuperVillian::SetNumberOfKills(int kills)
{
	this->numberOfKills = kills;
}

void SuperVillian::TrashTalk()
{

}

SuperVillian::~SuperVillian()
{
}

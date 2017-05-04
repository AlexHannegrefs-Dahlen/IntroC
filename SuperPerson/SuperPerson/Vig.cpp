#include "Vig.h"
using namespace csc195::hannegrefsdahlen;


Vig::Vig()
{
}

Vig::Vig(std::string name, int power, bool secret, int kills, int stabbings)
	:SuperVillian(name, power, secret, kills)
{
	this->SetStabbings(stabbings);
}

std::ostream& csc195::hannegrefsdahlen::operator<<(std::ostream& out, Vig& hero)
{
	std::string inden;
	if (hero.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << hero.GetName() << " " << hero.GetPowerLvl() << " " << inden << " " << hero.GetNumberOfKills() << " " << hero.GetStabbings();
	return out;
}

void Vig::SetStabbings(int stabbing)
{
	this->stabbings = stabbing;
}

int Vig::GetStabbings()
{
	return this->stabbings;
}

void Vig::TrashTalk()
{
	std::cout << "I am a Vig" << std::endl;
}

Vig::~Vig()
{
}

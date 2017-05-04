#include "Jester.h"
using namespace csc195::hannegrefsdahlen;


Jester::Jester()
{
}

Jester::Jester(std::string name, int power, bool secret, int kills, int foolings)
	:SuperVillian(name, power, secret, kills)
{
	this->SetFoolings(foolings);
}
std::ostream& csc195::hannegrefsdahlen::operator<<(std::ostream& out, Jester& hero)
{
	std::string inden;
	if (hero.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << hero.GetName() << " " << hero.GetPowerLvl() << " " << inden << " " << hero.GetNumberOfKills() << " " << hero.GetFoolings();
	return out;
}

void Jester::SetFoolings(int fools)
{
	this->foolings = fools;
}

int Jester::GetFoolings()
{
	return this->foolings;
}

void Jester::TrashTalk()
{
	std::cout << "i'm not who you think I am" << std::endl;
}

Jester::~Jester()
{
}

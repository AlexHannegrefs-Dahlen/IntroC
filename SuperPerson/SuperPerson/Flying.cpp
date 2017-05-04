#include "Flying.h"
#include <string>


Flying::Flying()
{
}

Flying::Flying(std::string name, int power, bool secret, int saves, int flight)
	: SuperHero(name, power, secret, saves)
{
	this->SetFlightDuration(flight);
}

std::ostream& csc195::hannegrefsdahlen::operator<<(std::ostream& out, Flying& hero)
{
	std::string inden;
	if (hero.IsSecretIdentity())
		inden = "true";
	else
		inden = "false";
	out << hero.GetName() << " " << hero.GetPowerLvl() << " " << inden << " " << hero.GetNumberOfSaves() << " " << hero.GetFlightDuration();
	return out;
}

void Flying::SetFlightDuration(int flight)
{
	this->FlightDuration = flight;
}

int Flying::GetFlightDuration()
{
	return this->FlightDuration;
}

void Flying::TrashTalk()
{
	std::cout << "I can fly" << std::endl;
}

Flying::~Flying()
{
}

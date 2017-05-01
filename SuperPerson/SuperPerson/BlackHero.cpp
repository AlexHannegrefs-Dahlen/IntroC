#include <iostream>
#include "BlackHero.h"

using namespace std;

BlackHero::BlackHero()
{

}

BlackHero::BlackHero(std::string name, int power, bool secret, int saves, int soulCount)
	:SuperHero(name, power, secret, saves)
{
	this->SetSoulCount(soulCount);
}

ostream& operator<<(ostream& out, BlackHero& p)
{

}

int BlackHero::GetSoulCount()
{
	return this->soulCount;
}

void BlackHero::SetSoulCount(int souls)
{
	this->soulCount = souls;
}

BlackHero::~BlackHero()
{

}

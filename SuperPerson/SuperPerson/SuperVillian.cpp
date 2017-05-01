#include <iostream>
#include "SuperVillian.h"

using namespace std;

SuperVillian::SuperVillian()
{
}

SuperVillian::SuperVillian(string name, int power, bool iden, int saves)
	:SuperPerson(name, power, iden)
{

}

void SuperVillian::SetNumberOfKills(int kills)
{
	this->numberOfKills = kills;
}

int SuperVillian::GetNumberOdKills()
{
	return this->numberOfKills;
}

ostream& operator<<(ostream& out, SuperVillian& p)
{

}

SuperVillian::~SuperVillian()
{
}

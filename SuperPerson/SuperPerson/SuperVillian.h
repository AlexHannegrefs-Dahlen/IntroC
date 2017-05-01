#pragma once
#include "SuperPerson.h"

class SuperVillian :
	public SuperPerson
{
public:
	SuperVillian();
	SuperVillian(std::string, int, bool, int);
	friend std::ostream& operator<<(std::ostream& out, SuperVillian& p);
	void SetNumberOfKills(int);
	int GetNumberOdKills();
	~SuperVillian();
private:
	int numberOfKills;
};


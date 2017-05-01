#pragma once
#include "SuperHero.h"
class RedHero :
	public SuperHero
{
public:
	RedHero();
	friend std::ostream& operator<<(std::ostream& out, RedHero& p);
	void SetMoney(int);
	int GetMoney();
	~RedHero();
private:
	int money;
};


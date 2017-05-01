#pragma once
#include "SuperVillian.h"
class RedVillian :
	public SuperVillian
{
public:
	RedVillian();
	RedVillian(std::string, int, bool, int, int);
	friend std::ostream& operator<<(std::ostream& out, RedVillian& p);
	int GetMoney();
	void SetMoney(int);
	~RedVillian();
private:
	int money;
};


#pragma once
#include "SuperVillian.h"
class BlackVillian :
	public SuperVillian
{
public:
	BlackVillian();
	friend std::ostream& operator<<(std::ostream& out, BlackVillian& p);
	int GetSoulCount();
	void SetSoulCount(int);
	~BlackVillian();
private:
	int soulCount;
};
#pragma once
#include "SuperHero.h"
class BlackHero :
	public SuperHero
{
public:
	BlackHero();
	BlackHero(std::string name, int power, bool secret, int saves, int soulCount);
	friend std::ostream& operator<<(std::ostream& out, BlackHero& p);
	int GetSoulCount();
	void SetSoulCount(int);
	~BlackHero();
private:
	int soulCount;
};


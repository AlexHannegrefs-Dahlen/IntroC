#pragma once
#include <string>
#include <iostream>


class SuperPerson
{
public:
	SuperPerson();
	SuperPerson(std::string, int, bool);
	std::string GetName();
	void SetName(std::string);
	int	GetPowerLvl();
	void SetPowerLvl(int);
	bool IsSecretIdentity();
	void SetSecretIdenty(bool);
	friend std::ostream& operator<<(std::ostream& out, SuperPerson& p);
	virtual void trashtalk() = 0;
	~SuperPerson();
private:
	std::string name;
	int PowerLevel;
	bool SecretIdentity;
};

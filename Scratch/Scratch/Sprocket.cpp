#include "Sprocket.h"



Sprocket::Sprocket(int numOfTeeth)
{
	this->SetNumOfTeeth(numOfTeeth);
}


Sprocket::~Sprocket()
{
}

void Sprocket::SetNumOfTeeth(int numOfTeeth)
{
	this->numOfTeeth = numOfTeeth;
}

int Sprocket::GetNumOfTeeth()
{
	return this->numOfTeeth;
}

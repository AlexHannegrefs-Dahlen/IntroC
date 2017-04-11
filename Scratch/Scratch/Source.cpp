#include <iostream>
#include "Sprocket.h"

void UpdateSprocket(Sprocket* s);

int main()
{
	Sprocket localSprock = Sprocket::Sprocket(12);
	Sprocket* pSprock = &localSprock;


	std::cout << localSprock.GetNumOfTeeth() << std::endl;
	std::cout << pSprock->GetNumOfTeeth() << std::endl;


	UpdateSprocket(&localSprock);
	UpdateSprocket(pSprock);


	std::cout << localSprock.GetNumOfTeeth() << std::endl;
	std::cout << pSprock->GetNumOfTeeth() << std::endl;
}

void UpdateSprocket(Sprocket* s)
{
	s->SetNumOfTeeth(s->GetNumOfTeeth()+7);
	std::cout << "Updated " << s->GetNumOfTeeth() << std::endl;
}
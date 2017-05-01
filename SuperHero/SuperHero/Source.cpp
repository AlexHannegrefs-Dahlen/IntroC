#include <iostream>
#include "SuperHero.h"
#include "MemTester.h"

using namespace csc195;
using namespace hannegrefsdahlen;

int main()
{
	SuperHero three("no", 15, false);
	SuperHero one("Different", 10, false);
	SuperHero two("Second", 15, true);
	std::cout << one << std::endl;
	std::cout << (one == two) << std::endl;
	std::cout << (one > two) << std::endl;
	std::cout << (one < two) << std::endl;
	std::cout << (one >= two) << std::endl;
	std::cout << (one <= two) << std::endl;
	one = two;
	std::cout << one << std::endl;
}
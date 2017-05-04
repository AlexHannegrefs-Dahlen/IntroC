#pragma once
#include "SuperPerson.h"
using namespace csc195::hannegrefsdahlen;
namespace csc195
{
	namespace hannegrefsdahlen
	{
		class SuperHero :
			public SuperPerson
		{
		public:
			SuperHero();
			SuperHero(std::string name, int power, bool secret, int saves);
			friend std::ostream& operator<<(std::ostream& out, SuperHero& p);
			virtual void TrashTalk() = 0;
			int GetNumberOfSaves();
			void SetNumberOfSaves(int);
			~SuperHero();
		private:
			int numberOfSaves;
		};
	}
}


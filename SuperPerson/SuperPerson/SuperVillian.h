#pragma once
#include <string>
#include "SuperPerson.h"

namespace csc195
{
	namespace hannegrefsdahlen
	{
		class SuperVillian :
			public csc195::hannegrefsdahlen::SuperPerson
		{
		public:
			SuperVillian();
			SuperVillian(std::string name, int power, bool secret, int kills);
			friend std::ostream& operator<<(std::ostream& out, SuperVillian& p);
			int GetNumberOfKills();
			void SetNumberOfKills(int);
			virtual void TrashTalk();
			~SuperVillian();
		private:
			int numberOfKills;
		};
	}
}

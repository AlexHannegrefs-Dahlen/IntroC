#pragma once
#include "SuperVillian.h"
namespace csc195
{
	namespace hannegrefsdahlen
	{
		class Jester :
			public SuperVillian
		{
		public:
			Jester();
			Jester(std::string name, int power, bool secret, int kills, int foolings);
			friend std::ostream& operator<<(std::ostream& out, Jester& hero);
			void SetFoolings(int);
			int GetFoolings();
			virtual void TrashTalk();
			~Jester();
		private:
			int foolings;
		};
	}
}


#pragma once
#include "SuperVillian.h"
namespace csc195
{
	namespace hannegrefsdahlen
	{
		class Vig :
			public SuperVillian
		{
		public:
			Vig();
			Vig(std::string name, int power, bool secret, int kills, int stabbings);
			friend std::ostream& operator<<(std::ostream& out, Vig& hero);
			void SetStabbings(int);
			int GetStabbings();
			virtual void TrashTalk();
			~Vig();
		private:
			int stabbings;
		};
	}
}


#pragma once
#include "SuperHero.h"
namespace csc195
{
	namespace hannegrefsdahlen
	{
		class Flying :
			public SuperHero
		{
		public:
			Flying();
			Flying(std::string name, int power, bool secret, int saves, int flight);
			friend std::ostream& operator<<(std::ostream& out, Flying& hero);
			void SetFlightDuration(int);
			int GetFlightDuration();
			virtual void TrashTalk();
			~Flying();
		private:
			int FlightDuration;
		};
	}
}


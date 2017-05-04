#pragma once
#include "SuperHero.h"
#include <iostream>
namespace csc195
{
	namespace hannegrefsdahlen
	{
		class Sheriff :
			public SuperHero
		{
		public:
			Sheriff();
			Sheriff(std::string name, int power, bool secret, int saves, int deputies);
			friend std::ostream& operator<<(std::ostream& out, Sheriff& hero);
			void SetDeputies(int);
			int GetDeputies();
			virtual void TrashTalk();
			~Sheriff();
		private:
			int Deputies;
		};
	}
}
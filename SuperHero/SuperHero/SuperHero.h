#pragma once
#include <string>
#include <iostream>

namespace csc195 {
	namespace hannegrefsdahlen {
		class SuperHero
		{
		public:
			friend std::ostream& operator<<(std::ostream& out, SuperHero& p);
			SuperHero();
			SuperHero(std::string, int, bool);
			int PowerLevel;
			bool SecretIdentity;
			std::string name;
			bool operator==(SuperHero&);
			bool operator!=(SuperHero&);
			bool operator<(SuperHero&);
			bool operator>(SuperHero&);
			bool operator<=(SuperHero&);
			bool operator>=(SuperHero&);
			SuperHero& operator=(SuperHero);
			~SuperHero();
		};
	}
}


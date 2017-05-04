#pragma once
#include <iostream>
namespace csc195 {
	namespace hannegrefsdahlen {
		class SuperPerson
		{
		public:
			SuperPerson();
			SuperPerson(std::string name, int power, bool secret);
			std::string GetName();
			void SetName(std::string);
			int GetPowerLvl();
			void SetPowerLvl(int);
			void SetSecretIdentity(bool);
			bool IsSecretIdentity();
			friend std::ostream& operator<<(std::ostream& out, SuperPerson& p);
			bool operator==(SuperPerson&);
			bool operator!=(SuperPerson&);
			bool operator<(SuperPerson&);
			bool operator>(SuperPerson&);
			bool operator<=(SuperPerson&);
			bool operator>=(SuperPerson&);
			void operator=(SuperPerson&);
			virtual void TrashTalk() = 0;
			~SuperPerson();
		private:
			std::string name;
			int PowerLevel;
			bool SecretIdentity;
		};
	}
}
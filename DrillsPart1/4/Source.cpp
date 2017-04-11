#include <random>
#include <iostream>

struct User {
	char username[255] = { 0 };
	char password[255] = { 0 };
};

char* genCharArray() {
		static const char alphanum[] =
			"0123456789"
			"abcdefghijklmnopqrstuvwxyz";
		char randString[255];
		for (int i = 0; i < 1; ++i) {
			randString[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		}

		return randString;
}

User genuser() {
	User that;
	for (size_t i = 0; i < 15; i++)
	{
		that.username[i] = genCharArray()[0];
		that.password[i] = genCharArray()[0];
	}
	return that;
}

int main() {
	User userarray[100] = { 0 };
	for (size_t  i = 0; i < 100; i++)
	{
		userarray[i] = genuser();
	}
	userarray[99] = userarray[0];
	for (size_t i = 0; i < 100; i++)
	{
		if (i <= 7)
		{
			std::cout << "Username: " << userarray[i].username;
			std::cout << " Password: " << userarray[i].password << std::endl;
		}
		else if (i == 99) {

			std::cout << "Username: " << userarray[99].username;
			std::cout << " Password: " << userarray[99].password << std::endl;
		}

	}

}
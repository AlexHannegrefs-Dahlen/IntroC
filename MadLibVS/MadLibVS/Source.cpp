#include <iostream>
#include <string.h>

int numCheck(int number, char message[]) {
	while (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Error: only enter numbers" << std::endl;
		std::cout << message << std::endl;
		std::cin >> number;
	}
}

int main() {
	int num1 = 0;
	int num2 = 0;
	char madLib1[] = "Enter a name";
	char madLib2[] = "Enter a number";

	std::cout << madLib1 << std::endl;
	char string1[10] = { 0 };
	std::cin >> string1;

	std::cout << madLib2 << std::endl;
	std::cin >> num1;
	num1 = numCheck(num1, madLib2);

	std::cout << madLib2 << std::endl;
	std::cin >> num2;
	num2 = numCheck(num2, madLib2);

	std::cout << "If I could, I would eat pizza " << num2 << " times a day."
		<< " When it is done cut it into " << num1 << " " << string1 << "."
		<< std::endl;

	return 0;
}
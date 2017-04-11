#include <iostream>
#include <string.h>

//using namespace std;

int main() {
	char meString[10] = { 0 };
	strcpy(meString, "Hello");
	std::cout << meString << std::endl;
	return 0;
}

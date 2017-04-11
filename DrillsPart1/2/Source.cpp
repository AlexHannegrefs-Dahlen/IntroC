#include <iostream>

double pTherory(int s1, int s2) {
	return sqrt(s1*s1 + s2*s2);
}

int main() {
	int side1 = 3;
	int side2 = 4;


	double solved = pTherory(side1, side2);
	std::cout << pTherory(side1, side2) << std::endl;
}
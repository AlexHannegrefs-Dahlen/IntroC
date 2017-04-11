#include <iostream>

int fib(int x) {
	if (x == 0)
		return 0;
	if (x == 1) 
		return 1;
	else 
		return fib(x - 1) + fib(x - 2);
	
}

int main() {
	int fibNums[18] = { 0 };

	for (size_t i = 0; i < 18; i++)
	{
		fibNums[i] = fib(i);
	}

	std::cout << fibNums[15] << std::endl;
	std::cout << fibNums[12] << std::endl;
	std::cout << fibNums[9] << std::endl;
	std::cout << fibNums[6] << std::endl;
	std::cout << fibNums[3] << std::endl;
	std::cout << fibNums[0] << std::endl;

	
}
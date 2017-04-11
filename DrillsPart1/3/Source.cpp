#include <random>
#include <iostream>

int main(int arg, char args[])
{
	if (args[1] <= 0)
	{
		std::cout << "Exit" << std::endl;
		//return 0;
		//exit(EXIT_SUCCESS);

	}
	int size = (int)args[1];
	float* numbers = new float[args[1]];
	std::cout << sizeof(numbers) / sizeof(numbers[0]) << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		numbers[i] = (rand() % (16000 - 12000)) / 1000.0;
	}
	for (int i = size - 1; i >= 0; i--)
	{
		if (i % 2 == 0)
		{
			std::cout << i << " " << numbers[i] << std::endl;
		}
	}
}
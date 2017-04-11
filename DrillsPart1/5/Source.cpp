#include <iostream>

int negate(int num)
{
	return num * (-1);
}

int powerOf5(int num)
{
	return (num * num * num * num * num);
}

int main()
{
	std::cout << "Enter a number between 1-20" << std::endl;
	int num = 0;
	std::cin >> num;
	switch (num)
	{
	case 1:
		std::cout << negate(num) << std::endl;
		break;
	case 2:
		std::cout << negate(num) << std::endl;
		break;
	case 3:
		std::cout << negate(num) << std::endl;
		break;
	case 4:
		std::cout << powerOf5(num) << std::endl;
		break;
	case 5:
		std::cout << powerOf5(num) << std::endl;
		break;
	case 6:
		std::cout << powerOf5(num) << std::endl;
		break;
	case 7:
		std::cout << powerOf5(num) << std::endl;
		break;
	case 8:
		std::cout << powerOf5(num) << std::endl;
		break;
	case 9:
		std::cout << powerOf5(num) << std::endl;
		break;
	default:
		if (num >= 10 && num <= 20)
		{
			std::cout << num << std::endl;
		}
		else
		std::cout << "Error, number not between 1-20" << std::endl;
		break;
	}
    return 0;
}
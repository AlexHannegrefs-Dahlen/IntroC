#include <iostream>
#include <string.h>

int main(int argc, char * argv[]) {
	//argv[1-4] are numbers
	//argv[5-7] are strings
	if (argc != 8)
	{
		std::cout << "Command line arguments are invalid" << std::endl;
		return 0;
	}
	for (int i = 1; i < 8; i++)
	{
		for (int j = 0; j < strlen(argv[i]); j++)
		{
			if (i > 0 && i < 5)
			{
				if (!isdigit(argv[i][j]))
				{
					std::cout << "Command line argument " << i << " is invalid" << std::endl;
					return 0;
				}
			}
			else
			{
				if (isdigit(argv[i][j]))
				{
					std::cout << "Command line argument " << i << " is invalid" << std::endl;
					return 0;
				}
			}
		}
	}

	std::cout << "If I could, I would eat pizza " << argv[1] << argv[2] << argv[3] << argv[4] << " times a day."
		<< " When it is done cut it into " << argv[5] << " pieces and serve " << argv[6] << " with " << argv[7] << " on it." << std::endl;

	return 0;
}
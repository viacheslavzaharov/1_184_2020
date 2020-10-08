#include <iostream>

int main()
{
	int size = 0;

	std::cout << " Enter ";
	std::cin >> size;
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << " * ";
		}
		std::cout << std::endl;
	}
	return 0;
}


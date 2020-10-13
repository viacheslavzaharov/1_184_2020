#include <iostream>


int main()
{
	int x = 0;
	int y = 0;
	std::printf("Введите ширину: ");
	std::cin >> x;
	std::printf("Введите длину: ");
	std::cin >> y;

	for (int i = 1; i < x + 1; i++)
	{
		for (int j = 1; j < y + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	return 0;
}
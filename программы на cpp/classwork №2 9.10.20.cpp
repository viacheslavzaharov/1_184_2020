// classwork №2 8.10.20.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	int x;
	std::cin >> x;

	switch (x)
	{
	case 1:
		std::cout << "mondey" << "\n";
		break;
	case 2:
		std::cout << "thusday" << "\n";
		break;
	case 3:
		std::cout << "wednsday" << "\n";
		break;
	case 4:
		std::cout << "thursday" << "\n";
		break;
	case 5:
		std::cout << "friday" << "\n";
		break;
	case 6:
		std::cout << "saturday" << "\n";
		break;
	case 7:
		std::cout << "sunday" << "\n";
		break;
	default:
		std::cout << "x is underfinned" << "\n";
		break;

	}
	return 0;

}
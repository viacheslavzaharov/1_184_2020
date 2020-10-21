#include <iostream>

int main() 
{
	int x = 2;
	std::cin >> x;
	switch (x)
	{
	case 1:
		std::cout << "x = 1" << "\n";
			break;
	case 2:
		std::cout << "x = 2" << "\n";
			break;
	case 3:
		std::cout << "x = 1" << "\n";
			break;
	default:
		std::cout << "x is undefind" << "\n";
			break;
	}
}
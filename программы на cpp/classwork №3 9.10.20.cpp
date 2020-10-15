

#include <iostream>
using namespace std;

int main()
{
	int x;
	std::cin >> x;

	if (x % 3 == 0) { x = 'a'; }
	if (x % 4 == 0) { x = 'b'; }
	if (x % 5 == 0) { x = 'c'; }

	switch (x)
	{
	case 'a':
		std::cout << "кратно 3" << "\n";
		break;
	case 'b':
		std::cout << "кратно 4" << "\n";
		break;
	case 'c':
		std::cout <<x+7 << "\n";
		break;
	default:
		std::cout << "x is underfinned" << "\n";
		break;

	}
	return 0;
}

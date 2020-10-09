#include <iostream> 

int main()
{
	int n = 0;
	std::cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (i == j || i + j == n) {
				std::cout << "*";
			}
			else {
				std::cout << " ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
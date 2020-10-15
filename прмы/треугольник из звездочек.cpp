
#include <stdio.h>

int main()
{
	int result = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			iff(i == j)
				std::cout << "*" << "\t";
		}
		std::cout << std::endl;
	}
	return 0;
}
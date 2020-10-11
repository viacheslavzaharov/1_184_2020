#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	while (!_kbhit()) 
	{
		cout << " * ";
	}

	return 0;
}
#include <iostream> 
#include <stdio.h> 
#include <conio.h> 

using namespace std;

char key;

void check() {
	key = _getch();

	if (!strchr("0123456789", key)) {
		// Crutch
		while (!_kbhit()) {
			cout << " * ";
		}
		check();
	}
}
void spam() {
	while (!_kbhit()) {
		cout << " * ";
	}
	check();
}

int main()
{
	spam();

	return 0;
}
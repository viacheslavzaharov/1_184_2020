// ConsoleApp 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

using namespace std;

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define BLACK "\033[030"
#define RED "\033[031"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

int randBetween(double min, double max) {
	return rand() * ((max - min + 0.999) / RAND_MAX) + min;
}

int main() {
	int color = 0;
	bool input = false;

	while (!input) {

		if (color == 0) {
			cout << RESET;
		}
		else if (color == 1) {
			cout << BOLD;
		}
		else if (color == 2) {
			cout << BLACK;
		}
		else if (color == 3) {
			cout << RED;
		}
		else if (color == 4) {
			cout << GREEN;
		}
		else if (color == 5) {
			cout << YELLOW;
		}
		else if (color == 6) {
			cout << BLUE;
		}
		else if (color == 7) {
			cout << MAGENTA;
		}
		else if (color == 8) {
			cout << CYAN;
		}

		color = randBetween(0, 8);
		cout << color;

		for (int i = 0; i < 256; i++) {
			if (GetAsyncKeyState(i) & 0x8000) {
				input = !input;
			}
		}
	}
	cout << "\n" << RESET;
}
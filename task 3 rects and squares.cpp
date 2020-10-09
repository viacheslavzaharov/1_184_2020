// ConsoleApp4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RED "\033[31m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

using namespace std;

int square() {
	cout << GREEN << "\nplease enter the length of square side : ";
	int n = 0;
	cin >> n;
	cout << RESET << "\n";

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0) {
				cout << "  ";
			}
			if (i == 0 && j != 0) {
				cout << GREEN << j << RESET;
				if (j < 10) {
					cout << " ";
				}
			}
			if (j == 0 && i != 0) {
				cout << GREEN << i << RESET;
				if (i < 10) {
					cout << " ";
				}
			}
			if ((i == 1 || i == n) && j == 1) {
				cout << BOLD << RED << "x-";
			} else if ((i == 1 || i == n) && j == n) {
				cout << "x";
			} else if ((i == j || i + j == n + 1) && i != 0) {
				cout << BOLD << RED << "x " << RESET;
			} else if ((i == 1 || i == n) && j != 0) {
				cout << BOLD << RED << "--";
			} else if ((j == 1 || j == n) && i != 0) {
				cout << BOLD << RED << "| " << RESET;
			} else if (i > j && i + j > n + 1 && j != 0) {
				cout << "^ ";
			} else if (i > j && j != 0) {
				cout << "> ";
			} else if (i + j < n + 1 && i != 0 && j != 0) {
				cout << "v ";
			} else if (i != 0 && j != 0) {
				cout << "< ";
			}
		}
		cout << "\n";
	}
	return 0;
}

int cross() {
	cout << GREEN << "\nplease enter the length of square side to show diagonls : ";
	int n = 0;
	cin >> n;
	cout << RESET << "\n";

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (i == 0 && j == 0) {
				cout << "  ";
			}
			if (i == 0 && j != 0) {
				cout << GREEN << j << RESET;
				if (j < 10) {
					cout << " ";
				}
			}
			if (j == 0 && i != 0) {
				cout << GREEN << i << RESET;
				if (i < 10) {
					cout << " ";
				}
			}
			else if ((i == j || i + j == n + 1) && i != 0) {
				cout << BOLD << RED << "x " << RESET;
			}
			else if (i != 0 && j != 0) {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	return 0;
}

int rect() {
	cout << GREEN << "\nplease enter width : ";
	int width = 0;
	cin >> width;
	cout << "please enter height : ";
	int height = 0;
	cin >> height;
	cout << RESET << "\n";

	for (int i = 0; i <= height; i++) {
		for (int j = 0; j <= width; j++) {
			if (i == 0 && j == 0) {
				cout << "  ";
			}
			if (i == 0 && j != 0) {
				cout << GREEN << j << RESET;
				if (j < 10) {
					cout << " ";
				}
			}
			if (j == 0 && i != 0) {
				cout << GREEN << i << RESET;
				if (i < 10) {
					cout << " ";
				}
			}
			
			if ((i == 1 || i == height) && j == 1) {
				cout << BOLD << RED << "x-";
			} else if ((i == 1 || i == height) && j == width) {
				cout << "x";
			} else if ((i == 1 || i == height) && j != 0) {
				cout << BOLD << RED << "--";
			} else if ((j == 1 || j == width) && i != 0) {
				cout << BOLD << RED << "| " << RESET;
			} else if (i != 0 && j != 0) {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	return 0;
}

int menu() {
	cout << BOLD << YELLOW << "\n\n Print what u want to draw";
	cout << "\n '1' square     '3' rect";
	cout << "\n '2' cross      '4' to exit";
	cout << "\n Answer: ";

	int input = 0;
	cin >> input;

	if (input == 1) {
		square();
		cout << RESET << BOLD << YELLOW << "\n Wanna draw again?";
		menu();	
	} else if (input == 2) {
		cross();
		cout << RESET << BOLD << YELLOW << "\n Wanna draw again?";
		menu();
	} else if (input == 3) {
		rect();
		cout << RESET << BOLD << YELLOW << "\n Wanna draw again?";
		menu();
	} else {
		cout << RESET;
		return 0;
	}
}

int main() {
	cout << BOLD << YELLOW << "\n Let's draw!";

	menu();
}

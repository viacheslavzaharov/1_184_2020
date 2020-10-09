// ConsoleApp 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"

using namespace std;

int check(int x, int y) {
	cout << BOLD << YELLOW;
	switch (x) {
	case 0:
		if (y % 3 == 0) {
			cout << "\nmultiple of 3";
		}
		if (y % 4 == 0) {
			cout << "\nmultiple of 4";
		}
		if (y % 5 == 0) {
			cout << "\nmultiple of 5, Increased by 7 : " << y + 7;
		}
		break;
	case 1:
		cout << "\nIt's Monday";
		break;
	case 2:
		cout << "\nIt's Thuesday";
		break;
	case 3:
		cout << "\nIt's Wednesday";
		break;
	case 4:
		cout << "\nIt's Thursday";
		break;
	case 5:
		cout << "\nIt's Friday";
		break;
	case 6:
		cout << "\nIt's Saturday";
		break;
	case 7:
		cout << "\nIt's Sunday";
		break;
	default:
		cout << "\nThere is no such day of the week";
		break;
	}
	cout << RESET;
	return 0;
}

int inputProcessing() {
	int x = 0;
	cout << GREEN << "\nPut day of the week or a number : ";
	cin >> x;
	cout << RESET;

	int a = ceil(x % 3);
	int b = ceil(x % 4);
	int c = ceil(x % 5);

	bool abcChecked = false;

	if ((a == 0 || b == 0 || c == 0) && !abcChecked) {
		check(0, x);
		abcChecked = !abcChecked;
	}

	check(x, x);

	string y;

	cout << YELLOW << "\n\nTry again (Y/N) ? : ";
	cin >> y;
	cout << RESET;

	if (y == "y" || y == "Y" || y == "yes") {
		inputProcessing();
	}

	return 0;
}

int main()
{
	inputProcessing();

	cout << "\n";
}

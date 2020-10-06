// ConsoleApp2.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;


int compare(int x, int y) {

	if (x > y) {
		cout << "x is greater then y \n";
	}
	else if (y > x) {
		cout << "y is greater then x \n";
	}
	else {
		cout << "they are equal \n";
	}
	return 0;
}

int main() {
	int x = 0;
	int y = 0;

	cout << "enter x: ";
	cin >> x;
	cout << "enter y: ";
	cin >> y;

	compare(x, y);
}
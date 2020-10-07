// consoleApp3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define RESET "\033[0m"
#define BOLDGREEN "\033[1m\033[32m"
#define YELLOW "\033[33m"

int whileLoop() {
    cout << BOLDGREEN << " using 'while' loop \n\n" << RESET;

    int i = 0;
    int j = 1;

    while (i < 10) {
        while (j < 10) {
            if (i == 0) {
                if (j == 1) {
                    cout << "   ";
                }
                cout << YELLOW << j << "   " << RESET;
            }
            else if (j == 1) {
                cout << YELLOW << i << RESET << "  " << j * i << "   ";
            } else {
                cout << j * i << "  ";
                if ((j * i) / 10 == 0) {
                    cout << " ";
                }
            }
            j++;
        }
        cout << "\n";
        j = 1;
        i++;
    }
    return 0;
}

int forLoop() {
    cout << BOLDGREEN << "\n using 'for' loop \n\n" << RESET;

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (j % 2 == 0) {
                cout << YELLOW;
            }
            cout << j << " * " << i << " = " << i * j << "   ";
            if ((j * i) / 10 == 0) {
                cout << " ";
            }
            cout << RESET;
        }
        cout << "\n";
    }

    return 0;
}

int doWhileLoop() {
    cout << BOLDGREEN << "\n using 'do while' loop (table of squares) \n\n" << RESET;

    int i = 0;

    do {
        cout << i << " * " << i << " = " << YELLOW << i * i << RESET << "\n";
        i++;
    } while (i < 10);

    return 0;
}

int main() {
    cout << BOLDGREEN << "\n Multiplication Table\n\n" << RESET;

    whileLoop();
    forLoop();
    doWhileLoop();

    string noLastLine = "";
    cin >> noLastLine;
}

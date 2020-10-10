
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a;
	while (!_kbhit()) { cout << " A a A "; }
	cin >> a;
	switch (a) {
	case 1:
		cout << "You clicked on 1 and stopped this madness." << "\n";
		break;
	case 2:
		cout << "You clicked on 2 and stopped this madness." << "\n";
		break;
	case 3:
		cout << "You clicked on 3 and stopped this madness." << "\n";
		break;
	case 4:
		cout << "You clicked on 4 and stopped this madness." << "\n";
		break;
	case 5:
		cout << "You clicked on 5 and stopped this madness." << "\n";
		break;
	case 6:
		cout << "You clicked on 6 and stopped this madness." << "\n";
		break;
	case 7:
		cout << "You clicked on 7 and stopped this madness." << "\n";
		break;
	case 8:
		cout << "You clicked on 8 and stopped this madness." << "\n";
		break;
	case 9:
		cout << "You clicked on 9 and stopped this madness." << "\n";
		break;
	default:
		cout << "This is not a number." << "\n";
		break;
	}


	return 0;
}

#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int a;
	while (!_kbhit()) { cout << "error computer died error computer died error error errrrrrrrrrrrrrrrrrror " << endl; }
	cin >> a;
	switch (a) {
	case 0:
		cout << "It's 0" << endl;
		break;
	case 1:
		cout << "It's 1" << endl;
		break;
	case 2:
		cout << "It's 2" << endl;
		break;
	case 3:
		cout << "It's 3" << endl;
		break;
	case 4:
		cout << "It's 4" << endl;
		break;
	case 5:
		cout << "It's 5" << endl;
		break;
	case 6:
		cout << "It's 6" << endl;
		break;
	case 7:
		cout << "It's 7" << endl;
		break;
	case 8:
		cout << "It's 8" << endl;
		break;
	case 9:
		cout << "It's 9" << endl;
		break;
	default:
		cout << "It's not a number" << endl;
	}
	return 0;
}
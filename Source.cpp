#include <iostream>
using namespace std;
int main() {
	int x;
	int a=0;
	cout << "Enter the number" << endl;
	cin >> x;
	if (x % 3 == 0) { a = 1; }
	if (x % 4 == 0) { a = 2; }
	if (x % 5 == 0) { a = 3; }
	switch (a) {
	case 1:
		cout << "Multiple 3" << "\n";
		break;
	case 2:
		cout << "Multiple 4" << "\n";
		break;
	case 3:
		cout <<x+7 << "\n";
		break;
	default:
	    cout << "x is undefined" << "\n";
		break;
	}
	return 0;
}
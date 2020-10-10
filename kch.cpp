
#include <iostream>
using namespace std;
int main()
{
	int x;
	int q = 0;
	cin >> x;
	if (x % 3 == 0) { q = 1; }
	if (x % 4 == 0) { q = 2; }
	if (x % 5 == 0) { q = 3; }
	switch (q) {
	
	case 1:
		cout << "multiple of 3" << "\n";
		break;
	case 2:
		cout << "multiple of 4" << "\n";
		break;
	case 3:
		cout << x + 7 << "\n";
		break;

	default:
		cout << "x is undefined" << "\n";
		break;
	}
}
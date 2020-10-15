
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "enter the number" << endl;
	cin >> x;
	for (int r = 1; r <= x; r++) {
		for (int q = 1; q <= x; q++) {
			if ((r == q) || (r + q == x + 1)) {
				cout << "O";
			}
			else
			{
				cout << "~";
			}
		}
		cout << endl;
	}
	return 0;
}
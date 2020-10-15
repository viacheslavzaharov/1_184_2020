
#include <iostream>
using namespace std;
int main()
{
	int x;
	cout << "enter the number" << endl;
	cin >> x;
	for (int r = 1; r < x+ 1; r++) {
		for (int q = 1; q < x+1 ; q++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
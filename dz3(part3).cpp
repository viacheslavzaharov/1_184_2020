#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	for (int i = 1; i < a + 1; i++) {
		for (int j = 1; j < b + 1; j++) {

			cout << "*";

		}
		cout << endl;
	}
	return 0;
}
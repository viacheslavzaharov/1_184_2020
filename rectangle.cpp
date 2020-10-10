#include <iostream>
using namespace std; 
int main() {
	int a, b;
	cout << "Enter the lenght" << endl;
	cin >> a;
	cout << "Enter the width" << endl;
	cin >> b;
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= a; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 0;
	string value = " ";
	cout << "a: ";
	cin >> a;
	value = (a % 2 == 0) ? "even" : "odd";
	cout << "Value: " << value << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	string value = " ";
	cout << "vvedi chislo";
	cin >> a;
	value = (a % 2 == 0) ? "делится на 2 без остатка" : "не делится на 2 без остатка";
	cout << "value:" << value << endl;
}

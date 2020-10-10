#include <iostream>
using namespace std;
int main()
{
	float a, b, c, d;
	cout << "Please enter 4 integers:";
	cin >> a >> b >> c >> d;
	float average = (a + b + c + d) / 4;
	cout << "Average =" << average;
}
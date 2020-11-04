// Вариант 17
#include <iostream>
#include <math.h>
using namespace std;

double Task1(double x)
{
	return 3 * (log(fabs(x))) + (sqrt(fabs(sin(x) + cos(2 * x))));
}



int main()
{
	cout << Task1 << endl;
	for (double x = 0; x < 10;x+=0.2)
	{
		cout << Task1(x) << endl;
	}
	cout << "Task2" << endl;
	cout << "m=" << endl;
	int m = 0;
	int S = 0;
	cin >> m;
	for (double k = 1; k < m; k++)
	{
		S = S+ (log(fabs(k)));
	}
	cout << "S=" << S << endl;
	return 0;
}
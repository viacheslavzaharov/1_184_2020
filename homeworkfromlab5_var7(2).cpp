
#include <iostream>
#include <cmath>

using namespace std;

double funct()
{
	double y = 1;
	int m = 0;
	printf("print m to count: ");
	cin >> m;
	for (int k = 1; k <= m; k++)
	{
		y = y * (exp(sin(k)));
	}
	cout << y;
	return 0;
}

int main()
{
	funct();
	return 0;
}

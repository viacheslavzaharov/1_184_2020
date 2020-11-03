#include <iostream>
#include <cmath>

using namespace std;
double funct(double xmin, double xmax, double dx)
{

	for (double x = xmin; x <= xmax + dx; x += dx)
	{
		double y = (exp(2 * x) - exp(-x)) * sin(log(abs(x)));
		cout << "FOR X=" << x << ", Y=" << y << endl;
	}
	return 0;
}

	int main()
{
		funct(1, 4, 0.2);
		return 0;
}

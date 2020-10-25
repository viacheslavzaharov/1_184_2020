//10 вариант
#include <iostream>
#include <math.h>
using namespace std;

double funct(double a, double b, double x)
{
	double t =acos(x*x-b*b);
	double d=asin(x*x*-a*a);
	return t/d;
}


void zdA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <=xk; x += dx) {
		double y = funct(a, b, x);
		cout << x << "\t" << y <<endl;
	}
}

void zdB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = funct(a, b, x[i]);
		char result[80];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;
	}
}
int main()
{
	cout << "Solving task A" << endl;
	zdA(0.05, 0.06, 0.2, 0.96, 0.15);

	cout << "Solving task B" << endl;
	double x[] = { 0.15,0.26,0.37,0.48, 0.56 };
	zdB(0.05, 0.06, x, (int)(sizeof(x) / sizeof(x[0])));
	return 0;
}
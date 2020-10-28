// 18
#include <iostream>
#include <math.h>
using namespace std;

double funct(double a, double b, double x)
{
	double t = pow((a*x + b * x),342.5);
	double d = 1+log(a+b*x);
	return t / d;
}


void zdA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = funct(a, b, x);
		cout << x << "\t" << y << endl;
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
	zdA(2.5 , 4.6 , 1.1 , 3.6 , 0.5);

	cout << "Solving task B" << endl;
	double x[] = { 1.2,1.28,1.36,1.46, 2.35 };
	zdB(2.5, 4.6, x, (int)(sizeof(x) / sizeof(x[0])));
	return 0;
}
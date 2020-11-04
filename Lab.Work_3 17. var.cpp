#include <iostream>
#include <math.h>
using namespace std;

double Calc(double a, double b, double x)
{
	double top = a + pow(tan(b * x), 2);
	double down = b + pow(1 / tan(a * x), 2);
	return top / down;
}


double TaskOne(double a, double b, double StartX, double FinishX, double dx)
{
	for (double x = StartX; x <= FinishX; x += dx)
	{
		double y = Calc(a, b, x);
		cout << x << "\t" << y << endl;
		return y;
	}
}

double TaskTwo(double a, double b, double x[], int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = Calc(a, b, x[i]);
		char result[100]; sprintf_s(result, "x=%3.5f y=%2f \n", x[i], y);
		cout << result << endl;
		return 0;
	}
}
int main() 
{
	cout << "Task A" << endl;
	TaskOne(0.1, 0.5, 0.15, 1.37, 0.25);

	cout << "Task B" << endl;
	double x[] = { 0.2,0.3,0.44,0.6, 0.56 };
	TaskTwo(0.1, 0.5, x, (int)(sizeof(x) / sizeof(x[0])) );
}
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double help(double a, double b, double x)
{
	double y = pow((a + b * x) / pow(log10(x), 3), 1 / 5);
	return y;
}

void A(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = help(a, b, x);
		cout << x << "\t" << y << endl;
	}
}
void B(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = help(a, b, x[i]);
		char result[50];
		sprintf_s(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;
	}
}
int main(int argc, char* argv[])
{
	cout << "A" << endl;
	A(7.2, 1.3, 1.56, 4.71, 0.63);

	cout << "B" << endl;
	double* X = new double[4]{ 1.3, 1.7, 1.9 , 2.5 };
	B(7.2, 1.3, X, 4);
	delete[] X;
	return 0;
}
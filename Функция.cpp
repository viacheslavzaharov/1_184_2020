
#include <iostream>


using namespace std;
double calc(double a, double b, double x)

{
	double numenator = log10(pow(x, 2) - 1);
	double denominator = (log(a * pow(x, 2) - b)) / (log(5));
	return numenator / denominator;
}

void zadanA(double a, double b, double xn, double xk, double dx)
{
	for (double x = xn; x <= xk; x += dx) {
		double y = (a, b, x);
		std::cout << x << "\t" << y << std::endl;
	}
	return;
}

void zadanB(double a, double b, double* x, int size)
{
	for (int i = 0; i < size; i++)
	{
		double y = calc(a, b, x[i]);
		char result[80];
		(result, "x = %3.5f y = %.2f \n", x[i], y);
		cout << result << endl;

	}
}
int main()
{
	double a = 1.1;
	double b = 0.09;
	std::cout << "y=" << calc(a, b, 1.2) << std::endl;

	zadanA(a, b, 1.2, 0.2, 1.21);
	std::cout << "zadan B" << std::endl;

	double* X = new double[5]{ 1.21, 1.76, 2.53, 3.48, 4.52 };


	zadanB(a, b, X, 5);
	delete[] X;


	return 0;
}

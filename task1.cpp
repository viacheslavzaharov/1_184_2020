#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double function(double x)
{
	double y = 0;
	y = (pow(sin(x), 3) + pow(sin(x), 3))*log(x);
	return y;
}

void TaskA()
{
	cout << "TASK A" << endl;
	double x = 0;
	double y = 0;
	const double xmin = 0.11;
	const double xmax = 0.36;
	const double dx = 0.05;
	for (double x = xmin; x <= xmax; x += dx)
	{
		double y = function(x);
		cout << "FOR X=" << x << ", Y=" << y << endl;
	}

}

void TaskB()
{
	double y = 0;
	cout << "TASK B" << endl;
	double x[5] { 0.2, 0.3, 0.38, 0.43, 0.57} ;
	for (int i = 0; i <= 5; i++)
	{
		double y = function(x[i]);
		cout << "FOR X=" << x[i] << ", Y=" << y << endl;
	}
}


int main()
{
	TaskA();
	TaskB();
	return 0;
}
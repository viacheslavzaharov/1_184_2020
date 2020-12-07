#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cout << "Enter a number that will be the size of a cross: ";
	cin >> a;
	for (int i = 1; i < a; i++)
	{
		for (int j = 1; j < a; j++)
		{
			if (i == j || i + j == a)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;



}
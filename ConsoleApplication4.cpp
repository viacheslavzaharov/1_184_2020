//2-Пользователь вводит целое число, на экране этой размерности рисуется крест из диагоналей этого квадрата.
#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0 ; j < n; j++)
		{
			if ((i == j) or (i + j == n+1 ))
			{
				cout << " * ";
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


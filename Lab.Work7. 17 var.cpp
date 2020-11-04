/*
Вариант 17
Написать программу решения следующей задачи: Найти целочисленные
элементы и номера строк и столбцов, в которых они расположены, для матриц
A(5,8), B(6,4)
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void FillArrayA(double a[], int const size1, int const size2)
{
	srand(time(0));
	for (int i = 0; i < size1; i++)
	{
		a[i] = 1.0 + 9 * rand() / (int)RAND_MAX / (double)RAND_MAX;
	}
}
	
void FillArrayB(double b[], int const size3,int const size4)
{
	srand(time(0));
	for (int i = 0; i < size3; i++)
	{
		b[i] = 1.0 + 9 * rand() / (int)RAND_MAX;
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	double a[5][8];
	double b[6][3];
	int size1 = 5;
	int size2 = 8;
	int size3 = 6;
	int size4 = 3;
	FillArrayA(*a, 5, 8);
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if ((float)((int)a[i][j]) == (a[i][j]))
			{
				cout << "Элемент целочисленный. Адресс: " << i << j << endl;
			}
			else
			{
				cout << "Целочисленный элемент не найден." << endl;
			}
		}
	}
	FillArrayB(*b, 6, 3);
	for (int i = 0; i < size3; i++)
	{
		for (int j = 0; j < size4; j++)
		{
			if ((float)((int)b[i][j]) == (b[i][j]))
			{
				cout << "Элемент целочисленный. Адресс: " << i << j << endl;
			}
			else
			{
				cout << "Целочисленный элемент не найден." << endl;
			}
		}
	}
	return 0;
}
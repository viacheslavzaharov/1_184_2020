// 3-Пользователь вводит два целых числа- с длинами этих сторон на экране отрисовывается прямоугольник

#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << "Enter two numbers, the width and height of the rectangle: ";
	cin >> b >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
	return 0;
}
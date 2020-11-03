#include <iostream>

#include <math.h>

#include <Windows.h>

using namespace std;

int main()

{

	setlocale(LC_ALL, "ru");

	double y, a, b, Xn, aX, Xk;

	system("color 02");

	cout << "Эта программа решает эту функцию y = (asin(x)^2+acos(x)^4)^3 \n";

	printf("\nЗадание A:\n");

	cout << "Введите коэффициенты: \n";

	cout << "Коэффициент Xn: "; cin >> Xn; // Xn = 0.26;

	cout << "Коэффициент Xk: "; cin >> Xk; // Xk = 0.66;

	cout << "Коэффициент aX: "; cin >> aX; // aX = 0.08;

	for (double i = Xn; i <= Xk;) {

		if (abs(i) > 1) { printf("Error: |x| > 1"); return 0; }

		y = pow(asin(i) * asin(i) + pow(acos(i), 4), 3);

		cout << "Результат функции при x=" << i << " равен " << y << endl;

		i = i + aX;

	}

	system("pause");

	system("cls");

	system("color 04");

	printf("Задание B :\n");

	double x = 0.1;

	for (int i = 1; i <= 5; ++i) {

		if (i == 2) x += 0.25;

		if (i == 3) x += 0.05;

		if (i == 4) x += 0.15;

		if (i == 5) x += 0.05;

		if (abs(x) > 1) { printf("Error: |x| > 1"); return 0; }

		y = pow(asin(x) * asin(x) + pow(acos(x), 4), 3);

		cout << "Результат функции при x=" << x << " равен " << y << endl;

	}

}


#include <iostream> 
#include <math.h> 
#include <Windows.h> 
using namespace std;
int main()
{
	double y, d, Xn, dX, Xk ;
	double aX, b;
setlocale( LC_ALL, "Russian");
	cout << "Данная программа решает функцию y = (ax+b)^1/3/(logx)^2 \n";
	printf("\nЗадача A:\n");
	cout << "Введите коэффициенты: \n";
	cout << "Коэффициент Xn: "; cin >> Xn; // Xn = 1.14; 
	cout << "Коэффициент Xk: "; cin >> Xk; // Xk = 4.24; 
	cout << "Коэффициент dX: "; cin >> dX; // dX = 0.62; 
	for (double i = Xn; i <= Xk;) 
	{
		if (abs(i) < 1) { printf("Ошибка: |x| < 1"); return 0; }
		y = pow(Xn + Xk  , 1.0 / 3.0) ;
		cout << "Результат функции при x=" << i << " равен " << y << endl;
		i = i + dX;
	}
	system("cls");
	system("pause");
	printf("Задача B :\n");
	double x1 = 0.35;
	for (int i = 1; i <= 6; ++i) 
	{
		if (i == 2) x1 += 1.28;
		if (i == 3) x1 += 3.51;
		if (i == 4) x1 += 5.21;
		if (i == 5) x1 += 4.16;
		if (abs(x1) < 1) { printf("Ошибка: |x1| < 1"); return 0; 
		}
		y = pow(Xn + Xk, 1.0 / 3.0);
		cout << "Результат функции при x1=" << x1 << " равен " << y << endl;
	}
}


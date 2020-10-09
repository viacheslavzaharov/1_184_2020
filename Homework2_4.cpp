//На экране выводятся символы , перекрывая консоль ровно до того момента пока пользователь не введет любое число


#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	char c;
	char a;
	char z=0;
	while (!_kbhit()) { cout << " * "; }
	printf("", _getch());
	cout << "Заного нажмите на клавишу, которую вы нажимали ";
	a = _getch();
	if (a == '1')
	{
		c = 'a';
	}
	else if (a == '2')
	{
		c = 'b';
	}
	else if (a == '3')
	{
		c = 'c';
	}
	else if (a == '4')
	{
		c = 'd';
	}
	else if (a=='5')
	{
		c = 'e';
	}
	else if (a=='6')
	{
		c = 'f';
	}
	else if (a=='7')
	{
		c = 'g';
	}
	else if (a=='8')
	{
		c = 'h';
	}
	else if (a=='9')
	{
		c = 'i';
	}
	else if (a=='0')
	{
		c = 'j';
	}
	switch (c)
	{
	case 'a':
		cout << "Было введено число 1" << endl;
		break;
	case 'b':
		cout << "Было введено число 2" << endl;
		break;
	case 'c':
		cout << "Было введено число 3" << endl;
		break;
	case 'd':
		cout << "Было введено число 4" << endl;
		break;
	case 'e':
		cout << "Было введено число 5" << endl;
		break;
	case 'f':
		cout << "Было введено число 6" << endl;
		break;
	case 'g':
		cout << "Было введено число 7" << endl;
		break;
	case 'h':
		cout << "Было введено число 8" << endl;
		break;
	case 'i':
		cout << "Было введено число 9" << endl;
		break;
	case 'j':
		cout << " 0 - это не число, но Вы его ввели, ладно..." << endl;
			break;
	
	default:
		cout << "Буква - это не число." << endl;
		break;
	}



	return 0;
}



#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int c = 0;
	char a;
	char z = 0;
	while (!_kbhit()) { cout << " * "; }
	cout << "\n";

	a = _getch();
	if (a == '1')
	{
		c = 11;
	}
	else if (a == '2')
	{
		c = 12;
	}
	else if (a == '3')
	{
		c = 13;
	}
	else if (a == '4')
	{
		c = 14;
	}
	else if (a == '5')
	{
		c = 15;
	}
	else if (a == '6')
	{
		c = 16;
	}
	else if (a == '7')
	{
		c = 17;
	}
	else if (a == '8')
	{
		c = 18;
	}
	else if (a == '9')
	{
		c = 19;
	}
	else if (a == '0')
	{
		c = 10;
	}
	switch (c)
	{
	case 11:
		cout << "���� ������� ����� 1" << endl;
		break;
	case 12:
		cout << "���� ������� ����� 2" << endl;
		break;
	case 13:
		cout << "���� ������� ����� 3" << endl;
		break;
	case 14:
		cout << "���� ������� ����� 4" << endl;
		break;
	case 15:
		cout << "���� ������� ����� 5" << endl;
		break;
	case 16:
		cout << "���� ������� ����� 6" << endl;
		break;
	case 17:
		cout << "���� ������� ����� 7" << endl;
		break;
	case 18:
		cout << "���� ������� ����� 8" << endl;
		break;
	case 19:
		cout << "���� ������� ����� 9" << endl;
		break;
	case 10:
		cout << "��� ������ ����" << endl;
		break;

	default:
		cout << "�� �� ����� �����, ���������� ������." << endl;
		break;
	}
	return 0;
}

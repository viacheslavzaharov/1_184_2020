//На экране выводятся символы , перекрывая консоль ровно до того момента пока пользователь не введет любое число


#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	while (!_kbhit()) { cout << " * "; }
	return 0;
}



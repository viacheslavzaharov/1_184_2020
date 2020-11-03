// Classwork
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
			int A = 0;
			char C;

			cout << "A: ";
			cin >> A;
			if (A % 3 == 0)
			{
				C = 'a';
			}
			else if (A % 4 == 0)
			{
				C ='b';
			}
			else if (A % 5 == 0)
			{
				C= 'c';
			}
			
			switch (C)
			{
			case 'a':
				cout << "Kratno 3" << endl;
				break;
			case 'b':
				cout << "Kratno 4" << endl;
				break;
			case 'c':
				cout << A + 7 << endl;
				break;
			default:
				cout << "Error" << endl;
				break;
			}






}

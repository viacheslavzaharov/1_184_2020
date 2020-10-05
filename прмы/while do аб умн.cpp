#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	char response = 'y';
	while (response == 'y')
		do
		{
			const int myarray = 144;
			int thearray[myarray];
			for (int m = 0; m < 12; m++)
			{
				cout << m + 1 << " ";
			}
			cout << endl;
			for (int rown = 1; rown < 11; rown++)
				for (int n = 0; n < 12; n++)
				{
					thearray[(rown * 12) + n] = thearray[n] * (rown + 1);
				}
			if ()
				cout << "Would you like to run the program again? \n"
				<< "Enter y for yes or n for no: ";
			cin >> response;
		} while (response == 'Y' || response == 'y');
		return 0;
}
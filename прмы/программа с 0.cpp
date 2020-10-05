

#include <iostream>
using namespace std;

int main()
{
	float a = 0;
	float b = 0;

	cout << " please enter a and b for 'ax+b=0' ";
	cin >> a >> b;

	if (a != 0)
	{
		if (b == 0) { cout << "x=0"; }
		else 
		{
			float x = -b / a;
			cout << "solution :" << x;
		}
	}
	
	else 
	{
		cout << "there is no solution";
	}
	return 0;

}


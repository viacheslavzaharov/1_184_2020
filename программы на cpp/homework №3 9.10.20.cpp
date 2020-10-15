#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	cout << "Enter two numbers, the width and height of the rectangle: ";
	cin >> y >> x;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cout << "+";
		}
		cout << endl;

	}
	return 0;
}
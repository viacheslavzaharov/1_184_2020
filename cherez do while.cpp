
#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	do
	{
		cout << i << " * " << i << " = " << i * i << endl;
		i++;
	} 
	while (i < 10);
	return 0;
}
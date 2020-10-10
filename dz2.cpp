#include <iostream>
using namespace std;

int compare(int i)
{
for (; i < 10; i++)
{
    cout << i << " * " << i << " = " << i * i << endl;
}
return 0;
}
int main()
{
    int i = 1;
    compare(i);
}
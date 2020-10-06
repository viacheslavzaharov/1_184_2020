#include <iostream>
using namespace std;

void number()
{
    for (int i = 1; i < 10; i++)
    {
        cout << i << " * " << i << " = " << i * i << endl;
    }
}

int main()
{
    number();
    return 0;
}
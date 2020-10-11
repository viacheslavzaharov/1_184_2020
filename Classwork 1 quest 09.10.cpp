#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    char C = 0;
    cout << "¬ведите число: ";
    cin >> x;
    if (x % 3 == 0)
    {
        C = 'a';
    }
    else if (x % 4 == 0)
    {
        C = 'b';
    }
    else if (x % 5 == 0)
    {
        C = 'c';
    }
    else if (C != 'a' || C != 'b' || C != 'c')
    {
        C = 'e';
    }
    switch (C)
    {
    case 'a':
        cout << "кратно 3";
        break;
    case 'b':
        cout << "кратно 4";
        break;
    case 'c':
        cout << x + 7;
        break;
    case 'e':
        cout << "Error";
        break;
    }
    return 0;
}
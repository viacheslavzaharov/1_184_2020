
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << ("please enter a and b for `ax + b = 0`:");
   

    int a = 0;
    int b = 0;
    cin >> a >> b;
    if (a == 0)
    {
        cout << ("error, не дели на 0");
    }
    else
    {
        int x = -b / a;
        cout << "solution: " << x;
    }
    return 0;
}

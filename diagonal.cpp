#include <iostream>

using namespace std;

int main()
{
    int b = 0;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == j || i + j == b + 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;

    }
    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a[80][80];
    int b[80];
    int c[80];
    int m = 20, n = 15, sum, count, i, j;
    for (i = 0; i < m; i++)
    {
        sum = count = 0;
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % (30 - 35);
            cout << a[i][j] << " ";
            if (a[i][j] > 0)
            {
                sum += a[i][j];
                count++;
            }
        }
        cout << endl;
        b[i] = sum;
        c[i] = count;
    }

    cout << "Rezult\n";
    for (i = 0; i < m; i++)
    {
        cout << "In " << i << " string ";
        cout << c[i] << " polozhit elementov, summa = " << b[i] << endl;
    }
    return 0;
}

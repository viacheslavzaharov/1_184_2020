#include <iostream>
#include <cmath>
using namespace std;

double func28(double a, double b, double x)
{
    return (sin(pow(a + (b * x), 3.5))) / (1 + cos(log10(a + (b * x))));
}

double *y;

int taskA(double a, double b, double c, double d, double e) 
{
        const double len = (d - c) / e + 1;
        y = new double[len]();
        int k = 0;
        for (double i = c; i <= d; i += e) 
        {
            y[k] = func28(a, b, i);
            k += 1;
        } 
        return k;
}

void printA(double a, double b, double c, double d, double e) 
{
    for (int i = 0; i < taskA(a, b, c, d, e); i++) 
    {
        cout << y[i] << endl;
    }
}

void taskB(double a, double b, double x[5]) 
{
        y = new double[5]();
        for (int i = 0; i < 5; i++) 
        {
            y[i] = func28(0, 2.5, x[i]);
        }
        return;
}

void printB(double a, double b, double x[5]) 
{
    taskB(a, b, x);
    for (int i = 0; i < 5; i++) 
    {
        cout << y[i] << endl;
    }
}

int main()
{
    string choice_task;
    double x[5] = { 1.2, 1.36, 1.57, 1.93, 2.25 };
    const double a = 2.5;
    const double b = 4.6;
    const double c = 1.15;
    const double d = 3.05;
    const double e = 0.38;
    cout << "Enter the letter of task: ";
    cin >> choice_task;
    if (choice_task == "A") 
    {
        printA(a, b, c, d, e);
    }
    if (choice_task == "B") 
    {
        printB(a, b, x);
      }
        }
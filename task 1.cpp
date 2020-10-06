#include <iostream>

#define RESET "\033[0m"
#define RED "\033[31m"

using namespace std;

int main()
{
    //TASK 1

    cout << RED << " TASK 1 \n \n" << RESET;
    cout << "please enter a and b for 'ax + b' = 0\n";
    float a = 0;
    float b = 0;
    cout << "enter a = ";
    cin >> a;
    cout << "enter b = ";
    cin >> b;
    if (a == 0) {
        cout << "there is no solution";
    }
    else {
        float x = -b / a;
        cout << "solution: " << x << "\n";
    }

    //TASK 2
    cout << RED << "\n TASK 2 \n \n" << RESET;

    float sum = 0;
    float x = 0;
    int n = 0;

    cout << "how much numbers will be entered to subtract an average? \n" << "Answer: ";
    cin >> n;
    cout << "\n";

    for (int i = 1; i <= n; i++) {
        std::cout << "Enter " << i ;
        if (i == 1) {
            cout << "st number = ";
        } else if (i == 2) {
            cout << "nd number = ";
        } else if (i == 3 || i == 4) {
            cout << "rd number = ";
        } else {
            cout << "th number = ";
        }
        cin >> x;

        sum += x;
    }
    std::cout << "\nAn average = " << sum / n << "\n";
}
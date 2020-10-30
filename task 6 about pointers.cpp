//
//  main.cpp
//
//  Created by Никита on 00.00.2020.
//

#include <iostream>
#include <math.h>
#include <array>

using namespace std;

double formula(double b, double x) {
    double numerator = 1 + pow(sin(pow(b, 3) + pow(x,3)), 2);
    double denominator = pow((pow(b, 3) + pow(x, 3)), 1.0/3);
    
    double answer = numerator/denominator;
    
    return answer;
}

int TaskA(double xn, double xk, double dx) {
    for (double x = xn; x <= xk; x += dx) {
        cout << "if x == " << x << " => anwser : " << formula(2.5, x) << "\n";
    }
    return 0;
}

int TaskB(double *firstXInArray) {
    
    for (int i = 0; i < 5; i++) {
        cout << "x" << i + 1 << " = " << *(firstXInArray + i) << " => answer: " << formula(2.5, *(firstXInArray + i)) << "\n";
    }
    
    return 0;
}

int main() {
    cout << "Variant 1 \n\nTask A \nxn = 1.28, xk = 3.28, dx = 0.4 \n\n";
    
    double xn = 1.28; double xk = 3.28; double dx = 0.4;
    
    TaskA(xn, xk, dx);
    
    cout << "\nTaskB\n\n";
    
    double xArray [5] = {1.1, 2.4, 3.6, 1.7, 3.9};
    
    TaskB(&xArray[0]);
    
    cout << "\n";
}

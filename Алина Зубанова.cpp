/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

float main()

{
   std::puts("please enter a and b for ax + b = 0");
   
   float a = 0;
   float b = 0;
   float x = 0;
   std::cin >> a >> b;
   if (a != 0)
   {
       x = -b / a;
       std::cout << "solution:" << x << std::endl;
       
    }
    else if (a == 0)
    {
        std::cout << "no solution" << std::endl;
        
    }
    return 0;
}

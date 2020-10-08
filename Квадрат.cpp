#include <iostream>


using namespace std;


int main()

{

int side;

std::cout << "Vvedite chislo " << std::endl;

std::cin >> side;

for (int i = 1; i <= side; i++)

{

for (int j = 1; j <= side; j++)

{

if ( i == 1||i==side||j ==1||j==side)

std::cout <<"*";


else std::cout <<" ";

}

std::cout << endl;

}

return 0;

} 

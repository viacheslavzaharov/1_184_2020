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

if ( i == j|| j + i ==side)

std::cout <<"*";


else std::cout <<" ";

}
std::cout << endl;

}

return 0;

} 

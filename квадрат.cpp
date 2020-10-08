#include <iostream>
 
int main()
{
    int side;
 
    std::cout << "Enter the size of the parties: ";
    std::cin >> side;
    std::cout << std::endl;
 
    for(int i = 0; i < side; i++)
    {
        for(int j = 0; j < side; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    return 0;
}

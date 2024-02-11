#include <iostream>


int main (void)
{
    
    int value { };
    
    std::cout << "Enter an integer: ";
    std::cin >> value;

    std::cout << "Double " << value << " is: " << (value * 2) << '\n';
    std::cout << "Triple " << value  << " is: " << (value * 3) << '\n';
    return 0;
}

#include <iostream>

int main (void)
{
    int num1 { }, num2 { };

    std::cout << "Enter two integer: ";
    std::cin >> num1 >> num2;

    std::cout << num1 << " + " << num2 << " is: " << num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " is: " << num1 - num2 << "\n";
}

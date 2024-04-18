#include <iostream>
#include <cstdint>

constexpr bool isEven(std::int64_t number)
{
    return number % 2 == 0 ? true : false;  
}

int main()
{
    std::cout << "Enter an integer: ";
    std::int64_t num {};
    std::cin >> num;

    if(isEven(num) == true)
        std::cout << num << " is even \n";
    else
        std::cout << num << " is odd \n";

    return 0;
}

#include <iostream>

int main()
{
    constexpr int maxAge {16};
    
    std::cout << "How old are you?\n";
    int age{};
    std::cin >> age;
    
    std::cout << "Allowed to drive a car in Texas[" << (age >= (maxAge) ? 'x' : ' ') << "]\n"; 

}

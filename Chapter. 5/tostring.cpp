#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter a value: \n";
    int x {};
    std::cin >> x; 

    std::cout << ((x != 5) ? std::to_string(x) + std::string{": x is not 5!\n"} : std::string{"x is 5\n"});
}

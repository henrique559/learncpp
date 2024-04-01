#include <iostream>
#include <string>

int main()
{
    std::cout << "What's your name? ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::cout << "What's your favorite color? ";
    std::string color{};
    std::getline(std::cin >> std::ws, color);

    std::cout << "Hello, " << name << " !\nI like the color \"" << color << "\" \n"; 
}

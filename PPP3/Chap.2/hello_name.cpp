#include <iostream>

int main()
{
    std::cout << "Please enter your name: \n";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Now, enter your age: \n";
    double age {};
    std::cin >> age;

    std::cout << "Hello, " << name << "!\nYou are " << age << " years old or " << static_cast<int>(age * 12) << " months old\n";
}

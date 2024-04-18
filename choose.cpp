#include <array>
#include <iostream>
#include <random>

int main()
{
    std::array<std::string, 2> choose {"C++", "JAVA"};
    std::mt19937_64 index { std::random_device{}() };
    std::uniform_int_distribution<> option{0, 1};

    std::cout << "Learn: " << choose[option(index)];
}

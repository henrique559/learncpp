#include <iostream>

int main()
{
    std::cout << "Miles: ";
    double miles {};
    std::cin >> miles;

    double to_kilometer { miles * 1'609};

    std::cout << miles << " mile(s) is " << to_kilometer << "km\n";
}

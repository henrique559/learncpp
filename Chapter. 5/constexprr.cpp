#include <iostream>

constexpr int greater (int x, int y)
{
    return (x > y ? x : y);
}

int main ()
{
    constexpr int x { 5 };
    constexpr int y { 6 };

    constexpr int g { greater(x, y) };

    std::cout << g << " is greater!\n";
}

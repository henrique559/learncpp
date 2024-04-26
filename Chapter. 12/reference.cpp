#include <iostream>

int main()
{
    int x { 5 };
    int& ref { x };
    // int& ref is a alias to 'x'
    ++ref;

    std::cout << x << '\n';
    std::cout << ref << '\n';

    return 0;
}

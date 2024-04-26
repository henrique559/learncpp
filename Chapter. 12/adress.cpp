#include <iostream>

int main (int argc, char *argv[])
{

    int x { 5 };
    int& ref { x };
    int* ptr { &x };

    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';
    std::cout << ref << '\n';

    ptr = { &ref };

    std::cout << *ptr << '\n';
    std::cout << ptr << '\n';


    std::cout << x << '\n';
    return 0;
}

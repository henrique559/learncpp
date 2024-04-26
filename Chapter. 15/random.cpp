#include "random.h"
#include <iostream>

int main()
{
    for(int i { 1 }; i <= 10; ++i)
        std::cout << Random::get(1,100) << '\n';

    std::cout << '\n';
}

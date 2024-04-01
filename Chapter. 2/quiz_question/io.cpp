#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Enter an integer: \n";
    int x {};
    std::cin >> x;
    return x;
}

void writeAnswer(int answer)
{
    std::cout << "The answer is: " << answer << '\n';
}

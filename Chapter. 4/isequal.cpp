#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;
}

int main(void)
{
    std::cout << "Enter an number:" << '\n';
    int x {};
    std::cin >> x;

    std::cout << "Enter another number:" << '\n';
    int y {};
    std::cin >> y;
    
    std::cout << std::boolalpha;

    if(isEqual(x, y))
        std::cout << isEqual(x,y) << ": Both numbers are equal!" << '\n';
    else 
        std::cout << isEqual(x,y) << ": Those numbers are different." << '\n';
}

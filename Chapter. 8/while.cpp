#include <iostream>

int main()
{
    int outer{ 0 };
    while(outer < 5)
    {
        int inner { 0 };
        while (inner < outer)
        {
            std::cout << '#' << ' ';
            ++inner;
        }
        std::cout << '\n';
        ++outer; 
    }
}

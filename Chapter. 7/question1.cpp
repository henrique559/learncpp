#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int smaller {0};
    std::cin >> smaller;

    std::cout << "Enter a large integer: ";
    int larger {0};
    std::cin >> larger;

    if(smaller > larger)
    {
        std::cout << "Swapping the values\n";
        int tmp {0};

        tmp = {smaller};
        smaller = {larger};
        larger = {tmp};
        // tmp dies here
    }
    
    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

}

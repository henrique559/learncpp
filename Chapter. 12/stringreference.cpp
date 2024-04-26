#include <iostream>
#include <string>


template <typename T, typename U>
auto add_sum (const T& num1, const U& num2)
{
    return num1 + num2;
}

void printValue(const std::string& y)
{

    std::cout << y << '\n';
    
}


int main (int argc, char *argv[]) 
{
    std::string name {"Pedro"};
    printValue(name);
    std::cout << name << '\n';
    
    std::cout << add_sum(1, 2.5) << '\n';
    return 0;
}

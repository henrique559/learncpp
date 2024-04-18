#include <cstdint>
#include <iostream>

std::int64_t sumTo(std::int64_t value);

int main()
{
    std::cout << "Insert a value: ";
    int value {};
    std::cin >> value;

    std::cout << "The sum of all numbers from 1 to " << value << " are: " << sumTo(value) << '\n';
}

std::int64_t sumTo(std::int64_t value)
{
    std::int64_t sum { 0 };
    for(int i { 1 }; i <= value; ++i)
       sum += i;  

    return sum;
}

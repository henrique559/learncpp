#include <cstdint>
#include <iostream>


void fizzbuzz (std::int64_t number)
{
    for(int i { 1 }; i <= number; ++i)
    {
        std::string fizz_str = {" "};
        if(i % 3 == 0)
        {
            fizz_str += "fizz";
        }
        
        if(i % 5 == 0)
        {
            fizz_str += "buzz";
        }
        if(i % 7 == 0)
        {
            fizz_str += "pop";
        }
        
        if(i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            fizz_str += std::to_string(i);
        
        std::cout << fizz_str << '\n';
        
    }

    return;
}

int main()
{
    std::cout << "Insert a number: ";
    std::int64_t number { 0 };
    std::cin >> number;


    fizzbuzz(number);
}

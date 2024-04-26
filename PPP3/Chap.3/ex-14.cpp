#include <iostream>
#include <vector>

int main()
{
    std::vector<int> prime_numbers {};
    std::cout << "Enter a number: ";
    int num {};
    std::cin >> num;

    for(auto i { 2 }; i <= num; i++)
    {
        if(num % i != 0)
            prime_numbers.push_back(i);
    }


    std::cout << "Prime numbers between 0 and " << num << '\n';
    for(auto x : prime_numbers)
    {
        std::cout << x << '\n';
    }
}

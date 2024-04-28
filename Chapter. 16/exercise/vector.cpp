#include <cstdint>
#include <iostream>
#include <vector>

int main()
{
    std::vector<std::int64_t> teste {};
    
    std::cout << "Enter any values [Press CTRL+D to stop]\n";
    std::int64_t i{};

    while(std::cin >> i && !std::cin.eof())
    {
        teste.push_back(i);
    }

    std::cout << '\n';
    int64_t sum{};
    for(auto& i : teste)
        sum += i;

    std::cout << sum << '\n';

}

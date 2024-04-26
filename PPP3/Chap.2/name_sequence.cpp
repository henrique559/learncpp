#include <algorithm>
#include <array>
#include <iostream>
#include <string>

int main()
{
    constexpr int str_length { 3 };
    std::array<std::string, str_length> names {};


    for(auto i { 0 }; i < names.size(); ++i )
    {
        std::cout << "Insert your name: \n";
        std::getline(std::cin >> std::ws, names[i]);
    }

    std::sort(names.begin(), names.end());
    std::cout << "\nSorted list: \n";
    for(auto i : names)
    {

        std::cout << i << '\n'; 
    }
}

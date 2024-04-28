#include <iostream>
#include <string>
#include <string_view>
#include <vector>

template <typename T, typename U>
constexpr bool findSomething(const std::vector<T>& arr, const U& something)
{
    for(const auto& i : arr)
    {
        if(i == something)
            return true;
    }
    return false;
}

int main()
{
    using namespace std::literals;
    std::vector names { "Alex"sv, "Betty"sv, "Caroline"sv, "Dave"sv, "Emily"sv, "Fred,"sv, "Greg"sv, "Holly"sv };
    
    std::cout << "Enter a name: ";
    std::string input {};
    std::cin >> input;

    if(findSomething(names, input))
    {
        std::cout << input << " was found.\n";
        return 0;
    }
    else 
    {
        std::cout << input << " was not found.\n";
    }
}

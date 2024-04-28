#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

int main()
{
    using namespace std::literals;
    std::vector words { "Alex"sv, "Bobby"sv, "Chad"sv, "Dave"sv }; 
    
    for(const auto& word : std::views::reverse(words))
        std::cout << word << ' ';

    std::cout << '\n';
}

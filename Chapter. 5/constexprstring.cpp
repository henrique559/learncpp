#include <iostream> 
#include <string_view> 

int main()
{
    constexpr std::string_view s { "Hello, world! " };
    // Create a read-only string that is evaluated during compile time and not during runtime
    std::cout << s << '\n';
}

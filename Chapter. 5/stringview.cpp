#include <iostream> 
#include <string_view> 

// best use of string view is to use as parameters to functions
void printSV(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s{ "Hello, world" };
    printSV(s);

    return 0;
}

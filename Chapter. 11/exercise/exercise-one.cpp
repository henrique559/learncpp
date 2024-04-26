#include <iostream>

template <typename T, typename U>
auto add(const T& num1, const U& num2)
{
    return num1 + num2;
}

int main()
{
    std::cout << add(2, 3.5) << '\n';
    std::cout << add(1.2, 3) << '\n';
}

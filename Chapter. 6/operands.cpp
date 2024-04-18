#include <iostream>

int main()
{
    constexpr int num1 { 4 };
    constexpr int num2 { 7 };

    std::cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << "\n";
}

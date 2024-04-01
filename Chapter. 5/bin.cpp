#include <bitset>
#include <iostream>

int main()
{
    std::bitset<8> bin1{ 0b1100'0101 };
    std::bitset<8> bin2{ 0xFF };

    std::cout << bin1 << '\n' << bin2 << '\n';
    std::cout << std::bitset<4> { 0b1010 } << '\n';

    return 0;
}

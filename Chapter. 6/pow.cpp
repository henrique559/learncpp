#include <cassert>
#include <cstdint>
#include <iostream> 

constexpr std::int64_t powint(std::int64_t base, int exp)
{
    assert(exp >= 0 && "powint: exp parameter has negative value");

    if(base == 0)
        return (exp == 0) ? 1 : 0;

    std::int64_t result { 1 };
    while(exp > 0)
    {
        if (exp & 1)
            result *= base;
        exp /= 2;
        base *= base;
    }
    return base;
}

int main()
{
    std::cout << powint(7, 12) << '\n';

    return 0;
}

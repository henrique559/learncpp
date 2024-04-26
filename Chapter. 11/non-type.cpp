#include <cassert>
#include <cmath>
#include <iostream>


template <typename T>
auto getSqrt(const T& d)
{
    assert(d >= 0.0 && "getSqrt(): d must be non-negative");

    if(d >= 0)
        return std::sqrt(d);

    return 0.0;
}

int main()
{
    std::cout << getSqrt(5.5) << '\n';
    std::cout << getSqrt(5) << '\n';
    std::cout << getSqrt(-10) << '\n';    
}

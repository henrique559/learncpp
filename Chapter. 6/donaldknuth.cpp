#include <algorithm> 
#include <cmath>
#include <iostream> 
bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
    return (std::abs(a-b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main()
{
    constexpr double a { 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
    constexpr double relEps { 1e-8 };
    constexpr double absEps { 1e-12 };

    std::cout << std::boolalpha;
    
    std::cout << approximatelyEqualRel(a, 1.0, relEps) << '\n'; 
}

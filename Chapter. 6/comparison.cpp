#include <cmath>

bool approximatelyEqualAbs(double a, double b, double absEpsilon)
{
    return std::abs(a - b) <= absEpsilon;
}

#include <string>

namespace azr 
{

    template<typename T, typename U>
    auto max(const T& x , const U& y)
    {
        return (x < y) ? y : x;
    }

    const char *max(const char *x, const char *y) = delete;
    const std::string max(const std::string x, const std::string y) = delete;   
}




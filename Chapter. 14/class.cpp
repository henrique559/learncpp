#include <iostream>

class minMax
{
    public:
        int x{};
        int y{};


    template <typename T, typename U>
    auto find_max(const T& x, const U& y)
    {
        return (x < y ? y : x);
    }
};

int main()
{
    minMax teste { 5, 10 };

    std::cout << teste.find_max(0.999, 1) << '\n';
}

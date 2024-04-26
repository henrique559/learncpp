#include <iostream>


namespace azr
{

    template <typename T>
    auto factorial(const T& num)
    {
       if (num <= 0)
            return 1;

        return num * factorial(num - 1);
    }
}

int main()
{
    std::cout << azr::factorial(5) << '\n'; 

}

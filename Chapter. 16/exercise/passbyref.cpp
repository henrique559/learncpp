#include <cassert>
#include <iostream>
#include <vector>

template <typename T>
void passByRef(const T& arr)
{
    std::cout << arr[3] << '\n';
}


int main()
{
    std::vector primes{ 2, 3}; // okay: use CTAD to infer std::vector<int>
    assert(primes.size() >= 3 && "passByRef(): not enought array size");
    passByRef(primes);

    return 0;
}

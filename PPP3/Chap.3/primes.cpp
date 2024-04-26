#include <iostream>
#include <vector>

void init_vector(std::vector<int>& vector)
{
    for(int i { 0 }; i <= 100; ++i)
    {
        vector.push_back(i);
    }

}

int main()
{
    std::vector<int> primes;
    init_vector(primes);
    
    for(int i { 2 }; i < primes.size(); ++i)
    {
        if (primes[i] % j != 0)
            continue;
        else if()
            std::cout << primes[i] << '\n';
    }
}

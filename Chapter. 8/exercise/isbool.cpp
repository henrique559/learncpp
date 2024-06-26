#include "isbool.h"

namespace PrimeTest
{
    bool isPrime(int x)
    {
        if(x <= 1)
            return false;

        for(int i { 2 }; i < x; ++i)
        {
            if(x % i == 0)
                return false;
        }
        return true;
    }
}

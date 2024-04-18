#include <random>
#include "recursion.h"

int main()
{
    std::mt19937 randr { std::random_device{}() };
    std::uniform_int_distribution<> gen { rnd::min, rnd::max };

    rnd::recursion(gen(randr));
}

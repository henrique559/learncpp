#include <cassert>
#include <iostream>
#include <iterator>
#include <vector>

namespace Animals
{
    enum Names 
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals,
    };

    std::vector<int> animals{2, 4, 4, 4, 2, 0 };
}

int main()
{
    assert(std::size(Animals::animals) == Animals::Names::max_animals);
    
    std::cout << "An elephant has " << Animals::animals[Animals::elephant] << " legs.\n";
}

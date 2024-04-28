#include <iostream>
#include <vector>

int main()
{
    std::vector v {0, 1, 2 };
    std::cout << "The length is: " << v.size() << '\n';

    v.resize(1);
    std::cout << "The length is: " << v.size() << '\n';

    for(const auto& i : v)
        std::cout << i << ' ';

    std::cout << '\n';
}

#include <iostream>
#include <vector>

void printCapLen(const std::vector<int>& v)
{
    std::cout << "Capacity: " << v.capacity() << " Length: " << v.size() << '\n';
}

int main()
{
    std::vector v { 0, 1, 2 };
    printCapLen(v);

    for(const auto& i : v)
        std::cout << i << ' ';

    std::cout << '\n';

    v.resize(10);

    printCapLen(v);

    for(const auto& i : v)
        std::cout << i << ' ';

    std::cout << '\n';

}

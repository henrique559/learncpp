#include <iostream>
#include <vector>

template <typename T>
void printArray(std::vector<T> arr)
{
    for( auto& i : arr )
        std::cout << arr[i] << ' ';
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr); // use function template to print array

    return 0;
}

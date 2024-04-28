#include <cstddef>
#include <iostream>
#include <vector>

template <typename T>
T calculateAverage(const std::vector<T>& arr)
{
    T average { 0 };
    for(auto& i : arr)
        average += i;
    
    average /= static_cast<int>(arr.size());
    return average;
}

int main()
{
    std::vector class1 { 84, 92, 76, 81, 56 };
    std::cout << "The class 1 average is: " << calculateAverage(class1) << '\n'; // calc average of 5 ints

    std::vector class2 { 93.2, 88.6, 64.2, 81.0 };
    std::cout << "The class 2 average is: " << calculateAverage(class2) << '\n'; // calc average of 4 doubles

    return 0;
}

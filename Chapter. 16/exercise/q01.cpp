#include <exception>
#include <ios>
#include <iostream>
#include <limits>
#include <vector>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template <typename T>
void printArray(const std::vector<T> arr)
{
    for(auto& i : arr)
        std::cout << i << ' ';

    std::cout << '\n';
}

template <typename T>
int searchArray(const std::vector<T>& arr, const int& num)
{
    for(auto i { 0 }; i < arr.size(); ++i)
    {
        if(arr[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    std::vector arr { 4, 6, 7, 3, 8, 2, 1, 9 };
    while(!std::cin.eof())
    {
        std::cout << "Enter a number between 1 and 9: ";
        int value {};
        try 
        {
            std::cin >> value;
            if(!std::cin)
            {
                throw std::exception();
            }
        } 
        catch (const std::exception& e) 
        {
            std::cin.clear();
            ignoreLine();

            continue; 
        }
        
        printArray(arr);
        
        if(searchArray(arr, value) == -1)
            std::cout << "The number " << value << " was not found\n";
        else 
            std::cout << "The number " << value << " has index " << searchArray(arr, value) << '\n';
        
        return 0;

    }

}

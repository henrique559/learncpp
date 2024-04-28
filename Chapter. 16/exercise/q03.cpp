#include <climits>
#include <exception>
#include <ios>
#include <iostream>
#include <limits>
#include <utility>
#include <vector>

template<typename T>
void printArray(const std::vector<T>& arr);

template<typename T>
std::pair<T, T> findMinMax(std::vector<T> arr);

template<typename T>
T findIndex(T value, const std::vector<T>& arr);



template<typename T>
std::pair<T, T> findMinMax(std::vector<T> arr)
{
    std::pair<T, T> aux { INT_MAX, INT_MIN };
    // first -> min
    // second -> max

    for(const auto& i : arr)
    {
        if(i < aux.first )
            aux.first = i;

        if(i > aux.second)
            aux.second = i;
    }

    return aux;
        
}


template<typename T>
T findIndex(T value, const std::vector<T>& arr)
{
    for(auto i { 0 } ; i < arr.size(); ++i)
    {
        if(arr[i] == value)
            return i;
    }
    return -1;
}

template<typename T>
void printArrayMinMax(const std::pair<T, T>& aux, const std::vector<T>& arr)
{
    if(findIndex(aux.first, arr) == -1 || findIndex(aux.second, arr) == -1)
        return ;

    std::cout << "The min element has index " << findIndex(aux.first, arr) << " and value " << aux.first << '\n';
    std::cout << "The max element has index " << findIndex(aux.second, arr) << " and value " << aux.second << '\n'; 
}


template<typename T>
void printArray(const std::vector<T>& arr)
{
    if(arr.size() == 0)
    {
        std::cout << "Empty array.\n";
    }
    else 
    {

        std::cout << "With array (";
        for(const auto& i : arr)
        {
            if(arr[arr.size() - 1] == i)
                std::cout << i;
            else 
                std::cout << i << ", ";
        }
        std::cout << "):\n";
    }
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main()
{


    int input{};
    std::vector<double> v1 {};

    while(true)
    {
        std::cout << "Enter numbers to add: (use  -1 to stop): ";
        try 
        {
            std::cin >> input;    
            if(!std::cin)
            {
                std::cin.clear();
                ignoreLine();
               
                throw std::exception();
            }
            else if (input == -1 )
                break;
            else 
                v1.push_back(input);


        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << ", main(): invalid number" << '\n';
        }
    }

    std::cout << '\n';
    std::pair answer1 { findMinMax(v1) };
    printArray(v1);
    printArrayMinMax(answer1, v1);
    
}

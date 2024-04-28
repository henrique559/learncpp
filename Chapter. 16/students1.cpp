#include <exception>
#include <ios>
#include <iostream>
#include <iterator>
#include <limits>
#include <vector>

int main()
{
    std::vector<int> scoreList{};

    while(!std::cin.eof())
    {
        std::cout << "Enter a score: ";
        int x{};

        try
        {
            std::cin >> x;

            if(!std::cin)
                throw std::exception();
            else 
                scoreList.push_back(x);
        }
        catch(const std::exception &e)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            
            continue;
        }
    }
    std::cout << "\nYour list of scores: \n";
    
    for(const auto& score : scoreList)
        std::cout << score << ' ';
    
    std::cout << "\nAverage: ";
    int sum{};

    for(const auto& i : scoreList)
        sum += i;

    sum /= std::size(scoreList);
    
    std::cout << sum << '\n';

}

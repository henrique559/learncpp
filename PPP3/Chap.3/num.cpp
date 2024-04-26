#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> temps;
    
    std::cout << "Insert double values: \n";
    for(double temp; std::cin >> temp; )
    {

        temps.push_back(temp);

        if(std::cin.eof())
        {
            if(temps.size() == 0)
            {
                std::cerr << "empty vector";
                return EXIT_FAILURE;
            }
            break;

        }
    }
    
    double sum { 0 };
    for(auto x : temps)
        sum += x;

    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    std::sort(temps.begin(), temps.end());
    std::cout << "Median temperature: " << temps[temps.size() / static_cast<double>(2)] << '\n';

}

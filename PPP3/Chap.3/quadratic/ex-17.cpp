#include <iostream>
#include <string>

int main (int argc, char *argv[]) 
{
    std::cout << "quadraticeval v0.1\npress ctrl + d to return\n";

    while(true)
    {

        if(std::cin.eof())
        {
            std::cout << "\n";
            return 0;
        }
        
        std::cout << ">>> ";
        std::string expression{}; 
        std::getline(std::cin >> std::ws, expression);
    }

    return 0;
}



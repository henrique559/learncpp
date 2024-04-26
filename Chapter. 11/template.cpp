#include <iostream>
#include <string>
#include "template.h"

using Name = std::string;

int main()
{
    std::cout << "Your name: ";
    Name name {};
    std::getline(std::cin >> std::ws, name);
    

    std::cout << azr::max(1,2.0) << " - Nome: " << name << "\n";

}

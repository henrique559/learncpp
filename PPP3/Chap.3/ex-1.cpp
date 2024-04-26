#include <iostream>
#include <istream>
#include <string>

int main()
{
    std::cout << "Insert a string: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    for(auto i { 0 }; i < name.size(); ++i)
    {
        std::cout << "LETTER: " << (name[i]) << '\t' << "ASCII: " << static_cast<int>(name[i]) << "\n";
    }
}



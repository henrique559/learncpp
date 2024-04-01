#include <iostream>

int main (void)
{
    std::cout << "Enter something here:\n";
    std::string name {};
    std::cin >> name;

    for(int i = 0; name[i] != '\0'; i++)
    {
        std::cout << "\"" << name[i] << "\": has value " << static_cast<int>(name[i]) << "\n"; 
    }
}

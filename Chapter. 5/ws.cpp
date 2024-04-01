#include <iostream>
#include <string>


//     std::getline(std::cin >> std::ws, name); 
int main()
{
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    if(choice > 2)
        return 0;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << ", you picked " << choice << '\n';
    int len { static_cast<int>(name.size()) }; 
    std::cout << "The length of your name is: " << len << '\n'; 
    return 0;

}

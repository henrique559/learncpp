#include <iostream>
#include <string>
#include <string_view>

std::string getName(int num)
{

    std::cout << "Enter the name of the #" << num << " person: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age {};
    std::cin >> age;

    return age;
}

void printAge(std::string_view name, int age, std::string_view name2, int age2)
{
    if (age > age2)
        std::cout << name << "(age:" << age << ") is older than " << name2 << "(age: " << age2 << ")\n";
    else 
        std::cout << name2 << "(age:" << age2 << ") is older than " << name << "(age: " << age << ")\n";
}


int main()
{
    const std::string firstName { getName(1) };
    const int firstAge { getAge(firstName) };

    const std::string secondName { getName(2) };
    const int secondAge { getAge(secondName) };

    printAge(firstName, firstAge, secondName, secondAge);

}



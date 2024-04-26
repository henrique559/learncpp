#include <cassert>
#include <iostream>
#include <string>

void printByValue(const std::string* val)
{
    assert(val && "printByValue(): can't dereference a null pointer");
    std::cout << *val << '\n';
}

void printByReference(const std::string& val)
{
    std::cout << val << '\n';
}

int main (int argc, char *argv[]) 
{


    std::cout << "Insira seu nome: \n";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::string* ptr { &name };
    printByValue(ptr);


    printByReference(name);

    std::string* null {nullptr};
    printByValue(null);
    

    return 0;
}

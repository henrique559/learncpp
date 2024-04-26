#include <iostream>
#include <string>

struct Animal
{
    struct Paw 
    {
        int claws{};
    };

    std::string name{};
    Paw paw {};
};

int main()
{
    Animal puma {"Puma", { 5 } };

    Animal *ptr { &puma };
    // ptr e um ponteiro, portanto usa ->, ja paw não é, entao usa . 
    std::cout << (ptr->paw).claws << '\n';
}

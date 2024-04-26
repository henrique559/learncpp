#include <iostream>

void printIDNumber(const int* id=nullptr)
{
    if(id)
        std::cout << "Your ID number is " << *id << ".\n";
    else
        std::cout << "Your ID number is not known.\n";
}

int main (int argc, char *argv[]) 
{
    printIDNumber();

    int userid { 34 };
    printIDNumber(&userid);

    
    return 0;
}

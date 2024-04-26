#include <iostream>

int main (int argc, char *argv[]) 
{
    int x { 5 };
    int* ptr { &x };

    if (ptr)
        std::cout << "ptr is non-null\n";
    else
        std::cout << "ptr is null\n";

    int* nullPtr {nullptr};
    std::cout << "nullPtr is " << (nullPtr ? "non-null\n" : "null\n");


    return 0;
}

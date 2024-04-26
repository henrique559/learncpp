#include <iostream>

void nullify ([[maybe_unused]] int*& refptr)
{
    refptr = nullptr;
}

int main()
{
    int x{ 5 };
    int* ptr{ &x };

    std::cout << "ptr is " << (ptr ? "not-null\n" : "nulll\n");

    nullify(ptr);

    std::cout << "ptr is " << (ptr ? "not-null\n" : "nulll\n");
}

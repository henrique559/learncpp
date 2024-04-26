#include <iostream>


int main (int argc, char *argv[]) 
{
    // enum com escopo, serve como um namespace, só pode ser usado usando Color::
    enum class Color
    {
        red, 
        blue,
    };

    enum class Fruit
    {
        banana,
        apple,
    };

    Color color { Color::red };
    Fruit fruit { Fruit::banana };

    int input{};
    std::cin >> input;

    Fruit fruit_1 { static_cast<Fruit>(input)};

    
    return 0;
}

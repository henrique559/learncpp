#include <iostream>
#include <random>

int main()
{
    std::mt19937 rand{}; // cria um algoritmo de geração aleatoria de números "mersenne twister" que gera numeros até 32 bit
    std::uniform_int_distribution<> die6{ 1, 6 }; // uma forma de selecionar o maximo e o minimo de numeros que serão gerados
    
    for(int i { 1 }; i <= 40; ++i )
    {
        std::cout << die6(rand) << '\t'; // gera um numero aleatorio entre 1 e 6, como uniform int distribution é uma classe igualmente string e o mt19937, pode o die6() é uma abreviação.

        if( i % 10 == 0 )
            std::cout << '\n';
    }
    return 0;
}

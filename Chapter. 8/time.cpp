#include <iostream>
#include <random>
#include <chrono>

int main()
{
    std::mt19937_64 rand { static_cast<std::mt19937_64::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()) }; // cria uma variavel "mt19937_64" de mersenna twister que gera numeros aleatorios de ate 64 bits, e recebe como valor para gerar uma seed gerada tambem pelo tempo de execucao do programa com a biblioteca chrono usando steady clock now e convertendo com static cast para o seu tipo 
    std::uniform_int_distribution<> dice6 {1, 6}; // limita a quantidade de numeros que serao gerados (apenas 1 a 6)
    for(int i { 1 }; i <= 40; ++i)
    {
        std::cout << dice6(rand) << '\t';
        
        if(i % 10 == 0)
            std::cout << '\n';
    }

}

#include <iostream>
#include <string>
#include <experimental/random>
#include <ctime>

std::string nameGenerator(int Length)
{
    // Gerando valores aleatórios
    std::srand(std::time(nullptr));

    // Alfabeto
    char vogais[] {'a', 'e', 'i', 'o', 'u' };
    char consoantes[] {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
   
    int maxVogais {0};
    int maxConsoantes {0};

    std::string name {};

    for(int i = 0; i < Length / 2; i++)
    {
        
        maxVogais = std::experimental::randint(0, 4);
        maxConsoantes = std::experimental::randint(0, 20);
        
        name += consoantes[maxConsoantes];
        name += vogais[maxVogais];

    }
    
    if (Length % 2 != 0)
    {

        maxConsoantes = std::experimental::randint(0, 20);
        name += consoantes[maxConsoantes];
    }

    return name;
}

int main()
{
    std::cout << "[GERADOR DE NOMES]\n\n";

    std::cout << "Qual o tamanho do nome que você quer gerar? ";
    int nameLength {};
    std::cin >> nameLength;

    if( nameLength <= 1)
    {
        std::cout << "Tamanho minimo de caracteres: 2\n";
        return 1;
    }
    std::string newName = nameGenerator(nameLength);
    
    std::cout << newName + "\n";
}

#include <iostream>
#include <random>
// #include <string>

int main()
{
    std::mt19937 mt{}; // also has std::mt19937_64 for 64-bit values
    //std::string teste {}; 
    // std::getline(std::cin >> std::ws, teste); pegar strings

    //constexpr = variaveis com expressões constantes que podem ser interpretadas em tempo de compilação e não runtime
    //std::string_view = uma forma de enviar uma string como parametro sem criar uma copia cara para uma função, é como se fosse uma referencia para aquela string, na qual nao pode ser modificada, apenas visualizada

    for(int count { 1 }; count <= 40; ++count)
    {
        std::cout << mt() << '\t'; // mt() generates a random number throught seeds, mt() its a concise syntax for mt.operator() since its a object.
        
        if(count % 5 == 0)
            std::cout << '\n';
    }
}

#include <utility>
#include <iostream>




template <typename T, typename U>
T sum(const std::pair<T, U>& p)
{
    return p.first + p.second;
}


// Cria uma função que aceita diversos tipos de valores com o Struct
template <typename T, typename U>
constexpr T max(std::pair<T, U>& p)
{
    return (p.first < p.second ? p.second : p.first );
}

int main()
{
    std::pair p3 {7, 8};
    std::pair p4 {2.5, 10};


    std::cout << max(p3) << '\n';
    std::cout << sum(p4) << '\n';
    
}

// std::pair -> é como se fosse uma template de struct com dois pares diferentes, em vez de declarar uma struct, é melhor usar essa classe para inicializar dois valores ou usar como parametro em uma função template 

#include "exp.h"
#include <iostream>
#include <cmath>


// Printa o resultado da equação, dependendo do valor de delta.

template <typename T>
void print_equation(const quadratic_expression<T>& exp)
{
    if(exp.negative_delta < 0)
    {
        std::cout << "Equação negativa: " << exp.negative_delta;
    }
    else 
    {
        // Caso delta for positiva, mostra os dois valores de X
        std::cout << "1) Valor de X: " << exp.x_one << '\n';
        std::cout << "2) Valor de X: " << exp.x_two << '\n';
    }
}

template <typename T>
quadratic_expression<T> parsing(const T& exp)
{

    //TODO: Expressão regular
    //2x² + 4x + -3 = 0
    // Analisar a string de uma expressão e colocar os valores no devido lugar (a, b, c) 
    // Verificar por erros e inputs incorretos usando asserts e try match
    
}

// Essa função realiza a solução de uma equação de segundo grau tendo como argumento e valor de retorno struct's

template <typename T>
quadratic_expression<T> equation_calc (const quadratic_expression<T>& exp)
{
    // Formula de delta
    double delta = std::pow(exp.b, 2) - 4 * exp.a * exp.c;
    
    if(delta < 0)
        return {0, 0, delta};
    
    // Descobrindo os valores de ambos X (+-)
    double one = (-(exp.b) + std::sqrt(delta)) / ( 2 * exp.a );
    double two = (-(exp.b) - std::sqrt(delta)) / ( 2* exp.a );

    return { one, two, 0 };
}



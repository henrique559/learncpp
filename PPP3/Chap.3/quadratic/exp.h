#ifndef EXP_H
#define EXP_H

// Resultado da equação

#include <string>
#include <iostream>
#include <math.h>

template <typename T>
class quadratic_evaluation 
{
    private:
        T a {};
        T b {};
        T c {};
        
    public:
        // constructor
        quadratic_evaluation<T>(){};
    
        // metodos
        quadratic_evaluation<T>& parsing(std::string& exp)
        {

            //TODO: Expressão regular
            //2x² + 4x + -3 = 0
            // Analisar a string de uma expressão e colocar os valores no devido lugar (a, b, c) 
            // Verificar por erros e inputs incorretos usando asserts e try match
        }        
        const T& equation_calc (const T& exp)
        {
            double delta = std::pow(exp.b, 2) - 4 * exp.a * exp.c;
            
            if(delta < 0)
                return ;
            
            // Descobrindo os valores de ambos X (+-)
            double one = (-(exp.b) + std::sqrt(delta)) / ( 2 * exp.a );
            double two = (-(exp.b) - std::sqrt(delta)) / ( 2* exp.a );

            return ;  
    }
};

template <typename T>
class quadratic_result
{
    private:
        T x_one {};
        T x_two {};
        T negative_delta {};
    
    public:
        void print_equation(const quadratic_evaluation<T>& exp)
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

};

template <typename T>
class axioms
{
    private:
        T a {};
        T b {};
        T c {};

    public:
        axioms<T>(){};

        // setters
        const T& getValueA() { return a; }
        const T& getValueB() { return b; }
        const T& getValueC() { return c; }
};
#endif // !EXP_H

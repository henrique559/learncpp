#include <cstdio>
#include <iostream>
#include <math.h>

class Quadratic
{
    private:
        double a {};
        double b {};
        double c {};


        struct answer
        {
            double x_one {};
            double x_two {};
            double negative_delta{};
        };

    public:
        Quadratic(const double& a_m, const double& b_m, const double& c_m)
        {
            a = a_m;
            b = b_m;
            c = c_m;
        }

        void equation_calc(const Quadratic& number)
        {
            // Formula de delta
            double delta = std::pow(number.b, 2) - 4 * number.a * number.c;
            
            if(delta < 0)
                return printAnswer({.x_one{0}, .x_two{0}, .negative_delta{delta}});
            
            // Descobrindo os valores de ambos X (+-)
            double one = (-(number.b) + std::sqrt(delta)) / ( 2 * number.a );
            double two = (-(number.b) - std::sqrt(delta)) / ( 2* number.a );

            return printAnswer({.x_one{one}, .x_two{two}, .negative_delta{0}});
        }


        void printAnswer(const answer& answer)
        {
            if(answer.negative_delta < 0)
                std::cout << "Delta negativo: " << answer.negative_delta << '\n';
            else 
            {
                std::cout << "1° X: " << answer.x_one << "\n2° X: " << answer.x_two << '\n'; 
            }
        }
};


int main()
{
    while(!std::cin.eof())
    {
        std::cout << "Insira o valor de a: ";
        double a {};
        std::cin >> a;

        std::cout << "Insira o valor de b: ";
        double b {};
        std::cin >> b;

        std::cout << "Insira o valor de c: ";
        double c {};
        std::cin >> c;
        
        Quadratic quadratic {a, b, c};
        quadratic.equation_calc(quadratic);

         
    }
    

}



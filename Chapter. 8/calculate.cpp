#include <iostream>
#include "calculate.h"

double calculate(int num_1, char op, int num_2);

namespace azr 
{
    
    double calculate(int num_1, char op, int num_2)
    {
        double result {};
        switch(op)
        {
            case '+':
                result = num_1 + num_2;
                break;

            case '-':
                result = num_1 - num_2;
                break;

            case '*': 
            case 'x':
            case '.':
                result = num_1 * num_2;
                break;


            case '/':
                try 
                {
                    if(num_2 != 0)
                        result = static_cast<double>(num_1) / num_2;
                    else 
                    {
                        throw(result);    
                    }
                }
                catch(int ErrorNum)
                {
                    std::cout << "ERROR: Division by 0\n";
                    return EXIT_FAILURE;
                }
            break;

            case '%':
                result = num_1 % num_2;
                break;

            default:
                std::cout << "ERROR: Invalid operator\n";
                return EXIT_FAILURE;
        }
        return result;
    }
}

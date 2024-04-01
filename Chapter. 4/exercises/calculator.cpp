#include <iostream>

double calculate(double x, double y, char z)
{
    double result {};

    switch(z)
    {
        case '+':
            result = x + y;        
        break;


        case '-':
            result = x - y;
        break; 


        case '*':
        case 'x':
            result = x * y; 
        break; 


        case '/':
        case '%':
            result = x / y;
        break;

        default:
            return '\0';

    }
    return result; 
}

int main (void)
{
    std::cout << "Enter a double value: ";
    double num1 {};
    std::cin >> num1; 

    std::cout << "Enter another double value: ";
    double num2 {};
    std::cin >> num2; 

    std::cout << "Enter +, -, * or /: ";
    char op {};
    std::cin >> op; 
    
    if(calculate(num1, num2, op) == '\0')
    {
        std::cout << "Invalid operator.\n";
        return 0;
    }
    else 
        std::cout << "\n" << num1 << " " << op << " " << num2 << " is equal to:" << calculate(num1, num2, op) << "\n";
}

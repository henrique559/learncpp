#include <iostream>
#include "calculate.h"

double calculate(int num_1, char op, int num_2);

int main(int argc, char **argv)
{
    std::cout << "Enter a number: ";
    int num_one {};
    std::cin >> num_one;

    std::cout << "Enter a operator: ";
    char op {};
    std::cin >> op;

    std::cout << "Enter another number: ";
    int num_two {};
    std::cin >> num_two;

    std::cout << num_one << " " << op << " " << num_two << " = " << azr::calculate(num_one, op, num_two);
}

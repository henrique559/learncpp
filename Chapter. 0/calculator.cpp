#include <iostream>
#include <stdlib.h>

using namespace std;

float calculator(char op, float x, int y)
{
    int res = 0;
    switch(op)
    {
        case '+':
            res = x + y;
            break;

        case '-':
            res = x - y;
            break;

        case '*':
        case 'x':
            res = x * y;
            break;

        case '/':
        case '%':
            return res = x / y;
            break;
            
    }

    return res;
}


int main ()
{
    int x, y;
    char op;
    do
    {
        system("clear");
        cout << "Type an expression: \n";
        cin >> x >> op >> y;
    }
    while(isalnum(op));
    cout << "Result: " << calculator(op, x, y) << "\n";
}

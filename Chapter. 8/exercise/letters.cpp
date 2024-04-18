#include <iostream>

int main()
{   
    
    std::cout << "Qual o tamanho da piramide? ";
    int length {};
    std::cin >> length;

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < i; j++)
        {
            std::cout << static_cast<char>('A' + j);
        }
        std::cout << '\n';
    }
}

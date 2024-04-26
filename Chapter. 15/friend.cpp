#include <iostream>

class Accumulator
{
    private:
        int m_value {};

    public:
        void add(int value) {m_value += value; }
        friend void print(const Accumulator& accumulator);
        // friend: permite funções fora da classe acessar coisas privadas, uma função pode ser amiga demais de 1 classe
};

void print(const Accumulator& accumulator)
{
    std::cout << accumulator.m_value;
}

int main()
{
    Accumulator acc{};
    acc.add(5);

    print(acc);

    return 0;
}

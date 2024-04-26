#include <iostream>

class Fraction
{
    private:
        int m_numerator{ 0 };
        int m_denominator{ 1 };

    public:
        explicit Fraction(int numerator=0, int denominator= 1) // impede o objeto ser instanciado através de parametro de funções
            : m_numerator{numerator}, m_denominator {denominator}
            { };

        
        Fraction(const Fraction& fraction) = default;

        int numerator() const{ return m_numerator; }
        int denominator() const { return m_denominator; }

};


void print(const Fraction& fraction) 
{
    std::cout << "Fraction(" << fraction.numerator() << ", " << fraction.denominator() << ")\n";
}

int main()
{
    Fraction f { 5, 3};
    Fraction copy { f };

    print(f);
    print(copy);
    // print({4, 3}); //instancia um objeto temporario com o parametro
    print(Fraction{4, 3}); // explicit exige que o parametro seja o mesmo tipo do argumento

    return 0;
}

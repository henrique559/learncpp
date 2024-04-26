#include <cassert>
#include <exception>
#include <iostream>

class Fraction
{
    private:
        int m_numerator {};
        int m_denominator {};
    
    public:
        explicit Fraction(const int& numerator=0, const int& denominator=1)
            : m_numerator { numerator }, m_denominator { denominator }
            { };

        int numerator() const { return m_numerator; }
        int denominator() const { return m_denominator; }
        

        Fraction multiply(const Fraction& f2)
        {
            return Fraction{(numerator() * f2.numerator()), denominator() * f2.denominator() };

        }

            
        void printFraction()
        {
            std::cout << numerator() << '/' << denominator() << '\n';
        }
        
        

    };

Fraction getFraction()
{

    std::cout << "Enter numerator: ";
    int numerator{};
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    int denominator{}; 
    std::cin >> denominator;
        
    assert(denominator > 0 && "main(): denominator lower than 1");
        
    return Fraction{numerator, denominator};
}

int main()
{
    std::cout << "First fraction \n";
    Fraction fraction = getFraction();

        
    std::cout << "Second fraction \n";
    Fraction fraction_2 = getFraction();
        
    std::cout << "Your fractions multiplied together: \n";
    fraction.multiply(fraction_2).printFraction();
}

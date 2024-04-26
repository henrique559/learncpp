#ifndef EX1_H
#define EX1_H

#include <cstdlib>
#include <iostream>
#include <string>

template<typename T, typename U, typename V>
class Triad
{
    private:
        T m_num1 {};
        U m_num2 {};
        V m_num3 {};

    public:
        // Constructor
        explicit Triad(const T& num1, const U& num2, const V& num3)
            : m_num1 { num1 }
            , m_num2 { num2 }
            , m_num3 { num3 }
        {

        }

        // Destructor
        ~Triad()
        {
        }
    
        // Getters
        inline const T& first() const { return m_num1; } 
        inline const U& second() const { return m_num2; }
        inline const V& third() const { return m_num3; }
        
    
        // Methods
        inline void print() const
        {
            std::cout << "[" << first() << ", " << second() << ", " << third() << "]\n"; 
        }
        inline void print(const Triad<T,U,V>& triad)
        {
            std::cout << "[" << triad.first() << ", " << triad.second() << ", " << triad.third() << "]\n"; 
        }
};


#endif

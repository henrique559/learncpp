#include "class.h"

Simple::Simple(int id) 
    : m_id { id }
{
        std::cout << "Constructing Simple " << m_id << '\n';    
}

Simple::~Simple()
{
    std::cout << "Destructing Simple " << m_id << '\n';    
}

int Simple::getID() const { return m_id; }

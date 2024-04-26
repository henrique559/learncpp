#ifndef CLASS_H
#define CLASS_H 

#include <iostream>

class Simple
{
    private:
        int m_id {};

    public:
        Simple(int id);
        ~Simple();

        int getID() const;
};

#endif 

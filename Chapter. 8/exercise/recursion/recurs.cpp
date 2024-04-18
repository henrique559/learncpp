#include "recursion.h"
#include <iostream>

namespace rnd 
{
    int recursion (int qntd )
    {
        if(qntd <= 0)
        {
            return qntd;
        }

        std::cout << qntd << ") " << "Oii tudo bem!!\n";
        return rnd::recursion(--qntd);
    }
}



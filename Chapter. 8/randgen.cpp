#include <iostream>

unsigned int LCG16()
{
    static unsigned int s_state { 0 };

    s_state = 8253729 * s_state + 2396403;

    return s_state % 32768;
}

int main()
{

    for (int count{ 1 }; count <= 100; ++count)
    {
        std::cout << LCG16() << '\t';

        if(count % 10 == 0)
            std::cout << '\n';
    }
    return 0;
}

#include <iostream>

class Something
{
    public:
        inline static int s_value { 1 };
};


int main()
{
    Something::s_value = 2;
    std::cout << Something::s_value << '\n';
}

#include <iostream>

class Something
{
    private:
        static inline int s_value { 1 };

    public: 
        static int getValue() { return ++s_value; }


};

int main()
{
    std::cout << Something::getValue() << '\n';

    std::cout << Something::getValue() << '\n';
    std::cout << Something::getValue() << '\n';
    std::cout << Something::getValue() << '\n';
    std::cout << Something::getValue() << '\n';
}

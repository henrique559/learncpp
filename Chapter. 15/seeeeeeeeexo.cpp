#include <ios>
#include <iostream>
#include <vector>

template <typename T, typename U>
class Pair 
{
    private:
        T m_first{};
        U m_second{};

    public:
        Pair(const T& first=0, const T& second=0)
            : m_first {first}
            , m_second {second}
            {
            };
            
        ~Pair()
        {
        }


        bool isEqual(const Pair<T, U>& pair);
};

template <typename T, typename U>
bool Pair<T,U>::isEqual(const Pair<T,U>& pair)
{
    return m_first == pair.m_first && m_second == m_second == pair.m_second;
}

template <typename T, typename U>
Pair(const T&, const U&) -> Pair<T, U>;


int main()
{

    constexpr int value_1 { 5 }, value_2 { 6 };
    Pair p1 {value_1, value_2};

    std::cout << std::boolalpha << "isEqual(5, 6): " << p1.isEqual( Pair{value_1, value_2} ) << '\n';
    std::cout << std::boolalpha << "isEqual(5, 7): " << p1.isEqual( {value_1, 7} ) << '\n'; 
}

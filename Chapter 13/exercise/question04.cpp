#include <iostream>
#include <string_view>
#include <utility>

template<typename T, typename U, typename V>
struct Triad
{
    T one {};
    U two {};
    V three {};
};


//CTAD para chamar templates de structs
template<typename T, typename U, typename V>
Triad(T, U, V) -> Triad<T, U, V>;

template<typename T, typename U, typename V>
void printTriad(const Triad<T,U,V>& tmp)
{
    std::cout << "[" << tmp.one << ", " << tmp.two << ", " << tmp.three << "]";
}

int main()
{
    Triad t1 {1.5, 2, 2};
    printTriad(t1);

    Triad t2 {2.1, 0, 'a'};
    printTriad(t2);
}




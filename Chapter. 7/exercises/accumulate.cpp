#include <iostream>

int accumulate(int num)
{
    static int s_value { 0 };

    s_value += num;
    return s_value;

}

int main()
{
    using std::cout;

    cout << accumulate(4) << '\n';
    cout << accumulate(3) << '\n';
    cout << accumulate(2) << '\n';
    cout << accumulate(1) << '\n';
}

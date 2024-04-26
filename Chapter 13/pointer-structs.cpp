#include <iostream>

struct Employee
{
    int id {};
    int age {};
    double wage {};
};

int main()
{
    Employee joe { .id{1}, .age{34}, .wage{65000.0} };

    ++joe.age;
    joe.wage = 68000.0;

    Employee* ptr{ &joe };
    std::cout << ptr->id << '\n';
    // -> work's just like '.' operator, but it implicit dereference the pointer before entering in that object fields.

    return 0;
}

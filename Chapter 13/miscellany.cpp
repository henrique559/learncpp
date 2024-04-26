#include <iostream>


struct Company
{
    // is allowed to have nested structs
    struct Employee
    {
        int id {};
        int age {};
        double wage {};
    };
    
    int numberOfEmployees {};
    Employee CEO {};
};

int main()
{
    //nested initialization is allowed in structs that has structs as data
    Company myCompany { 7, {1, 32, 55000.0 } };
    std::cout << myCompany.CEO.wage << '\n';
}

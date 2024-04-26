#include <iostream>
#include <string>
struct Employee
{
    std::string name {};
    int id {};
    int age {};
    double wage {};
};

template <typename T>
void printEmployee(const T& employee)
{
    std::cout << "Name: " << employee.name << '\n';
    std::cout << "ID:   " << employee.id << '\n';
    std::cout << "Age:  " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}

template <typename A>
auto initEmployee (A& employee)
{
    return employee = {"Foo", 0, 18, 1000 };
}

template <typename U>
auto changeWage(U& employee)
{

    return (employee.wage += 10000.0);
}

void printEmployeeByAddress(const Employee* employee)
{
    std::cout << "Name: " << employee->name << '\n';
    std::cout << "ID:   " << employee->id << '\n';
    std::cout << "Age:  " << employee->age << '\n';
    std::cout << "Wage: " << employee->wage << '\n';
}

Employee eraseEmployee(Employee& employee)
{
    return employee = Employee {};
}

int main()
{
    Employee joe {"Joe", 14, 32, 60000.0};
    Employee frank {"Frank", 15, 28, 45000.0};
    Employee james { .name{"James"}, 16, 30, 60000.0 };

    int totalAge { joe.age + frank.age };

    if(joe.wage > frank.wage)
        std::cout << "Joe makes more than frank\n";
    else if(joe.wage < frank.wage)
        std::cout << "Joe makes less than frank\n";
    else
        std::cout << "Joe and Frank make the same amount\n";


    // copying the address of joe to james
  

    printEmployee(james);
    std::cout << '\n';

    changeWage(joe);
    printEmployeeByAddress(&joe);    
    std::cout << '\n';
    // Pode enviar como parametro structs temporarios:
    printEmployee( Employee { .name{"Diana"}, 20, 19, 150000.0 } );
        
    std::cout << '\n';
    eraseEmployee(james);
    printEmployee(james);
   

    std::cout << '\n';
    initEmployee(james);
    printEmployee(james);
    
    return 0;
}

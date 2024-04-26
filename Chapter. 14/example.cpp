#include <iostream>
#include <string>
#include <string_view>

const std::string& firstAlphabetical (const std::string& a, const std::string& b)
{
    return (a < b) ? a : b;
}

class Employee
{
    std::string m_name {};
    

    public:

        Employee (std::string name ) 
            : m_name{ name } 
        {

        }; 
        
        Employee () 
            : m_name{} 
        {

        };
        
        void setName(const std::string_view name) {m_name = name; }
        const std::string& getName() const { return m_name; }

};

    Employee createEmployee(std::string_view name)
    {
        Employee e;
        e.setName(name);
        return e;
    }
int main()
{
    Employee *joe = new Employee("");
    joe->setName("Joe");

    std::cout << joe->getName() << '\n';

    delete joe;

    Employee James = createEmployee("James");
    
    std::cout << James.getName() << '\n';
}

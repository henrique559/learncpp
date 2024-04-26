#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> names {"Kant", "plato", "Hume"};

    //for (int i { 0 };  i < names.size(); ++i);
    // 
    // vector.push_back(value)
    names.push_back("Carlinhos");
    for( auto x : names )
    {
        std::cout << x << "\n"; 
    }

}

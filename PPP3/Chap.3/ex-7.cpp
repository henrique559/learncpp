#include <cctype>
#include <iostream>
#include <vector>

int main(void)
{
    std::vector<std::string> values { 
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"
    };


    std::cout << "Insert a number between: 0-9 ";
    int num {};
    
    try 
    {
        std::cin >> num;
        if(num < values.size())
            std::cout << num << "digit has the corresponding spelled-out value: " << values[num] << '\n';
        else 
            throw(num);
    } catch (int myNum) 
    {
        std::cout << "Invalid number \n";
        return 1;
    }


}

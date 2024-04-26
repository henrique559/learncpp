#include <exception>
#include <iostream>
#include <vector>


int main()
{
    std::vector<int> v;

    int x{};
    while(std::cin >> x && !std::cout.eof())
        v.push_back(x);
    
    try 
    {
        for(int i { 0 }; i <= v.size(); ++i)
            std::cout << "v[" << i << "] == " << v[i] << '\n';
    }
    catch(std::exception& e)
    {
        std::cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch(...)
    {
        std::cerr << "unknown exception\n";
        return 2;
    }
}

//• The name of the program
//• The purpose of the program
//• Who wrote this code and when
//• Version numbers
//• What complicated code fragments are supposed to do
//• What the general design ideas are
//• How the source code is organized
//• What assumptions are made about inputs
//• What parts of the code are still missing and what cases are still not handled
//• References to supporting material (e.g., to a book explaining the algorithms used)
//• Use meaningful names.
//• That doesn’t simply mean ‘‘Use long names.’’
//• Use a consistent layout of code.
//• Your IDE tries to help, but it can’t do everything, and you are the one responsible.
//• The style used in this book is a reasonable starting point.
//• Break code into small functions, each expressing a logical action.
//• Try to avoid functions longer than a page or two; most functions will be much shorter.
//• Avoid complicated code sequences.
//• Try to avoid nested loops, nested if-statements, complicated conditions, etc. Unfortu-
//nately, you sometimes need those, but remember that complicated code is where bugs
//can most easily hide.
//• Use library facilities rather than your own code when you can.
//• A library is likely to be better thought out and better tested than what you could produce

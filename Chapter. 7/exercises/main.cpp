#include "constants.h"
#include <iostream>

int main()
{
    using std::cout;

    cout << "How many students are in your class? ";
    int students{};
    std::cin >> students;

    if(students > Constants::maxClassSize)
        cout << "There are too many students in this class\n";
    else
        cout << "This class isn't too large\n";
}

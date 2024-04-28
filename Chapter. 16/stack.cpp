#include <iostream>
#include <vector>

void printStack(const std::vector<int>& stack)
{
    if(stack.empty())
        std::cout << "Empty";

    for(const auto& i : stack)
        std::cout << i << ' ';
    
    std::cout << "\tCapacity: " << stack.capacity() << " Length " << stack.size() << '\n';
}

int main()
{
    std::vector<int> stack{};

    printStack(stack);
    
    stack.reserve(6);


    stack.push_back(1);
    printStack(stack);
    
    stack.push_back(2);
    printStack(stack);


    stack.push_back(3);    
    printStack(stack);
    
    std::cout << "Top: " << stack.back() << '\n';
    
    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);

    stack.pop_back();
    printStack(stack);
}

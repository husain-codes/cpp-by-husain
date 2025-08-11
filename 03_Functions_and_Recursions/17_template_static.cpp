//When a static local variable is used in a function template, 
//each function instantiated from that template will have a separate version of the static local variable. 
//This is rarely a problem if the static local variable is const. 
//But if the static local variable is one that is modified, the riesults may not be as expected.

#include <iostream>

// Here's a function template with a static local variable that is modified
template <typename T>
void printIDAndValue(T value)
{
    static int id{ 0 };
    std::cout << ++id << ") " << value << '\n';
}

int main()
{
    printIDAndValue(12);
    printIDAndValue(13);

    printIDAndValue(14.5);

    return 0;
}

// 15_deleting_functions.cpp
// In cases where we have a function that we explicitly do not want to be callable,
// we can define that function as deleted by using the = delete specifier. 
// If the compiler matches a function call to a deleted function, 
// compilation will be halted with a compile error..

#include <iostream>
using namespace std;

void printInt(int x)
{
    cout << x <<endl;
}

void printInt(char a) = delete; // calls to this function will halt compilation
void printInt(bool a) = delete; // calls to this function will halt compilation

int main()
{
    printInt(97);   // okay

    printInt('a');  // compile error: function deleted
    printInt(true); // compile error: function deleted

    printInt(5.0);  // compile error: ambiguous match
    return 0;
}


// 02_conditional_operator.cpp
// Demonstrates the use of the ternary ?: operator to check if a number is odd or even.
// Uses bitwise AND (&) with 1 for an efficient odd/even check.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    // (num & 1) will be 1 if num is odd, 0 if even.
    // Ternary operator chooses the output based on this condition.
    num & 1 ? cout << num << " is Odd" : cout << num << " is Even";
    
    return 0;
}


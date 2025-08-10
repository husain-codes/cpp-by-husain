// 11_factorial_recursive.cpp
// Problem: Implement factorial using recursion.
// Demonstrates: Basic recursion.

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1) return 1; // handle both 0 and 1
    return n * factorial(n - 1);
}

int main() 
{
    int num;
    cout << "Enter the number : ";
    cin >> num;
    
    cout << "Fcatorial of " << num << " is " << factorial(num);
    return 0;
}


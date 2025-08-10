// 13_fibonacci_recursive.cpp
// Problem: Implement Fibonacci sequence using recursion.
// Demonstrates: Recursive branching calls.

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // Base cases
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    // Recursive calls (overlaps a lot!)
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() 
{
    int num;
    cout << "Enter n : ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        cout << fibonacci(i) << " ";
    }
    
    return 0;
}


// 14_recursive_vs_iterative_sum.cpp
// Problem: Calculate sum of first n natural numbers using both recursion and iteration.
// Demonstrates: Performance difference between recursion and iteration.

// Recursion is elegant but has function call overhead and can cause stack overflow for large n.
// Iteration is faster and more memory-efficient.

#include <iostream>
using namespace std;

// Recursive function to calculate sum of first n natural numbers
int recursive_sum(int n)
{
    // Base case: when n is 0, sum is 0
    if (n == 0) return 0;

    // Recursive step: sum of first n numbers = n + sum of first (n-1) numbers
    return n + recursive_sum(n - 1);
}

// Iterative function to calculate sum of first n natural numbers
int iterative_sum(int n)
{
    int sum = 0;

    // Loop from 1 to n and accumulate sum
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // Calculate using recursion
    int rec_result = recursive_sum(num);

    // Calculate using iteration
    int iter_result = iterative_sum(num);

    // Display results
    cout << "Recursive sum of first " << num << " numbers: " << rec_result << endl;
    cout << "Iterative sum of first " << num << " numbers: " << iter_result << endl;

    return 0;
}


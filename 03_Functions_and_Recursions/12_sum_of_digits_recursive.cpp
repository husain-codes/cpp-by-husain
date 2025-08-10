// 12_sum_of_digits_recursive.cpp
// Problem: Implement sum of digits of a number using recursion.
// Demonstrates: Recursive breakdown of numbers into last digit + remaining number.

#include <iostream>
using namespace std;

// Recursive function to calculate sum of digits
int sum_of_digits(int n)
{
    // Handle negative numbers by making them positive
    if (n < 0) n = -n;

    // Base case: if number has only one digit, return it
    if (n < 10) return n;

    // Recursive step:
    // n % 10 -> gives the last digit
    // n / 10 -> removes the last digit
    return (n % 10) + sum_of_digits(n / 10);
}

int main() 
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // Call the recursive function and print the result
    cout << "Sum of digits of " << num << " is " << sum_of_digits(num) << endl;
    return 0;
}


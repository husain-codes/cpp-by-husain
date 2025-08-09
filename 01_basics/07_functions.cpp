// 07_functions.cpp
// Example program demonstrating how to use functions in C++
// This program checks if a given number is a prime number

#include <iostream>
using namespace std;

// Function declaration
// Returns true if num is prime, false otherwise
bool is_prime(int num);

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    // Call the function and check the result
    if (is_prime(num))
        cout << "Number " << num << " is a prime number\n";
    else
        cout << "Number " << num << " is NOT a prime number\n";
    
    return 0;
}

// Function definition
bool is_prime(int num)
{
    // Numbers less than 2 are NOT prime
    if (num < 2)
        return false;
    
    // 2 is the only even prime number
    if (num == 2)
        return true;
    
    // If divisible by any number from 2 to sqrt(num), it's not prime
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0) // If divisible, not prime
            return false;
    }
    
    return true; // Passed all tests → prime
}


// 02_find_max.cpp
// Problem: Write a function `findMax(int a, int b)` that returns the larger of two integers.
// Demonstrates: Returning values from functions.

#include <iostream>

// Function to return the maximum of two integers
int findMax(int a, int b) {
    return (a > b) ? a : b; // Ternary operator
}

int main() {
    int a, b;

    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    std::cout << "Max is: " << findMax(a, b) << std::endl;
    return 0;
}


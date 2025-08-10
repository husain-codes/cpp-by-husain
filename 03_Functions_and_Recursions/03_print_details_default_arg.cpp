// 03_print_details_default_arg.cpp
// Problem: Write a function `printDetails(string name, int age = 18)` that prints details.
// Demonstrates: Default arguments in functions.

#include <iostream>
using namespace std;

// Function with a default parameter for 'age'
void printDetails(string name, int age = 18) {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    // Using default age
    printDetails("Jason");

    // Overriding default age
    printDetails("Harry", 24);

    return 0;
}


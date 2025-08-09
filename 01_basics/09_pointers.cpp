/*
    09_pointers.cpp
    ----------------
    This program demonstrates:
    1. How to declare and use pointers
    2. How to pass variables by address to a function
    3. How to modify the original variables using pointers (swap example)
*/

#include <iostream>
using namespace std;

// Function prototype: takes addresses of two integers and swaps their values
void swap(int *p1, int *p2);

int main()
{
    int a = 10, b = 20;

    // Demonstrating pointer basics
    int *ptr = &a;  // Pointer storing the address of variable 'a'
    cout << "Address of a: " << ptr << endl;
    cout << "Value of a using pointer: " << *ptr << endl;

    // Showing values before swap
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;

    // Passing addresses of a and b to swap function
    swap(&a, &b);

    // Showing values after swap
    cout << "After swap:  a = " << a << ", b = " << b << endl;

    return 0;
}

// Function to swap two integers using pointers
void swap(int *p1, int *p2)
{
    int temp = *p1;  // Store value pointed by p1
    *p1 = *p2;       // Assign value of p2 to location pointed by p1
    *p2 = temp;      // Assign stored temp value to location pointed by p2
}


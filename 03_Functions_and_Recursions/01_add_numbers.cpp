// 01_add_numbers.cpp
// Problem: Write a function `addNumbers(int a, int b)` that returns the sum of two integers.
// Demonstrates: Basic function definition and calling.

#include <iostream>

int addNumbers(int a, int b)
{
    return a+b;
}

int main()
{
    int a , b;
    std::cout<<"Enter the two numbers : ";
    std::cin>>a;
    std::cin>>b;
    
    std::cout<<"Addition is : "<<addNumbers(a,b);
    return 0;
}

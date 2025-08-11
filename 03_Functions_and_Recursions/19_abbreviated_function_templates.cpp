// 19_abbreviated_function_templates.cpp
// C++20 introduces a new use of the auto keyword: When the auto keyword is used as a parameter type in a normal function, 
// the compiler will automatically convert the function into a function template with each auto parameter becoming an independent template type parameter. 
// This method for creating a function template is called an abbreviated function template.

#include <iostream>

auto max (auto x , auto y)
{
    return x > y ? x : y;
}
int main()
{
    std::cout << "(int , double) max(2,3.5) = " << max(2, 3.5) << '\n';
    return 0;
}

// g++ -std=c++20 19_abbreviated_function_templates.cpp

// Best practice
//Feel free to use abbreviated function templates with a single auto parameter, 
//or where each auto parameter should be an independent type (and your language standard is set to C++20 or newer).

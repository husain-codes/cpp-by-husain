// 16_template_functions.cpp
// A function template is a function-like definition that is used to generate one or more overloaded functions, 
// each with a different set of actual types. 
// This is what will allow us to create functions that can work with many different types. 
// The initial function template that is used to generate other functions is called the primary template, 
// and the functions generated from the primary template are called instantiated functions.
// When we create a primary function template, we use placeholder types 
// (technically called type template parameters, informally called template types) 
// for any parameter types, return types, or types used in the function body that 
// we want to be specified later, by the user of the template.

#include <iostream>


template<typename T>
T max(T a , T b) 
{
    return a > b ? a : b;
}
int main()
{
    std::cout << "(int) max is " << max(10,20) << std::endl;
    std::cout << "(float) max is " << max(1.2,2.4) << std::endl;
    std::cout << "(char) max is " << max('a','b') << std::endl;
    return 0;
}


// 02_variables.cpp
#include<iostream>

int main()
{
    int length = 2 , breadth = 4;
    std::cout<<"Area is : "<<length*breadth<<std::endl;

    // Direct initialization : initial value is provided inside parenthesis
    int a (2);

    // List-initialization: use of curly braces
    int b {1};
    int c = {b}; // copy-list initialization
    return 0;
}

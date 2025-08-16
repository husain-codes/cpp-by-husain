// Value categories (lvalues and rvalues)

#include <iostream>

int return5()
{
    return 5;
}

int main()
{
    // An lvalue is an expression that evaluates to an identifiable object or function (or bit-field).
    // The term “identity” is used by the C++ standard, but is not well-defined. 
    // An entity (such as an object or function) that has an identity can be differentiated from other 
    // similar entities (typically by comparing the addresses of the entity).
    // Entities with identities can be accessed via an identifier, reference, or pointer, 
    // and typically have a lifetime longer than a single expression or statement
    
    int x { 5 };
    int y { x }; // x is an lvalue expression

    // Since the introduction of constants into the language, lvalues come in two subtypes: 
    // a modifiable lvalue is an lvalue whose value can be modified. 
    // A non-modifiable lvalue is an lvalue whose value can’t be modified (because the lvalue is const or constexpr).
    
    int a {};
    const int d {};
    
    int b {a}; // a is a modifiable lvalue expression
    const double e { d }; // d is a non-modifiable lvalue expression
    
    // An rvalue is an expression that is not an lvalue.
    // Rvalue expressions evaluate to a value. 
    // Commonly seen rvalues include literals (except C-style string literals, which are lvalues) 
    // and the return value of functions and operators that return by value.
    // Rvalues aren’t identifiable (meaning they have to be used immediately), and only exist within the scope of the expression in which they are used.
    
    int c {5}; // 5 is an rvalue expression
    const double f{ 1.2 }; // 1.2 is an rvalue expression
    int z { return5() }; // return5() is an rvalue expression (since the result is returned by value)
    int w { x + 1 }; // x + 1 is an rvalue expression
    int q { static_cast<int>(d) }; // the result of static casting d to an int is an rvalue expression
    // You may be wondering why return5(), x + 1, and static_cast<int>(d) are rvalues: 
    // the answer is because these expressions produce temporary values that are not identifiable objects.
    
    return 0;
}

// Lvalue-to-rvalue conversion

#include <iostream>

// T& is an lvalue reference, so this overload will be preferred for lvalues
template <typename T>
constexpr bool is_lvalue(T&)
{
    return true;
}

// T&& is an rvalue reference, so this overload will be preferred for rvalues
template <typename T>
constexpr bool is_lvalue(T&&)
{
    return false;
}
// A helper macro (#expr prints whatever is passed in for expr as text)
#define PRINTVCAT(expr) { std::cout << #expr << " is an " << (is_lvalue(expr) ? "lvalue\n" : "rvalue\n"); }

int getint() { return 5; }

int main()
{
    // In cases where an rvalue is expected but an lvalue is provided, 
    // the lvalue will undergo an lvalue-to-rvalue conversion so that it can be used in such contexts. 
    // This basically means the lvalue is evaluated to produce its value, which is an rvalue.

    int x{ 1 };
    int y{ 2 };
    x = y; // y is not an rvalue, but this is legal
    // In the above example, the lvalue expression y undergoes an lvalue-to-rvalue conversion,
    // which evaluates y to produce an rvalue (2), which is then assigned to x.
    
    /** Key insight
    * An lvalue will implicitly convert to an rvalue. This means an lvalue can be used anywhere an rvalue is expected.
    * An rvalue, on the other hand, will not implicitly convert to an lvalue.
    */
    
    // In this statement, the variable x is being used in two different contexts. 
    // On the left side of the assignment operator (where an lvalue expression is required), 
    // x is an lvalue expression that evaluates to variable x. 
    // On the right side of the assignment operator, 
    // x undergoes an lvalue-to-rvalue conversion and 
    // is then evaluated so that its (2) can be used as the left operand of operator+. 
    // operator+ returns the rvalue expression 3, which is then used as the right operand for the assignment.
    x = x + 1;
    
    /** Tip - A rule of thumb to identify lvalue and rvalue expressions:
     * Lvalue expressions are those that evaluate to functions or identifiable objects (including variables) that persist beyond the end of the expression.
     * Rvalue expressions are those that evaluate to values, including literals and temporary objects that do not persist beyond the end of the expression.
     */
    PRINTVCAT(5);        // rvalue
    PRINTVCAT(getint()); // rvalue
    PRINTVCAT(x);        // lvalue
    PRINTVCAT(std::string {"Hello"}); // rvalue
    PRINTVCAT("Hello");  // lvalue
    PRINTVCAT(++x);      // lvalue
    PRINTVCAT(x++);      // rvalue
     
    return 0;
}

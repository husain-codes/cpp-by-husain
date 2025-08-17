/**
 * Lvalue references
 * In C++, a reference is an alias for an existing object. 
 * Once a reference has been defined, any operation on the reference is applied to the object being referenced.
 * This means we can use a reference to read or modify the object being referenced.
 * A reference is essentially identical to the object being referenced.
 * You can also create references to functions, though this is done less often.
 * Modern C++ contains two types of references: lvalue references, and rvalue references.
 * An lvalue reference acts as an alias for an existing lvalue
 * Just like the type of an object determines what kind of value it can hold, 
 * the type of a reference determines what type of object it can reference.
 * Lvalue reference types can be identified by use of a single ampersand (&) in the type specifier
 * // regular types
 * int        // a normal int type (not an reference)
 * int&       // an lvalue reference to an int object
 * double&    // an lvalue reference to a double object
 * const int& // an lvalue reference to a const int object
 * A type that specifies a reference (e.g. int&) is called a reference type.
 * The type that can be referenced (e.g. int) is called the referenced type.
 * 
 * // There are two kinds of lvalue references:
 * An lvalue reference to a non-const is commonly just called an “lvalue reference”, 
 * but may also be referred to as an lvalue reference to non-const or 
 * a non-const lvalue reference (since it isn’t defined using the const keyword).
 * 
 * An lvalue reference to a const is commonly called either an lvalue reference to const or a const lvalue reference.
 */ 
#include <iostream>

int main()
{
    int x { 5 }; // normal integer variable
    int& ref { x }; // ref is now an alias for variable x

    std::cout << x << ref << '\n'; // print 55

    x = 6; // x now has value 6

    std::cout << x << ref << '\n'; // prints 66

    ref = 7; // the object being referenced (x) now has value 7

    std::cout << x << ref << '\n'; // prints 77

    // Much like constants, all references must be initialized. 
    // References are initialized using a form of initialization called reference initialization.
    // int& invalidRef;   // error: references must be initialized

    /**
     * When a reference is initialized with an object (or function), 
     * we say it is bound to that object (or function). 
     * The process by which such a reference is bound is called reference binding. 
     * The object (or function) being referenced is sometimes called the referent.
     * Non-const lvalue references can only be bound to a modifiable lvalue.
     */ 
    const int y { 5 };
    // int& invalidRef { y };  // invalid: non-const lvalue reference can't bind to a non-modifiable lvalue
    // int& invalidRef2 { 0 }; // invalid: non-const lvalue reference can't bind to an rvalue
    
    // Lvalue references to void are disallowed (what would be the point?).
    
    /**
     * A reference will (usually) only bind to an object matching its referenced type
     * In most cases, a reference will only bind to an object whose type matches the referenced type, 
     * (there are some exceptions to this rule that we’ll discuss when we get into inheritance).
     * If you try to bind a reference to an object that does not match its referenced type, 
     * the compiler will try to implicitly convert the object to the referenced type and 
     * then bind the reference to that.
     * 
     * Key insight :
     * Since the result of a conversion is an rvalue, and a non-const lvalue reference can’t bind to an rvalue, 
     * trying to bind a non-const lvalue reference to an object that does not match its referenced type will 
     * result in a compilation error.
     */ 
    double d { 6.0 };
    // int& invalidRef { d };     // invalid: conversion of double to int is narrowing conversion, disallowed by list initialization
    // double& invalidRef2 { x }; // invalid: non-const lvalue reference can't bind to rvalue (result of converting x to double)

    // Once initialized, a reference in C++ cannot be reseated, meaning it cannot be changed to reference another object.
    // When an object being referenced is destroyed before a reference to it, 
    // the reference is left referencing an object that no longer exists. 
    // Such a reference is called a dangling reference. Accessing a dangling reference leads to undefined behavior.   
    
    int var{};
    int& ref1{ var };  // an lvalue reference bound to var
    int& ref2{ ref1 }; // an lvalue reference bound to var
    // Because ref2 (a reference) is initialized with ref1 (a reference), 
    // you might be tempted to conclude that ref2 is a reference to a reference. 
    // It is not. Because ref1 is a reference to var, when used in an expression (such as an initializer), 
    // ref1 evaluates to var. So ref2 is just a normal lvalue reference (as indicated by its type int&), bound to var.
    // A reference to a reference (to an int) would have syntax int&& -- 
    // but since C++ doesn’t support references to references, this syntax was repurposed in C++11 to indicate an rvalue reference
    
    return 0;
}

/** 04_data_types.cpp 
** Notes:
** typeid(var).name() prints internal compiler codes (e.g., i for int, f for float).
** Overflow in signed types causes wrap-around (UB in strict C++, but most compilers do it).
** Unsigned types wrap around modulo 2ⁿ.
**/
#include<iostream>

using namespace std;
int main()
{
    cout << "C++ Data Types, Sizes, and Type Info\n";
    cout << "-------------------------------------\n";


    int i = 42;
    float f = 5.20;
    double d = 8.19;
    char c = 'c';
    bool b = true;
    long l = 100000L;
    unsigned int ui = 40000;

    // Print values, sizes, and types
    cout << "int: value = " << i 
         << ", size = " << sizeof(i) 
         << ", type = " << typeid(i).name() << endl;

    cout << "float: value = " << f 
         << ", size = " << sizeof(f) 
         << ", type = " << typeid(f).name() << endl;

    cout << "double: value = " << d 
         << ", size = " << sizeof(d) 
         << ", type = " << typeid(d).name() << endl;

    cout << "char: value = " << c 
         << ", size = " << sizeof(c) 
         << ", type = " << typeid(c).name() << endl;

    cout << "bool: value = " << b 
         << ", size = " << sizeof(b) 
         << ", type = " << typeid(b).name() << endl;

    cout << "long: value = " << l 
         << ", size = " << sizeof(l) 
         << ", type = " << typeid(l).name() << endl;

    cout << "unsigned int: value = " << ui 
         << ", size = " << sizeof(ui) 
         << ", type = " << typeid(ui).name() << endl;

    cout << "\n--- Overflow Example ---\n";

    signed char sc = 127;  // max value of signed char
    sc = sc + 1;           // Overflow
    cout << "signed char after overflow (127 + 1): " << (int)sc << endl;

    unsigned char uc = 255; // max value of unsigned char
    uc = uc + 1;            // Wraps around to 0
    cout << "unsigned char after overflow (255 + 1): " << (int)uc << endl;

    return 0;
}

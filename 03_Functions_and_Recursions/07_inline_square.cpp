// 07_inline_square.cpp
// Problem: Create an `inline int square(int x)` function and use it for various inputs.
// Demonstrates: Inline function usage, where the compiler replaces the function call 
//               with the function's code to reduce function-call overhead.

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int num;

    cout << "Enter the number: ";
    cin >> num;

    cout << "Square of " << num << " is = " << square(num) << endl;
    return 0;
}


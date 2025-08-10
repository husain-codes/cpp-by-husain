// 05_swap_by_reference.cpp
// Problem: Implement `swap_values(int &a, int &b)` that swaps numbers,
//          and changes SHOULD reflect in main().
// Demonstrates: Passing arguments by reference.

#include <iostream>
using namespace std;

void swap_values(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Values before swap: a = " << a << ", b = " << b << endl;

    // This will change values in main() because of pass-by-reference
    swap_values(a, b);

    cout << "Values after swap: a = " << a << ", b = " << b << endl;
    return 0;
}


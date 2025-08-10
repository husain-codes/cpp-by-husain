// 04_swap_by_value.cpp
// Problem: Implement `swap_values(int a, int b)` that swaps numbers,
//          but changes should NOT reflect in main().
// Demonstrates: Passing arguments by value.

#include <iostream>
using namespace std;

void swap_values(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Values before swap: a = " << a << ", b = " << b << endl;

    // This will not change values in main() because of pass-by-value
    swap_values(a, b);

    cout << "Values after swap: a = " << a << ", b = " << b << endl;
    return 0;
}


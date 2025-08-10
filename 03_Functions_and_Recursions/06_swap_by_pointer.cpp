// 06_swap_by_pointer.cpp
// Problem: Implement `swap_pointers(int* a, int* b)` that swaps numbers using pointers.
// Demonstrates: Passing arguments by pointer (indirect access to variables).

#include <iostream>
using namespace std;

void swap_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10, b = 20;

    cout << "Values before swap: a = " << a << ", b = " << b << endl;

    // This will change values in main() because we pass their addresses (pointers)
    swap_pointers(&a, &b);

    cout << "Values after swap: a = " << a << ", b = " << b << endl;
    return 0;
}


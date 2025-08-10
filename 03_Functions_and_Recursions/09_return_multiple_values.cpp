// 09_return_multiple_values.cpp
// Problem: Create `calculate(int a, int b, int &sum, int &product)` that returns both sum and product via references.
// Demonstrates: Returning multiple values using reference parameters.

#include <iostream>
using namespace std;

void calculate(int a, int b, int &sum, int &product) {
    sum = a + b;
    product = a * b;
}

int main() {
    int num1, num2;
    int sum, product;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    calculate(num1, num2, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}


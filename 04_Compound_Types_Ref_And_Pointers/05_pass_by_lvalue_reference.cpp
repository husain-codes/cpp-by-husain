// Demonstrates: pass by value, pass by (const) reference, modifying arguments,
// avoiding expensive copies, comparing memory addresses, and multiple out-parameters.

#include <iostream>
#include <string>

// 1. Pass by value (makes a copy)
void printByValue(std::string s) {
    std::cout << "[printByValue] received: " << s << '\n';
}

// 2. Pass by reference (avoids copy, can modify)
void printByRef(std::string& s) {
    std::cout << "[printByRef] received: " << s << '\n';
    s += " (modified inside function)";
}

// 3. Pass by const reference (avoids copy, read-only)
void printByConstRef(const std::string& s) {
    std::cout << "[printByConstRef] received: " << s << '\n';
}

// 4. Show address difference: value vs reference
void showAddresses(int val, int& ref) {
    std::cout << "[showAddresses]\n";
    std::cout << "  Address of val (copy): " << &val << '\n';
    std::cout << "  Address of ref (alias): " << &ref << '\n';
}

// 5. Pass by value vs pass by reference for modification
void addOneByValue(int x) {
    ++x; // modifies copy
}

void addOneByRef(int& x) {
    ++x; // modifies original
}

// 6. Multiple output values using references
void computeStats(int a, int b, int& sum, int& diff, int& product) {
    sum = a + b;
    diff = a - b;
    product = a * b;
}

int main() {
    std::cout << "=== 1. Expensive copy example ===\n";
    std::string hello{"Hello, world!"};
    printByValue(hello); // expensive copy
    std::cout << "After printByValue, original: " << hello << "\n\n";

    std::cout << "=== 2. Pass by reference ===\n";
    printByRef(hello);
    std::cout << "After printByRef, original: " << hello << "\n\n";

    std::cout << "=== 3. Pass by const reference ===\n";
    printByConstRef(hello);
    printByConstRef("Temporary literal works too!"); // rvalue accepted
    std::cout << '\n';

    std::cout << "=== 4. Address comparison ===\n";
    int num{42};
    std::cout << "  Address of num: " << &num << '\n';
    showAddresses(num, num);
    std::cout << '\n';

    std::cout << "=== 5. Modify by value vs by reference ===\n";
    int x{5};
    std::cout << "Before addOneByValue: " << x << '\n';
    addOneByValue(x);
    std::cout << "After addOneByValue: " << x << " (unchanged)\n";

    std::cout << "Before addOneByRef: " << x << '\n';
    addOneByRef(x);
    std::cout << "After addOneByRef: " << x << " (modified)\n\n";

    std::cout << "=== 6. Multiple outputs via references ===\n";
    int sum{}, diff{}, product{};
    computeStats(10, 4, sum, diff, product);
    std::cout << "Inputs: 10 and 4\n";
    std::cout << "  Sum = " << sum << ", Diff = " << diff
              << ", Product = " << product << '\n';

    return 0;
}


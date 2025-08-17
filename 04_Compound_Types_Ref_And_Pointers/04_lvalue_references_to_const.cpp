// lvalue_references_to_const.cpp
// Demonstrates how const lvalue references work in C++
//
// Topics covered:
// 1. Binding to modifiable lvalues
// 2. Binding to non-modifiable (const) lvalues
// 3. Binding to rvalues (temporaries)
// 4. Lifetime extension of temporaries
// 5. Binding to different types (implicit conversion creates a temporary)
// 6. Gotchas when a temporary is created
// 7. Best practice: prefer const T& for read-only access

#include <iostream>

int getValue() {
    return 42;
}

int main() {
    // 1. Binding to modifiable lvalue
    int x{10};
    const int& ref1{x}; // ✅ binds to lvalue, but cannot modify
    std::cout << "ref1 bound to x: " << ref1 << '\n';

    // 2. Binding to const lvalue
    const int y{20};
    const int& ref2{y}; // ✅ binds to non-modifiable lvalue
    std::cout << "ref2 bound to const y: " << ref2 << '\n';

    // 3. Binding to rvalue
    const int& ref3{5};        // ✅ binds to literal temporary
    const int& ref4{getValue()}; // ✅ binds to return-by-value temporary
    std::cout << "ref3 bound to literal 5: " << ref3 << '\n';
    std::cout << "ref4 bound to return value: " << ref4 << '\n';

    // 4. Lifetime extension of temporaries
    const int& ref5{x + y}; // x + y produces a temporary rvalue
    std::cout << "ref5 (x+y temporary) lives until ref5 dies: " << ref5 << '\n';

    // 5. Binding to different type
    char c{'A'};
    const int& ref6{c}; // implicit conversion to int (65), binds to temporary
    std::cout << "ref6 bound to char c (converted to int): " << ref6 << '\n';

    // 6. Gotcha: reference may not track the original variable
    short bombs{1};
    const int& you{bombs}; // binds to temporary int(1)
    --bombs;               // bombs is now 0, but 'you' still refers to temp(1)
    if (you) {
        std::cout << "Gotcha: 'you' is still true even though bombs is 0!\n";
    }

    // 7. Best practice in functions (demonstrated inline here)
    auto printConstRef = [](const std::string& str) {
        // We avoid copying large strings by binding to const reference
        std::cout << "Message: " << str << '\n';
    };
    printConstRef("Hello, C++ const references!"); // rvalue temporary std::string

    return 0;
}


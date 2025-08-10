// 08_function_overloading.cpp
// Problem: Create overloaded `area()` functions for square, rectangle, and circle.
// Demonstrates: Function overloading.

#include <iostream>
using namespace std;

// area for square
int area(int x) {
    return x * x;
}

// area for rectangle
int area(int l, int b) {
    return l * b;
}

// area for circle
double area(double r) {  // changed to double
    return (22.0 / 7.0) * r * r;
}

int main() {
    cout << "Area of square with length 8 is : " << area(8) << endl;
    cout << "Area of rectangle with length 8 and breadth 2 is : " << area(8, 2) << endl;
    cout << "Area of circle with radius 4 is : " << area(4.0) << endl;
    return 0;
}


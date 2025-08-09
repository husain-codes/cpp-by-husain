// 08_break_continue.cpp
// Demonstrates the use of break and continue statements

#include <iostream>
using namespace std;

int main() {
    cout << "Numbers from 1 to 10, skipping 5, and stopping at 8:\n";

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip this iteration when i = 5
        }
        if (i == 8) {
            break; // Exit the loop entirely when i = 8
        }
        cout << i << " ";
    }

    cout << "\nLoop ended.\n";
    return 0;
}


// 09_goto.cpp
// Using goto to break out of nested loops (with input validation)

#include <iostream>
using namespace std;

int main() {
    int target;

    // Input validation loop
    do {
        cout << "Enter target number to search for (1 to 100): ";
        cin >> target;
        if (target < 1 || target > 100) {
            cout << "Ivalid input. Please enter a number between 1 and 100.\n";
        }
    } while (target < 1 || target > 100);

    // Search in a 10x10 multiplication table
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (i * j == target) {
                cout << "Found target at i=" << i << ", j=" << j << "\n";
                goto found; // jump out of both loops
            }
        }
    }

    cout << "Target not found!\n";
    return 0;

found: // label to jump to
    cout << "Search ended early.\n";
    return 0;
}


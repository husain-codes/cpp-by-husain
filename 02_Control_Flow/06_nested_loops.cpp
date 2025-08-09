// 06_nested_loops.cpp – Multiplication table with header row & column
#include <iostream>
#include <iomanip> // for setw()

using namespace std;

int main()
{
    // Table size
    const int size = 10;

    // Print header row
    cout << "     |";
    for (int j = 1; j <= size; j++)
        cout << setw(4) << j; // setw(4) gives fixed width for alignment
    cout << "\n";

    // Print separator line
    cout << "-----+";
    for (int j = 1; j <= size; j++)
        cout << "----";
    cout << "\n";

    // Print table body
    for (int i = 1; i <= size; i++)
    {
        // Print row header
        cout << setw(4) << i << " |";

        // Print each product
        for (int j = 1; j <= size; j++)
        {
            cout << setw(4) << i * j;
        }
        cout << "\n";
    }

    return 0;
}


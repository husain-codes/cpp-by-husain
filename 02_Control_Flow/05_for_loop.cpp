// 05_for_loop.cpp
// Program to reverse a number using a for loop

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int digit[10] = {0};  // Array to store individual digits
    int i = 0;

    // Extract digits from the number
    while (num / 10 != 0)
    {
        digit[i++] = num % 10; // Store last digit
        num = num / 10;        // Remove last digit
    }
    digit[i] = num; // Store the last remaining digit

    // Print digits in reverse order using a for loop
    for (int j = 0; j <= i; j++)
    {
        cout << digit[j];
    }

    return 0;
}


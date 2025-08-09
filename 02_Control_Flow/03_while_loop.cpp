// 03_while_loop.cpp
// Program to find the sum of N natural numbers using a while loop

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "To find the sum of N natural numbers, enter value of N: ";
    cin >> num;

    int counter = 1, sum = 0; // start from 1 for natural numbers
    while (counter <= num) {
        sum += counter; // add current number to sum
        counter++;      // move to next number
    }

    cout << "Sum of " << num << " natural numbers is " << sum;
    return 0;
}


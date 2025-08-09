// 08_arrays.cpp
#include <iostream>
using namespace std;

int main()
{
    // Input array
    int arr[] = {1, 6, 8, 6, 3, 4, 3, 9, 7};

    // Frequency array (large enough to handle values up to 99)
    // Automatically initialized to 0
    int freq[100] = {0};

    // Find size of the input array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Count the frequency of each element
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }

    // Print frequencies (only for numbers that appeared at least once)
    for (int i = 0; i < 100; i++)
    {
        if (freq[i] >= 1)
            cout << "Frequency of " << i << " is " << freq[i] << endl;
    }

    return 0;
}


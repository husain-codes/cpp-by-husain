// 06_loops.cpp
// Demonstrates usage of while loop and for loop by concatenating two strings.

#include <iostream>
using namespace std;

int main()
{
    // Two C-style strings (character arrays)
    char s1[] = "Husain";
    char s2[] = "Khan";

    // Calculate sizes (including '\0' terminator)
    int s1_size = sizeof(s1) / sizeof(s1[0]);
    int s2_size = sizeof(s2) / sizeof(s2[0]);

    // Array to store concatenated string
    // -1 because each string has its own null terminator; 
    // we only need one in the final string
    char s3[s1_size + s2_size - 1];

    int i = 0;

    // Copy s1 into s3 using a while loop
    while (s1[i] != '\0') {
        s3[i] = s1[i];
        i++;
    }

    // Append s2 to s3 using a for loop
    for (int j = 0; j < s2_size; j++) {
        s3[i] = s2[j];
        i++;
    }

    // Manually ensure the final string has a null terminator
    s3[i] = '\0';

    // Print the concatenated string using a while loop
    i = 0;
    while (s3[i] != '\0') {
        cout << s3[i];
        i++;
    }

    cout << endl; // newline after output
    return 0;
}


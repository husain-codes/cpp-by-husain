/*
    10_strings.cpp
    ----------------
    This program demonstrates:
    1. Declaring and initializing strings in C++
    2. Taking string input (single word and full line)
    3. Concatenating strings
    4. Finding string length
    5. Accessing individual characters
*/

#include <iostream>
#include <string> // Required for std::string
using namespace std;

int main()
{
    // 1. String initialization
    string str1 = "Hello";
    string str2 = "World";

    // 2. String concatenation
    string result = str1 + " " + str2;
    cout << "Concatenated string: " << result << endl;

    // 3. Length of string
    cout << "Length of result string: " << result.length() << endl;

    // 4. Accessing characters
    cout << "First character: " << result[0] << endl;
    cout << "Last character: " << result[result.length() - 1] << endl;

    // 5. Taking input without spaces
    string name;
    cout << "\nEnter your name (no spaces): ";
    cin >> name;
    cout << "You entered: " << name << endl;

    // 6. Taking input with spaces (full line)
    string fullName;
    cin.ignore(); // To clear leftover newline in input buffer
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Your full name is: " << fullName << endl;

    return 0;
}


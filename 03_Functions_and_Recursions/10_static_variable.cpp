// 10_static_variable.cpp
// Problem: Create `counter()` that uses a static variable to remember the number of times it's called.
// Demonstrates: Static variables inside functions.

#include <iostream>

using namespace std;

void counter()
{
    static int count = 0; // only initialized once
    count++;
    cout << "Counter called " << count << " times\n";
}

int main() 
{ 
    for (int i = 0 ; i < 5 ; i++)
    {
        counter();
    }
    return 0;
}


// 04_do_while_loop.cpp
// Demonstrates the do-while loop, which executes at least once before checking the condition.
// In this program, the user must guess a randomly generated number between 1 and 10.

#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main()
{
    int num;
    
    // Seed random number generator
    srand(time(0));
    
    // Generate random number from 1 to 10
    int secretNumber = (rand() % 10) + 1;
    
    // Guessing loop
    do 
    {
        cout << "Guess the number (1-10): ";
        cin >> num;
        
        if (num == secretNumber)
            cout << "Congrats! You guessed it right!!\n";
        else
            cout << "Try again.\n";
            
    } while (num != secretNumber);

    return 0;
}


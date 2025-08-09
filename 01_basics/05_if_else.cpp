// 05_if_else.cpp 
#include<iostream>

using namespace std;
int main()
{
    int number;
    cout<<"Enter the number : ";
    cin>>number;

    if ((number%2)==0)
	    cout<<"Given number is Even\n";
    else
	    cout<<"Given number is Odd\n";

    // if-else if-else
    if (number > 0) {
        std::cout << "Positive number.\n";
    } else if (number < 0) {
        std::cout << "Negative number.\n";
    } else {
        std::cout << "Zero.\n";
    }

    // Nested if
    if (number > 0) {
        if (number < 10) {
            std::cout << "Positive and less than 10.\n";
        } else {
            std::cout << "Positive and greater than or equal to 10.\n";
        }
    }
    return 0;
}

// 01_if_else.cpp.
#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"Enter the marks out of 100 : ";
    cin>>marks;
     
    if(marks > 90)
        cout<<"Congrats you got A+ grade \n";
    else if(marks > 80)
        cout<<"Awesome you got A grade \n";
    else if(marks > 70)
        cout<<"Good you got B+ grade \n";
    else if(marks > 60)
        cout<<"Not Bad you got B grade \n";
    else if(marks > 50)
        cout<<"Try Harder you got C+ grade \n";
    else if(marks > 40)
        cout<<"You need to put effort you got C grade \n";
    else
        cout<<"FAILED!! \n";
    return 0;
}

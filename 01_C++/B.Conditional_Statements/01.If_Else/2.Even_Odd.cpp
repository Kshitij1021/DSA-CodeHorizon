#include<iostream>
using namespace std;

int main()
{
    int a;                                                          // Declaration of variable a as Integer
    cout<<"Enter your number: ";
    cin>>a;                                                         // Taking the input value for a

    if(a%2 == 0)                                                    // Condition stated
        cout<<a<<" is a Even Number";
    else
        cout<<a<<" is a Odd Number";
}
// Eaxamine whether the number entered is Positive, Negative or 0.
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;

    if(a>0)
        cout<<"The number "<<a<<" is a Positive number";
    else if(a == 0)
        cout<<"The number "<<a<<" is neither Positive nor Negative";
    else if(a<0)
        cout<<"The number "<<a<<" is a Negative number";
}
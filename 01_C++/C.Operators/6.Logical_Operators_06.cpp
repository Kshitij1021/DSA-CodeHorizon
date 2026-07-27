// Take 3 input and print the greatest number

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Enter the third number: ";
    cin>>c;

    if ((a >= c) && (a >= b))
        cout<<"The greatest number is "<<a;
    
    else if((b >= c) && (b >= a))
        cout<<"The greatest number is "<<b;

    else if((c >= b) && (c >= a))
        cout<<"The greatest number is "<<c;
}
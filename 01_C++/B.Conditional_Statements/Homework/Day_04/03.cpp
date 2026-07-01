// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your number: ";
    cin>>a;

    if(a == 1)
        cout<<"The month corresponding to number "<<a<< " is: January";
    if(a == 2)
        cout<<"The month corresponding to number "<<a<< " is: February";
    if(a == 3)
        cout<<"The month corresponding to number "<<a<< " is: March";
    if(a == 4)
        cout<<"The month corresponding to number "<<a<< " is: April";
    if(a == 5)
        cout<<"The month corresponding to number "<<a<< " is: May";
    if(a == 6)
        cout<<"The month corresponding to number "<<a<< " is: June";
    if(a == 7)
        cout<<"The month corresponding to number "<<a<< " is: July";
    if(a == 8)
        cout<<"The month corresponding to number "<<a<< " is: August";
    if(a == 9)
        cout<<"The month corresponding to number "<<a<< " is: September";
    if(a == 10)
        cout<<"The month corresponding to number "<<a<< " is: October";
    if(a == 11)
        cout<<"The month corresponding to number "<<a<< " is: November";
    if(a == 12)
        cout<<"The month corresponding to number "<<a<< " is: December";
    if(a == 13)
        cout<<"Please enter a valid number(less than 12)";
}
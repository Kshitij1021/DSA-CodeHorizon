// Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the age: ";
    cin>>a;

    if(a>=13 & a<=19)
        cout<<"You are a teenager";
    else
        cout<<"You are not a teenager";
}
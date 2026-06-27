// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while loop.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int i=1;
    while(i<=a)
    {
        cout<<i<<" ";
        i++;
    }
}
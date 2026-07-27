// Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter your Age: ";
    cin>>a;

    if(a < 12)
        cout<<"Congratulations! You are eligible for a discount";
    else if(a > 65)
        cout<<"Congratulations! You are eligible for a discount";
    else
        cout<<"No discount is available";
}
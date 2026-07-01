// Take two integers as input. If exactly one of them is odd, print "One is odd". If both are odd, print "Both are odd". If neither of them is odd, print "None is odd". Use conditional constructs effectively.
// Sample — Input: 4 7 ⇒ Output: One is odd

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    if ((a%2==0) && (b%2==0))
        cout<<"Both the numbers are even numbers";

    else if((a%2!=0) && (b%2!=0))
        cout<<"Both the numbers are odd numbers";

    else
        cout<<"One is odd";
}
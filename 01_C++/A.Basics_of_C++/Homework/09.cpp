// Take an integer n as input. Print the minimum non-negative integer that must be added to n to make it exactly divisible by 7.
// Sample — Input: 20 ⇒ Output: 1 

#include<iostream>
using namespace std;

int main()
{
    unsigned int a;
    cout<<"Enter the number: ";
    cin>>a;
    
    int b = 7- a%7;
    cout<<b;
}
// Write a program to take a number as input and compute the product of all its individual digits.
// Sample 1 — Input: 413 ⇒ Output: 12
// Sample 2 — Input: 520 ⇒ Output: 0

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int rem;
    int product = 1;

    cout<<"The product of all the digits of the number "<<n<<" is ";

    while(n>0)
    {
        rem = n % 10;
        product *= rem;

        n /= 10;
    }
    cout<<product;
}
// Take a positive integer n as input and compute the sum of all natural numbers from 1 upto n using a loop.
// Sample 1 — Input: 5 ⇒ Output: 15
// Sample 2 — Input: 10 ⇒ Output: 55

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the last number: ";
    cin>>n;

    int sum = 0;

    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    cout<<"The sum is "<<sum;
}
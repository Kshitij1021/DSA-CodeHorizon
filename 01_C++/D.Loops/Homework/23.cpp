// Write a program that takes two positive integers as input and prints all the prime numbers that lie strictly between them.
// Sample 1 — Input: 10 20 ⇒ Output: 11 13 17 19
// Sample 2 — Input: 20 30 ⇒ Output: 23 29

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    for(int i=(a+1); i<b; i++)
    {
        int isPrime = true;
        for(int j=2; j<i; j++)
        {
            if(i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime == true)
            cout<<i<<" ";
    }
}
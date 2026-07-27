// Write a program to check if a given number is a Palindrome. A palindrome number reads the same forwards and backwards.
// Sample 1 — Input: 121 ⇒ Output: Palindrome
// Sample 2 — Input: 145 ⇒ Output: Not a Palindrome

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    int Number = n;
    int reverseNumber = 0;

    while(n != 0)
    {
        reverseNumber = (reverseNumber)*10 + (n % 10);
        n /= 10;
    }
    
    if(reverseNumber == Number)
        cout<<"Palindrome";

    else
        cout<<"Not a Palindrome";
}
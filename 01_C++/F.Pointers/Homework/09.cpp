// Write a function reverseNumber(int n) that takes an integer, reverses its digits mathematically, and uses the return keyword to give back the reversed integer to main().
// Sample — Input: 1234 ⇒ Output: 4321

#include<iostream>
using namespace std;

int reverseNumber(int n)
{
    int reversedNumber = 0;
    while(n != 0)
    {
        reversedNumber = (reversedNumber)*10 + (n % 10);
        n /= 10;
    }
    return reversedNumber;
}

int main()
{
    int n;
    cin>>n;

    cout<<reverseNumber(n);
}
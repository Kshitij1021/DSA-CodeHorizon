// Reverse the entered number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    int num = 0;
    int lastDigit = 0, reversedNumber = 0;

    while (n != 0)
    {
        lastDigit = n % 10;
        reversedNumber = reversedNumber*10 + lastDigit;
        n /= 10;
    }
    cout<<reversedNumber;
}
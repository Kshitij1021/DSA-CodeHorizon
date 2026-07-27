// Print the sum of all digits of the entered number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    
    int lastDigit, sum = 0;

    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;

        sum += lastDigit;
    }
    cout<<sum;
}
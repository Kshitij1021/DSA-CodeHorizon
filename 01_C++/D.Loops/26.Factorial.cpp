// Print the factorial of a number

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    int factorial = n;

    for(int i=1; i<n; i++)
    {
        factorial *= i;
    }

    cout<<factorial;
}
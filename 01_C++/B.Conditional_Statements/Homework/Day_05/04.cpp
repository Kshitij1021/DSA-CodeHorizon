// Print Sum of cube of first n natural number
#include<iostream>
using namespace std;

int main()
{
    int a, n, b;
    cout<<"Enter the last number: ";
    cin>>a;

    int Sum = 0;
    
    for(int i=1; i<=a; i++)
    {
        b = i*i*i;
        Sum = Sum + b;
    }
    cout<<Sum;
}
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the number whose table to be printed (e.g. I want to print the table for 7): ";
    cin>>a;
    cout<<"Enter till which number times the table to be printed(e.g. I want to print the last line as 7 times 15): ";
    cin>>b;

    for(int i=1; i<=b; i++)
    cout<<a<<" X "<<i<<" = "<<a*i<<endl;
}
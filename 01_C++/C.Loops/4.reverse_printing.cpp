#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the last number to be print: ";
    cin>>a;
    cout<<"Enter the first number to be print: ";
    cin>>b;

    if(a<b)
        cout<<"Your last number should be greater than first number.";
    else if(a>b)
    {
        for(int i=a; i>=b; i--)
        cout<<i<<endl;
    }
    else
        cout<<"Please enter unique numbers.";
}

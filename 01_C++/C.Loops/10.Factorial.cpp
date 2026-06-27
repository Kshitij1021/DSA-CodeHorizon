#include<iostream>
using namespace std;

int main()
{
    int a, i;
    cout<<"Enter the number: ";
    cin>>a;

    int num = a;

    for(i = a - 1; i>=1; i--)
    {
        num = num*i;
    }
    
    cout<<num;
}
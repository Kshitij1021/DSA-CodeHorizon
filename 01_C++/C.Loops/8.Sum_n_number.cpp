#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the initial number: ";
    cin>>a;
    cout<<"Enter the final number: ";
    cin>>b;

    int Sum = a;

    for(int i = a + 1; i<=b; i++)
    {
        Sum = Sum + i;
    }
    cout<<Sum;
}
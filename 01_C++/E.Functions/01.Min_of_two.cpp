// Return the smaller number 

#include<iostream>
using namespace std;

int min(int a, int b)                           // Declaration of Function
{
    if(a >= b)
    {
        return b;
    }

    else
    {
        return a;
    }
}

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<min(a, b);
}
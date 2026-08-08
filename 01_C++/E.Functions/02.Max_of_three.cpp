// Return the maximum number from the given input

#include<iostream>
using namespace std;

int sum(int a, int b, int c)
{
    if(a >= c)
    {
        if(a >= b)
            return a;

        else
            return b;
    }

    else
    {
        if(c >= b)
        {
            return c;
        }

        else
        {
            return b;
        }
    }
}

int main()
{
    int a, b, c;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"c = ";
    cin>>c;

    cout<<sum(a, b, c);
}
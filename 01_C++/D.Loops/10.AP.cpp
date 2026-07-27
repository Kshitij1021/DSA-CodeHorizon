// Print an AP with entered value of a, d and n

#include<iostream>
using namespace std;

int main()
{
    int a, d, n;
    cout<<"a = ";
    cin>>a;

    cout<<"d = ";
    cin>>d;

    cout<<"n = ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        cout<<a<<" ";
        a += d;
    }
}
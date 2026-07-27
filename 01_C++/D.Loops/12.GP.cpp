// Print an GP with entered value of a, r and n

#include<iostream>
using namespace std;

int main()
{
    int a, r, n;
    cout<<"a = ";
    cin>>a;

    cout<<"r = ";
    cin>>r;

    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<a<<" ";
        a *= r;
    }
}
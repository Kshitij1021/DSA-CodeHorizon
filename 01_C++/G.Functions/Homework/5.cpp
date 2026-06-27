// Given two numbers n, r. Find nCr (Combination). Use Function here.

#include<iostream>
using namespace std;

int fact(int a)
{
    int ans=1;

    for(int i=a; i>=1; i--)
    {
        ans = ans*i;
    }
    
    return ans;
}

int main()
{
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"Enter the value of r: ";
    cin>>r;

    int ans = fact(n)/fact(n-r)/fact(r);

    cout<<ans;
}
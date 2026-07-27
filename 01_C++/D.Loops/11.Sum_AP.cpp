// Print the sum of all terms of an AP with entered value of a, d and n

#include<iostream>
using namespace std;

int main()
{
    int a, d, n, sum;
    cout<<"a = ";
    cin>>a;

    cout<<"d = ";
    cin>>d;

    cout<<"n = ";
    cin>>n;

    sum = 0;

    cout<<"AP: ";

    for(int i = 1; i<=n; i++)
    {
        cout<<a<<" ";
        sum += a;
        a += d;
    }
    cout<<endl<<"Sum = "<<sum;
}
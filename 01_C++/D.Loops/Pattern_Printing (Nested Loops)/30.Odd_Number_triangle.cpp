// Taking n as input, print odd number triangle with n number of rows

// Input : 5
// Output :
//  1
//  1 3
//  1 3 5
//  1 3 5 7
//  1 3 5 7 9


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int a = 1;
        for(int j=1; j<=i; j++)
        {
            cout<<a<<" ";
            a+=2;
        }
        cout<<endl;
    }
}
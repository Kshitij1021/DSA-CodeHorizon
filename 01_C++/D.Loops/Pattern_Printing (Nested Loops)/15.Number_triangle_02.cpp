// Taking n as input, print number triangle with n number of rows

// Input : 5
// Output :
//  1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
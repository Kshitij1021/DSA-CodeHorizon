// Taking n as input, print a number spiral with n as its center

// Input : 4
// Output :
//  1 1 1 1 1 1 1
//  1 2 2 2 2 2 1
//  1 2 3 3 3 2 1
//  1 2 3 4 3 2 1
//  1 2 3 3 3 2 1
//  1 2 2 2 2 2 1
//  1 1 1 1 1 1 1

#include<iostream>
using namespace std;    

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

// Upper part

    for(int i=1; i<=n; i++)
    {
        // Left side
        for(int j=1; j<=n; j++)
        {
            cout<<min(i, j)<<" ";
        }

        // Right side
        for(int j=n-1; j>=1; j--)
        {
            cout<<min(i, j)<<" ";
        }

        cout<<endl;
    }

// Lower Part
    for(int i=n-1; i>=1; i--)
    {
        // Left side
        for(int j=1; j<=n; j++)
        {
            cout<<min(i, j)<<" ";
        }

        // Right side
        for(int j=n-1; j>=1; j--)
        {
            cout<<min(i, j)<<" ";
        }

        cout<<endl;
    }
}
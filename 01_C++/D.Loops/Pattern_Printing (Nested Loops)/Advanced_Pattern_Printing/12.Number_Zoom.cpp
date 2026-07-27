// Taking n as input, print a number zoom
// Input : 4
// Output :
//  1 1 1 1
//  1 2 2 2
//  1 2 3 3
//  1 2 3 4

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n; 

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i<=j)
                cout<<i<<" ";

            else
                cout<<j<<" ";


// Aliter line for above if else --> cout<<min(i, j)
        }
        cout<<endl;
    }
}
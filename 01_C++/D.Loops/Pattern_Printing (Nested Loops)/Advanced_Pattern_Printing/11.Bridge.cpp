// Taking n as input, print a Bridge with n number of rows 

// Input : 5
// Output :
//  * * * * * * * * *
//  * * * *   * * * *
//  * * *       * * *
//  * *           * *
//  *               *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

//  First Line
    for(int j=1; j<(2*n); j++)
    {
        cout<<"* ";
    }

    cout<<endl;

//  Rest lines
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=(n-i); j++)
        {
            cout<<"* ";
        }

        for(int j=1; j<(i*2); j++)
        {
            cout<<"  ";
        }

        for(int j=1; j<=(n-i); j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
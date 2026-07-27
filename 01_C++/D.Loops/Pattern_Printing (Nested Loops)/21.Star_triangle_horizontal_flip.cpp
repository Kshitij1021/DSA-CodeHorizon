// Taking n as input, print horizontally flipped star triangle with n number of rows

// Input : 6
// Output :
//  * * * * * *
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
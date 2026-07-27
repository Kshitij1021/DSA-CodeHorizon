// Taking n as input, print alphabet triangle with n number of rows

// Input : 4
// Output :
//  A
//  A B
//  A B C
//  A B C D

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
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}
// Taking n as input, print horizontally flipped alphabet triangle with n number of rows

// Input : 7
// Output :
//  a b c d e f g
//  a b c d e f
//  a b c d e
//  a b c d
//  a b c
//  a b
//  a

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
            cout<<(char)(j+96)<<" ";
        }
        cout<<endl;
    }
}
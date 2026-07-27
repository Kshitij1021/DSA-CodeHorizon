// Taking n as input, print horizontally flipped alphabet triangle with n number of rows

// Input : 5
// Output :
//  E E E E E
//  D D D D 
//  C C C
//  B B
//  A


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
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}
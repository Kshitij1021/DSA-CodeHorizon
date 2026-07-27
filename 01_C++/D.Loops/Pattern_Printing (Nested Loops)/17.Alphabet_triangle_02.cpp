// Taking n as input, print number triangle with n number of rows

// Input : 5
// Output :
//  A
//  B B
//  C C C
//  D D D D
//  E E E E E

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
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}
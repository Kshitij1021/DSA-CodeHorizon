// Taking n as input, print number triangle with n number of rows

// Input : 6
// Output :
//  A
//  b b
//  C C C
//  d d d d
//  E E E E E
//  f f f f f f

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
            if(i % 2 == 0)
                cout<<(char)(i+96)<<" ";

            else
                cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}
// Taking n as input, print number triangle with n number of rows

// Input : 5
// Output :
//  1
//  B B
//  3 3 3
//  D D D D
//  4 4 4 4 4
//  E E E E E E

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
            cout<<(char)(i+64)<<" ";
            
            else
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
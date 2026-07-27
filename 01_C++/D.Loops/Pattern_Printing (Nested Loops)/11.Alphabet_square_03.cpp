// Taking no. of rows / columns as input, print:

// Input : Order = 4
// Output : 
//  A A A A
//  b b b b
//  C C C C
//  d d d d

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Order = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
        i++;

        for(int k=1; k<=n; k++)
        {
            cout<<(char)(i+96)<<" ";
        }
        cout<<endl;
    }
}
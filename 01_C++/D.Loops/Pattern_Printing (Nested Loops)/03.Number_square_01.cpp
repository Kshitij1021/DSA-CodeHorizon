// Taking no. of rows / columns as input, print:

// Input : Order = 3
// Output : 
//  1 2 3
//  1 2 3
//  1 2 3

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
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
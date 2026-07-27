// Taking no. of rows and columns as input, print:

// Input : Rows = 5, Columns = 7
// Output : 
//  * * * * * * *
//  *           *
//  *           *
//  *           *
//  * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Rows = ";
    cin>>n;
    cout<<"Columns = ";
    cin>>m;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i==1) || (i==n) || (j==1) ||(j==n))
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}
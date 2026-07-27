// Taking no. of rows / columns as input, print:

// Input : Order = 5
// Output : 
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Order = ";
    cin>>row;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=row; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
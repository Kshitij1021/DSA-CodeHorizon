// Taking no. of rows and columns as input, print:

// Input : Rows = 3, Columns = 6
// Output : 
//  * * * * * *
//  * * * * * *
//  * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Rows = ";
    cin>>row;
    cout<<"Columns = ";
    cin>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
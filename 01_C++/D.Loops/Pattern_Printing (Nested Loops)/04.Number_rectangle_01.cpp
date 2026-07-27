// Taking no. of rows and columns as input, print:

// Input : Rows = 4, Columns = 5
// Output : 
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5
//  1 2 3 4 5

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
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
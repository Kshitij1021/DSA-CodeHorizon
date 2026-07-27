// Taking no. of rows / columns as input, print:

// Input : Row = 4, Columns = 5
// Output : 
//  A A A A A
//  b b b b b
//  C C C C C
//  d d d d d

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Row = ";
    cin>>row;
    cout<<"Column = ";
    cin>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
        i++;

        for(int k=1; k<=col; k++)
        {
            cout<<(char)(i+96)<<" ";
        }
        cout<<endl;
    }
}
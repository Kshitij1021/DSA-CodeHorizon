// Taking no. of rows and columns as input, print:

// Input : Rows = 6, Columns = 4
// Output : 
//  A B C D
//  A B C D
//  A B C D
//  A B C D
//  A B C D
//  A B C D

#include<iostream>
using namespace std;

int main()
{
    int row, col;
    cout<<"Row = ";
    cin>>row;
    cout<<"Columns = ";
    cin>>col;

    char a = ((char)row + 64);
    char b = ((char)col + 64);

    for(char i='A'; i<=a; i++)
    {
        for(char j='A'; j<=b; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
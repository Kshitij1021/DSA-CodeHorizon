// Taking no. of rows and columns as input, print:

// Input : Rows = 5, Columns = 3
// Output : 
//  A A A
//  B B B
//  C C C
//  D D D
//  E E E

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
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
// Taking no. of rows / columns as input, print:

// Input : Order = 4
// Output : 
//  A A A A
//  B B B B
//  C C C C
//  D D D D

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Order = ";
    cin>>n;

    char a = ((char)n +64);

    for(char i='A'; i<=a; i++)
    {
        for(char j='A'; j<=a; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
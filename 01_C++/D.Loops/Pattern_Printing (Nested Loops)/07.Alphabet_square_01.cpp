// Taking no. of rows / columns as input, print:

// Input : Order = 5
// Output : 
//  A B C D E
//  A B C D E
//  A B C D E
//  A B C D E
//  A B C D E

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
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
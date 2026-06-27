// Print:
//      a
//      b b
//      c c c  
//      d d d d
//      e e e e e

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the last alphabet: ";
    cin>>a;

    for(char i='a'; i<=a; i++)
    {
        for(char t='a'; t<=i; t++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
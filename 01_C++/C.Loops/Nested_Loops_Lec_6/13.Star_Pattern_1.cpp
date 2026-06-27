// Print:
//      * * * * *
//      * * * *
//      * * *
//      * *
//      *

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number of row: ";
    cin>>a;

    for(int i=a; i>=1; i--)
    {
        for(int t=1; t<=i; t++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
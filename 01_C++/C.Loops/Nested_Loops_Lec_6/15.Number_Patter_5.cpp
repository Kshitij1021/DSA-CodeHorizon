// Print:
//      5
//      5 4
//      5 4 3
//      5 4 3 2
//      5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        for(int t=a; t>=a-i+1; t--)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
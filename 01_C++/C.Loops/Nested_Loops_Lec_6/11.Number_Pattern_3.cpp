// Print:
//      1
//      2 1
//      3 2 1
//      4 3 2 1
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
        for(int t=i; t>=1; t--)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
// Print:
//      1
//      2 2
//      3 3 3
//      4 4 4 4
//      5 5 5 5 5

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        for(int t=1; t<=i; t++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
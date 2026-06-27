// Print:
//      1
//      1 2 
//      1 2 3 
//      1 2 3 4
//      1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        for(int t=1; t<=i; t++)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
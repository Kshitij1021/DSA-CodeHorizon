// Print:
//      1 2 3 4 5
//      1 2 3 4 
//      1 2 3 
//      1 2 
//      1

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int i=a; i>=1; i--)
    {
        for(int t=1; t<=i; t++)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
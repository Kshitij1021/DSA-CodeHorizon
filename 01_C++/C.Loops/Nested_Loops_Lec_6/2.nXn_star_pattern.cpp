// Print asked number of stars in determinant form
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter required number of rows: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        for(int t=1; t<=a; t++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
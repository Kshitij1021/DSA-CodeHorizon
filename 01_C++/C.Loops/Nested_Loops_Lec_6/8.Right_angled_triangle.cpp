// Print: 
//      *
//      * *
//      * * *
//      * * * *
//      * * * * *


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number of rows: ";
    cin>>a;


    for(int row=1; row<=a; row++)
    {
        for(int i=1; i<=row; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
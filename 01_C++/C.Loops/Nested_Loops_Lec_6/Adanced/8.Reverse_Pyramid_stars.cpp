// Print:
//      * * * * * * * * *
//        * * * * * * *
//          * * * * *    
//            * * *
//              *

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row: ";
    cin>>a;                                                                 // Taking the input value for last row

    for(int row=1; row<=a; row++)                                           // Declaring the row number
    {
        for(int space=1; space<row; space++)                                // Loop for spaces
        {
            cout<<"  ";
        }
        for(int star=2*(a-row)+1; star>=1; star--)                          // Loop for stars
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
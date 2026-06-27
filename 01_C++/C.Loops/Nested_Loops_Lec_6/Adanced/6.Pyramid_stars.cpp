// Print:
//              *
//            * * *
//          * * * * *
//        * * * * * * *
//      * * * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row number: ";
    cin>>a;                                                                 // Taking the input value of last row

    for(int row=1; row<=a; row++)                                           // Declaring the row number
    {
        for(int space=a-row; space>=1; space--)                             // loop for spaces
        {
            cout<<"  ";                                                     // Giving the spaces in output
        }
        for(int star=1; star<=2*(row)-1; star++)                            // loop for stars
        {
            cout<<"* ";                                                     // Giving the stars in output
        }
        cout<<endl;
    }
}
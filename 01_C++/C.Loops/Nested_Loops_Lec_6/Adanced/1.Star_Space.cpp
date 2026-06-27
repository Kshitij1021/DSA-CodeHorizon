// Print:
//              *
//            * *
//          * * *   
//        * * * *
//      * * * * *

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row number: ";
    cin>>a;                                                                 // Taking the last row number value

    for(int row=1; row<=a; row++)                                           // Declaring the row value
        {
            for(int space=a-row; space>=1; space--)                         // Loop for space
            {  
                cout<<"  ";                                                 // Giving space in output
            }
            for(int star=1; star<=row; star++)                              // Loop for star
            {
                cout<<"* ";                                                 // Giving star in output
            }
            cout<<endl;
        }
}
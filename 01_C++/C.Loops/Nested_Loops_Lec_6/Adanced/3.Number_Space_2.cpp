// Print:
//              1
//            1 2 
//          1 2 3
//        1 2 3 4
//      1 2 3 4 5

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;                                                         // Taking the input value of last number

    for(int row=1; row<=a; row++)                                   // Declaring the row number
    {
        for(int space=a-row; space>=1;space--)                      // Loop for spaces
        {
            cout<<"  ";                                             // Giving the spaces in output
        }
        for(int num=1; num<=row; num++)                             // Loop for numbers
        {
            cout<<num<<" ";                                         // Giving the numbers in output
        }
        cout<<endl;
    }
}
// Print:
//              A   
//            A B
//          A B C
//        A B C D
//      A B C D E

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the last alphabet: ";                              // Taking the last alphabet input value
    cin>>a;

    for(char row='A'; row<=a; row++)                                // Declaring the row number as char value
    {
        for(int space=a-row; space>=1; space--)                     // loop for space
        {
            cout<<"  ";                                             // Giving the space in output
        }
        for(char alpha='A'; alpha<=row; alpha++)                    // loop for alphabet
        {
            cout<<alpha<<" ";                                       // Giving the alphabet in output
        }
        cout<<endl;
    }
}
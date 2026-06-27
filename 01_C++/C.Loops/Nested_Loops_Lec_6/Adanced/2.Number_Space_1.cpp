// Print:
//              1
//            2 2  
//          3 3 3
//        4 4 4 4
//      5 5 5 5 5

#include<iostream>
using namespace std;

int main()
{
    int a;  
    cout<<"Enter the last number: ";                                    
    cin>>a;                                                             // Taking the input value of last number
    
    for(int row=1; row<=a; row++)                                       // Deciding the row number
    {
        for(int space=a-row; space>=1; space--)                         // Loop for space printing
        {
            cout<<"  ";                                                 // Giving the spaces
        }
        for(int num=1; num<=row; num++)                                 // Loop for number printing
        {
            cout<<row<<" ";                                             // Giving the number in output
        }
        cout<<endl;
    }
}
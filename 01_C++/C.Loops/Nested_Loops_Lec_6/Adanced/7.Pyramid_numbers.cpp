// Print: 
//              1
//            1 2 1
//          1 2 3 2 1 
//        1 2 3 4 3 2 1
//      1 2 3 4 5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;                                                                 // Taking the input value for last row

    for(int row=1; row<=a; row++)                                           // Declaring the row
    {
        for(int space=a-row; space>=1; space--)                             // loop for space
        {
            cout<<"  ";
        }

        for(int left=1; left<=row; left++)                                  // loop for (left + middle) half
        {
            cout<<left<<" ";
        }
        for(int right=row-1; right>=1; right--)                             // loop for right half
        {
                cout<<right<<" ";
        }
        cout<<endl;
    }
}
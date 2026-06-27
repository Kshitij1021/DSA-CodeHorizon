// Print:
//              1
//            2 1
//          3 2 1
//        4 3 2 1
//      5 4 3 2 1

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int row=1; row<=a; row++)
    {
        for(int space=a-row; space>=1; space--)
        {
            cout<<"  ";
        }
        for(int num=row; num>=1; num--)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
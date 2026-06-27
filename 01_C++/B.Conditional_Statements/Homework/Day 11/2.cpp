// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//              1
//            1 2 3
//          1 2 3 4 5
//        1 2 3 4 5 6 7
//      1 2 3 4 5 6 7 8 9

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row number: ";
    cin>>a;

    for(int row=1; row<=a; row++)
    {
        for(int space=a-row; space>=1; space--)
        {
            cout<<"  ";
        }

        for(int num=1; num<=2*row-1; num++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
}

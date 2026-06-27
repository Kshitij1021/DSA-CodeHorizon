// Print:
//         *
//        * *
//       * * *
//      * * * *
//      * * * * 
//       * * *
//        * *
//         * 

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row number(must be even): ";
    cin>>a;

    int b=a/2;
    for(int row=1; row<=b; row++)
    {
        for(int space=b-row; space>=1; space--)
        {
            cout<<" ";
        }

        for(int star=1; star<=row; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=b+1; row<=a; row++)
    {
        for(int space=row-1-b; space>=1; space--)
        {
            cout<<" "; 
        }

        for(int star=row; star<=a; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
// Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//          *
//         * *
//        * * *
//       * * * *
//      * * * * *         

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
            cout<<" ";
        }

        for(int star=1; star<=row; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
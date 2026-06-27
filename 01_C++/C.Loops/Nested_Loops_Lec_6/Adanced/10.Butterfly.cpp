// Print:
//      *             *
//      * *         * *
//      * * *     * * *
//      * * * * * * * *
//      * * *     * * *
//      * *         * *
//      *             *


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last row number(must be even): ";
    cin>>a;

    int b=a/2;
    if (a%2 == 0)
    {  
        for(int row=1; row<=b; row++)                                               
        {
            for(int leftstar=1; leftstar<=row; leftstar++)
            {
                cout<<"* ";
            }

            for(int space=1; space<=2*(b-row); space++)
            {
                cout<<"  ";
            }

            for(int rightstar=1; rightstar<=row; rightstar++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }

        for(int row2=b+1; row2<=a; row2++)
        {
            for(int leftstar2=a-row2; leftstar2>=1; leftstar2--)
            {
                cout<<"* ";
            }

            for(int space2=2*(row2-b); space2>=1; space2--)
            {
                cout<<"  ";
            }

            for(int rightstar2=a-row2; rightstar2>=1; rightstar2--)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    else
        cout<<"Enter a even number";
}
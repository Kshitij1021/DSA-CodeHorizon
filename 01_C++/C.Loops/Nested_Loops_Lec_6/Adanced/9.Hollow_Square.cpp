// Print:
//      * * * * * * * *
//      * * *     * * *
//      * *         * *
//      *             *
//      *             *
//      * *         * *
//      * * *     * * *
//      * * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the order of square(must be even): ";
    cin>>a;                                                                             // Taking the input value for square dimensions
    
    int b=a/2;

    if(a%2 == 0)                                                                        
    {
        for(int row=b; row>=1; row--)                                                   // Declaring the row for upper half
        {
            for(int leftstar=row; leftstar>=1; leftstar--)                              // Loop for left half stars
            {
                cout<<"* ";
            }

            for(int space=2*(b-row); space>=1; space--)                                 // Loop for space
            {
                cout<<"  ";
            }

            for(int rightstar=row; rightstar>=1; rightstar--)                           // Loop for right half stars
            {
                cout<<"* ";
            }
            cout<<endl;
        }

        for(int row2=1; row2<=b; row2++)                                                // Declaring the row for lower half
        {
            for(int leftstar2=1; leftstar2<=row2; leftstar2++)                          // Loop for left half stars
            {
                cout<<"* ";
            }

            for(int space2=2*(b-row2); space2>=1; space2--)                             // Loop for space
            {
                cout<<"  ";
            }

            for(int rightstar2=1; rightstar2<=row2; rightstar2++)                       // Loop for right half stars
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    else
        cout<<"Enter an even number";
}


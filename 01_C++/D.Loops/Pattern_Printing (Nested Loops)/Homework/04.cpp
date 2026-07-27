// Write a program that prints an Inscribed Hollow Diamond pattern. The pattern consists of a solid rectangle of stars with a hollow diamond shape in the center.
// Sample — Input: n = 5 ⇒ Output:
// * * * * * * * * * *
// * * * *     * * * *
// * * *         * * *
// * *             * *
// *                 *
// *                 *
// * *             * *
// * * *         * * *
// * * * *     * * * *
// * * * * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=(2*n); j++)
        {
            if((j<=i) || (j>=(2*n)-i))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(2*n); j++)
        {
            if((i>=j) || (j>=(2*n)-i))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
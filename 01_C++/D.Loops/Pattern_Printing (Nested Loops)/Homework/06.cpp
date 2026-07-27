// Create a program that takes an odd integer n and print a Square with Diagonals. The grid should display a solid outer boundary along with intersecting major and minor diagonals.
// Sample — Input: n = 8 ⇒ Output:
// * * * * * * * *
// * *         * *
// *   *     *   *
// *     **      *
// *     **      *
// *   *     *   *
// * *         * *
// * * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=(n/2); i++)
    {
        for(int j=1; j<=n; j++)
        {
            if((i==1) || (j==1) || (i==j) || (j==(n-i+1)) || (j==n))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=(n/2); i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if((i==1) || (j==1) || (i==j) || (j==(n-i+1)) || (i==n) || j==n)
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

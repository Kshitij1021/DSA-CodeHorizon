// Write a program to print the classic Butterfly Pattern. This layout consists of two mirrored growing right triangles on the top half, and two mirrored shrinking right triangles on the bottom half, separated by precise hollow space.
// Sample — Input: n = 4 (Half rows) ⇒ Output:
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(2*n); j++)
        {
            if((j<=i) || (j>=((2*n)-i+1)))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=(2*n); j++)
        {
            if((j<=i) || (j>=(2*n-i)))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
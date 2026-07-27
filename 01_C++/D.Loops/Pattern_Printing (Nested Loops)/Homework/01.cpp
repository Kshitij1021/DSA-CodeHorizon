// Take an odd integer n as input from the user (n ≥ 3). Write a program to print a Plus inside Square Boundary pattern.
// Sample — Input: n = 15 ⇒ Output:
// * * * * * * * * * * * * * * *
// *             *             *	
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// * * * * * * * * * * * * * * *
// *             *             *	
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// *             *             *
// * * * * * * * * * * * * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    if(n<3)
        cout<<"Enter a greater number!";

    else
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if((i==1) || (i==n) || (i==((n+1)/2)) || (j==1) || (j==n) || (j==((n+1)/2)))
                    cout<<"* ";

                else
                    cout<<"  ";
            }
            cout<<endl;
    }
    }
}
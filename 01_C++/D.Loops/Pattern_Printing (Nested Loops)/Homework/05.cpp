// Write a program to print a symmetric Cross Alphabet Pattern for a given integer n.
// Sample — Input: n = 4 ⇒ Output:
// A             A
//   B         B
//     C     C
//       D D
//     C     C
//   B         B
// A             A

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
            if((i==j) || (j==(2*n-i+1)))
                cout<<(char)(i+64)<<" ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=(2*n); j++)
        {
            if((i==j) || (j==(2*n-i+1)))
                cout<<(char)(i+64)<<" ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
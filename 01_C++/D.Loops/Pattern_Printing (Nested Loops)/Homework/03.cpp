// Write a program to print an Alternating Row Offset Pattern for a given integer n as shown below.
// Sample — Input: n = 5 ⇒ Output:
// 1 1 1 1 1
//  2 2 2 2
// 3 3 3 3 3
//  4 4 4 4
// 5 5 5 5 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            for(int j=1; j<n; j++)
                cout<<" "<<i;
        }

        else
        {
            for(int j=1; j<=n; j++)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}
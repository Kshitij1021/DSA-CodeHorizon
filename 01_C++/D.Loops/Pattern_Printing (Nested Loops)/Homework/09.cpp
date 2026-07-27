// Write a program to print an Expanding Number Diamond pattern for a given integer n.
// Sample — Input: n = 4 ⇒ Output:
//       1
//     2 3 2
//   3 4 5 4 3
// 4 5 6 7 6 5 4
//   3 4 5 4 3								
//     2 3 2
//       1


#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int num = i;

        for(int j=1; j<=n; j++)
        {
            if(j>(n-i))
                cout<<num++<<" ";

            else
                cout<<"  ";
        }

        num -= 2;

        for(int j=1; j<n; j++)
        {
            if(j<i)
                cout<<num--<<" ";
        }

        cout<<endl;
    }

    for(int i=n-1; i>=1; i--)
    {
        int num = i;

        for(int j=1; j<=n; j++)
        {
            if(j>(n-i))
                cout<<num++<<" ";

            else
                cout<<"  ";
        }

        num -= 2;

        for(int j=1; j<n; j++)
        {
            if(j<i)
                cout<<num--<<" ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
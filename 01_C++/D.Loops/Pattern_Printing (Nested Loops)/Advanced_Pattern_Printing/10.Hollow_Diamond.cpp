// Taking n as input, print a hollow diamond 

// Input : 4
// Output :
//        *
//      *   *
//    *       *
//  *           *
//    *       *
//      *   *
//        *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=(n*2); j++)
        {
            if((j==i) || (j==(n*2)-i))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }

    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=(n*2); j++)
        {
            if((j==i) || (j==(n*2)-i))
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
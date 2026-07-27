// Taking n as input, print a reverse pyramid with n number of rows 

// Input : 5
// Output :
//  * * * * * * * * *
//    * * * * * * *
//      * * * * *
//        * * *
//          *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n-i; j++)
        {
            cout<<"  ";
        }

        for(int j=(2*i - 1); j>=1; j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
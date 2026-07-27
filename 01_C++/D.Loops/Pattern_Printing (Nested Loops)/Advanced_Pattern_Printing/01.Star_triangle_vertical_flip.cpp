// Taking n as input, print vertically flipped star triangle with n number of rows

// Input : 4
// Output :
//        *
//      * *
//    * * *
//  * * * *

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>=i)
                cout<<"* ";

            else
                cout<<"  ";
        }
        cout<<endl;
    }
}
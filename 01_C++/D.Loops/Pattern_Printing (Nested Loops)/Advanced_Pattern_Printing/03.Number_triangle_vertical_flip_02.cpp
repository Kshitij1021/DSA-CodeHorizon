// Taking n as input, print vertically flipped number triangle with n number of rows

// Input : 4
// Output :
//        1
//      2 2
//    3 3 3
//  4 4 4 4

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    int num = 1;
    
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n; j++)
        {
            if(j>=i)
                cout<<num<<" ";

            else
                cout<<"  ";
        }
        num++;
        cout<<endl;
    }
}
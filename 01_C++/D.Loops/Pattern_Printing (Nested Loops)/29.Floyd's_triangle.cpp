// Taking number of rows as input, print
// Input : 4
// Output :
//  1
//  2 3
//  4 5 6
//  7 8 9 10

#include<iostream>
using namespace std;

int main()
{
    int num = 1;
    int n;
    cout<<"rows = ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
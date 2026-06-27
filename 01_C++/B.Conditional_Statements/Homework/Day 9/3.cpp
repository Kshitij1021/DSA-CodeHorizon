//  10
//  10 11
//  10 11 12
//  10 11 12 13
//  10 11 12 13 14
//  10 11 12 13 14 15


#include<iostream>
using namespace std;

int main()
{
    for(int i=10; i<=15; i++)
    {
        for(int t=10; t<=i; t++)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
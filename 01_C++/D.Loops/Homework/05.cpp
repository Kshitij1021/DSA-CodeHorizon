//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5 
//  1 2 3 4 5 6
//  1 2 3 4 5 6 7

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=7; i++)
    {
        for(int t=1; t<=i; t++)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}

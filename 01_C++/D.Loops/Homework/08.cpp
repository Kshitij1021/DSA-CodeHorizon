//  A B C D
//  A B C
//  A B
//  A

#include<iostream>
using namespace std;

int main()
{
    for(char i='D'; i>='A'; i--)
    {
        for(char t='A'; t<=i; t++)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
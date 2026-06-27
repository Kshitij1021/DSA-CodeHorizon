// Print:
//     1 2 3 4 5
//     6 7 8 9 10
//     11 12 13 14 15
//     16 17 18 19 20
//     21 22 23 24 25

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=25; i=i+5)
    {
        for(int t=i; t<=i+5; t++)
        {
            cout<<t<<" ";
        }
        cout<<endl;
    }
}
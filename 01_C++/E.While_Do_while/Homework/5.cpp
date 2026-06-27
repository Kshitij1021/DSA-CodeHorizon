// Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

#include<iostream>
using namespace std;

int main()
{
    char a = 'Z';
    char b = 'z';

    char i='A';
    char t='a';
    while(i<=a && t<=b)
    {
        cout<<i<<" "<<t<<" ";
        i++;
        t++;
    }
}
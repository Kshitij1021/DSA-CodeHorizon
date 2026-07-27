// Print the greatest number in entered three numbers

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"c = ";
    cin>>c;

    (a >= b) ? (a >= c ? cout<<a : cout<<c) : (b > c ? cout<<b : cout<<c);
}
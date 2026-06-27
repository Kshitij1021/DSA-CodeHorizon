// There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

#include<iostream>
using namespace std;

void swap(int &a, int &b, int &c)
{
    int d;
    d = a;
    a = c;
    c = b;
    b = d;
}

int main()
{
    int a, b, c;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"c = ";
    cin>>c;

    swap(a, b, c);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}
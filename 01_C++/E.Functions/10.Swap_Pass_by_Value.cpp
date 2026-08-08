// Swap two numbers

#include<iostream>
using namespace std;

int change(int& a, int& b)          // Alias
{
    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{   int a, b;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    change(a, b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
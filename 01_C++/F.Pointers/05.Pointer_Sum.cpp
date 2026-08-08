// Return the sum of two numbers from the given input using pointers

#include<iostream>
using namespace std;

int sum(int *p1, int *p2)
{
    return (*p1 + *p2);
}

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<sum(&a, &b);
}
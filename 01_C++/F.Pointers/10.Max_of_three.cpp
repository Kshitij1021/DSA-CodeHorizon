// Examine the maximum of three numbers using pointers

#include<iostream>
using namespace std;

int maxThree(int *p1, int *p2, int *p3)
{
    return (*p1, (max(*p2, *p3)));
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

    cout<<maxThree(&a, &b, &c);
}
#include<iostream>
using namespace std;

int swap(int *p1, int *p2)
{
    *p1 = (*p1 + *p2) - (*p2 = *p1);
}

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    
    swap(&a, &b);
    cout<<"a = ";
    cout<<a<<endl;
    cout<<"b = ";
    cout<<b;
}
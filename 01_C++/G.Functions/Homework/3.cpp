// Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000. 

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    swap(a, b);                                                 // In-built swap function

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}
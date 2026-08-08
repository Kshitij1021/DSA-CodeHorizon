#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int *ptr = &x;

    cout<<x<<endl;                              // Value of variable x
    cout<<&x<<endl;                             // Byte Address of variable x
    cout<<ptr<<endl;                            // Byte Address of variable x
    cout<<&ptr<<endl;                           // Byte Address of pointer

//  Dereference Operator(*)
    cout<<*ptr<<endl;                           // Value of stored variable in pointer i.e., value of variable x
}
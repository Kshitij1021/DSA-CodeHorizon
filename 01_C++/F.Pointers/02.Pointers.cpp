#include<iostream>
using namespace std;

int main()
{
    int x = 6;
//  Syntax of Pointer
//  (datatypeName) *(pointerName)

    int *y = &x;
    
    cout<<x<<endl;                      // Value of variable x
    cout<<&x<<endl;
    cout<<y<<endl;                      // Byte address of variable x
    cout<<&y;                           // Byte address of pointer y
}
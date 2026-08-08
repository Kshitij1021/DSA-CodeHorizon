// Double pointer is used to save the byte address of a pointer in another pointer

#include<iostream>
using namespace std;

int main()
{
    int n = 19;
    int *p1 = &n;                               // Assigned the byte address of variable n in pointer p1
    int **p2 = &p1;                             // Assigned the byte address of pointer p1 in pointer p2

    cout<<n<<endl;                              // Value of variable n --> 19
    cout<<*p1<<endl;                            // Value of variable n --> 19
    cout<<**p2<<endl;                           // Value of variable n --> 19
    
    cout<<&n<<endl;                             // Byte Address of variable n --> 0x61ff0c
    cout<<p1<<endl;                             // Byte Address of variable n --> 0x61ff0c
    cout<<*p2<<endl;                            // Byte Address of variable n --> 0x61ff0c
    
    cout<<&p1<<endl;                            // Byte Address of pointer p1 --> 0x61ff08
    cout<<p2<<endl;                             // Byte Address of pointer p1 --> 0x61ff08

    cout<<&p2<<endl;                            // Byte Address of pointer 2 --> 0x61ff04
}
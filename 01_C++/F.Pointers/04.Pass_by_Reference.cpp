#include<iostream>
using namespace std;

int change(int *ptr)                                // Sending the byte address as parameter to access the variable of main function
{
    *ptr = 20;                                      // Variable of main function
}

int main()
{
    int x = 10;                                     // Variable of main function
    change(&x);                                     // Value will change
    cout<<x;                                        // Output --> 20
}
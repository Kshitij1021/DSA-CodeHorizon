#include<iostream>
using namespace std;

int change(int x)
{
    x = 20;                                         // Variable of change function
}

int main()
{
    int x = 10;                                     // Variable of main function
    change(x);                                      // Value will not change
    cout<<x;                                        // Output --> 10
}
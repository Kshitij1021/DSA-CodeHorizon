// Print the nth power of the entered number

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter base: ";
    cin>>a;
    cout<<"Enter exponent: ";
    cin>>b;

    int num = a;                                                // Declaration of variable "num" as "a" so that the loop multiplication continues

    for(int i = 1; i<b; i++)
    {
        num *= a;                                               // Multiplication loop
    }
    cout<<num;                                                  // Final result will print
}
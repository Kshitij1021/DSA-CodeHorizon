#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;

    int num = a;                                                        // Declaration of variable "num" as "a" so that the loop multiplication continues

    for(int i = 1; i<b; i++)
    {
        num = num*a;                                                    // Multiplication loop
    }
    cout<<num;                                                          // Final result will print
}
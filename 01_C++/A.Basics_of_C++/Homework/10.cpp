// Take two integers a and b (b != 0) as input. Print the result of ceiling integer division of a by b.
// Ceiling division always rounds up — e.g., ⌈7/2⌉ = 4, whereas normal integer division gives 3.
// Sample — Input: 7 2 ⇒ Output: 4

// Formula for positive integers: (a + b − 1) / b.

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the numerator: ";
    cin>>a;

    cout<<"Enter the denomination (not 0): ";
    cin>>b;

    cout<<(a + b - 1)/b;
}
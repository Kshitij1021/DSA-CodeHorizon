// Take four integers a, b, c, d as input. Compute and print (a + b) × (c + d).
// Sample — Input: 1 2 3 4 ⇒ Output: 21

#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second nusmber: ";
    cin>>b;

    cout<<"Enter the third number: ";
    cin>>c;

    cout<<"Enter the forth number: ";
    cin>>d;

    cout<<(a+b) * (c+d);
}
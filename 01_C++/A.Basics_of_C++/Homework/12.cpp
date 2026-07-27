// Take an amount in Rupees (double) and convert it to Dollars, given that 1 Dollar = 100 Rupees.
// Sample — Input: 250 ⇒ Output: 2.5

#include<iostream>
using namespace std;

int main()
{
    double a;
    cout<<"Enter the amount (in INR): ";
    cin>>a;

    cout<<"The equivalent amount in dollars is: "<<a/100;
}
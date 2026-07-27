// Take two integers as input from the user. Determine and print whether their multiplication product is positive, negative, or zero without calculating the absolute numeric valuation value if possible.
// Sample — Input: -4 5 ⇒ Output: Product is Negative

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    if (a*b > 0)
        cout<<"Product is Positive";

    else if (a*b < 0)
        cout<<"Product is Negative";

    else
        cout<<"Product is zero";
}
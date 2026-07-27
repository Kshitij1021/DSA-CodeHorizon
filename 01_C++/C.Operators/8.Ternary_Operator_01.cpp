// Write the even-odd function using Ternary Operator

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    // (a%2 == 0) ? cout<<"Even" : cout<<"Odd";

    //                  OR

    cout << ((a%2 == 0) ? "Even" : "Odd");
}
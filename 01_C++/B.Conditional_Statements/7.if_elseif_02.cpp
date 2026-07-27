// Check whether the entered Real Number is an Integer or not

#include<iostream>
using namespace std;

int main()
{
    float x;
    cout<<"Enter a Number: ";
    cin>>x;

    int y = (int)x;
    if (x == (float)y)
        cout<<"Integer";
    else
        cout<<"Not an Integer";
}
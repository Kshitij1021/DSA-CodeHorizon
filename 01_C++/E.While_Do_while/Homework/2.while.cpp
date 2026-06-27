// Find the factorial of a number n using a while loop.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int num=1;
    int i=1;
    while(i<=a){
        num = num*i;
        i++;
    }
    cout<<"The factorial of the number "<<a<<" is "<<num;
}
// Find the factorial of a number n using a do while loop.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int Sum=1;
    int i=1;
    do{
        Sum = Sum*i;
        i++;
    }while(i<=a);

    cout<<"The factorial of the number "<<a<<" is "<<Sum;
}
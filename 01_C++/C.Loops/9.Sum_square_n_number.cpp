#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the last number: ";
    cin>>b;

    int square = a*a;                                               // Giving the initial value of square
    int Sum = square;                                               // Giving the initial value of sum

    for(int i = a + 1 ; i<=b; i++)                                  // Stating the condition for "a + 1" as initial step
    {
        square = i*i;
        Sum = Sum + square;
    }
    cout<<Sum;
}
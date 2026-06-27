// Print the squares of number from 1 to n.
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
        cout<<"The square of "<<i<<" is: "<<i*i<<endl;
}
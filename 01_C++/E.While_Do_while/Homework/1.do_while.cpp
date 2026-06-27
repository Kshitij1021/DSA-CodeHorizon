// Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using do while loop.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=a);
}
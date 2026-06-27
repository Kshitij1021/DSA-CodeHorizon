// Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a<2){
        cout<<"The number "<<a<<" is not a prime number";
        return 0;
    }

    int i=2;
    while(i<a){
        if(a%i==0){
            cout<<"The number "<<a<<" is not a prime number";
            break;
        }
        i++;
    }

    if(i==a)
        cout<<"The number "<<a<<" is a prime number";
        
    return 0;
}
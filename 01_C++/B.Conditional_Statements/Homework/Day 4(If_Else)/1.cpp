// Two numbers are given, print the bigger number, It is given that both numbers can’t be the same
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    if(a < b){
        cout<<b;
    }
    else if(a == b){
        cout<<"Enter different numbers";
    }
    else{
        cout<<a;
    }
}
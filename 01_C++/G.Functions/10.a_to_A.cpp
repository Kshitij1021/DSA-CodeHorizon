// Convert 'a' into 'A' and so on.

#include<iostream>
using namespace std;

char alpha(char n){
    int a=n;
    char b=a-32;

    return b;
}

int main()
{
    char i;
    cout<<"Enter the character: ";
    cin>>i;

    cout<<i<<" --> "<<alpha(i);
}
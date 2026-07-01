// Take char as input, and check whether it is a capital alphabet or not

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the character: ";
    cin>>a;

    if ((a >= 'A') && (a <= 'Z'))
        cout<<"Yes, it is a capital letter";

    else
        cout<<"No, it is not a capital letter";
}
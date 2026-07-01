// Check whether the entered number is a four digit number or not

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if ((a/1000 >= 1) && (a/1000 < 10))
        cout<<"Yes, the number "<<a<<" is a four digit number";
    
    else
        cout<<"No, the number "<<a<<" is not a four digit number";



//  OR


// if ((a >= 1000) && (a <= 9999))
}
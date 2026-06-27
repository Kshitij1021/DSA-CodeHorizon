// Print all the odd numbers upto n

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    int i=1;
    cout<<"All the odd number upto "<<a<<" are: ";
    while(i<=a)
    {
        if(i%2 != 0)
            cout<<i<<" ";
        i++;
    }

}
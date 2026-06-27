// Print all the even number upto n numbers

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    cout<<"All the even numbers upto "<<a<<" are: ";

    int i=0;
    while(i<=a)
    {
        if(i%2==0)
            cout<<i<<" ";

        i++;
    }
}
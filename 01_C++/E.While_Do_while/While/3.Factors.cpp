// Print all the factors of the given number

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    cout<<"The factors of the number "<<a<<" is/are: ";
    int i=1;
    while(i<=a)
    {
        if(a%i == 0)
        {
           cout<<i<<" ";
        }
        i++;
    }
}
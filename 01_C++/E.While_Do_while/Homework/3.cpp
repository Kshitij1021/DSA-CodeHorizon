// Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int i=1; i<=a; i++)
    {
        if(i%3==0 || i%5==0)
            continue;


        cout<<i<<" ";
    }
}
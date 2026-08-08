// Count the number of Digits of a Number without using cout and return

#include<iostream>
using namespace std;

int countDigits(int *p1, int *p2)
{
    while(*p1 != 0)
    {
        *p2 += 1;
        *p1 /= 10;
    }
}

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    int count = (n==0) ? 1 : 0;

    countDigits(&n, &count);

    cout<<count;
}
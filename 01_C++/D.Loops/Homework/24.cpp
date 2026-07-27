// Write a program that prints numbers starting from 1 up to 1000. However, the loop must terminate immediately as soon as it encounters a number whose sum of digits equals 23.

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=1000; i++)
    {
        int sum = 0;
        int num= i;
        while(num != 0)
        {
            sum += (num % 10);
            num /= 10;
        }

        if(sum != 23)
            cout<<i<<" ";

        else
            break;
    }
}
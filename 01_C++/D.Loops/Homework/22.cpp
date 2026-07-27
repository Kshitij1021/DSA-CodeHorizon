// Write a program to iterate through the numbers from 1 to 1000 and print only those numbers whose sum of digits is exactly 17.
// Sample — Output includes: 89, 98, 179, 188, ...

#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=1000; i++)
    {
        int sum = 0;
        int num = i;
        while(num != 0)
        {
            sum = (num % 10) + sum;
            num /= 10;
        }

        if(sum == 17)
            cout<<i<<" ";
    }
}
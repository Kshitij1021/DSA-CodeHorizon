// Write a function sumFirstAndLast(int n) that extracts the first and the last digit of a given positive integer and returns their sum.
// Sample — Input: 4529 ⇒ Output: 13 (Since 4 + 9 = 13)

#include<iostream>
using namespace std;

int sumFirstandLast(int n)
{
    int sum = (n % 10);
    while(n > 9)
    {
        n /= 10;
    }
    sum += n;
    return sum;
}

int main()
{
    int n;
    cin>>n;

    cout<<sumFirstandLast(n);
}
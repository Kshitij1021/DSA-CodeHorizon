// Write a program containing nested functions. Create a function findPermutation(int n, int r) to calculate nP r = n!(n−r)! . This function must internally call another function getFactorial(int x). Take n and r as inputs from the user.
// Sample — Input: n = 5, r = 2 ⇒ Output: 20

#include<iostream>
using namespace std;

int getFactorial(int x)
{
    int fact = 1;
    for(int i=1; i<=x; i++)
    {
        fact *= i;
    }
    return fact;
}

int findPermutation(int n, int r)
{
    return (getFactorial(n) / (getFactorial(n-r)));
}

int main()
{
    int n, r;
    cout<<"n = ";
    cin>>n;
    cout<<"r = ";
    cin>>r;

    cout<<findPermutation(n, r);
}
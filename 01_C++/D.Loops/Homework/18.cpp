// Take an integer n as input and print the Fibonacci series up to n terms. (0, 1, 1, 2, 3, 5, . . .)
// Sample — Input: 6 ⇒ Output: 0 1 1 2 3 5

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of terms required: ";
    cin>>n;

    int num1 = 0;
    int num2 = 1;

    int sum = num1 + num2;

    for(int i=1; i<=n; i++)
    {
        cout<<num1<<" ";
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
    }
}
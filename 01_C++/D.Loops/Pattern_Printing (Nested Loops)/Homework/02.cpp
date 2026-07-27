// Take a positive integer n as input. Write a program to print a Repeated Number Inverted Right Triangle. Each row should display the same number, corresponding to its current descending row count.
// Sample — Input: n = 4 ⇒ Output:
// 4 4 4 4
// 3 3 3
// 2 2
// 1

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
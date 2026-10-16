// Print the fibonacci series using arrays

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    int fib[n] = {0, 1};
    
    for(int i=2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i=0; i<n; i++)
    {
        cout<<fib[i]<<" ";
    }
}
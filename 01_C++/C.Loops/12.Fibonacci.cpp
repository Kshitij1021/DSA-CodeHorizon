// Print the Fibonacci series upto n numbers : 0, 1, 1, 2, 3, 5, 8, 13 ... 
#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cout<<"Enter the last digit postition number: ";
    cin>>n;

    int last = 0;
    int previous = 1;
    int current = 1;

    for(int i=4; i<=n; i++)
    {
        last = previous;
        previous = current;
        current = last + previous;
    }
    cout<<current;

}
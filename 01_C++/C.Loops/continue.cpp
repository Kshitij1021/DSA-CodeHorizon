// Print all natural number form 1 to n leaving the factors of asked number

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the last number: ";
    cin>>a;
    cout<<"Enter the number of which factors not to be print: ";
    cin>>b;

    for(int i=0; i<=a; i++)
    {
        
        if (i%b==0)                             // If condition satisfies, loop will not debug for that value of "i"
        {
            continue;
        }
        
        cout<<i<<" ";
    }
}
// Given a positive integer , write an program to find and print all of its divisors.
// Sample 1 — Input: 12 ⇒ Output: 1 2 3 4 6 12
// Sample 2 — Input: 7 ⇒ Output: 1 7
// Sample 3 — Input: 15 ⇒ Output: 1 3 5 15

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"The divisors / factors of the number "<<n<<" are ";

    for(int i=1; i<=sqrt(n); i++)
    {
        if(n % i == 0 )
        {
            cout<<i<<" ";

            if(n/i != i)
                cout<<n/i<<" ";
        }
    }
}
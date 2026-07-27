// Take an integer as input and mathematically subtract 293 from it. Compute and print the reversed value of this new resulting integer. Ensure your logic correctly handles negative results.
// Sample 1 — Input: 183 ⇒ Math: 183 − 293 = −110 ⇒ Output: -11
// Sample 2 — Input: 400 ⇒ Math: 400 − 293 = 107 ⇒ Output: 701
// Sample 3 — Input: 293 ⇒ Math: 293 − 293 = 0 ⇒ Output: 0

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

    n -= 293;
    
    int reversedNumber = 0;
    while(n != 0)
    {
        reversedNumber = (reversedNumber)*10 + (n % 10);
        n /= 10;
    }

    cout<<reversedNumber;
}
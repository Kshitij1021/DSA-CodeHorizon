// Check whether the entered number is palindrome or not. (return false for negative numbers)

// e.g. 48784

// Required ans : True (Reverse of 48784 = 48784)

// e.g. 48765

// Required ans : False (Reverse of 48765 = 56784)

#include<iostream>
using namespace std;

int Reverse(int n){
    int ans=0;
    int rem=0;

    while(n>0)
    {
        rem = n%10;
        ans = ans*10+rem;

        n/=10;
    }
    return ans;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a==Reverse(a))
        cout<<"The number "<<a<<" is a palindrome number";
    
    else
        cout<<"The number "<<a<<" is not a palindrome number";
}
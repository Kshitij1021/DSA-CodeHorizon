// Check whether the enter year is leap year or not

// Condition required:
// 1. Year should be divisible by 400
// 2. Year should be divisible by 4 but not divisible by 100 (If condition 1 is not true)

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the year: ";
    cin>>a;                                             // Taking the value of year

    if(a%400==0)                                        // Checking the condition 1
    {
        cout<<"Leap Year";
    }
    
    else if(a%4==0 && a%100!=0)                         // Checking the condition 2
    {
        cout<<"Leap Year";
    }

    else
    {
        cout<<"Not a Leap Year";
    }

}
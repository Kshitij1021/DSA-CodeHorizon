// Convert the entered decimal number into binary number

// Example:18

// Required number = 10010

// Base         Quotient        Remainder
//  2              18              
//  2               9               0
//  2               4               1
//  2               2               0
//  2               1               0
//  2               0               1

// First remainder (one's place)           --> 0                        =     0
// Second remainder (ten's place)          --> 1   = 1*10     +     0   =    10      
// Third remainder (hundred's place)       --> 0   = 0*100    +    10   =   010     
// Fourth remainder (thousand's place)     --> 0   = 0*1000   +   010   =  0010    
// Fifth remainder (ten thousand's place)  --> 1   = 1*10000  +  0010   = 10010   
                                             

// Pattern
// ans = (remainder)*10^i + previous number (ans)


#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;                                                 // Taking the input value of number

    int quotient = a;                                       // Initializing the value of quotient
    int ten_multiple=1;                                     // Initializing the value of 10^i
    int ans=0;                                              // Initializing the value of final answer

    while(quotient>0)
    {
        int rem = quotient%2;                               // Getting the remainder values (next number to add)
        quotient = quotient/2;                              // Getting the next number to divide by base

        ans = rem*ten_multiple + ans;                       // Binary cody of number

        ten_multiple=ten_multiple*10;                       // Increasing the power of 10
    }

    cout<<ans;                                              // Final answer

}
// Convert the entered Binary Number into Decimal

// Example:11011

// V       IV     III     II       I            (value of rem)
// 1*2^4 + 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0
//  16   +   8   +   0   +   2   +   1

// Pattern:
// ans = sigma(rem*2^i)

// Required Number = 27


// 11011 %  10 = 1       (I value of rem)
// 11011 /  10 = 1101    

// 1101  %  10 = 1       (II value of rem)
// 1101  /  10 = 110

// 110   %  10 = 0       (III value of rem)
// 110   /  10 = 11

// 11    %  10 = 1       (IV value of rem)
// 11    /  10 = 1

// 1     %  10 = 1       (V value of rem)



#include<iostream>
using namespace std;

int main()
{
    int a;                                                              
    cout<<"Enter the number: ";
    cin>>a;                                                                 // Taking the input value of binary number

    int num = a;                                                            // Initializing the value of quotient
    int Sum = 0;                                                            // Initializing the value of Sum
    int multiple_2 = 1;                                                     // Initializing the value of 2^i
    int rem;                                                                // Initializing the value of rem
    while(num>0)
    {
        rem = num%10;                                                       // Getting the value of rem

        Sum = Sum + rem*multiple_2;                                         // Getting the value of Sum
        
        num = num / 10;                                                     // Getting the new value of quotient 

        multiple_2 = multiple_2*2;                                          // Value of 2^i
    }
    cout<<"The decimal value of "<<a<<" is "<<Sum;                          // Final answer
}
// Convert the entered decimal number into octal number

// e.g. 8526

// Required answer : 20516

// Base         Quotient        Remainder
//  8             8526             
//  8             1065              6
//  8              133              1
//  8               16              5
//  8                2              0
//  8                0              2

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    int rem=0;                                                  //Initializing the value of remainder
    int num=a;                                                  //Initializing the value of quotient
    int multiple_ten=1;                                         //Initializing the value of 10 to form the number
    int sum=0;                                                  //Initializing the value of Sum

    while(num>0)
    {
        rem=num%8;                                              //Getting the new value of remainder
        num/=8;                                                 //Getting the new value of quotient

        sum+=rem*multiple_ten;                                  //Forming the number

        multiple_ten*=10;                                       //Value of 10^i
    }
    cout<<"The octal form of the number "<<a<<" is "<<sum;
}
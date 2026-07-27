// Print alphabets from 'a' to 'z'

#include<iostream>
using namespace std;

int main()
{
    char i;                                                  // Declaration of variable "i" as character

    for(i='a'; i<='z'; i++)                       // assigning the initial value of variable "i" as character "a"
                                                                // assigning the final value of variable "i" as character "z"
                                                                // defining the codition, compiler first convert character "a" in its ASCII value "98"
                                                                // 98 + 1 = 99(b)
                                                                // next value for variable "i" = "b"
        cout<<i<<" ";
}
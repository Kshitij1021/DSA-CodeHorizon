#include<iostream>
using namespace std;

int main()
{
    char name;                                                  // Declaration of variable "name" as character

    for(name='a'; name<='z'; name++)                       // assigning the initial value of variable "name" as character "a"
                                                                // assigning the final value of variable "name" as character "z"
                                                                // defining the codition, compiler first convert character "a" in its ASCII value "98"
                                                                // 98 + 1 = 99(b)
                                                                // next value for variable "name" = "b"
        cout<<name<<endl;
}
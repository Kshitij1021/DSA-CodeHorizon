#include<iostream>
using namespace std;

int main()
{

// Integer (4 Bytes)
    int a;                                 //Declaration of variable
    a = 7;                                 //a is a integer type variable with value 7

    int  b = 9;                            //Also we can declare and define the variable in a single line also.

    cout<<a<<endl<<b<<endl;                //a and b are not in "", hence their assigned value will print
    cout<<"a"<<endl<<"b \n";               //a and b are in "", hence they wil print as it is



// Character (1 Byte)
    char c = 'G';                          //assigns the value of c as G
    cout<<c<<endl;



// Float (4 Bytes)
    float d = 5.67;                        //assigns the value of d as 5.67
    cout<<d<<endl;



// Double (8 Bytes)
    double e = 5.5897;                     //assigns the value of e as 5.5897
    cout<<e<<endl;



// Boolean (1 Byte)
    bool f = true;                         //assigns the value of f as True/1                 {"true" should be written in lowercase only}
    bool g = 0;                            //assigns the value of g as False/0
    cout<<f<<endl<<g;
}
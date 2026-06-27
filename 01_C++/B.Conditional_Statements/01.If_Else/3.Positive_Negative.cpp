// Eaxamine whether the number entered is Positive, Negative or 0.
#include<iostream>
using namespace std;

int main()
{
    int a;                                                                          // Declaration of variable a as Integer value
    cout<<"Enter your number: ";
    cin>>a;                                                                         // Taking the input value for a

    if(a>0)                                                                         // Condition stated
        cout<<"The number "<<a<<" is a Positive Number";
    else{
        // Use another "if_else" inside else if needed.
        if(a == 0){                                                                 // Condition stated inside the condition
            cout<<"The number "<<a<<" is neither Positive nor Negative";
        }
        else{
            cout<<"The number "<<a<<" is a Negative Number";
        }
    }
}
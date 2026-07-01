// Concept Booster: Upper/Lower Boundary constraints

// Take a character input from the keyboard. Write a conditional structure to evaluate whether the provided letter is an uppercase English alphabet (A-Z), a lowercase alphabet (a-z), a numerical digit (0-9), or a special symbolic character.
// Sample — Input: g ⇒ Output: Lowercase Alphabet

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the character: ";
    cin>>a;

    if ((a >= 'A') && (a <= 'Z'))
        cout<<"Uppercase Alphabet";
    
    else if ((a >= 'a') && (a <= 'z'))
        cout<<"Lowercase Alphabet";

    else if ((a >= '0') && (a <= '9'))
        cout<<"Numerical Digit";
    
    else
        cout<<"Symbolic Character";
}
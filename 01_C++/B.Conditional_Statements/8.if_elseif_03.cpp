// Examine whether the entered letter is a vowel or consonant
#include<iostream>
using namespace std;

int main()
{
    char letter;                                                                         // Declaration of variable letter as character datatype
    cout<<"Enter a letter: ";
    cin>>letter;

    if(letter == 'a')
        cout<<"The letter "<<letter<<" is a vowel";
    else if(letter == 'e')
        cout<<"The letter "<<letter<<" is a vowel";
    else if(letter == 'i')
        cout<<"The letter "<<letter<<" is a vowel";
    else if(letter == 'o')
        cout<<"The letter "<<letter<<" is a vowel";
    else if(letter == 'u')
        cout<<"The letter "<<letter<<" is a vowel";
    else
        cout<<"The letter "<<letter<<" is a consonant";

}
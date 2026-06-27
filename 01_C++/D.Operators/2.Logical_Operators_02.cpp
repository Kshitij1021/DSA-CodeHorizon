// Print "Vowel" is enter character is a vowel
// else Print "Consonant"

#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter the letter: ";
    cin>>a;

    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
    {
        cout<<"Vowel";
    }
    else
        cout<<"Consonant";
}
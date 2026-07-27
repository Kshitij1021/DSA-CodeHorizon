// Print all the alphabets with their corresponding ASCII values.

#include<iostream>
using namespace std;

int main()
{
    for(char i='A'; i<='Z'; i++)
    {
        cout<<i<<" --> "<<(int)i<<endl;
    }
}
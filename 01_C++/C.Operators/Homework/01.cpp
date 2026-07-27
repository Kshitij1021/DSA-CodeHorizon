// Temperature Range: Write a program that checks if a given temperature is suitable for swimming. If the temperature is between 70 and 90 (Excluded) degrees Fahrenheit print yes, else NO. 

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the temperature: ";
    cin>>a;

    if(a>70 && a<90)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
// Write a menu-driven application using a C++ switch-case structure that accepts an integer number representing a month (1 to 12). Print the corresponding month’s standard calendar name. If the input falls outside the standard scope, default cleanly with an error flag message.
// Sample — Input: 2 ⇒ Output: February

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    switch (n)
    {
        int a;
    cout<<"Enter the number(must be less than or equal to 12): ";
    cin>>a;

    switch(a)
    {
        case 1:
            cout<<"January";
            break;    

        case 2:
            cout<<"February";
            break;    

        case 3:
            cout<<"March";
            break;    

        case 4:
            cout<<"April";
            break;    
        
        case 5:
            cout<<"May";
            break;    

        case 6:
            cout<<"June";
            break;    

        case 7:
            cout<<"July";
            break;    
            
        case 8:
            cout<<"August";
            break;    

        case 9:
            cout<<"September";
            break;    

        case 10:
            cout<<"October";
            break;    

        case 11:
            cout<<"November";
            break;    

        case 12:
            cout<<"December";
            break;    

        default:
            cout<<"Enter a valid number";
    }
    }
}
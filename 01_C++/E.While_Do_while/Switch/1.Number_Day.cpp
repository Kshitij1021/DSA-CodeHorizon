// Print corresponding days for numeral values:
//      1 : Monday
//      2 : Tuesday
//      3 : Wednesday
//      4 : Thursday
//      5 : Friday
//      6 : Saturday
//      7 : Sunday

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    switch(a)
    {
        case 1:
            cout<<"Monday";
            break;
        
        case 2:
            cout<<"Tuesday";
            break;

        case 3:
            cout<<"Wednesday";
            break;

        case 4:
            cout<<"Thursday";
            break;

        case 5:
            cout<<"Friday";
            break;

        case 6:
            cout<<"Saturday";
            break;

        default:
            cout<<"Sunday";
            break;
    }
}

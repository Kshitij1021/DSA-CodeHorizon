// Concept Booster: Electric Bill Multi-Tier Grid Pricing

// An energy cooperative charges electricity rates dynamically depending on consumer usage units. Write a program to compute total charges based on the input consumption units:
// • First 100 units: $1.50 per unit
// • Next 200 units (101 to 300): $2.50 per unit
// • Above 300 units: $4.00 per unit
// An additional structural safety surcharge of 15% is appended to the total amount generated. Find the net bill payable.
// Sample — Input: 150 units ⇒ Output: Total Bill = $316.25

#include<iostream>
using namespace std;

int main()
{
    float a;
    float bill=0;
    cout<<"Enter the total units consumed: ";
    cin>>a;

    if (a <= 100.0)
    {
        bill = a*1.50;
    }
    
    else if((a>100) && (a<=300))
    {
        bill = 100*1.50 + (a-100)*2.50;
    }

    else
    {
        bill = 100*1.50 + 200*2.50 + (a-300)*4;
    }

    cout<<"Your bill is $"<<bill<<endl;
    cout<<"15% of safety surcharge is applied"<<endl;
    cout<<"Your final bill is $"<<bill + (15.0/100.0*bill);
}

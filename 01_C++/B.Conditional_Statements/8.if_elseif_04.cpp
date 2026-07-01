// If cost price and selling price of an item is given as input, determine the margin of profit or loss

#include<iostream>
using namespace std;

int main()
{
    int cp, sp;
    cout<<"Enter the Cost Price of your product: ";
    cin>>cp;

    cout<<"Enter the Selling Price of your Product: ";
    cin>>sp;

    if(cp-sp == 0)
        cout<<"You have made No loss, No profit";
    else if(cp-sp>0)
        cout<<"You have made a loss of "<<cp-sp;
    else
        cout<<"You have made a Profit of "<<sp-cp;
}
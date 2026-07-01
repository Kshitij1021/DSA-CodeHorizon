// A shopkeeper applies a discount of d% on the marked price m, and then charges a tax of t% on the discounted price. Take m, d, and t (all doubles) as input and print the final amount the customer pays.
// Sample — Input: m = 1000, d = 10, t = 18 ⇒ Output: 1062

// Discouted Price : m(1-d/100)
// Final Price : Discounted Price X (1 + t/100)

#include<iostream>
using namespace std;

int main()
{
    double d, m, t;
    cout<<"Enter the marked price: ";
    cin>>m;

    cout<<"Enter the discount (in %): ";
    cin>>d;

    cout<<"Enter the tax (in %): ";
    cin>>t;

    double disc_price = m*(1-d/100);
    double final_price = disc_price*(1 + t/100);

    cout<<"The final price is "<<final_price;
}
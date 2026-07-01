// Compute the Kinetic Energy of a moving object. Take the Mass m (in kg, double) and Velocity v (in m/s, double) as input from the user.
// Sample — Input: m = 10, v = 4 ⇒ Output: 80

#include<iostream>
using namespace std;

int main()
{
    double m, v;
    cout<<"Enter the mass (in kg): ";
    cin>>m;

    cout<<"Enter the speed (in m/s): ";
    cin>>v;

    cout<<(1.0/2.0)*m*v*v;
}

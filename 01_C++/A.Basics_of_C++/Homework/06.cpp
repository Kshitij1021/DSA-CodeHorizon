// Write a program to calculate the Volume of a Sphere given radius r. Use π = 3.14
// Sample — Input: 3 ⇒ Output: 113.04

#include<iostream>
using namespace std;

int main()
{
    float r;
    cout<<"Enter the radius: ";
    cin>>r;

    float con = (4.0/3.0)*3.14;

    cout<<"Volume of the sphere is "<<con*(r*r*r);
}
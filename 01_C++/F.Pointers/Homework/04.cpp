// Write a program demonstrating Function Overloading. Create two functions named calculateArea. One should take a single double parameter (radius) and return the area of a circle. The other should take two double parameters (length, width) and return the area of a rectangle.
// Sample — Input: Circle radius 3 ⇒ Output: 28.26
// Input: Rectangle 4 5 ⇒ Output: 20

#include<iostream>
using namespace std;

double calculateArea(double r)
{
    return (3.14)*(r*r);
}

double calculateArea(double len, double wid)
{
    return (len*wid);
}

int main()
{
    cout<<calculateArea(3)<<endl;
    cout<<calculateArea(4, 5);
}
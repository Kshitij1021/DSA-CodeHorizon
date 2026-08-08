// Write a program to calculate the hypotenuse of a right-angled triangle given its base and perpendicular. Write a function that accepts these two values and uses the inbuilt sqrt() library function to return the hypotenuse.
// Sample — Input: 3 4 ⇒ Output: 5

#include<iostream>
#include<cmath>
using namespace std;

double hypo(double a, double b)
{
    return sqrt((a*a) + (b*b));
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<hypo(a, b);
}
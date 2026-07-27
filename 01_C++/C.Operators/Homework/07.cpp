// Given the number of sides n of a simple polygon and the sum of all its interior angles S, write a program to check if the user has provided valid dimensional specifications. Use the structural formula:
// S = (n − 2) × 180
// Sample — Input: Sides = 3, Sum = 180 ⇒ Output: Valid Polygon

#include<iostream>
using namespace std;

int main()
{
    int n, S;
    cout<<"Enter the number of sides of the polygon: ";
    cin>>n;

    cout<<"Enter the sum of all the interior angles of the polygon (in degrees): ";
    cin>>S;

    if(S == (n-2)*180)
        cout<<"Valid Polygon";

    else
        cout<<"Not a Valid Polygon";
}
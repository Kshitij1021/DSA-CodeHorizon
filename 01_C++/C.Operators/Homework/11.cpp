// Concept Booster: Coordinate System Analysis

// Given the three coordinate points A(x1, y1), B(x2, y2), and C(x3, y3) as floating-point inputs, write a program to determine if all three points sit sequentially on the same straight line (collinear points). Use the slope comparison formulation:
// (y2 − y1) × (x3 − x2) == (y3 − y2) × (x2 − x1)

#include<iostream>
using namespace std;

int main()
{
    float x1, x2, x3, y1, y2, y3;
    cout<<"x1 = ";
    cin>>x1;

    cout<<"y1 = ";
    cin>>y1;

    cout<<"x2 = ";
    cin>>x2;
    
    cout<<"y2 = ";
    cin>>y2;

    cout<<"x3 = ";
    cin>>x3;

    cout<<"y3 = ";
    cin>>y3;

    if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1))
        cout<<"The given points are collinear";

    else
        cout<<"The given points are not collinear";
}
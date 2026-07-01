// A circle of radius r is inside a square of side a (the circle always sits completely inside the square without touching its edges). Find the area of the shaded region — the part inside the square but outside the circle. Use π = 3.14
// Sample — Input: r = 2, a = 6 ⇒ Output: 23.44

#include<iostream>
using namespace std;

int main()
{
    float a, r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;

    cout<<"Enter the side of the square: ";
    cin>>a;

    if(r>a/2)
        cout<<"Enter a smaller radius";

    else
    {
        float ar_sq = a*a;
        float ar_ci = 3.14*r*r;
        cout<<ar_sq-ar_ci;
    }
}
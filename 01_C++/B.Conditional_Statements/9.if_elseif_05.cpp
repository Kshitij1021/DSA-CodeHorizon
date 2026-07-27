// Determine whether the area of the rectangle is greater than its perimeter, by taking its length and breadth as input value 

#include<iostream>
using namespace std;

int main()
{
    float len, bred;
    cout<<"Enter the length of your rectangle: ";
    cin>>len;

    cout<<"Enter the breadth of your rectangle: ";
    cin>>bred;

    float peri = 2*(len + bred);
    float area = len * bred;

    cout<<"The perimeter of the rectangle is "<<peri<<endl;
    cout<<"The area of the rectangle is "<<area<<endl;

    if(peri == area)
        cout<<"Perimeter = Area";
    else if(peri < area)
        cout<<"Perimeter < Area";
    else
        cout<<"Perimeter > Area";
}
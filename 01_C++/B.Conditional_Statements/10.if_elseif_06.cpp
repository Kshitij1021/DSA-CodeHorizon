// Given a point (x, y), check where the point lies (I, II, III, IV Quadrant or x-axis or y-axis)

#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cout<<"x = ";
    cin>>x;
    
    cout<<"y = ";
    cin>>y;

    if((x>0) && (y>0))
        cout<<"The point ("<<x<<", "<<y<<") lies in I Quadrant";
    
    else if((x<0) && (y>0))
        cout<<"The point ("<<x<<", "<<y<<") lies in II Quadrant";
    
    else if((x<0) && (y<0))
        cout<<"The point ("<<x<<", "<<y<<") lies in III Quadrant";

    else if((x>0) && (y<0))
        cout<<"The point ("<<x<<", "<<y<<") lies in IV Quadrant";

    else if((x==0) && (y!=0))
        cout<<"The point ("<<x<<", "<<y<<") lies on y-axis";

    else if((x!=0) && (y==0))
        cout<<"The point ("<<x<<", "<<y<<") lies on x-axis";

    else
        cout<<"The point ("<<x<<", "<<y<<") lies on origin";
}
// Take the sides of a triangle as input, and check whether the triangle is possible or not

// The sum of all pairs of two sides must be greater than that of third side

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter the first side: ";
    cin>>a;

    cout<<"Enter the second side: ";
    cin>>b;

    cout<<"Enter the third side: ";
    cin>>c;

    if((a + b > c) && (b + c > a) && (a + c > b))
        cout<<"Triangle is possible";
    
    else
        cout<<"Triangle is not possible";

}
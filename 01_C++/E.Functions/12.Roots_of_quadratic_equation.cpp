// Calculate the roots of a given quadratic equation

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a, b, c;
    cout<<"Format of Quadratic equation: ax^2 + bx + c"<<endl;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"c = ";
    cin>>c;

    float d = (pow(b, 2))-(4*a*c);

    float root1 = (-b + pow(d, 0.5))/(2*a);
    float root2 = (-b - pow(d, 0.5))/(2*a);

    cout<<root1<<endl<<root2;
}
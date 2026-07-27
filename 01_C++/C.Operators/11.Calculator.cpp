
// Create a Calculator

#include<iostream>
using namespace std;

int main()
{
    char operate;
    float a, b;

    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;

    cout<<"Enter the operator you want to use (+(Add), -(Subtract), *(Multiply), /(Divide), %(Remainder)): ";
    cin>>operate;

    int sign = (int)operate;

    switch(sign)
    {
        case 43:                                            // For Addition
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        
        case 45:                                            // For Subtraction
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;

        case 42:                                            // For Multiplication
            cout<<a<<" X "<<b<<" = "<<a*b;
            break;

        case 47:                                            // For Division
            cout<<a<<" / "<<b<<" = "<<a/b;
            break;

        default:
            cout<<"Enter a valid operator";
    }
}



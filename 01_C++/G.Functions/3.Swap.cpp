//  Swap the entered values of a and b

//  e.g.
//  If a = 3
//     b = 5

//  Convert:
//     a = 5
//     b = 3

#include<iostream>
using namespace std;

// Example of Pass by value function
int Fun_value(int a, int b)
{
    int c;
    c = a;                                                      // a and b ki values will be swapped but in another memory location
    a = b;                                                      // not in the entered a and b values, hence final output made no changes
    b = c;
}

// Example of Pass by reference function
void Fun_ref(int &a, int &b)
{
    int c;
    c = a;                                                      // a and b ki values will be swapped in the actual entered value
    a = b;                                                      // Final output shows changes
    b = c;
}

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;

    cout<<"b = ";
    cin>>b;
    
    // Calling pass by value function
    Fun_value(a, b);
    cout<<"a = "<<a<<endl;                                      // Checking the value of a
    cout<<"b= "<<b;                                             // Checking the value of b

    cout<<endl;

    // Calling pass by reference function
    Fun_ref(a, b);
    cout<<"a = "<<a<<endl;                                      // Checking the value of a
    cout<<"b= "<<b;                                             // Checking the value of b
}
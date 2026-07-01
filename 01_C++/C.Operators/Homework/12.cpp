// Concept Booster: Triangle Categorization Code

// Take three numerical values denoting the side dimensions (a, b, c) of a shape. First, use a validation structure to test whether these segments can structurally assemble into a valid triangle (a + b > c, b + c > a, and c + a > b). If valid, further categorize the object as an Equilateral, Isosceles, or Scalene triangle.
// Sample — Input: 5 5 8 ⇒ Output: Isosceles Triangle

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
    {
        if ((a == b) && (a == c))
            cout<<"Equilateral Triangle";
        
        else if ((a !=b) && (a != c) && (b != c))
            cout<<"Scalene Triangle";

        else
            cout<<"Isosceles Triangle";
    }

    else
        cout<<"Triangle is not possible";
}
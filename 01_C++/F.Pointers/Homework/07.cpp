// Write a function updateValues(int *a, int *b). The function should update the value of a to the sum of a and b, and update the value of b to the absolute difference of their original values. (Hint: Store actual values in temp variables first!)
// Sample — Input: a = 4, b = 5 ⇒ Output after function call: a = 9, b = 1

#include<iostream>
#include<cmath>
using namespace std;

int updateValues(int *a, int *b)
{
    int temp1 = *a;
    int temp2 = *b;
    *a = (temp1 + temp2);
    *b = abs(temp1 - temp2);

}

int main()
{
    int a, b;
    cin>>a>>b;

    updateValues(&a, &b);

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b;
}
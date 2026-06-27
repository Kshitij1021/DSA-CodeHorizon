#include<iostream>
using namespace std;

int Sum(int i, int j)                                           // Defining the name and Parameters of Function "Sum"
{
    int sum=0;                                                  // Initialising the value of final answer
    {
        sum = i+j;                                              // Giving the algorithm of final answer
    }
    return sum;                                                 // Returning the final answer
}

int main()
{
    int a, b;
    cout<<"Enter the first number: ";
    cin>>a;

    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"The sum of the numbers "<<a<<" and "<<b<<" is "<<Sum(a, b);
}

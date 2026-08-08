// Write a C++ program to swap two numbers using a function swapNumbers(int* a, int* b). You must use pointers (pass by address) to perform the swap.
// Sample — Input: 5 9 ⇒ Output: 9 5

#include<iostream>
using namespace std;

int swap(int *p1, int *p2)
{
    *p1 = (*p1 + *p2) - (*p2 = *p1);
}

int main()
{
    int a, b;
    cin>>a>>b;

    swap(&a, &b);
    cout<<a<<" "<<b;
}
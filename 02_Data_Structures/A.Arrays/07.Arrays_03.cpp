// Given an array, print the product of all elements

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 6};
    int n = ((sizeof(arr) / sizeof(int)));

    int ans = 1;
    for(int i=1; i<n; i++)
    {
        ans *= arr[i];
    }
    cout<<ans;
}
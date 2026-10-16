// Given an array, print the second max of all elements

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {74, 96, 9, 32, -62, 35, 5, 0, 1, -88, 34, 90, 103};
    int n = (sizeof(arr) / sizeof(int));

    int mx1 = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > mx1)
            mx1 = arr[i];
    }

    int mx2 = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if((arr[i] > mx2) && (arr[i] != mx1))
            mx2 = arr[i];
    }
    cout<<"The second largest element in the array is "<<mx2;
}
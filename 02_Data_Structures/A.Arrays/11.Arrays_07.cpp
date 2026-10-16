// Given an array, print the second max of all elements

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {74, 96, 9, 32, -62, 35, 5, 0, 1, -88, 34, 90, 103};
    int n = (sizeof(arr) / sizeof(int));

    int max1, max2;

    if(arr[0] >= arr[1])
    {
        max1 = arr[0];
        max2 = arr[1];
    }

    else
    {
        max1 = arr[1];
        max2 = arr[0];
    }

    for(int i=2; i<n; i++)
    {
        if(arr[i] >= max2)
        {
            if(arr[i] >= max1)
            {
                max2 = max1;
                max1 = arr[i];
            }

            else
            {
                max2 = arr[i];
            }
        }
    }

    cout<<"Second highest number is: "<<max2;
}
// Given an array, print the max of all elements

#include<iostream>
#include<climits>
using namespace std;

int main()
{
        int arr[] = {74, 96, 9, 32, -62, 35, 5, 1, -88, 34, 90, 103};
        int n = ((sizeof(arr) / sizeof(int)));

        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > mx)
                mx = arr[i];
        }
        
        cout<<mx;
}
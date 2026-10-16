// Given an array, print negative elements only

#include<iostream>
using namespace std;

int main()
{
    int arr[9] = {4, 53, -32, -354, 43, -45234, 0, -523, 1000};

    for(int i=0; i<9; i++)
    {
        if(arr[i] < 0)
            cout<<arr[i]<<" ";
    }
}
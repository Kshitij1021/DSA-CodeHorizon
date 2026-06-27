// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;

int main()
{
    int n, m;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
    }

    cout<<"Your array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter the number of which index to be find: ";
    cin>>m;

    for(int i=0; i<n; i++)
    {
        if(m==arr[i])
        {
            cout<<"The index of the number "<<m<<" is "<<i;
            return 0;
        }
    }
    cout<<"This element is not present in the array";
}
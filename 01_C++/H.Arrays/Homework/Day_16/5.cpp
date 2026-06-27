// Find the second largest element in an array of unique elements of size n. Where n>3.

#include<iostream>
using namespace std;

int sec_lar(int arr[], int n)
{
    int largest, sec_large;
    if(arr[0]<arr[1])
    {
        largest=arr[1];
        sec_large=arr[0];
    }
    else
    {
        largest=arr[0];
        sec_large=arr[1];
   }

    for(int i=2; i<n; i++)
    {
        if(arr[i]>largest)
        {
            sec_large=largest;
            largest=arr[i];
        }

        else if(arr[i]>sec_large)
            sec_large=arr[i];
    }
    return sec_large;
}

int main()
{
    int i;
    cout<<"Enter the size of the array: ";
    cin>>i;
    
    int arr[i];
    for(int t=0; t<i; t++)
    {
        cout<<"Enter the number: ";
        cin>>arr[t];
    }

    cout<<endl<<"Your array is: ";
    for(int t=0; t<i; t++)
    {
        cout<<arr[t]<<" ";
    }

    cout<<endl<<"The second largest number in the array is: "<<sec_lar(arr, i);
}
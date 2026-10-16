// For input and output of an array we use loops

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    // Input 

    for(int i=0; i<n; i++)
    {
        cout<<"Enter your "<<i<<" number: ";
        cin>>arr[i];
    }


    // Output

    cout<<"Your array is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
}
// Find the minimum entered value from an array

#include<iostream>
using namespace std;

int main()
{
    int arr[5];                                                             // Declaring the array

    for(int i=0; i<=4; i++)                                                 // Loop for taking input of values of array
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
    }

    cout<<"Your array is: ";                                                // Printing the array
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    
// Finding the minimum number

    int ans=INT16_MAX;      
    for(int i=0; i<=4; i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<"The minimum number in this array is: "<<ans;
}
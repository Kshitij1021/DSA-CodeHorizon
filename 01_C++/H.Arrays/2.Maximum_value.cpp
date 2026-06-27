// Find the maximum entered value from an array

#include<iostream>
using namespace std;

int main()
{
    int arr[5];

    for(int i=0; i<=4; i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
    }

    cout<<"Array = ";
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int ans=INT8_MIN;
    for(int i=0; i<=4; i++)
    {
        if(arr[i]>ans)
            ans=arr[i];
    }

    cout<<"The maximum value is "<<ans;
}


// Calculate the average of elements in an array of size 18.
#include<iostream>
using namespace std;


int main()
{
    int sum=0;
    int arr[18];
    for(int i=0; i<18; i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];

        sum+=arr[i];
    }

    cout<<"The entered array is ";
    for(int i=0; i<18; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"The average of the numbers is "<<sum/18;
}
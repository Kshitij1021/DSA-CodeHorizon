// Take 20 elements from user input and find its sum with the help of an array.

#include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[20];
    int sum=0;

    for(int i=0; i<20; i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<"The entered array is ";
    for(int i=0; i<20; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"The sum all the numbers is "<<sum;
}
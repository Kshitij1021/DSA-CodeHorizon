// You are given an array, check whether the entered integer is present in the array or not

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {74, 96, 9, 32, -62, 35, 5, 1, -88, 34, 90, 103};
    int n = (sizeof(arr) / sizeof(int));

    int num;
    cout<<"Enter the number: ";
    cin>>num;

    bool isPresent = false;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            isPresent = true;
            break;
        }
    }

    if(isPresent == true)
        cout<<"Yes, the number "<<num<<" is present in the array";
    else
        cout<<"No, the number "<<num<<" is not present in the array";
}
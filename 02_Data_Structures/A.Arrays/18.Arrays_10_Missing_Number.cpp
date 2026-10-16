// SFind the missing number in a consecutive entered natural number's array

//  e.g. arr[] = {4, 5, 7, 8, 9}}
//       Output --> The missing number is 6


#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4, 5, 7, 8, 9};
    int size = sizeof(arr) / sizeof(int);

    for(int i=1; i<size; i++)
    {
        if(arr[i] != arr[i-1]+1)
        {
            cout<<"The missing number is "<<arr[i-1] + 1;
            break;
        }
    }
}
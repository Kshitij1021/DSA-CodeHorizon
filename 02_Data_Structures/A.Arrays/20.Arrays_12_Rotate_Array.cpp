// Rotate the given array by 1

//  e.g. arr[] = {1, 2, 4, 6, 8}
//       rotated_arr[] = {8, 1, 2, 4, 6}

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 8, 32, -23};
    int size = sizeof(arr) / sizeof(int);

    cout<<"arr = ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" "; 
    }

    int rotated_arr[size];

    rotated_arr[0] = arr[size-1];

    for(int i=1; i<size; i++)
    {
        rotated_arr[i] = arr[i-1];
    }

    cout<<endl<<"rotated_arr = ";
    for(int i=0; i<size; i++)
    {
        cout<<rotated_arr[i]<<" "; 
    }

    
}
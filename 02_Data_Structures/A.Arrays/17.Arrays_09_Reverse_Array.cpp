// Reverse the given array

// e.g. arr = {-34, -1, 0, 1, 10, 1234, 4545}
//      reversed_array = {4545, 1234, 10, 1, 0, -1, -34}

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {-34, -1, 0, 1, 10, 1234, 4545};
    int size = sizeof(arr) / sizeof(int);

    int reversed_arr[size];

    for(int i=0; i<size; i++)
    {
        reversed_arr[size-i-1] = arr[i];
    }

    cout<<"Initial array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Reversed array: ";
    for(int i=0; i<size; i++)
    {
        cout<<reversed_arr[i]<<" ";
    }
}
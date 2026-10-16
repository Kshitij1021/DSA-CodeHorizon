// Search the entered number in the given array

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {-34, -1, 0, 1, 10, 1234, 4545};
    int size = (sizeof(arr) / sizeof(int));
    int index = -1;
    int num; 
    cout<<"n = ";
    cin>>num;

    for(int i=0; i<size; i++)
    {
        if (num == arr[i])
        {
            index = i;
            break;
        }
    }

    if(index == -1)
    {
        cout<<"The number "<<num<<" is not present in the array";
    }

    else
    {
        cout<<"The number "<<num<<" is present in the array with index number "<<index;
    }
}
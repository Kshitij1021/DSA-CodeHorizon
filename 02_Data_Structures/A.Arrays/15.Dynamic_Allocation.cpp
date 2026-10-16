#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[5];
    arr[0] = 4;
    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }
}   
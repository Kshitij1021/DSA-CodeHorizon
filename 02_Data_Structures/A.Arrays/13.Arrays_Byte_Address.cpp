#include<iostream>
using namespace std;

int main()
{
    int arr[32];
    cout << arr << endl;                      // Gives Byte Address of the array starting point
    cout << &arr[0] << endl;                  // Gives Byte Address of the array's 0 index
    cout << &arr[1] << endl;                  // Gives Byte Address of the array's 1 index
    cout << &arr[5];                          // Gives Byte Address of the array's 5 index
}
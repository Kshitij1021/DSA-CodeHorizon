// The byte address of the array is send as a parameter in a function, it follows pass by reference method

#include<iostream>
using namespace std;

void change(int y[]){                               // taking an array as an argument
    y[0] = -2;                                      
}

int main()
{
    int arr[] = {1, 4, 6};
    change(arr);                                    // Sending the byte address of the array in the change function
    cout << arr[0]; 
}
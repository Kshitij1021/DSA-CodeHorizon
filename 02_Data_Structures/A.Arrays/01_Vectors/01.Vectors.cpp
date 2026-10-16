// Vectors --> Dynamic Array without any fixed size

#include<iostream>

// Header file for the vectors in cpp
#include<vector>

using namespace std;

int main()
{
    vector<int> arr(7);
    // Declaration of a vector of size 7
    // Index --> 0 to 6
    // By default values --> 0

    int n = arr.size();                             // arr.size() --> give the size of the array

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }


    cout<<endl;


    vector<int> arr1(6, 8);
    // Declaration of a vector of size 6
    // Index --> 0 to 5
    // By default values --> 8

    for(int i=0; i<arr1.size(); i++)
    {
        cout<<arr1[i]<<" ";
    }
}
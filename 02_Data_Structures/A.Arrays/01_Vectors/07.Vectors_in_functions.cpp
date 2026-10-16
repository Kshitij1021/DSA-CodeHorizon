//  Passing a vector in a function

//  By Default:
//  Array --> Pass by reference
//  Vector --> Pass by value

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Sorting_value(vector<int> v)                   // Pass by value
{
    sort(v.begin(), v.end());
}

void Sorting_reference(vector<int>& v)              // Pass by reference
{
    sort(v.begin(), v.end());
}

int main()
{
    vector<int> arr = {2, 7, 5, 10, 43, 21, 36, 50};
    
    Sorting_value(arr);
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }

    cout<<endl;

    Sorting_reference(arr);
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}
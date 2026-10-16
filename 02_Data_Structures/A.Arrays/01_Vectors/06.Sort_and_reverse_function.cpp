#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr = {2, 7, 5, 10, 54, 21, 56, 90};
//  After sorting --> {2, 5, 7, 10, 21, 54, 56, 90}

//  Reverse
    reverse(arr.begin(), arr.end());
    for (int ele : arr)
    {
        cout<<ele<<" ";
    }

    cout<<endl;

//  Sorting
    sort(arr.begin(), arr.end());
    for (int ele : arr)
    {
        cout<<ele<<" ";
    }
}
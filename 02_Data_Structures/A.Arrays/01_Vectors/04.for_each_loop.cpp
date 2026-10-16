// easy loop syntax to access the data from a data structure

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 44, 5};
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}
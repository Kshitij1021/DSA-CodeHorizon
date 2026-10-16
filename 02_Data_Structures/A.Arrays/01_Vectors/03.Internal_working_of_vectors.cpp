// The capacity of vectors dynamically doubles every time when capacity = size
// Size --> Depends on the number of elements present in the vector
// Capacity --> Only double when size = initial_capacity

#include<iostream>
#include<vector>
using namespace std;

void size_capacity(vector<int> &arr)
{
    cout<<"Size = "<<arr.size()<<" Capacity = "<<arr.capacity()<<endl;
}

void print_vector(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void fun(vector<int> &arr)
{
    size_capacity(arr);
    print_vector(arr);
}

int main()
{
    vector<int> arr(0);
    fun(arr);
//  arr = []

    arr.push_back(5);
    fun(arr);
//  arr = [5]

    arr.push_back(7);
    fun(arr);
//  arr = [5, 7]

    arr.push_back(8);
    fun(arr);
//  arr = [5, 7, 8, _]

    arr.push_back(10);
    fun(arr);
//  arr = [5, 7, 8, 10]

    arr.push_back(15);
    fun(arr);
//  arr = [5, 7, 8, 10, 15, _, _, _]

    arr.push_back(20);
    fun(arr);
//  arr = [5, 7, 8, 10, 15, 20, _, _]

    arr.pop_back();
//  arr = [5, 7, 8, 10, 15, _, _, _]
    fun(arr);

    arr.pop_back();
    fun(arr);
//  arr = [5, 7, 8, 10, _, _, _, _]

}
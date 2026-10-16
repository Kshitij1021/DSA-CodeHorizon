// In a given vector, Multiply the even numbers by 2 and square the odd numbers

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 3, 5, 10, 54, 21, 56, 90};
    for(int ele : arr)
    {
        if(ele % 2 == 0)
        {
            ele *= 2;
        }

        else
        {
            ele = ele*ele;
        }
        
        cout<<ele<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> & arr){
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> arr(4, 5);
    // Index --> 0 to 3
    
    print_vector(arr);
    
    cout<<endl;
    
// Push Back --> Add the entered number in the last
    arr.push_back(-4);
    // Index --> 0 to 4

    print_vector(arr);

    cout<<endl;

// Pop Back --> Remove the last number 
    arr.pop_back();
    // Index --> 0 to 4

    print_vector(arr);  

}
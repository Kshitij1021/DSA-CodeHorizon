// We can declare different datatype arrays but all the elements of the array must be of same datatype

#include<iostream>
using namespace std;

int main()
{
    // int Array
    int arr1[] = {1, 2, 5, -3, 0, 67};
    cout<<arr1[5]<<endl;


    // float Array
    float arr2[] = {1.5, 53.8, -3.2, 0.1};
    cout<<arr2[2]<<endl;


    // char Array
    char arr3[] = {'A', 'd', ',', '&'};
    cout<<arr3[3]<<endl;

    // long long Array
    long long arr4[] = {11231214232, 2232432232312112, 5437390472343};
    cout<<arr4[2]<<endl;
}

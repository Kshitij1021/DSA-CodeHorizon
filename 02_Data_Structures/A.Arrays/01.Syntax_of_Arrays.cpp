//  An array is declared as:
//  (datatype) name[] = { _, _, _, _, ... }

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 6, 23, 63, 67};
    cout<<arr<<endl;                              // ---> Print the byte address of the address
    cout<<arr[0]<<endl;                           // ---> Print the first element of the array
    cout<<arr[3]<<endl;                           // ---> Prit the fourth element of the array
}
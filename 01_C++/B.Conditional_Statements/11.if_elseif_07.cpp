// Take positive integer input and check whether the number is
// divisible by 5
// divisible by 3 
// divisible by 3 and 5 both
// divisible by 5 or 3

#include<iostream>
using namespace std;

int main()
{
    unsigned int a;
    cout<<"Enter the number: ";
    cin>>a;

//  Checking divisibility by 5
    if(a%5 == 0)
        cout<<"The number "<<a<<" is divisible by 5"<<endl;
    else
        cout<<"The number "<<a<<" is not divisible by 5"<<endl;
    

//  Checking divisibility by 3
    if(a%3 == 0)
        cout<<"The number "<<a<<" is divisible by 3"<<endl;
    else
        cout<<"The number "<<a<<" is not divisible by 3"<<endl;

        
//  Checking divisibility by 3 and 5 both
    if((a%5 == 0) && (a%3 == 0))
        cout<<"The number "<<a<<" is divisible by 3 and 5 both"<<endl;
    else
        cout<<"The number "<<a<<" is not divisible by 3 and 5 both"<<endl;


//  Checking divisibility by 3 or 5
    if((a%5 == 0) || (a%3 == 0))
        cout<<"The number "<<a<<" is divisible by 3 or 5";
    else
        cout<<"The number "<<a<<" is not divisible by 3 or 5";
}
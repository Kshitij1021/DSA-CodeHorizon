#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    if(a < 2){
        cout<<"The number "<<a<<" is not a Prime Number";
        return 0;
    }
    else{
        for(int i=2; i<a; i++)
        {
            if(a%i == 0){
                cout<<"The number "<<a<<" is not a Prime Number"; 
                return 0;
            }
        }
    }
    cout<<"The number "<<a<<" is a Prime Number";
}
// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;
    cout<<"The numbers divisible by 4 are: ";

    for(int i=1; i<=a; i++)
    {
        if(i%4 == 0)
        {
            cout<<i<<endl;                  // no need to write else statement, is condition = False, the code simply return to loop 
        }                                                
    }
}
// Print 1 to n natural numbers leaving the factors of asked number

#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the last number: ";
    cin>>a;
    cout<<"Enter the number of which factors not to be print: ";
    cin>>b;

    int i=0;
    do{
        i++;
        if(i%b==0)                          // If condition satisfy code written below in the loop will not debug for that value of "i"
        continue;                           
        
        cout<<i<<" ";   
    }while(i<=a);
}



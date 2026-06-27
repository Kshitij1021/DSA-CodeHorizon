// Print 1 to n natural number and break the loop for entered value

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the last number: ";
    cin>>a;

    for(int i=1; i<=10; i++)
    {
        if(i==a)                            // If condition satisfies, not more loop continue after that value
        {
            break;
        }
        cout<<i<<" ";
    }
}